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
  class GetRegistryPolicyResult
  {
  public:
    AWS_ECR_API GetRegistryPolicyResult();
    AWS_ECR_API GetRegistryPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API GetRegistryPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the registry.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The ID of the registry.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }

    /**
     * <p>The ID of the registry.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }

    /**
     * <p>The ID of the registry.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }

    /**
     * <p>The ID of the registry.</p>
     */
    inline GetRegistryPolicyResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The ID of the registry.</p>
     */
    inline GetRegistryPolicyResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the registry.</p>
     */
    inline GetRegistryPolicyResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The JSON text of the permissions policy for a registry.</p>
     */
    inline const Aws::String& GetPolicyText() const{ return m_policyText; }

    /**
     * <p>The JSON text of the permissions policy for a registry.</p>
     */
    inline void SetPolicyText(const Aws::String& value) { m_policyText = value; }

    /**
     * <p>The JSON text of the permissions policy for a registry.</p>
     */
    inline void SetPolicyText(Aws::String&& value) { m_policyText = std::move(value); }

    /**
     * <p>The JSON text of the permissions policy for a registry.</p>
     */
    inline void SetPolicyText(const char* value) { m_policyText.assign(value); }

    /**
     * <p>The JSON text of the permissions policy for a registry.</p>
     */
    inline GetRegistryPolicyResult& WithPolicyText(const Aws::String& value) { SetPolicyText(value); return *this;}

    /**
     * <p>The JSON text of the permissions policy for a registry.</p>
     */
    inline GetRegistryPolicyResult& WithPolicyText(Aws::String&& value) { SetPolicyText(std::move(value)); return *this;}

    /**
     * <p>The JSON text of the permissions policy for a registry.</p>
     */
    inline GetRegistryPolicyResult& WithPolicyText(const char* value) { SetPolicyText(value); return *this;}

  private:

    Aws::String m_registryId;

    Aws::String m_policyText;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
