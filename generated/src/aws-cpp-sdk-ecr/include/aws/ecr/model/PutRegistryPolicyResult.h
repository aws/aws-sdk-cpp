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
  class PutRegistryPolicyResult
  {
  public:
    AWS_ECR_API PutRegistryPolicyResult();
    AWS_ECR_API PutRegistryPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API PutRegistryPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The registry ID.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The registry ID.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }

    /**
     * <p>The registry ID.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }

    /**
     * <p>The registry ID.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }

    /**
     * <p>The registry ID.</p>
     */
    inline PutRegistryPolicyResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The registry ID.</p>
     */
    inline PutRegistryPolicyResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The registry ID.</p>
     */
    inline PutRegistryPolicyResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The JSON policy text for your registry.</p>
     */
    inline const Aws::String& GetPolicyText() const{ return m_policyText; }

    /**
     * <p>The JSON policy text for your registry.</p>
     */
    inline void SetPolicyText(const Aws::String& value) { m_policyText = value; }

    /**
     * <p>The JSON policy text for your registry.</p>
     */
    inline void SetPolicyText(Aws::String&& value) { m_policyText = std::move(value); }

    /**
     * <p>The JSON policy text for your registry.</p>
     */
    inline void SetPolicyText(const char* value) { m_policyText.assign(value); }

    /**
     * <p>The JSON policy text for your registry.</p>
     */
    inline PutRegistryPolicyResult& WithPolicyText(const Aws::String& value) { SetPolicyText(value); return *this;}

    /**
     * <p>The JSON policy text for your registry.</p>
     */
    inline PutRegistryPolicyResult& WithPolicyText(Aws::String&& value) { SetPolicyText(std::move(value)); return *this;}

    /**
     * <p>The JSON policy text for your registry.</p>
     */
    inline PutRegistryPolicyResult& WithPolicyText(const char* value) { SetPolicyText(value); return *this;}

  private:

    Aws::String m_registryId;

    Aws::String m_policyText;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
