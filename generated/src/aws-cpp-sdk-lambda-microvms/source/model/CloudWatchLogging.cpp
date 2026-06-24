/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/CloudWatchLogging.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

CloudWatchLogging::CloudWatchLogging(JsonView jsonValue) { *this = jsonValue; }

CloudWatchLogging& CloudWatchLogging::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logGroup")) {
    m_logGroup = jsonValue.GetString("logGroup");
    m_logGroupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logStream")) {
    m_logStream = jsonValue.GetString("logStream");
    m_logStreamHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudWatchLogging::Jsonize() const {
  JsonValue payload;

  if (m_logGroupHasBeenSet) {
    payload.WithString("logGroup", m_logGroup);
  }

  if (m_logStreamHasBeenSet) {
    payload.WithString("logStream", m_logStream);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
