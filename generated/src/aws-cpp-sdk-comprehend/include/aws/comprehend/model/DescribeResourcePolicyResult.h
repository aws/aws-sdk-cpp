/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Comprehend
{
namespace Model
{
  class DescribeResourcePolicyResult
  {
  public:
    AWS_COMPREHEND_API DescribeResourcePolicyResult();
    AWS_COMPREHEND_API DescribeResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The JSON body of the resource-based policy.</p>
     */
    inline const Aws::String& GetResourcePolicy() const{ return m_resourcePolicy; }

    /**
     * <p>The JSON body of the resource-based policy.</p>
     */
    inline void SetResourcePolicy(const Aws::String& value) { m_resourcePolicy = value; }

    /**
     * <p>The JSON body of the resource-based policy.</p>
     */
    inline void SetResourcePolicy(Aws::String&& value) { m_resourcePolicy = std::move(value); }

    /**
     * <p>The JSON body of the resource-based policy.</p>
     */
    inline void SetResourcePolicy(const char* value) { m_resourcePolicy.assign(value); }

    /**
     * <p>The JSON body of the resource-based policy.</p>
     */
    inline DescribeResourcePolicyResult& WithResourcePolicy(const Aws::String& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p>The JSON body of the resource-based policy.</p>
     */
    inline DescribeResourcePolicyResult& WithResourcePolicy(Aws::String&& value) { SetResourcePolicy(std::move(value)); return *this;}

    /**
     * <p>The JSON body of the resource-based policy.</p>
     */
    inline DescribeResourcePolicyResult& WithResourcePolicy(const char* value) { SetResourcePolicy(value); return *this;}


    /**
     * <p>The time at which the policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the policy was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time at which the policy was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time at which the policy was created.</p>
     */
    inline DescribeResourcePolicyResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the policy was created.</p>
     */
    inline DescribeResourcePolicyResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the policy was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time at which the policy was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The time at which the policy was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time at which the policy was last modified.</p>
     */
    inline DescribeResourcePolicyResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time at which the policy was last modified.</p>
     */
    inline DescribeResourcePolicyResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The revision ID of the policy. Each time you modify a policy, Amazon
     * Comprehend assigns a new revision ID, and it deletes the prior version of the
     * policy.</p>
     */
    inline const Aws::String& GetPolicyRevisionId() const{ return m_policyRevisionId; }

    /**
     * <p>The revision ID of the policy. Each time you modify a policy, Amazon
     * Comprehend assigns a new revision ID, and it deletes the prior version of the
     * policy.</p>
     */
    inline void SetPolicyRevisionId(const Aws::String& value) { m_policyRevisionId = value; }

    /**
     * <p>The revision ID of the policy. Each time you modify a policy, Amazon
     * Comprehend assigns a new revision ID, and it deletes the prior version of the
     * policy.</p>
     */
    inline void SetPolicyRevisionId(Aws::String&& value) { m_policyRevisionId = std::move(value); }

    /**
     * <p>The revision ID of the policy. Each time you modify a policy, Amazon
     * Comprehend assigns a new revision ID, and it deletes the prior version of the
     * policy.</p>
     */
    inline void SetPolicyRevisionId(const char* value) { m_policyRevisionId.assign(value); }

    /**
     * <p>The revision ID of the policy. Each time you modify a policy, Amazon
     * Comprehend assigns a new revision ID, and it deletes the prior version of the
     * policy.</p>
     */
    inline DescribeResourcePolicyResult& WithPolicyRevisionId(const Aws::String& value) { SetPolicyRevisionId(value); return *this;}

    /**
     * <p>The revision ID of the policy. Each time you modify a policy, Amazon
     * Comprehend assigns a new revision ID, and it deletes the prior version of the
     * policy.</p>
     */
    inline DescribeResourcePolicyResult& WithPolicyRevisionId(Aws::String&& value) { SetPolicyRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision ID of the policy. Each time you modify a policy, Amazon
     * Comprehend assigns a new revision ID, and it deletes the prior version of the
     * policy.</p>
     */
    inline DescribeResourcePolicyResult& WithPolicyRevisionId(const char* value) { SetPolicyRevisionId(value); return *this;}

  private:

    Aws::String m_resourcePolicy;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_policyRevisionId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
