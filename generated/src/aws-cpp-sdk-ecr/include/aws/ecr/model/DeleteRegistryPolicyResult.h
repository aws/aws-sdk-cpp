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
    inline DeleteRegistryPolicyResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline DeleteRegistryPolicyResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline DeleteRegistryPolicyResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The contents of the registry permissions policy that was deleted.</p>
     */
    inline const Aws::String& GetPolicyText() const{ return m_policyText; }

    /**
     * <p>The contents of the registry permissions policy that was deleted.</p>
     */
    inline void SetPolicyText(const Aws::String& value) { m_policyText = value; }

    /**
     * <p>The contents of the registry permissions policy that was deleted.</p>
     */
    inline void SetPolicyText(Aws::String&& value) { m_policyText = std::move(value); }

    /**
     * <p>The contents of the registry permissions policy that was deleted.</p>
     */
    inline void SetPolicyText(const char* value) { m_policyText.assign(value); }

    /**
     * <p>The contents of the registry permissions policy that was deleted.</p>
     */
    inline DeleteRegistryPolicyResult& WithPolicyText(const Aws::String& value) { SetPolicyText(value); return *this;}

    /**
     * <p>The contents of the registry permissions policy that was deleted.</p>
     */
    inline DeleteRegistryPolicyResult& WithPolicyText(Aws::String&& value) { SetPolicyText(std::move(value)); return *this;}

    /**
     * <p>The contents of the registry permissions policy that was deleted.</p>
     */
    inline DeleteRegistryPolicyResult& WithPolicyText(const char* value) { SetPolicyText(value); return *this;}

  private:

    Aws::String m_registryId;

    Aws::String m_policyText;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
