/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/MemberDetail.h>
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
namespace Detective
{
namespace Model
{
  class ListMembersResult
  {
  public:
    AWS_DETECTIVE_API ListMembersResult();
    AWS_DETECTIVE_API ListMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API ListMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of member accounts in the behavior graph.</p> <p>For invited
     * accounts, the results include member accounts that did not pass verification and
     * member accounts that have not yet accepted the invitation to the behavior graph.
     * The results do not include member accounts that were removed from the behavior
     * graph.</p> <p>For the organization behavior graph, the results do not include
     * organization accounts that the Detective administrator account has not enabled
     * as member accounts.</p>
     */
    inline const Aws::Vector<MemberDetail>& GetMemberDetails() const{ return m_memberDetails; }

    /**
     * <p>The list of member accounts in the behavior graph.</p> <p>For invited
     * accounts, the results include member accounts that did not pass verification and
     * member accounts that have not yet accepted the invitation to the behavior graph.
     * The results do not include member accounts that were removed from the behavior
     * graph.</p> <p>For the organization behavior graph, the results do not include
     * organization accounts that the Detective administrator account has not enabled
     * as member accounts.</p>
     */
    inline void SetMemberDetails(const Aws::Vector<MemberDetail>& value) { m_memberDetails = value; }

    /**
     * <p>The list of member accounts in the behavior graph.</p> <p>For invited
     * accounts, the results include member accounts that did not pass verification and
     * member accounts that have not yet accepted the invitation to the behavior graph.
     * The results do not include member accounts that were removed from the behavior
     * graph.</p> <p>For the organization behavior graph, the results do not include
     * organization accounts that the Detective administrator account has not enabled
     * as member accounts.</p>
     */
    inline void SetMemberDetails(Aws::Vector<MemberDetail>&& value) { m_memberDetails = std::move(value); }

    /**
     * <p>The list of member accounts in the behavior graph.</p> <p>For invited
     * accounts, the results include member accounts that did not pass verification and
     * member accounts that have not yet accepted the invitation to the behavior graph.
     * The results do not include member accounts that were removed from the behavior
     * graph.</p> <p>For the organization behavior graph, the results do not include
     * organization accounts that the Detective administrator account has not enabled
     * as member accounts.</p>
     */
    inline ListMembersResult& WithMemberDetails(const Aws::Vector<MemberDetail>& value) { SetMemberDetails(value); return *this;}

    /**
     * <p>The list of member accounts in the behavior graph.</p> <p>For invited
     * accounts, the results include member accounts that did not pass verification and
     * member accounts that have not yet accepted the invitation to the behavior graph.
     * The results do not include member accounts that were removed from the behavior
     * graph.</p> <p>For the organization behavior graph, the results do not include
     * organization accounts that the Detective administrator account has not enabled
     * as member accounts.</p>
     */
    inline ListMembersResult& WithMemberDetails(Aws::Vector<MemberDetail>&& value) { SetMemberDetails(std::move(value)); return *this;}

    /**
     * <p>The list of member accounts in the behavior graph.</p> <p>For invited
     * accounts, the results include member accounts that did not pass verification and
     * member accounts that have not yet accepted the invitation to the behavior graph.
     * The results do not include member accounts that were removed from the behavior
     * graph.</p> <p>For the organization behavior graph, the results do not include
     * organization accounts that the Detective administrator account has not enabled
     * as member accounts.</p>
     */
    inline ListMembersResult& AddMemberDetails(const MemberDetail& value) { m_memberDetails.push_back(value); return *this; }

    /**
     * <p>The list of member accounts in the behavior graph.</p> <p>For invited
     * accounts, the results include member accounts that did not pass verification and
     * member accounts that have not yet accepted the invitation to the behavior graph.
     * The results do not include member accounts that were removed from the behavior
     * graph.</p> <p>For the organization behavior graph, the results do not include
     * organization accounts that the Detective administrator account has not enabled
     * as member accounts.</p>
     */
    inline ListMembersResult& AddMemberDetails(MemberDetail&& value) { m_memberDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are more member accounts remaining in the results, then use this
     * pagination token to request the next page of member accounts.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more member accounts remaining in the results, then use this
     * pagination token to request the next page of member accounts.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more member accounts remaining in the results, then use this
     * pagination token to request the next page of member accounts.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more member accounts remaining in the results, then use this
     * pagination token to request the next page of member accounts.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more member accounts remaining in the results, then use this
     * pagination token to request the next page of member accounts.</p>
     */
    inline ListMembersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more member accounts remaining in the results, then use this
     * pagination token to request the next page of member accounts.</p>
     */
    inline ListMembersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more member accounts remaining in the results, then use this
     * pagination token to request the next page of member accounts.</p>
     */
    inline ListMembersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MemberDetail> m_memberDetails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
