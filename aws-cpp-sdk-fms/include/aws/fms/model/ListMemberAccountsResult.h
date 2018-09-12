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
#include <aws/fms/FMS_EXPORTS.h>
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
namespace FMS
{
namespace Model
{
  class AWS_FMS_API ListMemberAccountsResult
  {
  public:
    ListMemberAccountsResult();
    ListMemberAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListMemberAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of account IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemberAccounts() const{ return m_memberAccounts; }

    /**
     * <p>An array of account IDs.</p>
     */
    inline void SetMemberAccounts(const Aws::Vector<Aws::String>& value) { m_memberAccounts = value; }

    /**
     * <p>An array of account IDs.</p>
     */
    inline void SetMemberAccounts(Aws::Vector<Aws::String>&& value) { m_memberAccounts = std::move(value); }

    /**
     * <p>An array of account IDs.</p>
     */
    inline ListMemberAccountsResult& WithMemberAccounts(const Aws::Vector<Aws::String>& value) { SetMemberAccounts(value); return *this;}

    /**
     * <p>An array of account IDs.</p>
     */
    inline ListMemberAccountsResult& WithMemberAccounts(Aws::Vector<Aws::String>&& value) { SetMemberAccounts(std::move(value)); return *this;}

    /**
     * <p>An array of account IDs.</p>
     */
    inline ListMemberAccountsResult& AddMemberAccounts(const Aws::String& value) { m_memberAccounts.push_back(value); return *this; }

    /**
     * <p>An array of account IDs.</p>
     */
    inline ListMemberAccountsResult& AddMemberAccounts(Aws::String&& value) { m_memberAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of account IDs.</p>
     */
    inline ListMemberAccountsResult& AddMemberAccounts(const char* value) { m_memberAccounts.push_back(value); return *this; }


    /**
     * <p>If you have more member account IDs than the number that you specified for
     * <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more IDs, submit another
     * <code>ListMemberAccounts</code> request, and specify the <code>NextToken</code>
     * value from the response in the <code>NextToken</code> value in the next
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you have more member account IDs than the number that you specified for
     * <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more IDs, submit another
     * <code>ListMemberAccounts</code> request, and specify the <code>NextToken</code>
     * value from the response in the <code>NextToken</code> value in the next
     * request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If you have more member account IDs than the number that you specified for
     * <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more IDs, submit another
     * <code>ListMemberAccounts</code> request, and specify the <code>NextToken</code>
     * value from the response in the <code>NextToken</code> value in the next
     * request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If you have more member account IDs than the number that you specified for
     * <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more IDs, submit another
     * <code>ListMemberAccounts</code> request, and specify the <code>NextToken</code>
     * value from the response in the <code>NextToken</code> value in the next
     * request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If you have more member account IDs than the number that you specified for
     * <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more IDs, submit another
     * <code>ListMemberAccounts</code> request, and specify the <code>NextToken</code>
     * value from the response in the <code>NextToken</code> value in the next
     * request.</p>
     */
    inline ListMemberAccountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you have more member account IDs than the number that you specified for
     * <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more IDs, submit another
     * <code>ListMemberAccounts</code> request, and specify the <code>NextToken</code>
     * value from the response in the <code>NextToken</code> value in the next
     * request.</p>
     */
    inline ListMemberAccountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you have more member account IDs than the number that you specified for
     * <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more IDs, submit another
     * <code>ListMemberAccounts</code> request, and specify the <code>NextToken</code>
     * value from the response in the <code>NextToken</code> value in the next
     * request.</p>
     */
    inline ListMemberAccountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_memberAccounts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
