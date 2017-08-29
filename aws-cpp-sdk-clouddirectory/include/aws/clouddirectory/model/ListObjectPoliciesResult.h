/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CloudDirectory
{
namespace Model
{
  class AWS_CLOUDDIRECTORY_API ListObjectPoliciesResult
  {
  public:
    ListObjectPoliciesResult();
    ListObjectPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListObjectPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttachedPolicyIds() const{ return m_attachedPolicyIds; }

    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline void SetAttachedPolicyIds(const Aws::Vector<Aws::String>& value) { m_attachedPolicyIds = value; }

    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline void SetAttachedPolicyIds(Aws::Vector<Aws::String>&& value) { m_attachedPolicyIds = std::move(value); }

    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline ListObjectPoliciesResult& WithAttachedPolicyIds(const Aws::Vector<Aws::String>& value) { SetAttachedPolicyIds(value); return *this;}

    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline ListObjectPoliciesResult& WithAttachedPolicyIds(Aws::Vector<Aws::String>&& value) { SetAttachedPolicyIds(std::move(value)); return *this;}

    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline ListObjectPoliciesResult& AddAttachedPolicyIds(const Aws::String& value) { m_attachedPolicyIds.push_back(value); return *this; }

    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline ListObjectPoliciesResult& AddAttachedPolicyIds(Aws::String&& value) { m_attachedPolicyIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline ListObjectPoliciesResult& AddAttachedPolicyIds(const char* value) { m_attachedPolicyIds.push_back(value); return *this; }


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListObjectPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListObjectPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListObjectPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_attachedPolicyIds;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
