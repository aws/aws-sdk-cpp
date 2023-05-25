/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/CustomLineItemRelationship.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BillingConductor
{
namespace Model
{

  /**
   * <p> A filter that specifies the type of resource associations that should be
   * retrieved for a custom line item. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListResourcesAssociatedToCustomLineItemFilter">AWS
   * API Reference</a></p>
   */
  class ListResourcesAssociatedToCustomLineItemFilter
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListResourcesAssociatedToCustomLineItemFilter();
    AWS_BILLINGCONDUCTOR_API ListResourcesAssociatedToCustomLineItemFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListResourcesAssociatedToCustomLineItemFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The type of relationship between the custom line item and the associated
     * resource. </p>
     */
    inline const CustomLineItemRelationship& GetRelationship() const{ return m_relationship; }

    /**
     * <p> The type of relationship between the custom line item and the associated
     * resource. </p>
     */
    inline bool RelationshipHasBeenSet() const { return m_relationshipHasBeenSet; }

    /**
     * <p> The type of relationship between the custom line item and the associated
     * resource. </p>
     */
    inline void SetRelationship(const CustomLineItemRelationship& value) { m_relationshipHasBeenSet = true; m_relationship = value; }

    /**
     * <p> The type of relationship between the custom line item and the associated
     * resource. </p>
     */
    inline void SetRelationship(CustomLineItemRelationship&& value) { m_relationshipHasBeenSet = true; m_relationship = std::move(value); }

    /**
     * <p> The type of relationship between the custom line item and the associated
     * resource. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemFilter& WithRelationship(const CustomLineItemRelationship& value) { SetRelationship(value); return *this;}

    /**
     * <p> The type of relationship between the custom line item and the associated
     * resource. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemFilter& WithRelationship(CustomLineItemRelationship&& value) { SetRelationship(std::move(value)); return *this;}

  private:

    CustomLineItemRelationship m_relationship;
    bool m_relationshipHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
