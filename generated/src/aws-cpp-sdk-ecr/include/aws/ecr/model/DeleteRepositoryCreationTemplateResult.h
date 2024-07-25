/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/RepositoryCreationTemplate.h>
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
  class DeleteRepositoryCreationTemplateResult
  {
  public:
    AWS_ECR_API DeleteRepositoryCreationTemplateResult();
    AWS_ECR_API DeleteRepositoryCreationTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API DeleteRepositoryCreationTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }
    inline DeleteRepositoryCreationTemplateResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline DeleteRepositoryCreationTemplateResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline DeleteRepositoryCreationTemplateResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the repository creation template that was deleted.</p>
     */
    inline const RepositoryCreationTemplate& GetRepositoryCreationTemplate() const{ return m_repositoryCreationTemplate; }
    inline void SetRepositoryCreationTemplate(const RepositoryCreationTemplate& value) { m_repositoryCreationTemplate = value; }
    inline void SetRepositoryCreationTemplate(RepositoryCreationTemplate&& value) { m_repositoryCreationTemplate = std::move(value); }
    inline DeleteRepositoryCreationTemplateResult& WithRepositoryCreationTemplate(const RepositoryCreationTemplate& value) { SetRepositoryCreationTemplate(value); return *this;}
    inline DeleteRepositoryCreationTemplateResult& WithRepositoryCreationTemplate(RepositoryCreationTemplate&& value) { SetRepositoryCreationTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteRepositoryCreationTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteRepositoryCreationTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteRepositoryCreationTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;

    RepositoryCreationTemplate m_repositoryCreationTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
