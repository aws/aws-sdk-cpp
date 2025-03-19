/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class GetLifecyclePolicyResult
  {
  public:
    AWS_ECR_API GetLifecyclePolicyResult() = default;
    AWS_ECR_API GetLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API GetLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    GetLifecyclePolicyResult& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    GetLifecyclePolicyResult& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON lifecycle policy text.</p>
     */
    inline const Aws::String& GetLifecyclePolicyText() const { return m_lifecyclePolicyText; }
    template<typename LifecyclePolicyTextT = Aws::String>
    void SetLifecyclePolicyText(LifecyclePolicyTextT&& value) { m_lifecyclePolicyTextHasBeenSet = true; m_lifecyclePolicyText = std::forward<LifecyclePolicyTextT>(value); }
    template<typename LifecyclePolicyTextT = Aws::String>
    GetLifecyclePolicyResult& WithLifecyclePolicyText(LifecyclePolicyTextT&& value) { SetLifecyclePolicyText(std::forward<LifecyclePolicyTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of the last time that the lifecycle policy was run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastEvaluatedAt() const { return m_lastEvaluatedAt; }
    template<typename LastEvaluatedAtT = Aws::Utils::DateTime>
    void SetLastEvaluatedAt(LastEvaluatedAtT&& value) { m_lastEvaluatedAtHasBeenSet = true; m_lastEvaluatedAt = std::forward<LastEvaluatedAtT>(value); }
    template<typename LastEvaluatedAtT = Aws::Utils::DateTime>
    GetLifecyclePolicyResult& WithLastEvaluatedAt(LastEvaluatedAtT&& value) { SetLastEvaluatedAt(std::forward<LastEvaluatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLifecyclePolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_lifecyclePolicyText;
    bool m_lifecyclePolicyTextHasBeenSet = false;

    Aws::Utils::DateTime m_lastEvaluatedAt{};
    bool m_lastEvaluatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
