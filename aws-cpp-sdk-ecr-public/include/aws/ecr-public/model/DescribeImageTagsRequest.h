/**
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


    /**
     * <p>The AWS account ID associated with the public registry that contains the
     * repository in which to describe images. If you do not specify a registry, the
     * default public registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the public registry that contains the
     * repository in which to describe images. If you do not specify a registry, the
     * default public registry is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the public registry that contains the
     * repository in which to describe images. If you do not specify a registry, the
     * default public registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the public registry that contains the
     * repository in which to describe images. If you do not specify a registry, the
     * default public registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The AWS account ID associated with the public registry that contains the
     * repository in which to describe images. If you do not specify a registry, the
     * default public registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the public registry that contains the
     * repository in which to describe images. If you do not specify a registry, the
     * default public registry is assumed.</p>
     */
    inline DescribeImageTagsRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the public registry that contains the
     * repository in which to describe images. If you do not specify a registry, the
     * default public registry is assumed.</p>
     */
    inline DescribeImageTagsRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID associated with the public registry that contains the
     * repository in which to describe images. If you do not specify a registry, the
     * default public registry is assumed.</p>
     */
    inline DescribeImageTagsRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The name of the repository that contains the image tag details to
     * describe.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that contains the image tag details to
     * describe.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository that contains the image tag details to
     * describe.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that contains the image tag details to
     * describe.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository that contains the image tag details to
     * describe.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that contains the image tag details to
     * describe.</p>
     */
    inline DescribeImageTagsRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that contains the image tag details to
     * describe.</p>
     */
    inline DescribeImageTagsRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that contains the image tag details to
     * describe.</p>
     */
    inline DescribeImageTagsRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImageTags</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is <code>null</code> when there are no more results to return. This
     * option cannot be used when you specify images with <code>imageIds</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImageTags</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is <code>null</code> when there are no more results to return. This
     * option cannot be used when you specify images with <code>imageIds</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImageTags</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is <code>null</code> when there are no more results to return. This
     * option cannot be used when you specify images with <code>imageIds</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImageTags</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is <code>null</code> when there are no more results to return. This
     * option cannot be used when you specify images with <code>imageIds</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImageTags</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is <code>null</code> when there are no more results to return. This
     * option cannot be used when you specify images with <code>imageIds</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImageTags</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is <code>null</code> when there are no more results to return. This
     * option cannot be used when you specify images with <code>imageIds</code>.</p>
     */
    inline DescribeImageTagsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImageTags</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is <code>null</code> when there are no more results to return. This
     * option cannot be used when you specify images with <code>imageIds</code>.</p>
     */
    inline DescribeImageTagsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImageTags</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code> value.
     * This value is <code>null</code> when there are no more results to return. This
     * option cannot be used when you specify images with <code>imageIds</code>.</p>
     */
    inline DescribeImageTagsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of repository results returned by
     * <code>DescribeImageTags</code> in paginated output. When this parameter is used,
     * <code>DescribeImageTags</code> only returns <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>DescribeImageTags</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 1000. If this parameter is not used, then
     * <code>DescribeImageTags</code> returns up to 100 results and a
     * <code>nextToken</code> value, if applicable. This option cannot be used when you
     * specify images with <code>imageIds</code>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of repository results returned by
     * <code>DescribeImageTags</code> in paginated output. When this parameter is used,
     * <code>DescribeImageTags</code> only returns <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>DescribeImageTags</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 1000. If this parameter is not used, then
     * <code>DescribeImageTags</code> returns up to 100 results and a
     * <code>nextToken</code> value, if applicable. This option cannot be used when you
     * specify images with <code>imageIds</code>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of repository results returned by
     * <code>DescribeImageTags</code> in paginated output. When this parameter is used,
     * <code>DescribeImageTags</code> only returns <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>DescribeImageTags</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 1000. If this parameter is not used, then
     * <code>DescribeImageTags</code> returns up to 100 results and a
     * <code>nextToken</code> value, if applicable. This option cannot be used when you
     * specify images with <code>imageIds</code>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of repository results returned by
     * <code>DescribeImageTags</code> in paginated output. When this parameter is used,
     * <code>DescribeImageTags</code> only returns <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>DescribeImageTags</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 1000. If this parameter is not used, then
     * <code>DescribeImageTags</code> returns up to 100 results and a
     * <code>nextToken</code> value, if applicable. This option cannot be used when you
     * specify images with <code>imageIds</code>.</p>
     */
    inline DescribeImageTagsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

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
