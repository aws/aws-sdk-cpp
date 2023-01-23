/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class DescribeCostCategoryDefinitionRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API DescribeCostCategoryDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCostCategoryDefinition"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline const Aws::String& GetCostCategoryArn() const{ return m_costCategoryArn; }

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline bool CostCategoryArnHasBeenSet() const { return m_costCategoryArnHasBeenSet; }

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline void SetCostCategoryArn(const Aws::String& value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn = value; }

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline void SetCostCategoryArn(Aws::String&& value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn = std::move(value); }

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline void SetCostCategoryArn(const char* value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn.assign(value); }

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline DescribeCostCategoryDefinitionRequest& WithCostCategoryArn(const Aws::String& value) { SetCostCategoryArn(value); return *this;}

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline DescribeCostCategoryDefinitionRequest& WithCostCategoryArn(Aws::String&& value) { SetCostCategoryArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline DescribeCostCategoryDefinitionRequest& WithCostCategoryArn(const char* value) { SetCostCategoryArn(value); return *this;}


    /**
     * <p>The date when the Cost Category was effective. </p>
     */
    inline const Aws::String& GetEffectiveOn() const{ return m_effectiveOn; }

    /**
     * <p>The date when the Cost Category was effective. </p>
     */
    inline bool EffectiveOnHasBeenSet() const { return m_effectiveOnHasBeenSet; }

    /**
     * <p>The date when the Cost Category was effective. </p>
     */
    inline void SetEffectiveOn(const Aws::String& value) { m_effectiveOnHasBeenSet = true; m_effectiveOn = value; }

    /**
     * <p>The date when the Cost Category was effective. </p>
     */
    inline void SetEffectiveOn(Aws::String&& value) { m_effectiveOnHasBeenSet = true; m_effectiveOn = std::move(value); }

    /**
     * <p>The date when the Cost Category was effective. </p>
     */
    inline void SetEffectiveOn(const char* value) { m_effectiveOnHasBeenSet = true; m_effectiveOn.assign(value); }

    /**
     * <p>The date when the Cost Category was effective. </p>
     */
    inline DescribeCostCategoryDefinitionRequest& WithEffectiveOn(const Aws::String& value) { SetEffectiveOn(value); return *this;}

    /**
     * <p>The date when the Cost Category was effective. </p>
     */
    inline DescribeCostCategoryDefinitionRequest& WithEffectiveOn(Aws::String&& value) { SetEffectiveOn(std::move(value)); return *this;}

    /**
     * <p>The date when the Cost Category was effective. </p>
     */
    inline DescribeCostCategoryDefinitionRequest& WithEffectiveOn(const char* value) { SetEffectiveOn(value); return *this;}

  private:

    Aws::String m_costCategoryArn;
    bool m_costCategoryArnHasBeenSet = false;

    Aws::String m_effectiveOn;
    bool m_effectiveOnHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
