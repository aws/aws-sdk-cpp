/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class DeleteMobileDeviceAccessRuleRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API DeleteMobileDeviceAccessRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMobileDeviceAccessRule"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The WorkMail organization under which the rule will be deleted.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The WorkMail organization under which the rule will be deleted.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The WorkMail organization under which the rule will be deleted.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The WorkMail organization under which the rule will be deleted.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The WorkMail organization under which the rule will be deleted.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The WorkMail organization under which the rule will be deleted.</p>
     */
    inline DeleteMobileDeviceAccessRuleRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The WorkMail organization under which the rule will be deleted.</p>
     */
    inline DeleteMobileDeviceAccessRuleRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The WorkMail organization under which the rule will be deleted.</p>
     */
    inline DeleteMobileDeviceAccessRuleRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The identifier of the rule to be deleted.</p>
     */
    inline const Aws::String& GetMobileDeviceAccessRuleId() const{ return m_mobileDeviceAccessRuleId; }

    /**
     * <p>The identifier of the rule to be deleted.</p>
     */
    inline bool MobileDeviceAccessRuleIdHasBeenSet() const { return m_mobileDeviceAccessRuleIdHasBeenSet; }

    /**
     * <p>The identifier of the rule to be deleted.</p>
     */
    inline void SetMobileDeviceAccessRuleId(const Aws::String& value) { m_mobileDeviceAccessRuleIdHasBeenSet = true; m_mobileDeviceAccessRuleId = value; }

    /**
     * <p>The identifier of the rule to be deleted.</p>
     */
    inline void SetMobileDeviceAccessRuleId(Aws::String&& value) { m_mobileDeviceAccessRuleIdHasBeenSet = true; m_mobileDeviceAccessRuleId = std::move(value); }

    /**
     * <p>The identifier of the rule to be deleted.</p>
     */
    inline void SetMobileDeviceAccessRuleId(const char* value) { m_mobileDeviceAccessRuleIdHasBeenSet = true; m_mobileDeviceAccessRuleId.assign(value); }

    /**
     * <p>The identifier of the rule to be deleted.</p>
     */
    inline DeleteMobileDeviceAccessRuleRequest& WithMobileDeviceAccessRuleId(const Aws::String& value) { SetMobileDeviceAccessRuleId(value); return *this;}

    /**
     * <p>The identifier of the rule to be deleted.</p>
     */
    inline DeleteMobileDeviceAccessRuleRequest& WithMobileDeviceAccessRuleId(Aws::String&& value) { SetMobileDeviceAccessRuleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the rule to be deleted.</p>
     */
    inline DeleteMobileDeviceAccessRuleRequest& WithMobileDeviceAccessRuleId(const char* value) { SetMobileDeviceAccessRuleId(value); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_mobileDeviceAccessRuleId;
    bool m_mobileDeviceAccessRuleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
