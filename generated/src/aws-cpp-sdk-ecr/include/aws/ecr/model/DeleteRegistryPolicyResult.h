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
  class DeleteRegistryPolicyResult
  {
  public:
    AWS_ECR_API DeleteRegistryPolicyResult();
    AWS_ECR_API DeleteRegistryPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API DeleteRegistryPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }
    inline DeleteRegistryPolicyResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline DeleteRegistryPolicyResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline DeleteRegistryPolicyResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the registry permissions policy that was deleted.</p>
     */
    inline const Aws::String& GetPolicyText() const{ return m_policyText; }
    inline void SetPolicyText(const Aws::String& value) { m_policyText = value; }
    inline void SetPolicyText(Aws::String&& value) { m_policyText = std::move(value); }
    inline void SetPolicyText(const char* value) { m_policyText.assign(value); }
    inline DeleteRegistryPolicyResult& WithPolicyText(const Aws::String& value) { SetPolicyText(value); return *this;}
    inline DeleteRegistryPolicyResult& WithPolicyText(Aws::String&& value) { SetPolicyText(std::move(value)); return *this;}
    inline DeleteRegistryPolicyResult& WithPolicyText(const char* value) { SetPolicyText(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteRegistryPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteRegistryPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteRegistryPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;

    Aws::String m_policyText;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
