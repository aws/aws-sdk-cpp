/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/InstanceAccessControlAttributeConfiguration.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class CreateInstanceAccessControlAttributeConfigurationRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API CreateInstanceAccessControlAttributeConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInstanceAccessControlAttributeConfiguration"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed.</p>
     */
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed.</p>
     */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }

    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed.</p>
     */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }

    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed.</p>
     */
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }

    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed.</p>
     */
    inline CreateInstanceAccessControlAttributeConfigurationRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed.</p>
     */
    inline CreateInstanceAccessControlAttributeConfigurationRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed.</p>
     */
    inline CreateInstanceAccessControlAttributeConfigurationRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


    /**
     * <p>Specifies the IAM Identity Center identity store attributes to add to your
     * ABAC configuration. When using an external identity provider as an identity
     * source, you can pass attributes through the SAML assertion. Doing so provides an
     * alternative to configuring attributes from the IAM Identity Center identity
     * store. If a SAML assertion passes any of these attributes, IAM Identity Center
     * will replace the attribute value with the value from the IAM Identity Center
     * identity store.</p>
     */
    inline const InstanceAccessControlAttributeConfiguration& GetInstanceAccessControlAttributeConfiguration() const{ return m_instanceAccessControlAttributeConfiguration; }

    /**
     * <p>Specifies the IAM Identity Center identity store attributes to add to your
     * ABAC configuration. When using an external identity provider as an identity
     * source, you can pass attributes through the SAML assertion. Doing so provides an
     * alternative to configuring attributes from the IAM Identity Center identity
     * store. If a SAML assertion passes any of these attributes, IAM Identity Center
     * will replace the attribute value with the value from the IAM Identity Center
     * identity store.</p>
     */
    inline bool InstanceAccessControlAttributeConfigurationHasBeenSet() const { return m_instanceAccessControlAttributeConfigurationHasBeenSet; }

    /**
     * <p>Specifies the IAM Identity Center identity store attributes to add to your
     * ABAC configuration. When using an external identity provider as an identity
     * source, you can pass attributes through the SAML assertion. Doing so provides an
     * alternative to configuring attributes from the IAM Identity Center identity
     * store. If a SAML assertion passes any of these attributes, IAM Identity Center
     * will replace the attribute value with the value from the IAM Identity Center
     * identity store.</p>
     */
    inline void SetInstanceAccessControlAttributeConfiguration(const InstanceAccessControlAttributeConfiguration& value) { m_instanceAccessControlAttributeConfigurationHasBeenSet = true; m_instanceAccessControlAttributeConfiguration = value; }

    /**
     * <p>Specifies the IAM Identity Center identity store attributes to add to your
     * ABAC configuration. When using an external identity provider as an identity
     * source, you can pass attributes through the SAML assertion. Doing so provides an
     * alternative to configuring attributes from the IAM Identity Center identity
     * store. If a SAML assertion passes any of these attributes, IAM Identity Center
     * will replace the attribute value with the value from the IAM Identity Center
     * identity store.</p>
     */
    inline void SetInstanceAccessControlAttributeConfiguration(InstanceAccessControlAttributeConfiguration&& value) { m_instanceAccessControlAttributeConfigurationHasBeenSet = true; m_instanceAccessControlAttributeConfiguration = std::move(value); }

    /**
     * <p>Specifies the IAM Identity Center identity store attributes to add to your
     * ABAC configuration. When using an external identity provider as an identity
     * source, you can pass attributes through the SAML assertion. Doing so provides an
     * alternative to configuring attributes from the IAM Identity Center identity
     * store. If a SAML assertion passes any of these attributes, IAM Identity Center
     * will replace the attribute value with the value from the IAM Identity Center
     * identity store.</p>
     */
    inline CreateInstanceAccessControlAttributeConfigurationRequest& WithInstanceAccessControlAttributeConfiguration(const InstanceAccessControlAttributeConfiguration& value) { SetInstanceAccessControlAttributeConfiguration(value); return *this;}

    /**
     * <p>Specifies the IAM Identity Center identity store attributes to add to your
     * ABAC configuration. When using an external identity provider as an identity
     * source, you can pass attributes through the SAML assertion. Doing so provides an
     * alternative to configuring attributes from the IAM Identity Center identity
     * store. If a SAML assertion passes any of these attributes, IAM Identity Center
     * will replace the attribute value with the value from the IAM Identity Center
     * identity store.</p>
     */
    inline CreateInstanceAccessControlAttributeConfigurationRequest& WithInstanceAccessControlAttributeConfiguration(InstanceAccessControlAttributeConfiguration&& value) { SetInstanceAccessControlAttributeConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    InstanceAccessControlAttributeConfiguration m_instanceAccessControlAttributeConfiguration;
    bool m_instanceAccessControlAttributeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
