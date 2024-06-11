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
    AWS_ECR_API StartLifecyclePolicyPreviewResult();
    AWS_ECR_API StartLifecyclePolicyPreviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API StartLifecyclePolicyPreviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }
    inline StartLifecyclePolicyPreviewResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline StartLifecyclePolicyPreviewResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline StartLifecyclePolicyPreviewResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryName.assign(value); }
    inline StartLifecyclePolicyPreviewResult& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline StartLifecyclePolicyPreviewResult& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline StartLifecyclePolicyPreviewResult& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON repository policy text.</p>
     */
    inline const Aws::String& GetLifecyclePolicyText() const{ return m_lifecyclePolicyText; }
    inline void SetLifecyclePolicyText(const Aws::String& value) { m_lifecyclePolicyText = value; }
    inline void SetLifecyclePolicyText(Aws::String&& value) { m_lifecyclePolicyText = std::move(value); }
    inline void SetLifecyclePolicyText(const char* value) { m_lifecyclePolicyText.assign(value); }
    inline StartLifecyclePolicyPreviewResult& WithLifecyclePolicyText(const Aws::String& value) { SetLifecyclePolicyText(value); return *this;}
    inline StartLifecyclePolicyPreviewResult& WithLifecyclePolicyText(Aws::String&& value) { SetLifecyclePolicyText(std::move(value)); return *this;}
    inline StartLifecyclePolicyPreviewResult& WithLifecyclePolicyText(const char* value) { SetLifecyclePolicyText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the lifecycle policy preview request.</p>
     */
    inline const LifecyclePolicyPreviewStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const LifecyclePolicyPreviewStatus& value) { m_status = value; }
    inline void SetStatus(LifecyclePolicyPreviewStatus&& value) { m_status = std::move(value); }
    inline StartLifecyclePolicyPreviewResult& WithStatus(const LifecyclePolicyPreviewStatus& value) { SetStatus(value); return *this;}
    inline StartLifecyclePolicyPreviewResult& WithStatus(LifecyclePolicyPreviewStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartLifecyclePolicyPreviewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartLifecyclePolicyPreviewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartLifecyclePolicyPreviewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;

    Aws::String m_repositoryName;

    Aws::String m_lifecyclePolicyText;

    LifecyclePolicyPreviewStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
