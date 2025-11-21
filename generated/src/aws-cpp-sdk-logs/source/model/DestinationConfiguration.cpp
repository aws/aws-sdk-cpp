/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/DestinationConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

DestinationConfiguration::DestinationConfiguration(JsonView jsonValue) { *this = jsonValue; }

DestinationConfiguration& DestinationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3Configuration")) {
    m_s3Configuration = jsonValue.GetObject("s3Configuration");
    m_s3ConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DestinationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_s3ConfigurationHasBeenSet) {
    payload.WithObject("s3Configuration", m_s3Configuration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
