/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/SyslogConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

SyslogConfiguration::SyslogConfiguration(JsonView jsonValue) { *this = jsonValue; }

SyslogConfiguration& SyslogConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logGroupArn")) {
    m_logGroupArn = jsonValue.GetString("logGroupArn");
    m_logGroupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceType")) {
    m_sourceType = SyslogSourceTypeMapper::GetSyslogSourceTypeForName(jsonValue.GetString("sourceType"));
    m_sourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcEndpointId")) {
    m_vpcEndpointId = jsonValue.GetString("vpcEndpointId");
    m_vpcEndpointIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetInt64("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue SyslogConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_logGroupArnHasBeenSet) {
    payload.WithString("logGroupArn", m_logGroupArn);
  }

  if (m_sourceTypeHasBeenSet) {
    payload.WithString("sourceType", SyslogSourceTypeMapper::GetNameForSyslogSourceType(m_sourceType));
  }

  if (m_vpcEndpointIdHasBeenSet) {
    payload.WithString("vpcEndpointId", m_vpcEndpointId);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithInt64("createdAt", m_createdAt);
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
