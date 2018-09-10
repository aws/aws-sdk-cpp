﻿/*
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

#include <aws/cognito-idp/model/MFAOptionType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

MFAOptionType::MFAOptionType() : 
    m_deliveryMedium(DeliveryMediumType::NOT_SET),
    m_deliveryMediumHasBeenSet(false),
    m_attributeNameHasBeenSet(false)
{
}

MFAOptionType::MFAOptionType(JsonView jsonValue) : 
    m_deliveryMedium(DeliveryMediumType::NOT_SET),
    m_deliveryMediumHasBeenSet(false),
    m_attributeNameHasBeenSet(false)
{
  *this = jsonValue;
}

MFAOptionType& MFAOptionType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeliveryMedium"))
  {
    m_deliveryMedium = DeliveryMediumTypeMapper::GetDeliveryMediumTypeForName(jsonValue.GetString("DeliveryMedium"));

    m_deliveryMediumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue MFAOptionType::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryMediumHasBeenSet)
  {
   payload.WithString("DeliveryMedium", DeliveryMediumTypeMapper::GetNameForDeliveryMediumType(m_deliveryMedium));
  }

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
