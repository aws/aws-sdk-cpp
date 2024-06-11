﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar/model/TeamMember.h>
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
namespace CodeStar
{
namespace Model
{
  class ListTeamMembersResult
  {
  public:
    AWS_CODESTAR_API ListTeamMembersResult();
    AWS_CODESTAR_API ListTeamMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTAR_API ListTeamMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of team member objects for the project.</p>
     */
    inline const Aws::Vector<TeamMember>& GetTeamMembers() const{ return m_teamMembers; }
    inline void SetTeamMembers(const Aws::Vector<TeamMember>& value) { m_teamMembers = value; }
    inline void SetTeamMembers(Aws::Vector<TeamMember>&& value) { m_teamMembers = std::move(value); }
    inline ListTeamMembersResult& WithTeamMembers(const Aws::Vector<TeamMember>& value) { SetTeamMembers(value); return *this;}
    inline ListTeamMembersResult& WithTeamMembers(Aws::Vector<TeamMember>&& value) { SetTeamMembers(std::move(value)); return *this;}
    inline ListTeamMembersResult& AddTeamMembers(const TeamMember& value) { m_teamMembers.push_back(value); return *this; }
    inline ListTeamMembersResult& AddTeamMembers(TeamMember&& value) { m_teamMembers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTeamMembersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTeamMembersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTeamMembersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTeamMembersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTeamMembersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTeamMembersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TeamMember> m_teamMembers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
