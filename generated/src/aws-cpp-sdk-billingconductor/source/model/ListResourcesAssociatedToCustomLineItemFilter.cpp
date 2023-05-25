/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListResourcesAssociatedToCustomLineItemFilter.h>
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

ListResourcesAssociatedToCustomLineItemFilter::ListResourcesAssociatedToCustomLineItemFilter() : 
    m_relationship(CustomLineItemRelationship::NOT_SET),
    m_relationshipHasBeenSet(false)
{
}

ListResourcesAssociatedToCustomLineItemFilter::ListResourcesAssociatedToCustomLineItemFilter(JsonView jsonValue) : 
    m_relationship(CustomLineItemRelationship::NOT_SET),
    m_relationshipHasBeenSet(false)
{
  *this = jsonValue;
}

ListResourcesAssociatedToCustomLineItemFilter& ListResourcesAssociatedToCustomLineItemFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Relationship"))
  {
    m_relationship = CustomLineItemRelationshipMapper::GetCustomLineItemRelationshipForName(jsonValue.GetString("Relationship"));

    m_relationshipHasBeenSet = true;
  }

  return *this;
}

JsonValue ListResourcesAssociatedToCustomLineItemFilter::Jsonize() const
{
  JsonValue payload;

  if(m_relationshipHasBeenSet)
  {
   payload.WithString("Relationship", CustomLineItemRelationshipMapper::GetNameForCustomLineItemRelationship(m_relationship));
  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
