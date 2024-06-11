﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/ECRPublicRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

  /**
   */
  class DescribeImageTagsRequest : public ECRPublicRequest
  {
  public:
    AWS_ECRPUBLIC_API DescribeImageTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeImageTags"; }

    AWS_ECRPUBLIC_API Aws::String SerializePayload() const override;

    AWS_ECRPUBLIC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID that's associated with the public registry
     * that contains the repository where images are described. If you do not specify a
     * registry, the default public registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }
    inline DescribeImageTagsRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline DescribeImageTagsRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline DescribeImageTagsRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository that contains the image tag details to
     * describe.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline DescribeImageTagsRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline DescribeImageTagsRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline DescribeImageTagsRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value that's returned from a previous paginated
     * <code>DescribeImageTags</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * If there are no more results to return, this value is <code>null</code>. If you
     * specify images with <code>imageIds</code>, you can't use this option.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeImageTagsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeImageTagsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeImageTagsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of repository results that's returned by
     * <code>DescribeImageTags</code> in paginated output. When this parameter is used,
     * <code>DescribeImageTags</code> only returns <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. You can see
     * the remaining results of the initial request by sending another
     * <code>DescribeImageTags</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 1000. If this parameter isn't used, then
     * <code>DescribeImageTags</code> returns up to 100 results and a
     * <code>nextToken</code> value, if applicable. If you specify images with
     * <code>imageIds</code>, you can't use this option.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeImageTagsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
