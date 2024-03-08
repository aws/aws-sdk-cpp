/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/CodeStarconnectionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/SyncConfigurationType.h>
#include <utility>

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

  /**
   */
  class ListRepositorySyncDefinitionsRequest : public CodeStarconnectionsRequest
  {
  public:
    AWS_CODESTARCONNECTIONS_API ListRepositorySyncDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRepositorySyncDefinitions"; }

    AWS_CODESTARCONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODESTARCONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the repository link for the sync definition for which you want to
     * retrieve information.</p>
     */
    inline const Aws::String& GetRepositoryLinkId() const{ return m_repositoryLinkId; }

    /**
     * <p>The ID of the repository link for the sync definition for which you want to
     * retrieve information.</p>
     */
    inline bool RepositoryLinkIdHasBeenSet() const { return m_repositoryLinkIdHasBeenSet; }

    /**
     * <p>The ID of the repository link for the sync definition for which you want to
     * retrieve information.</p>
     */
    inline void SetRepositoryLinkId(const Aws::String& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = value; }

    /**
     * <p>The ID of the repository link for the sync definition for which you want to
     * retrieve information.</p>
     */
    inline void SetRepositoryLinkId(Aws::String&& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = std::move(value); }

    /**
     * <p>The ID of the repository link for the sync definition for which you want to
     * retrieve information.</p>
     */
    inline void SetRepositoryLinkId(const char* value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId.assign(value); }

    /**
     * <p>The ID of the repository link for the sync definition for which you want to
     * retrieve information.</p>
     */
    inline ListRepositorySyncDefinitionsRequest& WithRepositoryLinkId(const Aws::String& value) { SetRepositoryLinkId(value); return *this;}

    /**
     * <p>The ID of the repository link for the sync definition for which you want to
     * retrieve information.</p>
     */
    inline ListRepositorySyncDefinitionsRequest& WithRepositoryLinkId(Aws::String&& value) { SetRepositoryLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the repository link for the sync definition for which you want to
     * retrieve information.</p>
     */
    inline ListRepositorySyncDefinitionsRequest& WithRepositoryLinkId(const char* value) { SetRepositoryLinkId(value); return *this;}


    /**
     * <p>The sync type of the repository link for the the sync definition for which
     * you want to retrieve information.</p>
     */
    inline const SyncConfigurationType& GetSyncType() const{ return m_syncType; }

    /**
     * <p>The sync type of the repository link for the the sync definition for which
     * you want to retrieve information.</p>
     */
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }

    /**
     * <p>The sync type of the repository link for the the sync definition for which
     * you want to retrieve information.</p>
     */
    inline void SetSyncType(const SyncConfigurationType& value) { m_syncTypeHasBeenSet = true; m_syncType = value; }

    /**
     * <p>The sync type of the repository link for the the sync definition for which
     * you want to retrieve information.</p>
     */
    inline void SetSyncType(SyncConfigurationType&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::move(value); }

    /**
     * <p>The sync type of the repository link for the the sync definition for which
     * you want to retrieve information.</p>
     */
    inline ListRepositorySyncDefinitionsRequest& WithSyncType(const SyncConfigurationType& value) { SetSyncType(value); return *this;}

    /**
     * <p>The sync type of the repository link for the the sync definition for which
     * you want to retrieve information.</p>
     */
    inline ListRepositorySyncDefinitionsRequest& WithSyncType(SyncConfigurationType&& value) { SetSyncType(std::move(value)); return *this;}

  private:

    Aws::String m_repositoryLinkId;
    bool m_repositoryLinkIdHasBeenSet = false;

    SyncConfigurationType m_syncType;
    bool m_syncTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
