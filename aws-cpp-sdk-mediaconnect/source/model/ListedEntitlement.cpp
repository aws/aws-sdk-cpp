/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mediaconnect/model/ListedEntitlement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

ListedEntitlement::ListedEntitlement() : 
    m_dataTransferSubscriberFeePercent(0),
    m_dataTransferSubscriberFeePercentHasBeenSet(false),
    m_entitlementArnHasBeenSet(false),
    m_entitlementNameHasBeenSet(false)
{
}

ListedEntitlement::ListedEntitlement(JsonView jsonValue) : 
    m_dataTransferSubscriberFeePercent(0),
    m_dataTransferSubscriberFeePercentHasBeenSet(false),
    m_entitlementArnHasBeenSet(false),
    m_entitlementNameHasBeenSet(false)
{
  *this = jsonValue;
}

ListedEntitlement& ListedEntitlement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataTransferSubscriberFeePercent"))
  {
    m_dataTransferSubscriberFeePercent = jsonValue.GetInteger("dataTransferSubscriberFeePercent");

    m_dataTransferSubscriberFeePercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entitlementArn"))
  {
    m_entitlementArn = jsonValue.GetString("entitlementArn");

    m_entitlementArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entitlementName"))
  {
    m_entitlementName = jsonValue.GetString("entitlementName");

    m_entitlementNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ListedEntitlement::Jsonize() const
{
  JsonValue payload;

  if(m_dataTransferSubscriberFeePercentHasBeenSet)
  {
   payload.WithInteger("dataTransferSubscriberFeePercent", m_dataTransferSubscriberFeePercent);

  }

  if(m_entitlementArnHasBeenSet)
  {
   payload.WithString("entitlementArn", m_entitlementArn);

  }

  if(m_entitlementNameHasBeenSet)
  {
   payload.WithString("entitlementName", m_entitlementName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
