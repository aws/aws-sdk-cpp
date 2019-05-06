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
#include <aws/ecr/model/LifecyclePolicyPreviewFilter.h>
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
  class AWS_ECR_API GetLifecyclePolicyPreviewRequest : public ECRRequest
  {
  public:
    GetLifecyclePolicyPreviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLifecyclePolicyPreview"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default registry is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default registry is assumed.</p>
     */
    inline GetLifecyclePolicyPreviewRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default registry is assumed.</p>
     */
    inline GetLifecyclePolicyPreviewRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the repository.
     * If you do not specify a registry, the default registry is assumed.</p>
     */
    inline GetLifecyclePolicyPreviewRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository.</p>
     */
    inline GetLifecyclePolicyPreviewRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline GetLifecyclePolicyPreviewRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline GetLifecyclePolicyPreviewRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The list of imageIDs to be included.</p>
     */
    inline const Aws::Vector<ImageIdentifier>& GetImageIds() const{ return m_imageIds; }

    /**
     * <p>The list of imageIDs to be included.</p>
     */
    inline bool ImageIdsHasBeenSet() const { return m_imageIdsHasBeenSet; }

    /**
     * <p>The list of imageIDs to be included.</p>
     */
    inline void SetImageIds(const Aws::Vector<ImageIdentifier>& value) { m_imageIdsHasBeenSet = true; m_imageIds = value; }

    /**
     * <p>The list of imageIDs to be included.</p>
     */
    inline void SetImageIds(Aws::Vector<ImageIdentifier>&& value) { m_imageIdsHasBeenSet = true; m_imageIds = std::move(value); }

    /**
     * <p>The list of imageIDs to be included.</p>
     */
    inline GetLifecyclePolicyPreviewRequest& WithImageIds(const Aws::Vector<ImageIdentifier>& value) { SetImageIds(value); return *this;}

    /**
     * <p>The list of imageIDs to be included.</p>
     */
    inline GetLifecyclePolicyPreviewRequest& WithImageIds(Aws::Vector<ImageIdentifier>&& value) { SetImageIds(std::move(value)); return *this;}

    /**
     * <p>The list of imageIDs to be included.</p>
     */
    inline GetLifecyclePolicyPreviewRequest& AddImageIds(const ImageIdentifier& value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(value); return *this; }

    /**
     * <p>The list of imageIDs to be included.</p>
     */
    inline GetLifecyclePolicyPreviewRequest& AddImageIds(ImageIdentifier&& value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated&#x2028;
     * <code>GetLifecyclePolicyPreviewRequest</code> request where
     * <code>maxResults</code> was used and the&#x2028; results exceeded the value of
     * that parameter. Pagination continues from the end of the&#x2028; previous
     * results that returned the <code>nextToken</code> value. This value is&#x2028;
     * <code>null</code> when there are no more results to return. This option cannot
     * be used when you specify images with <code>imageIds</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated&#x2028;
     * <code>GetLifecyclePolicyPreviewRequest</code> request where
     * <code>maxResults</code> was used and the&#x2028; results exceeded the value of
     * that parameter. Pagination continues from the end of the&#x2028; previous
     * results that returned the <code>nextToken</code> value. This value is&#x2028;
     * <code>null</code> when there are no more results to return. This option cannot
     * be used when you specify images with <code>imageIds</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated&#x2028;
     * <code>GetLifecyclePolicyPreviewRequest</code> request where
     * <code>maxResults</code> was used and the&#x2028; results exceeded the value of
     * that parameter. Pagination continues from the end of the&#x2028; previous
     * results that returned the <code>nextToken</code> value. This value is&#x2028;
     * <code>null</code> when there are no more results to return. This option cannot
     * be used when you specify images with <code>imageIds</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated&#x2028;
     * <code>GetLifecyclePolicyPreviewRequest</code> request where
     * <code>maxResults</code> was used and the&#x2028; results exceeded the value of
     * that parameter. Pagination continues from the end of the&#x2028; previous
     * results that returned the <code>nextToken</code> value. This value is&#x2028;
     * <code>null</code> when there are no more results to return. This option cannot
     * be used when you specify images with <code>imageIds</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated&#x2028;
     * <code>GetLifecyclePolicyPreviewRequest</code> request where
     * <code>maxResults</code> was used and the&#x2028; results exceeded the value of
     * that parameter. Pagination continues from the end of the&#x2028; previous
     * results that returned the <code>nextToken</code> value. This value is&#x2028;
     * <code>null</code> when there are no more results to return. This option cannot
     * be used when you specify images with <code>imageIds</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated&#x2028;
     * <code>GetLifecyclePolicyPreviewRequest</code> request where
     * <code>maxResults</code> was used and the&#x2028; results exceeded the value of
     * that parameter. Pagination continues from the end of the&#x2028; previous
     * results that returned the <code>nextToken</code> value. This value is&#x2028;
     * <code>null</code> when there are no more results to return. This option cannot
     * be used when you specify images with <code>imageIds</code>.</p>
     */
    inline GetLifecyclePolicyPreviewRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated&#x2028;
     * <code>GetLifecyclePolicyPreviewRequest</code> request where
     * <code>maxResults</code> was used and the&#x2028; results exceeded the value of
     * that parameter. Pagination continues from the end of the&#x2028; previous
     * results that returned the <code>nextToken</code> value. This value is&#x2028;
     * <code>null</code> when there are no more results to return. This option cannot
     * be used when you specify images with <code>imageIds</code>.</p>
     */
    inline GetLifecyclePolicyPreviewRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated&#x2028;
     * <code>GetLifecyclePolicyPreviewRequest</code> request where
     * <code>maxResults</code> was used and the&#x2028; results exceeded the value of
     * that parameter. Pagination continues from the end of the&#x2028; previous
     * results that returned the <code>nextToken</code> value. This value is&#x2028;
     * <code>null</code> when there are no more results to return. This option cannot
     * be used when you specify images with <code>imageIds</code>.</p>
     */
    inline GetLifecyclePolicyPreviewRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of repository results returned by
     * <code>GetLifecyclePolicyPreviewRequest</code> in&#x2028; paginated output. When
     * this parameter is used, <code>GetLifecyclePolicyPreviewRequest</code> only
     * returns&#x2028; <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code>&#x2028; response element. The remaining results of the
     * initial request can be seen by sending&#x2028; another
     * <code>GetLifecyclePolicyPreviewRequest</code> request with the returned
     * <code>nextToken</code>&#x2028; value. This value can be between 1 and 1000. If
     * this&#x2028; parameter is not used, then
     * <code>GetLifecyclePolicyPreviewRequest</code> returns up to&#x2028; 100 results
     * and a <code>nextToken</code> value, if&#x2028; applicable. This option cannot be
     * used when you specify images with <code>imageIds</code>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of repository results returned by
     * <code>GetLifecyclePolicyPreviewRequest</code> in&#x2028; paginated output. When
     * this parameter is used, <code>GetLifecyclePolicyPreviewRequest</code> only
     * returns&#x2028; <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code>&#x2028; response element. The remaining results of the
     * initial request can be seen by sending&#x2028; another
     * <code>GetLifecyclePolicyPreviewRequest</code> request with the returned
     * <code>nextToken</code>&#x2028; value. This value can be between 1 and 1000. If
     * this&#x2028; parameter is not used, then
     * <code>GetLifecyclePolicyPreviewRequest</code> returns up to&#x2028; 100 results
     * and a <code>nextToken</code> value, if&#x2028; applicable. This option cannot be
     * used when you specify images with <code>imageIds</code>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of repository results returned by
     * <code>GetLifecyclePolicyPreviewRequest</code> in&#x2028; paginated output. When
     * this parameter is used, <code>GetLifecyclePolicyPreviewRequest</code> only
     * returns&#x2028; <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code>&#x2028; response element. The remaining results of the
     * initial request can be seen by sending&#x2028; another
     * <code>GetLifecyclePolicyPreviewRequest</code> request with the returned
     * <code>nextToken</code>&#x2028; value. This value can be between 1 and 1000. If
     * this&#x2028; parameter is not used, then
     * <code>GetLifecyclePolicyPreviewRequest</code> returns up to&#x2028; 100 results
     * and a <code>nextToken</code> value, if&#x2028; applicable. This option cannot be
     * used when you specify images with <code>imageIds</code>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of repository results returned by
     * <code>GetLifecyclePolicyPreviewRequest</code> in&#x2028; paginated output. When
     * this parameter is used, <code>GetLifecyclePolicyPreviewRequest</code> only
     * returns&#x2028; <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code>&#x2028; response element. The remaining results of the
     * initial request can be seen by sending&#x2028; another
     * <code>GetLifecyclePolicyPreviewRequest</code> request with the returned
     * <code>nextToken</code>&#x2028; value. This value can be between 1 and 1000. If
     * this&#x2028; parameter is not used, then
     * <code>GetLifecyclePolicyPreviewRequest</code> returns up to&#x2028; 100 results
     * and a <code>nextToken</code> value, if&#x2028; applicable. This option cannot be
     * used when you specify images with <code>imageIds</code>.</p>
     */
    inline GetLifecyclePolicyPreviewRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>An optional parameter that filters results based on image tag status and all
     * tags, if tagged.</p>
     */
    inline const LifecyclePolicyPreviewFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>An optional parameter that filters results based on image tag status and all
     * tags, if tagged.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>An optional parameter that filters results based on image tag status and all
     * tags, if tagged.</p>
     */
    inline void SetFilter(const LifecyclePolicyPreviewFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>An optional parameter that filters results based on image tag status and all
     * tags, if tagged.</p>
     */
    inline void SetFilter(LifecyclePolicyPreviewFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>An optional parameter that filters results based on image tag status and all
     * tags, if tagged.</p>
     */
    inline GetLifecyclePolicyPreviewRequest& WithFilter(const LifecyclePolicyPreviewFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>An optional parameter that filters results based on image tag status and all
     * tags, if tagged.</p>
     */
    inline GetLifecyclePolicyPreviewRequest& WithFilter(LifecyclePolicyPreviewFilter&& value) { SetFilter(std::move(value)); return *this;}

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

    LifecyclePolicyPreviewFilter m_filter;
    bool m_filterHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
