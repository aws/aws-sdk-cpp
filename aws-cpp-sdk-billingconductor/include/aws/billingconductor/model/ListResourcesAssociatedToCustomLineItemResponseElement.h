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
    AWS_BILLINGCONDUCTOR_API ListResourcesAssociatedToCustomLineItemResponseElement();
    AWS_BILLINGCONDUCTOR_API ListResourcesAssociatedToCustomLineItemResponseElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListResourcesAssociatedToCustomLineItemResponseElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ARN of the associated resource. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The ARN of the associated resource. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The ARN of the associated resource. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The ARN of the associated resource. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The ARN of the associated resource. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The ARN of the associated resource. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemResponseElement& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The ARN of the associated resource. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemResponseElement& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the associated resource. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemResponseElement& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline ListResourcesAssociatedToCustomLineItemResponseElement& WithRelationship(const CustomLineItemRelationship& value) { SetRelationship(value); return *this;}

    /**
     * <p> The type of relationship between the custom line item and the associated
     * resource. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemResponseElement& WithRelationship(CustomLineItemRelationship&& value) { SetRelationship(std::move(value)); return *this;}


    /**
     * <p>The end billing period of the associated resource.</p>
     */
    inline const Aws::String& GetEndBillingPeriod() const{ return m_endBillingPeriod; }

    /**
     * <p>The end billing period of the associated resource.</p>
     */
    inline bool EndBillingPeriodHasBeenSet() const { return m_endBillingPeriodHasBeenSet; }

    /**
     * <p>The end billing period of the associated resource.</p>
     */
    inline void SetEndBillingPeriod(const Aws::String& value) { m_endBillingPeriodHasBeenSet = true; m_endBillingPeriod = value; }

    /**
     * <p>The end billing period of the associated resource.</p>
     */
    inline void SetEndBillingPeriod(Aws::String&& value) { m_endBillingPeriodHasBeenSet = true; m_endBillingPeriod = std::move(value); }

    /**
     * <p>The end billing period of the associated resource.</p>
     */
    inline void SetEndBillingPeriod(const char* value) { m_endBillingPeriodHasBeenSet = true; m_endBillingPeriod.assign(value); }

    /**
     * <p>The end billing period of the associated resource.</p>
     */
    inline ListResourcesAssociatedToCustomLineItemResponseElement& WithEndBillingPeriod(const Aws::String& value) { SetEndBillingPeriod(value); return *this;}

    /**
     * <p>The end billing period of the associated resource.</p>
     */
    inline ListResourcesAssociatedToCustomLineItemResponseElement& WithEndBillingPeriod(Aws::String&& value) { SetEndBillingPeriod(std::move(value)); return *this;}

    /**
     * <p>The end billing period of the associated resource.</p>
     */
    inline ListResourcesAssociatedToCustomLineItemResponseElement& WithEndBillingPeriod(const char* value) { SetEndBillingPeriod(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    CustomLineItemRelationship m_relationship;
    bool m_relationshipHasBeenSet = false;

    Aws::String m_endBillingPeriod;
    bool m_endBillingPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
