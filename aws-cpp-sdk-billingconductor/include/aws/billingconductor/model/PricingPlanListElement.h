/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A representation of a pricing plan. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/PricingPlanListElement">AWS
   * API Reference</a></p>
   */
  class PricingPlanListElement
  {
  public:
    AWS_BILLINGCONDUCTOR_API PricingPlanListElement();
    AWS_BILLINGCONDUCTOR_API PricingPlanListElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API PricingPlanListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a pricing plan. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a pricing plan. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a pricing plan. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a pricing plan. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a pricing plan. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a pricing plan. </p>
     */
    inline PricingPlanListElement& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a pricing plan. </p>
     */
    inline PricingPlanListElement& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a pricing plan. </p>
     */
    inline PricingPlanListElement& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The pricing plan Amazon Resource Names (ARN). This can be used to uniquely
     * identify a pricing plan. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The pricing plan Amazon Resource Names (ARN). This can be used to uniquely
     * identify a pricing plan. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The pricing plan Amazon Resource Names (ARN). This can be used to uniquely
     * identify a pricing plan. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The pricing plan Amazon Resource Names (ARN). This can be used to uniquely
     * identify a pricing plan. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The pricing plan Amazon Resource Names (ARN). This can be used to uniquely
     * identify a pricing plan. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The pricing plan Amazon Resource Names (ARN). This can be used to uniquely
     * identify a pricing plan. </p>
     */
    inline PricingPlanListElement& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The pricing plan Amazon Resource Names (ARN). This can be used to uniquely
     * identify a pricing plan. </p>
     */
    inline PricingPlanListElement& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The pricing plan Amazon Resource Names (ARN). This can be used to uniquely
     * identify a pricing plan. </p>
     */
    inline PricingPlanListElement& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The pricing plan description. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The pricing plan description. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The pricing plan description. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The pricing plan description. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The pricing plan description. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The pricing plan description. </p>
     */
    inline PricingPlanListElement& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The pricing plan description. </p>
     */
    inline PricingPlanListElement& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The pricing plan description. </p>
     */
    inline PricingPlanListElement& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The pricing rules count that's currently associated with this pricing plan
     * list element. </p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p> The pricing rules count that's currently associated with this pricing plan
     * list element. </p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p> The pricing rules count that's currently associated with this pricing plan
     * list element. </p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p> The pricing rules count that's currently associated with this pricing plan
     * list element. </p>
     */
    inline PricingPlanListElement& WithSize(long long value) { SetSize(value); return *this;}


    /**
     * <p> The time when the pricing plan was created. </p>
     */
    inline long long GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The time when the pricing plan was created. </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p> The time when the pricing plan was created. </p>
     */
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p> The time when the pricing plan was created. </p>
     */
    inline PricingPlanListElement& WithCreationTime(long long value) { SetCreationTime(value); return *this;}


    /**
     * <p> The most recent time when the pricing plan was modified. </p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p> The most recent time when the pricing plan was modified. </p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p> The most recent time when the pricing plan was modified. </p>
     */
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p> The most recent time when the pricing plan was modified. </p>
     */
    inline PricingPlanListElement& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    long long m_size;
    bool m_sizeHasBeenSet = false;

    long long m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    long long m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
