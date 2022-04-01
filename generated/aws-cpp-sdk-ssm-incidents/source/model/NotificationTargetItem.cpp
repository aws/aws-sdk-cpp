/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/NotificationTargetItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

NotificationTargetItem::NotificationTargetItem() : 
    m_snsTopicArnHasBeenSet(false)
{
}

NotificationTargetItem::NotificationTargetItem(JsonView jsonValue) : 
    m_snsTopicArnHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationTargetItem& NotificationTargetItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("snsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("snsTopicArn");

    m_snsTopicArnHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationTargetItem::Jsonize() const
{
  JsonValue payload;

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("snsTopicArn", m_snsTopicArn);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
