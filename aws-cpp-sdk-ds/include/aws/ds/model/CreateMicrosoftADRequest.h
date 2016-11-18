/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/DirectoryVpcSettings.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Creates a Microsoft AD in the AWS cloud.</p>
   */
  class AWS_DIRECTORYSERVICE_API CreateMicrosoftADRequest : public DirectoryServiceRequest
  {
  public:
    CreateMicrosoftADRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The fully qualified domain name for the directory, such as
     * <code>corp.example.com</code>. This name will resolve inside your VPC only. It
     * does not need to be publicly resolvable.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The fully qualified domain name for the directory, such as
     * <code>corp.example.com</code>. This name will resolve inside your VPC only. It
     * does not need to be publicly resolvable.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The fully qualified domain name for the directory, such as
     * <code>corp.example.com</code>. This name will resolve inside your VPC only. It
     * does not need to be publicly resolvable.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The fully qualified domain name for the directory, such as
     * <code>corp.example.com</code>. This name will resolve inside your VPC only. It
     * does not need to be publicly resolvable.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The fully qualified domain name for the directory, such as
     * <code>corp.example.com</code>. This name will resolve inside your VPC only. It
     * does not need to be publicly resolvable.</p>
     */
    inline CreateMicrosoftADRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The fully qualified domain name for the directory, such as
     * <code>corp.example.com</code>. This name will resolve inside your VPC only. It
     * does not need to be publicly resolvable.</p>
     */
    inline CreateMicrosoftADRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The fully qualified domain name for the directory, such as
     * <code>corp.example.com</code>. This name will resolve inside your VPC only. It
     * does not need to be publicly resolvable.</p>
     */
    inline CreateMicrosoftADRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The NetBIOS name for your domain. A short identifier for your domain, such as
     * <code>CORP</code>. If you don't specify a NetBIOS name, it will default to the
     * first part of your directory DNS. For example, <code>CORP</code> for the
     * directory DNS <code>corp.example.com</code>. </p>
     */
    inline const Aws::String& GetShortName() const{ return m_shortName; }

    /**
     * <p>The NetBIOS name for your domain. A short identifier for your domain, such as
     * <code>CORP</code>. If you don't specify a NetBIOS name, it will default to the
     * first part of your directory DNS. For example, <code>CORP</code> for the
     * directory DNS <code>corp.example.com</code>. </p>
     */
    inline void SetShortName(const Aws::String& value) { m_shortNameHasBeenSet = true; m_shortName = value; }

    /**
     * <p>The NetBIOS name for your domain. A short identifier for your domain, such as
     * <code>CORP</code>. If you don't specify a NetBIOS name, it will default to the
     * first part of your directory DNS. For example, <code>CORP</code> for the
     * directory DNS <code>corp.example.com</code>. </p>
     */
    inline void SetShortName(Aws::String&& value) { m_shortNameHasBeenSet = true; m_shortName = value; }

    /**
     * <p>The NetBIOS name for your domain. A short identifier for your domain, such as
     * <code>CORP</code>. If you don't specify a NetBIOS name, it will default to the
     * first part of your directory DNS. For example, <code>CORP</code> for the
     * directory DNS <code>corp.example.com</code>. </p>
     */
    inline void SetShortName(const char* value) { m_shortNameHasBeenSet = true; m_shortName.assign(value); }

    /**
     * <p>The NetBIOS name for your domain. A short identifier for your domain, such as
     * <code>CORP</code>. If you don't specify a NetBIOS name, it will default to the
     * first part of your directory DNS. For example, <code>CORP</code> for the
     * directory DNS <code>corp.example.com</code>. </p>
     */
    inline CreateMicrosoftADRequest& WithShortName(const Aws::String& value) { SetShortName(value); return *this;}

    /**
     * <p>The NetBIOS name for your domain. A short identifier for your domain, such as
     * <code>CORP</code>. If you don't specify a NetBIOS name, it will default to the
     * first part of your directory DNS. For example, <code>CORP</code> for the
     * directory DNS <code>corp.example.com</code>. </p>
     */
    inline CreateMicrosoftADRequest& WithShortName(Aws::String&& value) { SetShortName(value); return *this;}

    /**
     * <p>The NetBIOS name for your domain. A short identifier for your domain, such as
     * <code>CORP</code>. If you don't specify a NetBIOS name, it will default to the
     * first part of your directory DNS. For example, <code>CORP</code> for the
     * directory DNS <code>corp.example.com</code>. </p>
     */
    inline CreateMicrosoftADRequest& WithShortName(const char* value) { SetShortName(value); return *this;}

    /**
     * <p>The password for the default administrative user named
     * <code>Admin</code>.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password for the default administrative user named
     * <code>Admin</code>.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password for the default administrative user named
     * <code>Admin</code>.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password for the default administrative user named
     * <code>Admin</code>.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password for the default administrative user named
     * <code>Admin</code>.</p>
     */
    inline CreateMicrosoftADRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password for the default administrative user named
     * <code>Admin</code>.</p>
     */
    inline CreateMicrosoftADRequest& WithPassword(Aws::String&& value) { SetPassword(value); return *this;}

    /**
     * <p>The password for the default administrative user named
     * <code>Admin</code>.</p>
     */
    inline CreateMicrosoftADRequest& WithPassword(const char* value) { SetPassword(value); return *this;}

    /**
     * <p>A textual description for the directory. This label will appear on the AWS
     * console <code>Directory Details</code> page after the directory is created.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A textual description for the directory. This label will appear on the AWS
     * console <code>Directory Details</code> page after the directory is created.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A textual description for the directory. This label will appear on the AWS
     * console <code>Directory Details</code> page after the directory is created.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A textual description for the directory. This label will appear on the AWS
     * console <code>Directory Details</code> page after the directory is created.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A textual description for the directory. This label will appear on the AWS
     * console <code>Directory Details</code> page after the directory is created.</p>
     */
    inline CreateMicrosoftADRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A textual description for the directory. This label will appear on the AWS
     * console <code>Directory Details</code> page after the directory is created.</p>
     */
    inline CreateMicrosoftADRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A textual description for the directory. This label will appear on the AWS
     * console <code>Directory Details</code> page after the directory is created.</p>
     */
    inline CreateMicrosoftADRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    
    inline const DirectoryVpcSettings& GetVpcSettings() const{ return m_vpcSettings; }

    
    inline void SetVpcSettings(const DirectoryVpcSettings& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = value; }

    
    inline void SetVpcSettings(DirectoryVpcSettings&& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = value; }

    
    inline CreateMicrosoftADRequest& WithVpcSettings(const DirectoryVpcSettings& value) { SetVpcSettings(value); return *this;}

    
    inline CreateMicrosoftADRequest& WithVpcSettings(DirectoryVpcSettings&& value) { SetVpcSettings(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_shortName;
    bool m_shortNameHasBeenSet;
    Aws::String m_password;
    bool m_passwordHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    DirectoryVpcSettings m_vpcSettings;
    bool m_vpcSettingsHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
