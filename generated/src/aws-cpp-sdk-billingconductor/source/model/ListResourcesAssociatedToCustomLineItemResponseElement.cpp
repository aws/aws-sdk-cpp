/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListResourcesAssociatedToCustomLineItemResponseElement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

ListResourcesAssociatedToCustomLineItemResponseElement::ListResourcesAssociatedToCustomLineItemResponseElement() : 
    m_arnHasBeenSet(false),
    m_relationship(CustomLineItemRelationship::NOT_SET),
    m_relationshipHasBeenSet(false),
    m_endBillingPeriodHasBeenSet(false)
{
}

ListResourcesAssociatedToCustomLineItemResponseElement::ListResourcesAssociatedToCustomLineItemResponseElement(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_relationship(CustomLineItemRelationship::NOT_SET),
    m_relationshipHasBeenSet(false),
    m_endBillingPeriodHasBeenSet(false)
{
  *this = jsonValue;
}

ListResourcesAssociatedToCustomLineItemResponseElement& ListResourcesAssociatedToCustomLineItemResponseElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Relationship"))
  {
    m_relationship = CustomLineItemRelationshipMapper::GetCustomLineItemRelationshipForName(jsonValue.GetString("Relationship"));

    m_relationshipHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndBillingPeriod"))
  {
    m_endBillingPeriod = jsonValue.GetString("EndBillingPeriod");

    m_endBillingPeriodHasBeenSet = true;
  }

  return *this;
}

JsonValue ListResourcesAssociatedToCustomLineItemResponseElement::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_relationshipHasBeenSet)
  {
   payload.WithString("Relationship", CustomLineItemRelationshipMapper::GetNameForCustomLineItemRelationship(m_relationship));
  }

  if(m_endBillingPeriodHasBeenSet)
  {
   payload.WithString("EndBillingPeriod", m_endBillingPeriod);

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
