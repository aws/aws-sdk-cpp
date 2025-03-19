/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/LifecyclePolicyPreviewStatus.h>
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
  class StartLifecyclePolicyPreviewResult
  {
  public:
    AWS_ECR_API StartLifecyclePolicyPreviewResult() = default;
    AWS_ECR_API StartLifecyclePolicyPreviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API StartLifecyclePolicyPreviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    StartLifecyclePolicyPreviewResult& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    StartLifecyclePolicyPreviewResult& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON repository policy text.</p>
     */
    inline const Aws::String& GetLifecyclePolicyText() const { return m_lifecyclePolicyText; }
    template<typename LifecyclePolicyTextT = Aws::String>
    void SetLifecyclePolicyText(LifecyclePolicyTextT&& value) { m_lifecyclePolicyTextHasBeenSet = true; m_lifecyclePolicyText = std::forward<LifecyclePolicyTextT>(value); }
    template<typename LifecyclePolicyTextT = Aws::String>
    StartLifecyclePolicyPreviewResult& WithLifecyclePolicyText(LifecyclePolicyTextT&& value) { SetLifecyclePolicyText(std::forward<LifecyclePolicyTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the lifecycle policy preview request.</p>
     */
    inline LifecyclePolicyPreviewStatus GetStatus() const { return m_status; }
    inline void SetStatus(LifecyclePolicyPreviewStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StartLifecyclePolicyPreviewResult& WithStatus(LifecyclePolicyPreviewStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartLifecyclePolicyPreviewResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
