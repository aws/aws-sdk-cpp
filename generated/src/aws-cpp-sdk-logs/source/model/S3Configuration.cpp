/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/S3Configuration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

S3Configuration::S3Configuration(JsonView jsonValue) { *this = jsonValue; }

S3Configuration& S3Configuration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinationIdentifier")) {
    m_destinationIdentifier = jsonValue.GetString("destinationIdentifier");
    m_destinationIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue S3Configuration::Jsonize() const {
  JsonValue payload;

  if (m_destinationIdentifierHasBeenSet) {
    payload.WithString("destinationIdentifier", m_destinationIdentifier);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
