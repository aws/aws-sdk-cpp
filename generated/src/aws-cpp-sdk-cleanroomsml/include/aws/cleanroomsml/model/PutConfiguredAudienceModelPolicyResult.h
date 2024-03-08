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
  class PutConfiguredAudienceModelPolicyResult
  {
  public:
    AWS_CLEANROOMSML_API PutConfiguredAudienceModelPolicyResult();
    AWS_CLEANROOMSML_API PutConfiguredAudienceModelPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API PutConfiguredAudienceModelPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The IAM resource policy.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelPolicy() const{ return m_configuredAudienceModelPolicy; }

    /**
     * <p>The IAM resource policy.</p>
     */
    inline void SetConfiguredAudienceModelPolicy(const Aws::String& value) { m_configuredAudienceModelPolicy = value; }

    /**
     * <p>The IAM resource policy.</p>
     */
    inline void SetConfiguredAudienceModelPolicy(Aws::String&& value) { m_configuredAudienceModelPolicy = std::move(value); }

    /**
     * <p>The IAM resource policy.</p>
     */
    inline void SetConfiguredAudienceModelPolicy(const char* value) { m_configuredAudienceModelPolicy.assign(value); }

    /**
     * <p>The IAM resource policy.</p>
     */
    inline PutConfiguredAudienceModelPolicyResult& WithConfiguredAudienceModelPolicy(const Aws::String& value) { SetConfiguredAudienceModelPolicy(value); return *this;}

    /**
     * <p>The IAM resource policy.</p>
     */
    inline PutConfiguredAudienceModelPolicyResult& WithConfiguredAudienceModelPolicy(Aws::String&& value) { SetConfiguredAudienceModelPolicy(std::move(value)); return *this;}

    /**
     * <p>The IAM resource policy.</p>
     */
    inline PutConfiguredAudienceModelPolicyResult& WithConfiguredAudienceModelPolicy(const char* value) { SetConfiguredAudienceModelPolicy(value); return *this;}


    /**
     * <p>A cryptographic hash of the contents of the policy used to prevent unexpected
     * concurrent modification of the policy.</p>
     */
    inline const Aws::String& GetPolicyHash() const{ return m_policyHash; }

    /**
     * <p>A cryptographic hash of the contents of the policy used to prevent unexpected
     * concurrent modification of the policy.</p>
     */
    inline void SetPolicyHash(const Aws::String& value) { m_policyHash = value; }

    /**
     * <p>A cryptographic hash of the contents of the policy used to prevent unexpected
     * concurrent modification of the policy.</p>
     */
    inline void SetPolicyHash(Aws::String&& value) { m_policyHash = std::move(value); }

    /**
     * <p>A cryptographic hash of the contents of the policy used to prevent unexpected
     * concurrent modification of the policy.</p>
     */
    inline void SetPolicyHash(const char* value) { m_policyHash.assign(value); }

    /**
     * <p>A cryptographic hash of the contents of the policy used to prevent unexpected
     * concurrent modification of the policy.</p>
     */
    inline PutConfiguredAudienceModelPolicyResult& WithPolicyHash(const Aws::String& value) { SetPolicyHash(value); return *this;}

    /**
     * <p>A cryptographic hash of the contents of the policy used to prevent unexpected
     * concurrent modification of the policy.</p>
     */
    inline PutConfiguredAudienceModelPolicyResult& WithPolicyHash(Aws::String&& value) { SetPolicyHash(std::move(value)); return *this;}

    /**
     * <p>A cryptographic hash of the contents of the policy used to prevent unexpected
     * concurrent modification of the policy.</p>
     */
    inline PutConfiguredAudienceModelPolicyResult& WithPolicyHash(const char* value) { SetPolicyHash(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutConfiguredAudienceModelPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutConfiguredAudienceModelPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutConfiguredAudienceModelPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_configuredAudienceModelPolicy;

    Aws::String m_policyHash;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
