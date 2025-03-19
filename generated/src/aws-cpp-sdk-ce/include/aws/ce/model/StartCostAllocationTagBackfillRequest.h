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
  class StartCostAllocationTagBackfillRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API StartCostAllocationTagBackfillRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCostAllocationTagBackfill"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The date you want the backfill to start from. The date can only be a first
     * day of the month (a billing start date). Dates can't precede the previous twelve
     * months, or in the future.</p>
     */
    inline const Aws::String& GetBackfillFrom() const { return m_backfillFrom; }
    inline bool BackfillFromHasBeenSet() const { return m_backfillFromHasBeenSet; }
    template<typename BackfillFromT = Aws::String>
    void SetBackfillFrom(BackfillFromT&& value) { m_backfillFromHasBeenSet = true; m_backfillFrom = std::forward<BackfillFromT>(value); }
    template<typename BackfillFromT = Aws::String>
    StartCostAllocationTagBackfillRequest& WithBackfillFrom(BackfillFromT&& value) { SetBackfillFrom(std::forward<BackfillFromT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backfillFrom;
    bool m_backfillFromHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
