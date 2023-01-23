/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/Member.h>
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
namespace Macie2
{
namespace Model
{
  class ListMembersResult
  {
  public:
    AWS_MACIE2_API ListMembersResult();
    AWS_MACIE2_API ListMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API ListMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects, one for each account that's associated with the
     * administrator account and matches the criteria specified in the request.</p>
     */
    inline const Aws::Vector<Member>& GetMembers() const{ return m_members; }

    /**
     * <p>An array of objects, one for each account that's associated with the
     * administrator account and matches the criteria specified in the request.</p>
     */
    inline void SetMembers(const Aws::Vector<Member>& value) { m_members = value; }

    /**
     * <p>An array of objects, one for each account that's associated with the
     * administrator account and matches the criteria specified in the request.</p>
     */
    inline void SetMembers(Aws::Vector<Member>&& value) { m_members = std::move(value); }

    /**
     * <p>An array of objects, one for each account that's associated with the
     * administrator account and matches the criteria specified in the request.</p>
     */
    inline ListMembersResult& WithMembers(const Aws::Vector<Member>& value) { SetMembers(value); return *this;}

    /**
     * <p>An array of objects, one for each account that's associated with the
     * administrator account and matches the criteria specified in the request.</p>
     */
    inline ListMembersResult& WithMembers(Aws::Vector<Member>&& value) { SetMembers(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each account that's associated with the
     * administrator account and matches the criteria specified in the request.</p>
     */
    inline ListMembersResult& AddMembers(const Member& value) { m_members.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each account that's associated with the
     * administrator account and matches the criteria specified in the request.</p>
     */
    inline ListMembersResult& AddMembers(Member&& value) { m_members.push_back(std::move(value)); return *this; }


    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListMembersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListMembersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListMembersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Member> m_members;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
