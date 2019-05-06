/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/DescribeImagesFilter.h>
#include <aws/ecr/model/ImageIdentifier.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class AWS_ECR_API DescribeImagesRequest : public ECRRequest
  {
  public:
    DescribeImagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeImages"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to describe images. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to describe images. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to describe images. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to describe images. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to describe images. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to describe images. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline DescribeImagesRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to describe images. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline DescribeImagesRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to describe images. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline DescribeImagesRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>A list of repositories to describe.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>A list of repositories to describe.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>A list of repositories to describe.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>A list of repositories to describe.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>A list of repositories to describe.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>A list of repositories to describe.</p>
     */
    inline DescribeImagesRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>A list of repositories to describe.</p>
     */
    inline DescribeImagesRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>A list of repositories to describe.</p>
     */
    inline DescribeImagesRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The list of image IDs for the requested repository.</p>
     */
    inline const Aws::Vector<ImageIdentifier>& GetImageIds() const{ return m_imageIds; }

    /**
     * <p>The list of image IDs for the requested repository.</p>
     */
    inline bool ImageIdsHasBeenSet() const { return m_imageIdsHasBeenSet; }

    /**
     * <p>The list of image IDs for the requested repository.</p>
     */
    inline void SetImageIds(const Aws::Vector<ImageIdentifier>& value) { m_imageIdsHasBeenSet = true; m_imageIds = value; }

    /**
     * <p>The list of image IDs for the requested repository.</p>
     */
    inline void SetImageIds(Aws::Vector<ImageIdentifier>&& value) { m_imageIdsHasBeenSet = true; m_imageIds = std::move(value); }

    /**
     * <p>The list of image IDs for the requested repository.</p>
     */
    inline DescribeImagesRequest& WithImageIds(const Aws::Vector<ImageIdentifier>& value) { SetImageIds(value); return *this;}

    /**
     * <p>The list of image IDs for the requested repository.</p>
     */
    inline DescribeImagesRequest& WithImageIds(Aws::Vector<ImageIdentifier>&& value) { SetImageIds(std::move(value)); return *this;}

    /**
     * <p>The list of image IDs for the requested repository.</p>
     */
    inline DescribeImagesRequest& AddImageIds(const ImageIdentifier& value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(value); return *this; }

    /**
     * <p>The list of image IDs for the requested repository.</p>
     */
    inline DescribeImagesRequest& AddImageIds(ImageIdentifier&& value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImages</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return. This option
     * cannot be used when you specify images with <code>imageIds</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImages</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return. This option
     * cannot be used when you specify images with <code>imageIds</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImages</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return. This option
     * cannot be used when you specify images with <code>imageIds</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImages</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return. This option
     * cannot be used when you specify images with <code>imageIds</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImages</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return. This option
     * cannot be used when you specify images with <code>imageIds</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImages</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return. This option
     * cannot be used when you specify images with <code>imageIds</code>.</p>
     */
    inline DescribeImagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImages</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return. This option
     * cannot be used when you specify images with <code>imageIds</code>.</p>
     */
    inline DescribeImagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeImages</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return. This option
     * cannot be used when you specify images with <code>imageIds</code>.</p>
     */
    inline DescribeImagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of repository results returned by
     * <code>DescribeImages</code> in paginated output. When this parameter is used,
     * <code>DescribeImages</code> only returns <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>DescribeImages</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 1000. If this parameter is not used, then
     * <code>DescribeImages</code> returns up to 100 results and a
     * <code>nextToken</code> value, if applicable. This option cannot be used when you
     * specify images with <code>imageIds</code>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of repository results returned by
     * <code>DescribeImages</code> in paginated output. When this parameter is used,
     * <code>DescribeImages</code> only returns <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>DescribeImages</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 1000. If this parameter is not used, then
     * <code>DescribeImages</code> returns up to 100 results and a
     * <code>nextToken</code> value, if applicable. This option cannot be used when you
     * specify images with <code>imageIds</code>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of repository results returned by
     * <code>DescribeImages</code> in paginated output. When this parameter is used,
     * <code>DescribeImages</code> only returns <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>DescribeImages</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 1000. If this parameter is not used, then
     * <code>DescribeImages</code> returns up to 100 results and a
     * <code>nextToken</code> value, if applicable. This option cannot be used when you
     * specify images with <code>imageIds</code>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of repository results returned by
     * <code>DescribeImages</code> in paginated output. When this parameter is used,
     * <code>DescribeImages</code> only returns <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>DescribeImages</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 1000. If this parameter is not used, then
     * <code>DescribeImages</code> returns up to 100 results and a
     * <code>nextToken</code> value, if applicable. This option cannot be used when you
     * specify images with <code>imageIds</code>.</p>
     */
    inline DescribeImagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The filter key and value with which to filter your
     * <code>DescribeImages</code> results.</p>
     */
    inline const DescribeImagesFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>The filter key and value with which to filter your
     * <code>DescribeImages</code> results.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>The filter key and value with which to filter your
     * <code>DescribeImages</code> results.</p>
     */
    inline void SetFilter(const DescribeImagesFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The filter key and value with which to filter your
     * <code>DescribeImages</code> results.</p>
     */
    inline void SetFilter(DescribeImagesFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>The filter key and value with which to filter your
     * <code>DescribeImages</code> results.</p>
     */
    inline DescribeImagesRequest& WithFilter(const DescribeImagesFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>The filter key and value with which to filter your
     * <code>DescribeImages</code> results.</p>
     */
    inline DescribeImagesRequest& WithFilter(DescribeImagesFilter&& value) { SetFilter(std::move(value)); return *this;}

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::Vector<ImageIdentifier> m_imageIds;
    bool m_imageIdsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    DescribeImagesFilter m_filter;
    bool m_filterHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
