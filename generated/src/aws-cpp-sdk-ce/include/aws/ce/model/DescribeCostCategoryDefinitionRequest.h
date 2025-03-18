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
    AWS_COSTEXPLORER_API DescribeCostCategoryDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCostCategoryDefinition"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline const Aws::String& GetCostCategoryArn() const { return m_costCategoryArn; }
    inline bool CostCategoryArnHasBeenSet() const { return m_costCategoryArnHasBeenSet; }
    template<typename CostCategoryArnT = Aws::String>
    void SetCostCategoryArn(CostCategoryArnT&& value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn = std::forward<CostCategoryArnT>(value); }
    template<typename CostCategoryArnT = Aws::String>
    DescribeCostCategoryDefinitionRequest& WithCostCategoryArn(CostCategoryArnT&& value) { SetCostCategoryArn(std::forward<CostCategoryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the Cost Category was effective. </p>
     */
    inline const Aws::String& GetEffectiveOn() const { return m_effectiveOn; }
    inline bool EffectiveOnHasBeenSet() const { return m_effectiveOnHasBeenSet; }
    template<typename EffectiveOnT = Aws::String>
    void SetEffectiveOn(EffectiveOnT&& value) { m_effectiveOnHasBeenSet = true; m_effectiveOn = std::forward<EffectiveOnT>(value); }
    template<typename EffectiveOnT = Aws::String>
    DescribeCostCategoryDefinitionRequest& WithEffectiveOn(EffectiveOnT&& value) { SetEffectiveOn(std::forward<EffectiveOnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_costCategoryArn;
    bool m_costCategoryArnHasBeenSet = false;

    Aws::String m_effectiveOn;
    bool m_effectiveOnHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
