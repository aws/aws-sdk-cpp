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
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/MemberSummary.h>
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
namespace ManagedBlockchain
{
namespace Model
{
  class AWS_MANAGEDBLOCKCHAIN_API ListMembersResult
  {
  public:
    ListMembersResult();
    ListMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>MemberSummary</code> objects. Each object contains details
     * about a network member.</p>
     */
    inline const Aws::Vector<MemberSummary>& GetMembers() const{ return m_members; }

    /**
     * <p>An array of <code>MemberSummary</code> objects. Each object contains details
     * about a network member.</p>
     */
    inline void SetMembers(const Aws::Vector<MemberSummary>& value) { m_members = value; }

    /**
     * <p>An array of <code>MemberSummary</code> objects. Each object contains details
     * about a network member.</p>
     */
    inline void SetMembers(Aws::Vector<MemberSummary>&& value) { m_members = std::move(value); }

    /**
     * <p>An array of <code>MemberSummary</code> objects. Each object contains details
     * about a network member.</p>
     */
    inline ListMembersResult& WithMembers(const Aws::Vector<MemberSummary>& value) { SetMembers(value); return *this;}

    /**
     * <p>An array of <code>MemberSummary</code> objects. Each object contains details
     * about a network member.</p>
     */
    inline ListMembersResult& WithMembers(Aws::Vector<MemberSummary>&& value) { SetMembers(std::move(value)); return *this;}

    /**
     * <p>An array of <code>MemberSummary</code> objects. Each object contains details
     * about a network member.</p>
     */
    inline ListMembersResult& AddMembers(const MemberSummary& value) { m_members.push_back(value); return *this; }

    /**
     * <p>An array of <code>MemberSummary</code> objects. Each object contains details
     * about a network member.</p>
     */
    inline ListMembersResult& AddMembers(MemberSummary&& value) { m_members.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListMembersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListMembersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListMembersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MemberSummary> m_members;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
