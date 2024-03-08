/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/Member.h>
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
namespace GuardDuty
{
namespace Model
{
  class ListMembersResult
  {
  public:
    AWS_GUARDDUTY_API ListMembersResult();
    AWS_GUARDDUTY_API ListMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API ListMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of members.</p>  <p>The values for <code>email</code> and
     * <code>invitedAt</code> are available only if the member accounts are added by
     * invitation.</p> 
     */
    inline const Aws::Vector<Member>& GetMembers() const{ return m_members; }

    /**
     * <p>A list of members.</p>  <p>The values for <code>email</code> and
     * <code>invitedAt</code> are available only if the member accounts are added by
     * invitation.</p> 
     */
    inline void SetMembers(const Aws::Vector<Member>& value) { m_members = value; }

    /**
     * <p>A list of members.</p>  <p>The values for <code>email</code> and
     * <code>invitedAt</code> are available only if the member accounts are added by
     * invitation.</p> 
     */
    inline void SetMembers(Aws::Vector<Member>&& value) { m_members = std::move(value); }

    /**
     * <p>A list of members.</p>  <p>The values for <code>email</code> and
     * <code>invitedAt</code> are available only if the member accounts are added by
     * invitation.</p> 
     */
    inline ListMembersResult& WithMembers(const Aws::Vector<Member>& value) { SetMembers(value); return *this;}

    /**
     * <p>A list of members.</p>  <p>The values for <code>email</code> and
     * <code>invitedAt</code> are available only if the member accounts are added by
     * invitation.</p> 
     */
    inline ListMembersResult& WithMembers(Aws::Vector<Member>&& value) { SetMembers(std::move(value)); return *this;}

    /**
     * <p>A list of members.</p>  <p>The values for <code>email</code> and
     * <code>invitedAt</code> are available only if the member accounts are added by
     * invitation.</p> 
     */
    inline ListMembersResult& AddMembers(const Member& value) { m_members.push_back(value); return *this; }

    /**
     * <p>A list of members.</p>  <p>The values for <code>email</code> and
     * <code>invitedAt</code> are available only if the member accounts are added by
     * invitation.</p> 
     */
    inline ListMembersResult& AddMembers(Member&& value) { m_members.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListMembersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListMembersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListMembersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMembersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMembersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMembersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Member> m_members;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
