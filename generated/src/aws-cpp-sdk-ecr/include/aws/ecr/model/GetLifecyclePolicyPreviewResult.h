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
    AWS_ECR_API GetLifecyclePolicyPreviewResult();
    AWS_ECR_API GetLifecyclePolicyPreviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API GetLifecyclePolicyPreviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }
    inline GetLifecyclePolicyPreviewResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline GetLifecyclePolicyPreviewResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline GetLifecyclePolicyPreviewResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryName.assign(value); }
    inline GetLifecyclePolicyPreviewResult& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline GetLifecyclePolicyPreviewResult& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline GetLifecyclePolicyPreviewResult& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON lifecycle policy text.</p>
     */
    inline const Aws::String& GetLifecyclePolicyText() const{ return m_lifecyclePolicyText; }
    inline void SetLifecyclePolicyText(const Aws::String& value) { m_lifecyclePolicyText = value; }
    inline void SetLifecyclePolicyText(Aws::String&& value) { m_lifecyclePolicyText = std::move(value); }
    inline void SetLifecyclePolicyText(const char* value) { m_lifecyclePolicyText.assign(value); }
    inline GetLifecyclePolicyPreviewResult& WithLifecyclePolicyText(const Aws::String& value) { SetLifecyclePolicyText(value); return *this;}
    inline GetLifecyclePolicyPreviewResult& WithLifecyclePolicyText(Aws::String&& value) { SetLifecyclePolicyText(std::move(value)); return *this;}
    inline GetLifecyclePolicyPreviewResult& WithLifecyclePolicyText(const char* value) { SetLifecyclePolicyText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the lifecycle policy preview request.</p>
     */
    inline const LifecyclePolicyPreviewStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const LifecyclePolicyPreviewStatus& value) { m_status = value; }
    inline void SetStatus(LifecyclePolicyPreviewStatus&& value) { m_status = std::move(value); }
    inline GetLifecyclePolicyPreviewResult& WithStatus(const LifecyclePolicyPreviewStatus& value) { SetStatus(value); return *this;}
    inline GetLifecyclePolicyPreviewResult& WithStatus(LifecyclePolicyPreviewStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>GetLifecyclePolicyPreview</code> request. When the results of a
     * <code>GetLifecyclePolicyPreview</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetLifecyclePolicyPreviewResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetLifecyclePolicyPreviewResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetLifecyclePolicyPreviewResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results of the lifecycle policy preview request.</p>
     */
    inline const Aws::Vector<LifecyclePolicyPreviewResult>& GetPreviewResults() const{ return m_previewResults; }
    inline void SetPreviewResults(const Aws::Vector<LifecyclePolicyPreviewResult>& value) { m_previewResults = value; }
    inline void SetPreviewResults(Aws::Vector<LifecyclePolicyPreviewResult>&& value) { m_previewResults = std::move(value); }
    inline GetLifecyclePolicyPreviewResult& WithPreviewResults(const Aws::Vector<LifecyclePolicyPreviewResult>& value) { SetPreviewResults(value); return *this;}
    inline GetLifecyclePolicyPreviewResult& WithPreviewResults(Aws::Vector<LifecyclePolicyPreviewResult>&& value) { SetPreviewResults(std::move(value)); return *this;}
    inline GetLifecyclePolicyPreviewResult& AddPreviewResults(const LifecyclePolicyPreviewResult& value) { m_previewResults.push_back(value); return *this; }
    inline GetLifecyclePolicyPreviewResult& AddPreviewResults(LifecyclePolicyPreviewResult&& value) { m_previewResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of images that is returned as a result of the action.</p>
     */
    inline const LifecyclePolicyPreviewSummary& GetSummary() const{ return m_summary; }
    inline void SetSummary(const LifecyclePolicyPreviewSummary& value) { m_summary = value; }
    inline void SetSummary(LifecyclePolicyPreviewSummary&& value) { m_summary = std::move(value); }
    inline GetLifecyclePolicyPreviewResult& WithSummary(const LifecyclePolicyPreviewSummary& value) { SetSummary(value); return *this;}
    inline GetLifecyclePolicyPreviewResult& WithSummary(LifecyclePolicyPreviewSummary&& value) { SetSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLifecyclePolicyPreviewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLifecyclePolicyPreviewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLifecyclePolicyPreviewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;

    Aws::String m_repositoryName;

    Aws::String m_lifecyclePolicyText;

    LifecyclePolicyPreviewStatus m_status;

    Aws::String m_nextToken;

    Aws::Vector<LifecyclePolicyPreviewResult> m_previewResults;

    LifecyclePolicyPreviewSummary m_summary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
