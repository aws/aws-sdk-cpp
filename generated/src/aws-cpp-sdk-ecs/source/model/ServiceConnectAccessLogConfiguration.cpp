/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/ServiceConnectAccessLogConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

ServiceConnectAccessLogConfiguration::ServiceConnectAccessLogConfiguration(JsonView jsonValue) { *this = jsonValue; }

ServiceConnectAccessLogConfiguration& ServiceConnectAccessLogConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("format")) {
    m_format = ServiceConnectAccessLoggingFormatMapper::GetServiceConnectAccessLoggingFormatForName(jsonValue.GetString("format"));
    m_formatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("includeQueryParameters")) {
    m_includeQueryParameters = ServiceConnectIncludeQueryParametersMapper::GetServiceConnectIncludeQueryParametersForName(
        jsonValue.GetString("includeQueryParameters"));
    m_includeQueryParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceConnectAccessLogConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_formatHasBeenSet) {
    payload.WithString("format", ServiceConnectAccessLoggingFormatMapper::GetNameForServiceConnectAccessLoggingFormat(m_format));
  }

  if (m_includeQueryParametersHasBeenSet) {
    payload.WithString("includeQueryParameters", ServiceConnectIncludeQueryParametersMapper::GetNameForServiceConnectIncludeQueryParameters(
                                                     m_includeQueryParameters));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
