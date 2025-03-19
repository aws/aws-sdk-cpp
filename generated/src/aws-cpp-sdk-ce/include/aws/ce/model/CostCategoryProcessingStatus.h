/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/CostCategoryStatusComponent.h>
#include <aws/ce/model/CostCategoryStatus.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The list of processing statuses for Cost Management products for a specific
   * cost category. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostCategoryProcessingStatus">AWS
   * API Reference</a></p>
   */
  class CostCategoryProcessingStatus
  {
  public:
    AWS_COSTEXPLORER_API CostCategoryProcessingStatus() = default;
    AWS_COSTEXPLORER_API CostCategoryProcessingStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostCategoryProcessingStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Cost Management product name of the applied status. </p>
     */
    inline CostCategoryStatusComponent GetComponent() const { return m_component; }
    inline bool ComponentHasBeenSet() const { return m_componentHasBeenSet; }
    inline void SetComponent(CostCategoryStatusComponent value) { m_componentHasBeenSet = true; m_component = value; }
    inline CostCategoryProcessingStatus& WithComponent(CostCategoryStatusComponent value) { SetComponent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The process status for a specific cost category. </p>
     */
    inline CostCategoryStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CostCategoryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CostCategoryProcessingStatus& WithStatus(CostCategoryStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    CostCategoryStatusComponent m_component{CostCategoryStatusComponent::NOT_SET};
    bool m_componentHasBeenSet = false;

    CostCategoryStatus m_status{CostCategoryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
