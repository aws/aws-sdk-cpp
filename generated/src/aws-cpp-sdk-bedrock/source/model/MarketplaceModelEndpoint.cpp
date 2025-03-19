/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/MarketplaceModelEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

MarketplaceModelEndpoint::MarketplaceModelEndpoint(JsonView jsonValue)
{
  *this = jsonValue;
}

MarketplaceModelEndpoint& MarketplaceModelEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endpointArn"))
  {
    m_endpointArn = jsonValue.GetString("endpointArn");
    m_endpointArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelSourceIdentifier"))
  {
    m_modelSourceIdentifier = jsonValue.GetString("modelSourceIdentifier");
    m_modelSourceIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endpointConfig"))
  {
    m_endpointConfig = jsonValue.GetObject("endpointConfig");
    m_endpointConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endpointStatus"))
  {
    m_endpointStatus = jsonValue.GetString("endpointStatus");
    m_endpointStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endpointStatusMessage"))
  {
    m_endpointStatusMessage = jsonValue.GetString("endpointStatusMessage");
    m_endpointStatusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue MarketplaceModelEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_endpointArnHasBeenSet)
  {
   payload.WithString("endpointArn", m_endpointArn);

  }

  if(m_modelSourceIdentifierHasBeenSet)
  {
   payload.WithString("modelSourceIdentifier", m_modelSourceIdentifier);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endpointConfigHasBeenSet)
  {
   payload.WithObject("endpointConfig", m_endpointConfig.Jsonize());

  }

  if(m_endpointStatusHasBeenSet)
  {
   payload.WithString("endpointStatus", m_endpointStatus);

  }

  if(m_endpointStatusMessageHasBeenSet)
  {
   payload.WithString("endpointStatusMessage", m_endpointStatusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
