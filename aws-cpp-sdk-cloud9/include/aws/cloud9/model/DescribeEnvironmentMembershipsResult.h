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
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloud9/model/EnvironmentMember.h>
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
namespace Cloud9
{
namespace Model
{
  class AWS_CLOUD9_API DescribeEnvironmentMembershipsResult
  {
  public:
    DescribeEnvironmentMembershipsResult();
    DescribeEnvironmentMembershipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEnvironmentMembershipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the environment members for the environment.</p>
     */
    inline const Aws::Vector<EnvironmentMember>& GetMemberships() const{ return m_memberships; }

    /**
     * <p>Information about the environment members for the environment.</p>
     */
    inline void SetMemberships(const Aws::Vector<EnvironmentMember>& value) { m_memberships = value; }

    /**
     * <p>Information about the environment members for the environment.</p>
     */
    inline void SetMemberships(Aws::Vector<EnvironmentMember>&& value) { m_memberships = std::move(value); }

    /**
     * <p>Information about the environment members for the environment.</p>
     */
    inline DescribeEnvironmentMembershipsResult& WithMemberships(const Aws::Vector<EnvironmentMember>& value) { SetMemberships(value); return *this;}

    /**
     * <p>Information about the environment members for the environment.</p>
     */
    inline DescribeEnvironmentMembershipsResult& WithMemberships(Aws::Vector<EnvironmentMember>&& value) { SetMemberships(std::move(value)); return *this;}

    /**
     * <p>Information about the environment members for the environment.</p>
     */
    inline DescribeEnvironmentMembershipsResult& AddMemberships(const EnvironmentMember& value) { m_memberships.push_back(value); return *this; }

    /**
     * <p>Information about the environment members for the environment.</p>
     */
    inline DescribeEnvironmentMembershipsResult& AddMemberships(EnvironmentMember&& value) { m_memberships.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are more than 25 items in the list, only the first 25 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more than 25 items in the list, only the first 25 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more than 25 items in the list, only the first 25 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more than 25 items in the list, only the first 25 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more than 25 items in the list, only the first 25 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline DescribeEnvironmentMembershipsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more than 25 items in the list, only the first 25 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline DescribeEnvironmentMembershipsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more than 25 items in the list, only the first 25 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline DescribeEnvironmentMembershipsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EnvironmentMember> m_memberships;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
