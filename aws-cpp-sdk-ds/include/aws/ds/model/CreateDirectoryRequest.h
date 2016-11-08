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
#include <aws/ds/model/DirectorySize.h>
#include <aws/ds/model/DirectoryVpcSettings.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>CreateDirectory</a> operation. </p>
   */
  class AWS_DIRECTORYSERVICE_API CreateDirectoryRequest : public DirectoryServiceRequest
  {
  public:
    CreateDirectoryRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The fully qualified name for the directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The fully qualified name for the directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The fully qualified name for the directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The fully qualified name for the directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The fully qualified name for the directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline CreateDirectoryRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The fully qualified name for the directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline CreateDirectoryRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The fully qualified name for the directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline CreateDirectoryRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The short name of the directory, such as <code>CORP</code>.</p>
     */
    inline const Aws::String& GetShortName() const{ return m_shortName; }

    /**
     * <p>The short name of the directory, such as <code>CORP</code>.</p>
     */
    inline void SetShortName(const Aws::String& value) { m_shortNameHasBeenSet = true; m_shortName = value; }

    /**
     * <p>The short name of the directory, such as <code>CORP</code>.</p>
     */
    inline void SetShortName(Aws::String&& value) { m_shortNameHasBeenSet = true; m_shortName = value; }

    /**
     * <p>The short name of the directory, such as <code>CORP</code>.</p>
     */
    inline void SetShortName(const char* value) { m_shortNameHasBeenSet = true; m_shortName.assign(value); }

    /**
     * <p>The short name of the directory, such as <code>CORP</code>.</p>
     */
    inline CreateDirectoryRequest& WithShortName(const Aws::String& value) { SetShortName(value); return *this;}

    /**
     * <p>The short name of the directory, such as <code>CORP</code>.</p>
     */
    inline CreateDirectoryRequest& WithShortName(Aws::String&& value) { SetShortName(value); return *this;}

    /**
     * <p>The short name of the directory, such as <code>CORP</code>.</p>
     */
    inline CreateDirectoryRequest& WithShortName(const char* value) { SetShortName(value); return *this;}

    /**
     * <p>The password for the directory administrator. The directory creation process
     * creates a directory administrator account with the username
     * <code>Administrator</code> and this password.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password for the directory administrator. The directory creation process
     * creates a directory administrator account with the username
     * <code>Administrator</code> and this password.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password for the directory administrator. The directory creation process
     * creates a directory administrator account with the username
     * <code>Administrator</code> and this password.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password for the directory administrator. The directory creation process
     * creates a directory administrator account with the username
     * <code>Administrator</code> and this password.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password for the directory administrator. The directory creation process
     * creates a directory administrator account with the username
     * <code>Administrator</code> and this password.</p>
     */
    inline CreateDirectoryRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password for the directory administrator. The directory creation process
     * creates a directory administrator account with the username
     * <code>Administrator</code> and this password.</p>
     */
    inline CreateDirectoryRequest& WithPassword(Aws::String&& value) { SetPassword(value); return *this;}

    /**
     * <p>The password for the directory administrator. The directory creation process
     * creates a directory administrator account with the username
     * <code>Administrator</code> and this password.</p>
     */
    inline CreateDirectoryRequest& WithPassword(const char* value) { SetPassword(value); return *this;}

    /**
     * <p>A textual description for the directory.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A textual description for the directory.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A textual description for the directory.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A textual description for the directory.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A textual description for the directory.</p>
     */
    inline CreateDirectoryRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A textual description for the directory.</p>
     */
    inline CreateDirectoryRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A textual description for the directory.</p>
     */
    inline CreateDirectoryRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The size of the directory.</p>
     */
    inline const DirectorySize& GetSize() const{ return m_size; }

    /**
     * <p>The size of the directory.</p>
     */
    inline void SetSize(const DirectorySize& value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the directory.</p>
     */
    inline void SetSize(DirectorySize&& value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the directory.</p>
     */
    inline CreateDirectoryRequest& WithSize(const DirectorySize& value) { SetSize(value); return *this;}

    /**
     * <p>The size of the directory.</p>
     */
    inline CreateDirectoryRequest& WithSize(DirectorySize&& value) { SetSize(value); return *this;}

    /**
     * <p>A <a>DirectoryVpcSettings</a> object that contains additional information for
     * the operation.</p>
     */
    inline const DirectoryVpcSettings& GetVpcSettings() const{ return m_vpcSettings; }

    /**
     * <p>A <a>DirectoryVpcSettings</a> object that contains additional information for
     * the operation.</p>
     */
    inline void SetVpcSettings(const DirectoryVpcSettings& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = value; }

    /**
     * <p>A <a>DirectoryVpcSettings</a> object that contains additional information for
     * the operation.</p>
     */
    inline void SetVpcSettings(DirectoryVpcSettings&& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = value; }

    /**
     * <p>A <a>DirectoryVpcSettings</a> object that contains additional information for
     * the operation.</p>
     */
    inline CreateDirectoryRequest& WithVpcSettings(const DirectoryVpcSettings& value) { SetVpcSettings(value); return *this;}

    /**
     * <p>A <a>DirectoryVpcSettings</a> object that contains additional information for
     * the operation.</p>
     */
    inline CreateDirectoryRequest& WithVpcSettings(DirectoryVpcSettings&& value) { SetVpcSettings(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_shortName;
    bool m_shortNameHasBeenSet;
    Aws::String m_password;
    bool m_passwordHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    DirectorySize m_size;
    bool m_sizeHasBeenSet;
    DirectoryVpcSettings m_vpcSettings;
    bool m_vpcSettingsHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
