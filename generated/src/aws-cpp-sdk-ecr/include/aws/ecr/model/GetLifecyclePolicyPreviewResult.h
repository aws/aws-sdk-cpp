/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/LifecyclePolicyPreviewStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/LifecyclePolicyPreviewSummary.h>
#include <aws/ecr/model/LifecyclePolicyPreviewResult.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECR
{
namespace Model
{
  class GetLifecyclePolicyPreviewResult
  {
  public:
    AWS_ECR_API GetLifecyclePolicyPreviewResult() = default;
    AWS_ECR_API GetLifecyclePolicyPreviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API GetLifecyclePolicyPreviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    GetLifecyclePolicyPreviewResult& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    GetLifecyclePolicyPreviewResult& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON lifecycle policy text.</p>
     */
    inline const Aws::String& GetLifecyclePolicyText() const { return m_lifecyclePolicyText; }
    template<typename LifecyclePolicyTextT = Aws::String>
    void SetLifecyclePolicyText(LifecyclePolicyTextT&& value) { m_lifecyclePolicyTextHasBeenSet = true; m_lifecyclePolicyText = std::forward<LifecyclePolicyTextT>(value); }
    template<typename LifecyclePolicyTextT = Aws::String>
    GetLifecyclePolicyPreviewResult& WithLifecyclePolicyText(LifecyclePolicyTextT&& value) { SetLifecyclePolicyText(std::forward<LifecyclePolicyTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the lifecycle policy preview request.</p>
     */
    inline LifecyclePolicyPreviewStatus GetStatus() const { return m_status; }
    inline void SetStatus(LifecyclePolicyPreviewStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetLifecyclePolicyPreviewResult& WithStatus(LifecyclePolicyPreviewStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>GetLifecyclePolicyPreview</code> request. When the results of a
     * <code>GetLifecyclePolicyPreview</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetLifecyclePolicyPreviewResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results of the lifecycle policy preview request.</p>
     */
    inline const Aws::Vector<LifecyclePolicyPreviewResult>& GetPreviewResults() const { return m_previewResults; }
    template<typename PreviewResultsT = Aws::Vector<LifecyclePolicyPreviewResult>>
    void SetPreviewResults(PreviewResultsT&& value) { m_previewResultsHasBeenSet = true; m_previewResults = std::forward<PreviewResultsT>(value); }
    template<typename PreviewResultsT = Aws::Vector<LifecyclePolicyPreviewResult>>
    GetLifecyclePolicyPreviewResult& WithPreviewResults(PreviewResultsT&& value) { SetPreviewResults(std::forward<PreviewResultsT>(value)); return *this;}
    template<typename PreviewResultsT = LifecyclePolicyPreviewResult>
    GetLifecyclePolicyPreviewResult& AddPreviewResults(PreviewResultsT&& value) { m_previewResultsHasBeenSet = true; m_previewResults.emplace_back(std::forward<PreviewResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of images that is returned as a result of the action.</p>
     */
    inline const LifecyclePolicyPreviewSummary& GetSummary() const { return m_summary; }
    template<typename SummaryT = LifecyclePolicyPreviewSummary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = LifecyclePolicyPreviewSummary>
    GetLifecyclePolicyPreviewResult& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLifecyclePolicyPreviewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_lifecyclePolicyText;
    bool m_lifecyclePolicyTextHasBeenSet = false;

    LifecyclePolicyPreviewStatus m_status{LifecyclePolicyPreviewStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<LifecyclePolicyPreviewResult> m_previewResults;
    bool m_previewResultsHasBeenSet = false;

    LifecyclePolicyPreviewSummary m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
