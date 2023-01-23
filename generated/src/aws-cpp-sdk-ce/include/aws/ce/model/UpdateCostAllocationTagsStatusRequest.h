/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/CostAllocationTagStatusEntry.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class UpdateCostAllocationTagsStatusRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API UpdateCostAllocationTagsStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCostAllocationTagsStatus"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The list of <code>CostAllocationTagStatusEntry</code> objects that are used
     * to update cost allocation tags status for this request. </p>
     */
    inline const Aws::Vector<CostAllocationTagStatusEntry>& GetCostAllocationTagsStatus() const{ return m_costAllocationTagsStatus; }

    /**
     * <p>The list of <code>CostAllocationTagStatusEntry</code> objects that are used
     * to update cost allocation tags status for this request. </p>
     */
    inline bool CostAllocationTagsStatusHasBeenSet() const { return m_costAllocationTagsStatusHasBeenSet; }

    /**
     * <p>The list of <code>CostAllocationTagStatusEntry</code> objects that are used
     * to update cost allocation tags status for this request. </p>
     */
    inline void SetCostAllocationTagsStatus(const Aws::Vector<CostAllocationTagStatusEntry>& value) { m_costAllocationTagsStatusHasBeenSet = true; m_costAllocationTagsStatus = value; }

    /**
     * <p>The list of <code>CostAllocationTagStatusEntry</code> objects that are used
     * to update cost allocation tags status for this request. </p>
     */
    inline void SetCostAllocationTagsStatus(Aws::Vector<CostAllocationTagStatusEntry>&& value) { m_costAllocationTagsStatusHasBeenSet = true; m_costAllocationTagsStatus = std::move(value); }

    /**
     * <p>The list of <code>CostAllocationTagStatusEntry</code> objects that are used
     * to update cost allocation tags status for this request. </p>
     */
    inline UpdateCostAllocationTagsStatusRequest& WithCostAllocationTagsStatus(const Aws::Vector<CostAllocationTagStatusEntry>& value) { SetCostAllocationTagsStatus(value); return *this;}

    /**
     * <p>The list of <code>CostAllocationTagStatusEntry</code> objects that are used
     * to update cost allocation tags status for this request. </p>
     */
    inline UpdateCostAllocationTagsStatusRequest& WithCostAllocationTagsStatus(Aws::Vector<CostAllocationTagStatusEntry>&& value) { SetCostAllocationTagsStatus(std::move(value)); return *this;}

    /**
     * <p>The list of <code>CostAllocationTagStatusEntry</code> objects that are used
     * to update cost allocation tags status for this request. </p>
     */
    inline UpdateCostAllocationTagsStatusRequest& AddCostAllocationTagsStatus(const CostAllocationTagStatusEntry& value) { m_costAllocationTagsStatusHasBeenSet = true; m_costAllocationTagsStatus.push_back(value); return *this; }

    /**
     * <p>The list of <code>CostAllocationTagStatusEntry</code> objects that are used
     * to update cost allocation tags status for this request. </p>
     */
    inline UpdateCostAllocationTagsStatusRequest& AddCostAllocationTagsStatus(CostAllocationTagStatusEntry&& value) { m_costAllocationTagsStatusHasBeenSet = true; m_costAllocationTagsStatus.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CostAllocationTagStatusEntry> m_costAllocationTagsStatus;
    bool m_costAllocationTagsStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
