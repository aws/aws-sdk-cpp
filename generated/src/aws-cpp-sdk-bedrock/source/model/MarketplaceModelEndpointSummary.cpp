/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/MarketplaceModelEndpointSummary.h>
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

MarketplaceModelEndpointSummary::MarketplaceModelEndpointSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

MarketplaceModelEndpointSummary& MarketplaceModelEndpointSummary::operator =(JsonView jsonValue)
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
  return *this;
}

JsonValue MarketplaceModelEndpointSummary::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
