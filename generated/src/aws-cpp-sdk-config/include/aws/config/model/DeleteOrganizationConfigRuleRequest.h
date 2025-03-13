/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
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
  class DeleteOrganizationConfigRuleRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DeleteOrganizationConfigRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteOrganizationConfigRule"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of organization Config rule that you want to delete.</p>
     */
    inline const Aws::String& GetOrganizationConfigRuleName() const { return m_organizationConfigRuleName; }
    inline bool OrganizationConfigRuleNameHasBeenSet() const { return m_organizationConfigRuleNameHasBeenSet; }
    template<typename OrganizationConfigRuleNameT = Aws::String>
    void SetOrganizationConfigRuleName(OrganizationConfigRuleNameT&& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = std::forward<OrganizationConfigRuleNameT>(value); }
    template<typename OrganizationConfigRuleNameT = Aws::String>
    DeleteOrganizationConfigRuleRequest& WithOrganizationConfigRuleName(OrganizationConfigRuleNameT&& value) { SetOrganizationConfigRuleName(std::forward<OrganizationConfigRuleNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationConfigRuleName;
    bool m_organizationConfigRuleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
