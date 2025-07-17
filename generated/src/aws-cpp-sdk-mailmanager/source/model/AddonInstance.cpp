/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/AddonInstance.h>
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

AddonInstance::AddonInstance(JsonView jsonValue)
{
  *this = jsonValue;
}

AddonInstance& AddonInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddonInstanceId"))
  {
    m_addonInstanceId = jsonValue.GetString("AddonInstanceId");
    m_addonInstanceIdHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("AddonInstanceArn"))
  {
    m_addonInstanceArn = jsonValue.GetString("AddonInstanceArn");
    m_addonInstanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue AddonInstance::Jsonize() const
{
  JsonValue payload;

  if(m_addonInstanceIdHasBeenSet)
  {
   payload.WithString("AddonInstanceId", m_addonInstanceId);

  }

  if(m_addonSubscriptionIdHasBeenSet)
  {
   payload.WithString("AddonSubscriptionId", m_addonSubscriptionId);

  }

  if(m_addonNameHasBeenSet)
  {
   payload.WithString("AddonName", m_addonName);

  }

  if(m_addonInstanceArnHasBeenSet)
  {
   payload.WithString("AddonInstanceArn", m_addonInstanceArn);

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
