/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/CodeStarconnectionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

  /**
   */
  class GetRepositoryLinkRequest : public CodeStarconnectionsRequest
  {
  public:
    AWS_CODESTARCONNECTIONS_API GetRepositoryLinkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRepositoryLink"; }

    AWS_CODESTARCONNECTIONS_API Aws::String SerializePayload() const override;

    AWS_CODESTARCONNECTIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the repository link to get.</p>
     */
    inline const Aws::String& GetRepositoryLinkId() const{ return m_repositoryLinkId; }

    /**
     * <p>The ID of the repository link to get.</p>
     */
    inline bool RepositoryLinkIdHasBeenSet() const { return m_repositoryLinkIdHasBeenSet; }

    /**
     * <p>The ID of the repository link to get.</p>
     */
    inline void SetRepositoryLinkId(const Aws::String& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = value; }

    /**
     * <p>The ID of the repository link to get.</p>
     */
    inline void SetRepositoryLinkId(Aws::String&& value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId = std::move(value); }

    /**
     * <p>The ID of the repository link to get.</p>
     */
    inline void SetRepositoryLinkId(const char* value) { m_repositoryLinkIdHasBeenSet = true; m_repositoryLinkId.assign(value); }

    /**
     * <p>The ID of the repository link to get.</p>
     */
    inline GetRepositoryLinkRequest& WithRepositoryLinkId(const Aws::String& value) { SetRepositoryLinkId(value); return *this;}

    /**
     * <p>The ID of the repository link to get.</p>
     */
    inline GetRepositoryLinkRequest& WithRepositoryLinkId(Aws::String&& value) { SetRepositoryLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the repository link to get.</p>
     */
    inline GetRepositoryLinkRequest& WithRepositoryLinkId(const char* value) { SetRepositoryLinkId(value); return *this;}

  private:

    Aws::String m_repositoryLinkId;
    bool m_repositoryLinkIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
