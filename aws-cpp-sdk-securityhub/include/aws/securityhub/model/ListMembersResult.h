/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/Member.h>
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
namespace SecurityHub
{
namespace Model
{
  class ListMembersResult
  {
  public:
    AWS_SECURITYHUB_API ListMembersResult();
    AWS_SECURITYHUB_API ListMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Member details returned by the operation.</p>
     */
    inline const Aws::Vector<Member>& GetMembers() const{ return m_members; }

    /**
     * <p>Member details returned by the operation.</p>
     */
    inline void SetMembers(const Aws::Vector<Member>& value) { m_members = value; }

    /**
     * <p>Member details returned by the operation.</p>
     */
    inline void SetMembers(Aws::Vector<Member>&& value) { m_members = std::move(value); }

    /**
     * <p>Member details returned by the operation.</p>
     */
    inline ListMembersResult& WithMembers(const Aws::Vector<Member>& value) { SetMembers(value); return *this;}

    /**
     * <p>Member details returned by the operation.</p>
     */
    inline ListMembersResult& WithMembers(Aws::Vector<Member>&& value) { SetMembers(std::move(value)); return *this;}

    /**
     * <p>Member details returned by the operation.</p>
     */
    inline ListMembersResult& AddMembers(const Member& value) { m_members.push_back(value); return *this; }

    /**
     * <p>Member details returned by the operation.</p>
     */
    inline ListMembersResult& AddMembers(Member&& value) { m_members.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline ListMembersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline ListMembersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline ListMembersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Member> m_members;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
