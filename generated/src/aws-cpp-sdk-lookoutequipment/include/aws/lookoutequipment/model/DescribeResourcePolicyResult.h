/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class DescribeResourcePolicyResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DescribeResourcePolicyResult();
    AWS_LOOKOUTEQUIPMENT_API DescribeResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline const Aws::String& GetPolicyRevisionId() const{ return m_policyRevisionId; }

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline void SetPolicyRevisionId(const Aws::String& value) { m_policyRevisionId = value; }

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline void SetPolicyRevisionId(Aws::String&& value) { m_policyRevisionId = std::move(value); }

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline void SetPolicyRevisionId(const char* value) { m_policyRevisionId.assign(value); }

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline DescribeResourcePolicyResult& WithPolicyRevisionId(const Aws::String& value) { SetPolicyRevisionId(value); return *this;}

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline DescribeResourcePolicyResult& WithPolicyRevisionId(Aws::String&& value) { SetPolicyRevisionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline DescribeResourcePolicyResult& WithPolicyRevisionId(const char* value) { SetPolicyRevisionId(value); return *this;}


    /**
     * <p>The resource policy in a JSON-formatted string.</p>
     */
    inline const Aws::String& GetResourcePolicy() const{ return m_resourcePolicy; }

    /**
     * <p>The resource policy in a JSON-formatted string.</p>
     */
    inline void SetResourcePolicy(const Aws::String& value) { m_resourcePolicy = value; }

    /**
     * <p>The resource policy in a JSON-formatted string.</p>
     */
    inline void SetResourcePolicy(Aws::String&& value) { m_resourcePolicy = std::move(value); }

    /**
     * <p>The resource policy in a JSON-formatted string.</p>
     */
    inline void SetResourcePolicy(const char* value) { m_resourcePolicy.assign(value); }

    /**
     * <p>The resource policy in a JSON-formatted string.</p>
     */
    inline DescribeResourcePolicyResult& WithResourcePolicy(const Aws::String& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p>The resource policy in a JSON-formatted string.</p>
     */
    inline DescribeResourcePolicyResult& WithResourcePolicy(Aws::String&& value) { SetResourcePolicy(std::move(value)); return *this;}

    /**
     * <p>The resource policy in a JSON-formatted string.</p>
     */
    inline DescribeResourcePolicyResult& WithResourcePolicy(const char* value) { SetResourcePolicy(value); return *this;}


    /**
     * <p>The time when the resource policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the resource policy was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time when the resource policy was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time when the resource policy was created.</p>
     */
    inline DescribeResourcePolicyResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the resource policy was created.</p>
     */
    inline DescribeResourcePolicyResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time when the resource policy was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time when the resource policy was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The time when the resource policy was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time when the resource policy was last modified.</p>
     */
    inline DescribeResourcePolicyResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time when the resource policy was last modified.</p>
     */
    inline DescribeResourcePolicyResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeResourcePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeResourcePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeResourcePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_policyRevisionId;

    Aws::String m_resourcePolicy;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
