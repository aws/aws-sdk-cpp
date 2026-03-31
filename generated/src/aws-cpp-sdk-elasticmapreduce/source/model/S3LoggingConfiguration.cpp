/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/model/S3LoggingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMR {
namespace Model {

S3LoggingConfiguration::S3LoggingConfiguration(JsonView jsonValue) { *this = jsonValue; }

S3LoggingConfiguration& S3LoggingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LogTypeUploadPolicy")) {
    Aws::Map<Aws::String, JsonView> logTypeUploadPolicyJsonMap = jsonValue.GetObject("LogTypeUploadPolicy").GetAllObjects();
    for (auto& logTypeUploadPolicyItem : logTypeUploadPolicyJsonMap) {
      m_logTypeUploadPolicy[LogTypeMapper::GetLogTypeForName(logTypeUploadPolicyItem.first)] =
          LogUploadPolicyValueMapper::GetLogUploadPolicyValueForName(logTypeUploadPolicyItem.second.AsString());
    }
    m_logTypeUploadPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue S3LoggingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_logTypeUploadPolicyHasBeenSet) {
    JsonValue logTypeUploadPolicyJsonMap;
    for (auto& logTypeUploadPolicyItem : m_logTypeUploadPolicy) {
      logTypeUploadPolicyJsonMap.WithString(LogTypeMapper::GetNameForLogType(logTypeUploadPolicyItem.first),
                                            LogUploadPolicyValueMapper::GetNameForLogUploadPolicyValue(logTypeUploadPolicyItem.second));
    }
    payload.WithObject("LogTypeUploadPolicy", std::move(logTypeUploadPolicyJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
