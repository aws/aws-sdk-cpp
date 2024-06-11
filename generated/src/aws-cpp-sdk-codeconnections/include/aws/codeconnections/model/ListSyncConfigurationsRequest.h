﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/codeconnections/CodeConnectionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/SyncConfigurationType.h>
#include <utility>

namespace Aws
{
namespace CodeConnections
{
namespace Model
{

  /**
   */
  class ListSyncConfigurationsRequest : public CodeConnectionsRequest
  {
  public:
    AWS_CODECONNECTIONS_API ListSyncConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSyncConfigurations"; }

    AWS_CODECONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODECONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A non-zero, non-negative integer used to limit the number of returned
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSyncConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enumeration token that allows the operation to batch the results of the
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListSyncConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSyncConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSyncConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the repository link for the requested list of sync
     * configurations.</p>
     */
    inline const Aws::String& GetRepositoryLinkId() const{ return m_repositoryLinkId; }
    inline bool RepositoryLinkIdHasBeenSet() const { return m_repositoryLinkIdHasBeenSet; }
    inline void SetRepositoryLinkId(const Aws::String& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = value; }
    inline void SetRepositoryLinkId(Aws::String&& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = std::move(value); }
    inline void SetRepositoryLinkId(const char* value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId.assign(value); }
    inline ListSyncConfigurationsRequest& WithRepositoryLinkId(const Aws::String& value) { SetRepositoryLinkId(value); return *this;}
    inline ListSyncConfigurationsRequest& WithRepositoryLinkId(Aws::String&& value) { SetRepositoryLinkId(std::move(value)); return *this;}
    inline ListSyncConfigurationsRequest& WithRepositoryLinkId(const char* value) { SetRepositoryLinkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync type for the requested list of sync configurations.</p>
     */
    inline const SyncConfigurationType& GetSyncType() const{ return m_syncType; }
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }
    inline void SetSyncType(const SyncConfigurationType& value) { m_syncTypeHasBeenSet = true; m_syncType = value; }
    inline void SetSyncType(SyncConfigurationType&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::move(value); }
    inline ListSyncConfigurationsRequest& WithSyncType(const SyncConfigurationType& value) { SetSyncType(value); return *this;}
    inline ListSyncConfigurationsRequest& WithSyncType(SyncConfigurationType&& value) { SetSyncType(std::move(value)); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_repositoryLinkId;
    bool m_repositoryLinkIdHasBeenSet = false;

    SyncConfigurationType m_syncType;
    bool m_syncTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
