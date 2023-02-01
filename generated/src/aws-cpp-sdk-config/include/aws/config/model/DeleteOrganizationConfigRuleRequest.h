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
    AWS_CONFIGSERVICE_API DeleteOrganizationConfigRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteOrganizationConfigRule"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of organization Config rule that you want to delete.</p>
     */
    inline const Aws::String& GetOrganizationConfigRuleName() const{ return m_organizationConfigRuleName; }

    /**
     * <p>The name of organization Config rule that you want to delete.</p>
     */
    inline bool OrganizationConfigRuleNameHasBeenSet() const { return m_organizationConfigRuleNameHasBeenSet; }

    /**
     * <p>The name of organization Config rule that you want to delete.</p>
     */
    inline void SetOrganizationConfigRuleName(const Aws::String& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = value; }

    /**
     * <p>The name of organization Config rule that you want to delete.</p>
     */
    inline void SetOrganizationConfigRuleName(Aws::String&& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = std::move(value); }

    /**
     * <p>The name of organization Config rule that you want to delete.</p>
     */
    inline void SetOrganizationConfigRuleName(const char* value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName.assign(value); }

    /**
     * <p>The name of organization Config rule that you want to delete.</p>
     */
    inline DeleteOrganizationConfigRuleRequest& WithOrganizationConfigRuleName(const Aws::String& value) { SetOrganizationConfigRuleName(value); return *this;}

    /**
     * <p>The name of organization Config rule that you want to delete.</p>
     */
    inline DeleteOrganizationConfigRuleRequest& WithOrganizationConfigRuleName(Aws::String&& value) { SetOrganizationConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of organization Config rule that you want to delete.</p>
     */
    inline DeleteOrganizationConfigRuleRequest& WithOrganizationConfigRuleName(const char* value) { SetOrganizationConfigRuleName(value); return *this;}

  private:

    Aws::String m_organizationConfigRuleName;
    bool m_organizationConfigRuleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
