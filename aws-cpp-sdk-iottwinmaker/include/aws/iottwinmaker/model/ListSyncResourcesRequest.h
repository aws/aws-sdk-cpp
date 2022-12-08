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
    AWS_IOTTWINMAKER_API ListSyncResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSyncResources"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline ListSyncResourcesRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline ListSyncResourcesRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace that contains the sync job.</p>
     */
    inline ListSyncResourcesRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The sync soucre.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline const Aws::String& GetSyncSource() const{ return m_syncSource; }

    /**
     * <p>The sync soucre.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline bool SyncSourceHasBeenSet() const { return m_syncSourceHasBeenSet; }

    /**
     * <p>The sync soucre.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline void SetSyncSource(const Aws::String& value) { m_syncSourceHasBeenSet = true; m_syncSource = value; }

    /**
     * <p>The sync soucre.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline void SetSyncSource(Aws::String&& value) { m_syncSourceHasBeenSet = true; m_syncSource = std::move(value); }

    /**
     * <p>The sync soucre.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline void SetSyncSource(const char* value) { m_syncSourceHasBeenSet = true; m_syncSource.assign(value); }

    /**
     * <p>The sync soucre.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline ListSyncResourcesRequest& WithSyncSource(const Aws::String& value) { SetSyncSource(value); return *this;}

    /**
     * <p>The sync soucre.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline ListSyncResourcesRequest& WithSyncSource(Aws::String&& value) { SetSyncSource(std::move(value)); return *this;}

    /**
     * <p>The sync soucre.</p>  <p>Currently the only supported syncSoucre is
     * <code>SITEWISE </code>.</p> 
     */
    inline ListSyncResourcesRequest& WithSyncSource(const char* value) { SetSyncSource(value); return *this;}


    /**
     * <p>A list of objects that filter the request.</p>
     */
    inline const Aws::Vector<SyncResourceFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A list of objects that filter the request.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A list of objects that filter the request.</p>
     */
    inline void SetFilters(const Aws::Vector<SyncResourceFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A list of objects that filter the request.</p>
     */
    inline void SetFilters(Aws::Vector<SyncResourceFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A list of objects that filter the request.</p>
     */
    inline ListSyncResourcesRequest& WithFilters(const Aws::Vector<SyncResourceFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A list of objects that filter the request.</p>
     */
    inline ListSyncResourcesRequest& WithFilters(Aws::Vector<SyncResourceFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A list of objects that filter the request.</p>
     */
    inline ListSyncResourcesRequest& AddFilters(const SyncResourceFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A list of objects that filter the request.</p>
     */
    inline ListSyncResourcesRequest& AddFilters(SyncResourceFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return at one time. The default is 50.</p>
     * <p>Valid Range: Minimum value of 0. Maximum value of 200.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return at one time. The default is 50.</p>
     * <p>Valid Range: Minimum value of 0. Maximum value of 200.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return at one time. The default is 50.</p>
     * <p>Valid Range: Minimum value of 0. Maximum value of 200.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return at one time. The default is 50.</p>
     * <p>Valid Range: Minimum value of 0. Maximum value of 200.</p>
     */
    inline ListSyncResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListSyncResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListSyncResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListSyncResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_syncSource;
    bool m_syncSourceHasBeenSet = false;

    Aws::Vector<SyncResourceFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
