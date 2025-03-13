/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/SyncResourceFilter.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class ListSyncResourcesRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API ListSyncResourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSyncResources"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    ListSyncResourcesRequest& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync source.</p>  <p>Currently the only supported syncSource is
     * <code>SITEWISE </code>.</p> 
     */
    inline const Aws::String& GetSyncSource() const { return m_syncSource; }
    inline bool SyncSourceHasBeenSet() const { return m_syncSourceHasBeenSet; }
    template<typename SyncSourceT = Aws::String>
    void SetSyncSource(SyncSourceT&& value) { m_syncSourceHasBeenSet = true; m_syncSource = std::forward<SyncSourceT>(value); }
    template<typename SyncSourceT = Aws::String>
    ListSyncResourcesRequest& WithSyncSource(SyncSourceT&& value) { SetSyncSource(std::forward<SyncSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects that filter the request.</p> <p>The following filter
     * combinations are supported:</p> <ul> <li> <p>Filter with state</p> </li> <li>
     * <p>Filter with ResourceType and ResourceId</p> </li> <li> <p>Filter with
     * ResourceType and ExternalId</p> </li> </ul>
     */
    inline const Aws::Vector<SyncResourceFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<SyncResourceFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<SyncResourceFilter>>
    ListSyncResourcesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = SyncResourceFilter>
    ListSyncResourcesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time. The default is 50.</p>
     * <p>Valid Range: Minimum value of 0. Maximum value of 200.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSyncResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSyncResourcesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_syncSource;
    bool m_syncSourceHasBeenSet = false;

    Aws::Vector<SyncResourceFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
