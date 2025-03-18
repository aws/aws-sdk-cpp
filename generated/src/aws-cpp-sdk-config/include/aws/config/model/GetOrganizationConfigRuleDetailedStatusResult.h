/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/MemberAccountStatus.h>
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
namespace ConfigService
{
namespace Model
{
  class GetOrganizationConfigRuleDetailedStatusResult
  {
  public:
    AWS_CONFIGSERVICE_API GetOrganizationConfigRuleDetailedStatusResult() = default;
    AWS_CONFIGSERVICE_API GetOrganizationConfigRuleDetailedStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetOrganizationConfigRuleDetailedStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>MemberAccountStatus</code> objects.</p>
     */
    inline const Aws::Vector<MemberAccountStatus>& GetOrganizationConfigRuleDetailedStatus() const { return m_organizationConfigRuleDetailedStatus; }
    template<typename OrganizationConfigRuleDetailedStatusT = Aws::Vector<MemberAccountStatus>>
    void SetOrganizationConfigRuleDetailedStatus(OrganizationConfigRuleDetailedStatusT&& value) { m_organizationConfigRuleDetailedStatusHasBeenSet = true; m_organizationConfigRuleDetailedStatus = std::forward<OrganizationConfigRuleDetailedStatusT>(value); }
    template<typename OrganizationConfigRuleDetailedStatusT = Aws::Vector<MemberAccountStatus>>
    GetOrganizationConfigRuleDetailedStatusResult& WithOrganizationConfigRuleDetailedStatus(OrganizationConfigRuleDetailedStatusT&& value) { SetOrganizationConfigRuleDetailedStatus(std::forward<OrganizationConfigRuleDetailedStatusT>(value)); return *this;}
    template<typename OrganizationConfigRuleDetailedStatusT = MemberAccountStatus>
    GetOrganizationConfigRuleDetailedStatusResult& AddOrganizationConfigRuleDetailedStatus(OrganizationConfigRuleDetailedStatusT&& value) { m_organizationConfigRuleDetailedStatusHasBeenSet = true; m_organizationConfigRuleDetailedStatus.emplace_back(std::forward<OrganizationConfigRuleDetailedStatusT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetOrganizationConfigRuleDetailedStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOrganizationConfigRuleDetailedStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MemberAccountStatus> m_organizationConfigRuleDetailedStatus;
    bool m_organizationConfigRuleDetailedStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
