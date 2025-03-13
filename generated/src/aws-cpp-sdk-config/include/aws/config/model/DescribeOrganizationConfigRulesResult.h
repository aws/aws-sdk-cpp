/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationConfigRule.h>
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
  class DescribeOrganizationConfigRulesResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeOrganizationConfigRulesResult() = default;
    AWS_CONFIGSERVICE_API DescribeOrganizationConfigRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeOrganizationConfigRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of <code>OrganizationConfigRule</code> objects.</p>
     */
    inline const Aws::Vector<OrganizationConfigRule>& GetOrganizationConfigRules() const { return m_organizationConfigRules; }
    template<typename OrganizationConfigRulesT = Aws::Vector<OrganizationConfigRule>>
    void SetOrganizationConfigRules(OrganizationConfigRulesT&& value) { m_organizationConfigRulesHasBeenSet = true; m_organizationConfigRules = std::forward<OrganizationConfigRulesT>(value); }
    template<typename OrganizationConfigRulesT = Aws::Vector<OrganizationConfigRule>>
    DescribeOrganizationConfigRulesResult& WithOrganizationConfigRules(OrganizationConfigRulesT&& value) { SetOrganizationConfigRules(std::forward<OrganizationConfigRulesT>(value)); return *this;}
    template<typename OrganizationConfigRulesT = OrganizationConfigRule>
    DescribeOrganizationConfigRulesResult& AddOrganizationConfigRules(OrganizationConfigRulesT&& value) { m_organizationConfigRulesHasBeenSet = true; m_organizationConfigRules.emplace_back(std::forward<OrganizationConfigRulesT>(value)); return *this; }
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
    DescribeOrganizationConfigRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOrganizationConfigRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OrganizationConfigRule> m_organizationConfigRules;
    bool m_organizationConfigRulesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
