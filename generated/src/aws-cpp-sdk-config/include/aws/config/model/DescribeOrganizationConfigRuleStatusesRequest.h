/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class DescribeOrganizationConfigRuleStatusesRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DescribeOrganizationConfigRuleStatusesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOrganizationConfigRuleStatuses"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The names of organization Config rules for which you want status details. If
     * you do not specify any names, Config returns details for all your organization
     * Config rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationConfigRuleNames() const { return m_organizationConfigRuleNames; }
    inline bool OrganizationConfigRuleNamesHasBeenSet() const { return m_organizationConfigRuleNamesHasBeenSet; }
    template<typename OrganizationConfigRuleNamesT = Aws::Vector<Aws::String>>
    void SetOrganizationConfigRuleNames(OrganizationConfigRuleNamesT&& value) { m_organizationConfigRuleNamesHasBeenSet = true; m_organizationConfigRuleNames = std::forward<OrganizationConfigRuleNamesT>(value); }
    template<typename OrganizationConfigRuleNamesT = Aws::Vector<Aws::String>>
    DescribeOrganizationConfigRuleStatusesRequest& WithOrganizationConfigRuleNames(OrganizationConfigRuleNamesT&& value) { SetOrganizationConfigRuleNames(std::forward<OrganizationConfigRuleNamesT>(value)); return *this;}
    template<typename OrganizationConfigRuleNamesT = Aws::String>
    DescribeOrganizationConfigRuleStatusesRequest& AddOrganizationConfigRuleNames(OrganizationConfigRuleNamesT&& value) { m_organizationConfigRuleNamesHasBeenSet = true; m_organizationConfigRuleNames.emplace_back(std::forward<OrganizationConfigRuleNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of <code>OrganizationConfigRuleStatuses</code> returned on
     * each page. If you do no specify a number, Config uses the default. The default
     * is 100.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeOrganizationConfigRuleStatusesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeOrganizationConfigRuleStatusesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_organizationConfigRuleNames;
    bool m_organizationConfigRuleNamesHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
