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


    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline StartLifecyclePolicyPreviewResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline StartLifecyclePolicyPreviewResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline StartLifecyclePolicyPreviewResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The repository name associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryName = value; }

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryName = std::move(value); }

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryName.assign(value); }

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline StartLifecyclePolicyPreviewResult& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline StartLifecyclePolicyPreviewResult& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline StartLifecyclePolicyPreviewResult& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The JSON repository policy text.</p>
     */
    inline const Aws::String& GetLifecyclePolicyText() const{ return m_lifecyclePolicyText; }

    /**
     * <p>The JSON repository policy text.</p>
     */
    inline void SetLifecyclePolicyText(const Aws::String& value) { m_lifecyclePolicyText = value; }

    /**
     * <p>The JSON repository policy text.</p>
     */
    inline void SetLifecyclePolicyText(Aws::String&& value) { m_lifecyclePolicyText = std::move(value); }

    /**
     * <p>The JSON repository policy text.</p>
     */
    inline void SetLifecyclePolicyText(const char* value) { m_lifecyclePolicyText.assign(value); }

    /**
     * <p>The JSON repository policy text.</p>
     */
    inline StartLifecyclePolicyPreviewResult& WithLifecyclePolicyText(const Aws::String& value) { SetLifecyclePolicyText(value); return *this;}

    /**
     * <p>The JSON repository policy text.</p>
     */
    inline StartLifecyclePolicyPreviewResult& WithLifecyclePolicyText(Aws::String&& value) { SetLifecyclePolicyText(std::move(value)); return *this;}

    /**
     * <p>The JSON repository policy text.</p>
     */
    inline StartLifecyclePolicyPreviewResult& WithLifecyclePolicyText(const char* value) { SetLifecyclePolicyText(value); return *this;}


    /**
     * <p>The status of the lifecycle policy preview request.</p>
     */
    inline const LifecyclePolicyPreviewStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the lifecycle policy preview request.</p>
     */
    inline void SetStatus(const LifecyclePolicyPreviewStatus& value) { m_status = value; }

    /**
     * <p>The status of the lifecycle policy preview request.</p>
     */
    inline void SetStatus(LifecyclePolicyPreviewStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the lifecycle policy preview request.</p>
     */
    inline StartLifecyclePolicyPreviewResult& WithStatus(const LifecyclePolicyPreviewStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the lifecycle policy preview request.</p>
     */
    inline StartLifecyclePolicyPreviewResult& WithStatus(LifecyclePolicyPreviewStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_registryId;

    Aws::String m_repositoryName;

    Aws::String m_lifecyclePolicyText;

    LifecyclePolicyPreviewStatus m_status;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
