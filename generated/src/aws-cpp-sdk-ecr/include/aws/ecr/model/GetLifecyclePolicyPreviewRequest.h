﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetLifecyclePolicyPreviewRequest : public ECRRequest
  {
  public:
    AWS_ECR_API GetLifecyclePolicyPreviewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLifecyclePolicyPreview"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    GetLifecyclePolicyPreviewRequest& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    GetLifecyclePolicyPreviewRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of imageIDs to be included.</p>
     */
    inline const Aws::Vector<ImageIdentifier>& GetImageIds() const { return m_imageIds; }
    inline bool ImageIdsHasBeenSet() const { return m_imageIdsHasBeenSet; }
    template<typename ImageIdsT = Aws::Vector<ImageIdentifier>>
    void SetImageIds(ImageIdsT&& value) { m_imageIdsHasBeenSet = true; m_imageIds = std::forward<ImageIdsT>(value); }
    template<typename ImageIdsT = Aws::Vector<ImageIdentifier>>
    GetLifecyclePolicyPreviewRequest& WithImageIds(ImageIdsT&& value) { SetImageIds(std::forward<ImageIdsT>(value)); return *this;}
    template<typename ImageIdsT = ImageIdentifier>
    GetLifecyclePolicyPreviewRequest& AddImageIds(ImageIdsT&& value) { m_imageIdsHasBeenSet = true; m_imageIds.emplace_back(std::forward<ImageIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated&#x2028;
     * <code>GetLifecyclePolicyPreviewRequest</code> request where
     * <code>maxResults</code> was used and the&#x2028; results exceeded the value of
     * that parameter. Pagination continues from the end of the&#x2028; previous
     * results that returned the <code>nextToken</code> value. This value is&#x2028;
     * <code>null</code> when there are no more results to return. This option cannot
     * be used when you specify images with <code>imageIds</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetLifecyclePolicyPreviewRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of repository results returned by
     * <code>GetLifecyclePolicyPreviewRequest</code> in&#x2028; paginated output. When
     * this parameter is used, <code>GetLifecyclePolicyPreviewRequest</code> only
     * returns&#x2028; <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code>&#x2028; response element. The remaining results of the
     * initial request can be seen by sending&#x2028; another
     * <code>GetLifecyclePolicyPreviewRequest</code> request with the returned
     * <code>nextToken</code>&#x2028; value. This value can be between 1 and 100. If
     * this&#x2028; parameter is not used, then
     * <code>GetLifecyclePolicyPreviewRequest</code> returns up to&#x2028;100 results
     * and a <code>nextToken</code> value, if&#x2028; applicable. This option cannot be
     * used when you specify images with <code>imageIds</code>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetLifecyclePolicyPreviewRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter that filters results based on image tag status and all
     * tags, if tagged.</p>
     */
    inline const LifecyclePolicyPreviewFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = LifecyclePolicyPreviewFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = LifecyclePolicyPreviewFilter>
    GetLifecyclePolicyPreviewRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::Vector<ImageIdentifier> m_imageIds;
    bool m_imageIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    LifecyclePolicyPreviewFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
