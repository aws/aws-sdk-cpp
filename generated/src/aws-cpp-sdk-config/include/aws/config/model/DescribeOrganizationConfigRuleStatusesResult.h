/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationConfigRuleStatus.h>
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
  class DescribeOrganizationConfigRuleStatusesResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeOrganizationConfigRuleStatusesResult() = default;
    AWS_CONFIGSERVICE_API DescribeOrganizationConfigRuleStatusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeOrganizationConfigRuleStatusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>OrganizationConfigRuleStatus</code> objects.</p>
     */
    inline const Aws::Vector<OrganizationConfigRuleStatus>& GetOrganizationConfigRuleStatuses() const { return m_organizationConfigRuleStatuses; }
    template<typename OrganizationConfigRuleStatusesT = Aws::Vector<OrganizationConfigRuleStatus>>
    void SetOrganizationConfigRuleStatuses(OrganizationConfigRuleStatusesT&& value) { m_organizationConfigRuleStatusesHasBeenSet = true; m_organizationConfigRuleStatuses = std::forward<OrganizationConfigRuleStatusesT>(value); }
    template<typename OrganizationConfigRuleStatusesT = Aws::Vector<OrganizationConfigRuleStatus>>
    DescribeOrganizationConfigRuleStatusesResult& WithOrganizationConfigRuleStatuses(OrganizationConfigRuleStatusesT&& value) { SetOrganizationConfigRuleStatuses(std::forward<OrganizationConfigRuleStatusesT>(value)); return *this;}
    template<typename OrganizationConfigRuleStatusesT = OrganizationConfigRuleStatus>
    DescribeOrganizationConfigRuleStatusesResult& AddOrganizationConfigRuleStatuses(OrganizationConfigRuleStatusesT&& value) { m_organizationConfigRuleStatusesHasBeenSet = true; m_organizationConfigRuleStatuses.emplace_back(std::forward<OrganizationConfigRuleStatusesT>(value)); return *this; }
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
    DescribeOrganizationConfigRuleStatusesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOrganizationConfigRuleStatusesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OrganizationConfigRuleStatus> m_organizationConfigRuleStatuses;
    bool m_organizationConfigRuleStatusesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
