/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/OpenSearchApplication.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

OpenSearchApplication::OpenSearchApplication(JsonView jsonValue)
{
  *this = jsonValue;
}

OpenSearchApplication& OpenSearchApplication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationEndpoint"))
  {
    m_applicationEndpoint = jsonValue.GetString("applicationEndpoint");
    m_applicationEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applicationArn"))
  {
    m_applicationArn = jsonValue.GetString("applicationArn");
    m_applicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenSearchApplication::Jsonize() const
{
  JsonValue payload;

  if(m_applicationEndpointHasBeenSet)
  {
   payload.WithString("applicationEndpoint", m_applicationEndpoint);

  }

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("applicationArn", m_applicationArn);

  }

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
