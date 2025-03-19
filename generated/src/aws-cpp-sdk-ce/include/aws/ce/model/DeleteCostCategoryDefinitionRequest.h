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
  class DeleteCostCategoryDefinitionRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API DeleteCostCategoryDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCostCategoryDefinition"; }

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
    DeleteCostCategoryDefinitionRequest& WithCostCategoryArn(CostCategoryArnT&& value) { SetCostCategoryArn(std::forward<CostCategoryArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_costCategoryArn;
    bool m_costCategoryArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
