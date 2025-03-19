/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class BatchDeleteImportDataRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteImportDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteImportData"; }

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The IDs for the import tasks that you want to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImportTaskIds() const { return m_importTaskIds; }
    inline bool ImportTaskIdsHasBeenSet() const { return m_importTaskIdsHasBeenSet; }
    template<typename ImportTaskIdsT = Aws::Vector<Aws::String>>
    void SetImportTaskIds(ImportTaskIdsT&& value) { m_importTaskIdsHasBeenSet = true; m_importTaskIds = std::forward<ImportTaskIdsT>(value); }
    template<typename ImportTaskIdsT = Aws::Vector<Aws::String>>
    BatchDeleteImportDataRequest& WithImportTaskIds(ImportTaskIdsT&& value) { SetImportTaskIds(std::forward<ImportTaskIdsT>(value)); return *this;}
    template<typename ImportTaskIdsT = Aws::String>
    BatchDeleteImportDataRequest& AddImportTaskIds(ImportTaskIdsT&& value) { m_importTaskIdsHasBeenSet = true; m_importTaskIds.emplace_back(std::forward<ImportTaskIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Set to <code>true</code> to remove the deleted import task from
     * <a>DescribeImportTasks</a>. </p>
     */
    inline bool GetDeleteHistory() const { return m_deleteHistory; }
    inline bool DeleteHistoryHasBeenSet() const { return m_deleteHistoryHasBeenSet; }
    inline void SetDeleteHistory(bool value) { m_deleteHistoryHasBeenSet = true; m_deleteHistory = value; }
    inline BatchDeleteImportDataRequest& WithDeleteHistory(bool value) { SetDeleteHistory(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_importTaskIds;
    bool m_importTaskIdsHasBeenSet = false;

    bool m_deleteHistory{false};
    bool m_deleteHistoryHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
