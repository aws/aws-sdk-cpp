/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/ProjectMember.h>
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
namespace DataZone
{
namespace Model
{
  class ListProjectMembershipsResult
  {
  public:
    AWS_DATAZONE_API ListProjectMembershipsResult();
    AWS_DATAZONE_API ListProjectMembershipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API ListProjectMembershipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The members of the project.</p>
     */
    inline const Aws::Vector<ProjectMember>& GetMembers() const{ return m_members; }

    /**
     * <p>The members of the project.</p>
     */
    inline void SetMembers(const Aws::Vector<ProjectMember>& value) { m_members = value; }

    /**
     * <p>The members of the project.</p>
     */
    inline void SetMembers(Aws::Vector<ProjectMember>&& value) { m_members = std::move(value); }

    /**
     * <p>The members of the project.</p>
     */
    inline ListProjectMembershipsResult& WithMembers(const Aws::Vector<ProjectMember>& value) { SetMembers(value); return *this;}

    /**
     * <p>The members of the project.</p>
     */
    inline ListProjectMembershipsResult& WithMembers(Aws::Vector<ProjectMember>&& value) { SetMembers(std::move(value)); return *this;}

    /**
     * <p>The members of the project.</p>
     */
    inline ListProjectMembershipsResult& AddMembers(const ProjectMember& value) { m_members.push_back(value); return *this; }

    /**
     * <p>The members of the project.</p>
     */
    inline ListProjectMembershipsResult& AddMembers(ProjectMember&& value) { m_members.push_back(std::move(value)); return *this; }


    /**
     * <p>When the number of memberships is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of memberships, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the number of memberships is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of memberships, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When the number of memberships is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of memberships, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When the number of memberships is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of memberships, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When the number of memberships is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of memberships, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline ListProjectMembershipsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the number of memberships is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of memberships, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline ListProjectMembershipsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the number of memberships is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of memberships, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListProjectMemberships</code> to list the next set of memberships.</p>
     */
    inline ListProjectMembershipsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListProjectMembershipsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListProjectMembershipsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListProjectMembershipsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ProjectMember> m_members;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
