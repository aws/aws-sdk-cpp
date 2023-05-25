/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/CodeDeliveryDetailsType.h>
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

CodeDeliveryDetailsType::CodeDeliveryDetailsType() : 
    m_destinationHasBeenSet(false),
    m_deliveryMedium(DeliveryMediumType::NOT_SET),
    m_deliveryMediumHasBeenSet(false),
    m_attributeNameHasBeenSet(false)
{
}

CodeDeliveryDetailsType::CodeDeliveryDetailsType(JsonView jsonValue) : 
    m_destinationHasBeenSet(false),
    m_deliveryMedium(DeliveryMediumType::NOT_SET),
    m_deliveryMediumHasBeenSet(false),
    m_attributeNameHasBeenSet(false)
{
  *this = jsonValue;
}

CodeDeliveryDetailsType& CodeDeliveryDetailsType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetString("Destination");

    m_destinationHasBeenSet = true;
  }

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

JsonValue CodeDeliveryDetailsType::Jsonize() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithString("Destination", m_destination);

  }

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
