/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscribedAsset.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

SubscribedAsset::SubscribedAsset() : 
    m_assetIdHasBeenSet(false),
    m_assetRevisionHasBeenSet(false),
    m_failureCauseHasBeenSet(false),
    m_failureTimestampHasBeenSet(false),
    m_grantedTimestampHasBeenSet(false),
    m_status(SubscriptionGrantStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetNameHasBeenSet(false)
{
}

SubscribedAsset::SubscribedAsset(JsonView jsonValue) : 
    m_assetIdHasBeenSet(false),
    m_assetRevisionHasBeenSet(false),
    m_failureCauseHasBeenSet(false),
    m_failureTimestampHasBeenSet(false),
    m_grantedTimestampHasBeenSet(false),
    m_status(SubscriptionGrantStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetNameHasBeenSet(false)
{
  *this = jsonValue;
}

SubscribedAsset& SubscribedAsset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetId"))
  {
    m_assetId = jsonValue.GetString("assetId");

    m_assetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assetRevision"))
  {
    m_assetRevision = jsonValue.GetString("assetRevision");

    m_assetRevisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureCause"))
  {
    m_failureCause = jsonValue.GetObject("failureCause");

    m_failureCauseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureTimestamp"))
  {
    m_failureTimestamp = jsonValue.GetDouble("failureTimestamp");

    m_failureTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("grantedTimestamp"))
  {
    m_grantedTimestamp = jsonValue.GetDouble("grantedTimestamp");

    m_grantedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SubscriptionGrantStatusMapper::GetSubscriptionGrantStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetName"))
  {
    m_targetName = jsonValue.GetString("targetName");

    m_targetNameHasBeenSet = true;
  }

  return *this;
}

JsonValue SubscribedAsset::Jsonize() const
{
  JsonValue payload;

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("assetId", m_assetId);

  }

  if(m_assetRevisionHasBeenSet)
  {
   payload.WithString("assetRevision", m_assetRevision);

  }

  if(m_failureCauseHasBeenSet)
  {
   payload.WithObject("failureCause", m_failureCause.Jsonize());

  }

  if(m_failureTimestampHasBeenSet)
  {
   payload.WithDouble("failureTimestamp", m_failureTimestamp.SecondsWithMSPrecision());
  }

  if(m_grantedTimestampHasBeenSet)
  {
   payload.WithDouble("grantedTimestamp", m_grantedTimestamp.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SubscriptionGrantStatusMapper::GetNameForSubscriptionGrantStatus(m_status));
  }

  if(m_targetNameHasBeenSet)
  {
   payload.WithString("targetName", m_targetName);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
