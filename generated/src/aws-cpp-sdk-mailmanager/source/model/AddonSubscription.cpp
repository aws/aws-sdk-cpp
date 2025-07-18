/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/AddonSubscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

AddonSubscription::AddonSubscription(JsonView jsonValue)
{
  *this = jsonValue;
}

AddonSubscription& AddonSubscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddonSubscriptionId"))
  {
    m_addonSubscriptionId = jsonValue.GetString("AddonSubscriptionId");
    m_addonSubscriptionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AddonName"))
  {
    m_addonName = jsonValue.GetString("AddonName");
    m_addonNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AddonSubscriptionArn"))
  {
    m_addonSubscriptionArn = jsonValue.GetString("AddonSubscriptionArn");
    m_addonSubscriptionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue AddonSubscription::Jsonize() const
{
  JsonValue payload;

  if(m_addonSubscriptionIdHasBeenSet)
  {
   payload.WithString("AddonSubscriptionId", m_addonSubscriptionId);

  }

  if(m_addonNameHasBeenSet)
  {
   payload.WithString("AddonName", m_addonName);

  }

  if(m_addonSubscriptionArnHasBeenSet)
  {
   payload.WithString("AddonSubscriptionArn", m_addonSubscriptionArn);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
