/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class GetConfiguredAudienceModelPolicyResult
  {
  public:
    AWS_CLEANROOMSML_API GetConfiguredAudienceModelPolicyResult();
    AWS_CLEANROOMSML_API GetConfiguredAudienceModelPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API GetConfiguredAudienceModelPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelArn() const{ return m_configuredAudienceModelArn; }
    inline void SetConfiguredAudienceModelArn(const Aws::String& value) { m_configuredAudienceModelArn = value; }
    inline void SetConfiguredAudienceModelArn(Aws::String&& value) { m_configuredAudienceModelArn = std::move(value); }
    inline void SetConfiguredAudienceModelArn(const char* value) { m_configuredAudienceModelArn.assign(value); }
    inline GetConfiguredAudienceModelPolicyResult& WithConfiguredAudienceModelArn(const Aws::String& value) { SetConfiguredAudienceModelArn(value); return *this;}
    inline GetConfiguredAudienceModelPolicyResult& WithConfiguredAudienceModelArn(Aws::String&& value) { SetConfiguredAudienceModelArn(std::move(value)); return *this;}
    inline GetConfiguredAudienceModelPolicyResult& WithConfiguredAudienceModelArn(const char* value) { SetConfiguredAudienceModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configured audience model policy. This is a JSON IAM resource policy.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelPolicy() const{ return m_configuredAudienceModelPolicy; }
    inline void SetConfiguredAudienceModelPolicy(const Aws::String& value) { m_configuredAudienceModelPolicy = value; }
    inline void SetConfiguredAudienceModelPolicy(Aws::String&& value) { m_configuredAudienceModelPolicy = std::move(value); }
    inline void SetConfiguredAudienceModelPolicy(const char* value) { m_configuredAudienceModelPolicy.assign(value); }
    inline GetConfiguredAudienceModelPolicyResult& WithConfiguredAudienceModelPolicy(const Aws::String& value) { SetConfiguredAudienceModelPolicy(value); return *this;}
    inline GetConfiguredAudienceModelPolicyResult& WithConfiguredAudienceModelPolicy(Aws::String&& value) { SetConfiguredAudienceModelPolicy(std::move(value)); return *this;}
    inline GetConfiguredAudienceModelPolicyResult& WithConfiguredAudienceModelPolicy(const char* value) { SetConfiguredAudienceModelPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A cryptographic hash of the contents of the policy used to prevent unexpected
     * concurrent modification of the policy.</p>
     */
    inline const Aws::String& GetPolicyHash() const{ return m_policyHash; }
    inline void SetPolicyHash(const Aws::String& value) { m_policyHash = value; }
    inline void SetPolicyHash(Aws::String&& value) { m_policyHash = std::move(value); }
    inline void SetPolicyHash(const char* value) { m_policyHash.assign(value); }
    inline GetConfiguredAudienceModelPolicyResult& WithPolicyHash(const Aws::String& value) { SetPolicyHash(value); return *this;}
    inline GetConfiguredAudienceModelPolicyResult& WithPolicyHash(Aws::String&& value) { SetPolicyHash(std::move(value)); return *this;}
    inline GetConfiguredAudienceModelPolicyResult& WithPolicyHash(const char* value) { SetPolicyHash(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetConfiguredAudienceModelPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetConfiguredAudienceModelPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetConfiguredAudienceModelPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_configuredAudienceModelArn;

    Aws::String m_configuredAudienceModelPolicy;

    Aws::String m_policyHash;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
