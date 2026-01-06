/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/emr-serverless/model/DiskEncryptionConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMRServerless {
namespace Model {

DiskEncryptionConfiguration::DiskEncryptionConfiguration(JsonView jsonValue) { *this = jsonValue; }

DiskEncryptionConfiguration& DiskEncryptionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("encryptionContext")) {
    Aws::Map<Aws::String, JsonView> encryptionContextJsonMap = jsonValue.GetObject("encryptionContext").GetAllObjects();
    for (auto& encryptionContextItem : encryptionContextJsonMap) {
      m_encryptionContext[encryptionContextItem.first] = encryptionContextItem.second.AsString();
    }
    m_encryptionContextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionKeyArn")) {
    m_encryptionKeyArn = jsonValue.GetString("encryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue DiskEncryptionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_encryptionContextHasBeenSet) {
    JsonValue encryptionContextJsonMap;
    for (auto& encryptionContextItem : m_encryptionContext) {
      encryptionContextJsonMap.WithString(encryptionContextItem.first, encryptionContextItem.second);
    }
    payload.WithObject("encryptionContext", std::move(encryptionContextJsonMap));
  }

  if (m_encryptionKeyArnHasBeenSet) {
    payload.WithString("encryptionKeyArn", m_encryptionKeyArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace EMRServerless
}  // namespace Aws
