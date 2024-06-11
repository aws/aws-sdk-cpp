/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class SetRepositoryPolicyResult
  {
  public:
    AWS_ECR_API SetRepositoryPolicyResult();
    AWS_ECR_API SetRepositoryPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API SetRepositoryPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }
    inline SetRepositoryPolicyResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline SetRepositoryPolicyResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline SetRepositoryPolicyResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryName.assign(value); }
    inline SetRepositoryPolicyResult& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline SetRepositoryPolicyResult& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline SetRepositoryPolicyResult& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON repository policy text applied to the repository.</p>
     */
    inline const Aws::String& GetPolicyText() const{ return m_policyText; }
    inline void SetPolicyText(const Aws::String& value) { m_policyText = value; }
    inline void SetPolicyText(Aws::String&& value) { m_policyText = std::move(value); }
    inline void SetPolicyText(const char* value) { m_policyText.assign(value); }
    inline SetRepositoryPolicyResult& WithPolicyText(const Aws::String& value) { SetPolicyText(value); return *this;}
    inline SetRepositoryPolicyResult& WithPolicyText(Aws::String&& value) { SetPolicyText(std::move(value)); return *this;}
    inline SetRepositoryPolicyResult& WithPolicyText(const char* value) { SetPolicyText(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SetRepositoryPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SetRepositoryPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SetRepositoryPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;

    Aws::String m_repositoryName;

    Aws::String m_policyText;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
