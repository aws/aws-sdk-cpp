/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> A representation of a resource association for a custom line item.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListResourcesAssociatedToCustomLineItemResponseElement">AWS
   * API Reference</a></p>
   */
  class ListResourcesAssociatedToCustomLineItemResponseElement
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListResourcesAssociatedToCustomLineItemResponseElement() = default;
    AWS_BILLINGCONDUCTOR_API ListResourcesAssociatedToCustomLineItemResponseElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListResourcesAssociatedToCustomLineItemResponseElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ARN of the associated resource. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListResourcesAssociatedToCustomLineItemResponseElement& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of relationship between the custom line item and the associated
     * resource. </p>
     */
    inline CustomLineItemRelationship GetRelationship() const { return m_relationship; }
    inline bool RelationshipHasBeenSet() const { return m_relationshipHasBeenSet; }
    inline void SetRelationship(CustomLineItemRelationship value) { m_relationshipHasBeenSet = true; m_relationship = value; }
    inline ListResourcesAssociatedToCustomLineItemResponseElement& WithRelationship(CustomLineItemRelationship value) { SetRelationship(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end billing period of the associated resource.</p>
     */
    inline const Aws::String& GetEndBillingPeriod() const { return m_endBillingPeriod; }
    inline bool EndBillingPeriodHasBeenSet() const { return m_endBillingPeriodHasBeenSet; }
    template<typename EndBillingPeriodT = Aws::String>
    void SetEndBillingPeriod(EndBillingPeriodT&& value) { m_endBillingPeriodHasBeenSet = true; m_endBillingPeriod = std::forward<EndBillingPeriodT>(value); }
    template<typename EndBillingPeriodT = Aws::String>
    ListResourcesAssociatedToCustomLineItemResponseElement& WithEndBillingPeriod(EndBillingPeriodT&& value) { SetEndBillingPeriod(std::forward<EndBillingPeriodT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    CustomLineItemRelationship m_relationship{CustomLineItemRelationship::NOT_SET};
    bool m_relationshipHasBeenSet = false;

    Aws::String m_endBillingPeriod;
    bool m_endBillingPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
