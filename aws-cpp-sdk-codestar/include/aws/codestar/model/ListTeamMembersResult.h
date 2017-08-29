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
  class AWS_CODESTAR_API ListTeamMembersResult
  {
  public:
    ListTeamMembersResult();
    ListTeamMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTeamMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of team member objects for the project.</p>
     */
    inline const Aws::Vector<TeamMember>& GetTeamMembers() const{ return m_teamMembers; }

    /**
     * <p>A list of team member objects for the project.</p>
     */
    inline void SetTeamMembers(const Aws::Vector<TeamMember>& value) { m_teamMembers = value; }

    /**
     * <p>A list of team member objects for the project.</p>
     */
    inline void SetTeamMembers(Aws::Vector<TeamMember>&& value) { m_teamMembers = std::move(value); }

    /**
     * <p>A list of team member objects for the project.</p>
     */
    inline ListTeamMembersResult& WithTeamMembers(const Aws::Vector<TeamMember>& value) { SetTeamMembers(value); return *this;}

    /**
     * <p>A list of team member objects for the project.</p>
     */
    inline ListTeamMembersResult& WithTeamMembers(Aws::Vector<TeamMember>&& value) { SetTeamMembers(std::move(value)); return *this;}

    /**
     * <p>A list of team member objects for the project.</p>
     */
    inline ListTeamMembersResult& AddTeamMembers(const TeamMember& value) { m_teamMembers.push_back(value); return *this; }

    /**
     * <p>A list of team member objects for the project.</p>
     */
    inline ListTeamMembersResult& AddTeamMembers(TeamMember&& value) { m_teamMembers.push_back(std::move(value)); return *this; }


    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline ListTeamMembersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline ListTeamMembersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The continuation token to use when requesting the next set of results, if
     * there are more results to be returned.</p>
     */
    inline ListTeamMembersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TeamMember> m_teamMembers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
