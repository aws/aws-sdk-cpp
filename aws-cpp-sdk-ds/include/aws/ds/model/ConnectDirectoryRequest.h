/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ds/model/DirectoryConnectSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>ConnectDirectory</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ConnectDirectoryRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API ConnectDirectoryRequest : public DirectoryServiceRequest
  {
  public:
    ConnectDirectoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConnectDirectory"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The fully qualified name of the on-premises directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The fully qualified name of the on-premises directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The fully qualified name of the on-premises directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The fully qualified name of the on-premises directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The fully qualified name of the on-premises directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The fully qualified name of the on-premises directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline ConnectDirectoryRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The fully qualified name of the on-premises directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline ConnectDirectoryRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified name of the on-premises directory, such as
     * <code>corp.example.com</code>.</p>
     */
    inline ConnectDirectoryRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The NetBIOS name of the on-premises directory, such as <code>CORP</code>.</p>
     */
    inline const Aws::String& GetShortName() const{ return m_shortName; }

    /**
     * <p>The NetBIOS name of the on-premises directory, such as <code>CORP</code>.</p>
     */
    inline bool ShortNameHasBeenSet() const { return m_shortNameHasBeenSet; }

    /**
     * <p>The NetBIOS name of the on-premises directory, such as <code>CORP</code>.</p>
     */
    inline void SetShortName(const Aws::String& value) { m_shortNameHasBeenSet = true; m_shortName = value; }

    /**
     * <p>The NetBIOS name of the on-premises directory, such as <code>CORP</code>.</p>
     */
    inline void SetShortName(Aws::String&& value) { m_shortNameHasBeenSet = true; m_shortName = std::move(value); }

    /**
     * <p>The NetBIOS name of the on-premises directory, such as <code>CORP</code>.</p>
     */
    inline void SetShortName(const char* value) { m_shortNameHasBeenSet = true; m_shortName.assign(value); }

    /**
     * <p>The NetBIOS name of the on-premises directory, such as <code>CORP</code>.</p>
     */
    inline ConnectDirectoryRequest& WithShortName(const Aws::String& value) { SetShortName(value); return *this;}

    /**
     * <p>The NetBIOS name of the on-premises directory, such as <code>CORP</code>.</p>
     */
    inline ConnectDirectoryRequest& WithShortName(Aws::String&& value) { SetShortName(std::move(value)); return *this;}

    /**
     * <p>The NetBIOS name of the on-premises directory, such as <code>CORP</code>.</p>
     */
    inline ConnectDirectoryRequest& WithShortName(const char* value) { SetShortName(value); return *this;}


    /**
     * <p>The password for the on-premises user account.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password for the on-premises user account.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password for the on-premises user account.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password for the on-premises user account.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password for the on-premises user account.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password for the on-premises user account.</p>
     */
    inline ConnectDirectoryRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password for the on-premises user account.</p>
     */
    inline ConnectDirectoryRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the on-premises user account.</p>
     */
    inline ConnectDirectoryRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>A textual description for the directory.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A textual description for the directory.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A textual description for the directory.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A textual description for the directory.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A textual description for the directory.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A textual description for the directory.</p>
     */
    inline ConnectDirectoryRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A textual description for the directory.</p>
     */
    inline ConnectDirectoryRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A textual description for the directory.</p>
     */
    inline ConnectDirectoryRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The size of the directory.</p>
     */
    inline const DirectorySize& GetSize() const{ return m_size; }

    /**
     * <p>The size of the directory.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of the directory.</p>
     */
    inline void SetSize(const DirectorySize& value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of the directory.</p>
     */
    inline void SetSize(DirectorySize&& value) { m_sizeHasBeenSet = true; m_size = std::move(value); }

    /**
     * <p>The size of the directory.</p>
     */
    inline ConnectDirectoryRequest& WithSize(const DirectorySize& value) { SetSize(value); return *this;}

    /**
     * <p>The size of the directory.</p>
     */
    inline ConnectDirectoryRequest& WithSize(DirectorySize&& value) { SetSize(std::move(value)); return *this;}


    /**
     * <p>A <a>DirectoryConnectSettings</a> object that contains additional information
     * for the operation.</p>
     */
    inline const DirectoryConnectSettings& GetConnectSettings() const{ return m_connectSettings; }

    /**
     * <p>A <a>DirectoryConnectSettings</a> object that contains additional information
     * for the operation.</p>
     */
    inline bool ConnectSettingsHasBeenSet() const { return m_connectSettingsHasBeenSet; }

    /**
     * <p>A <a>DirectoryConnectSettings</a> object that contains additional information
     * for the operation.</p>
     */
    inline void SetConnectSettings(const DirectoryConnectSettings& value) { m_connectSettingsHasBeenSet = true; m_connectSettings = value; }

    /**
     * <p>A <a>DirectoryConnectSettings</a> object that contains additional information
     * for the operation.</p>
     */
    inline void SetConnectSettings(DirectoryConnectSettings&& value) { m_connectSettingsHasBeenSet = true; m_connectSettings = std::move(value); }

    /**
     * <p>A <a>DirectoryConnectSettings</a> object that contains additional information
     * for the operation.</p>
     */
    inline ConnectDirectoryRequest& WithConnectSettings(const DirectoryConnectSettings& value) { SetConnectSettings(value); return *this;}

    /**
     * <p>A <a>DirectoryConnectSettings</a> object that contains additional information
     * for the operation.</p>
     */
    inline ConnectDirectoryRequest& WithConnectSettings(DirectoryConnectSettings&& value) { SetConnectSettings(std::move(value)); return *this;}


    /**
     * <p>The tags to be assigned to AD Connector.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be assigned to AD Connector.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be assigned to AD Connector.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to AD Connector.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be assigned to AD Connector.</p>
     */
    inline ConnectDirectoryRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to AD Connector.</p>
     */
    inline ConnectDirectoryRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to AD Connector.</p>
     */
    inline ConnectDirectoryRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be assigned to AD Connector.</p>
     */
    inline ConnectDirectoryRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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

    DirectoryConnectSettings m_connectSettings;
    bool m_connectSettingsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
