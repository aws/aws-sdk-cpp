﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/TagListEntry.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class CreateLocationFsxWindowsRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API CreateLocationFsxWindowsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationFsxWindows"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies a mount path for your file system using forward slashes. This is
     * where DataSync reads or writes data (depending on if this is a source or
     * destination location).</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }
    inline CreateLocationFsxWindowsRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}
    inline CreateLocationFsxWindowsRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}
    inline CreateLocationFsxWindowsRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) for the FSx for Windows File Server
     * file system.</p>
     */
    inline const Aws::String& GetFsxFilesystemArn() const{ return m_fsxFilesystemArn; }
    inline bool FsxFilesystemArnHasBeenSet() const { return m_fsxFilesystemArnHasBeenSet; }
    inline void SetFsxFilesystemArn(const Aws::String& value) { m_fsxFilesystemArnHasBeenSet = true; m_fsxFilesystemArn = value; }
    inline void SetFsxFilesystemArn(Aws::String&& value) { m_fsxFilesystemArnHasBeenSet = true; m_fsxFilesystemArn = std::move(value); }
    inline void SetFsxFilesystemArn(const char* value) { m_fsxFilesystemArnHasBeenSet = true; m_fsxFilesystemArn.assign(value); }
    inline CreateLocationFsxWindowsRequest& WithFsxFilesystemArn(const Aws::String& value) { SetFsxFilesystemArn(value); return *this;}
    inline CreateLocationFsxWindowsRequest& WithFsxFilesystemArn(Aws::String&& value) { SetFsxFilesystemArn(std::move(value)); return *this;}
    inline CreateLocationFsxWindowsRequest& WithFsxFilesystemArn(const char* value) { SetFsxFilesystemArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARNs of the security groups that provide access to your file
     * system's preferred subnet.</p>  <p>If you choose a security group that
     * doesn't allow connections from within itself, do one of the following:</p> <ul>
     * <li> <p>Configure the security group to allow it to communicate within
     * itself.</p> </li> <li> <p>Choose a different security group that can communicate
     * with the mount target's security group.</p> </li> </ul> 
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const{ return m_securityGroupArns; }
    inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }
    inline void SetSecurityGroupArns(const Aws::Vector<Aws::String>& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = value; }
    inline void SetSecurityGroupArns(Aws::Vector<Aws::String>&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::move(value); }
    inline CreateLocationFsxWindowsRequest& WithSecurityGroupArns(const Aws::Vector<Aws::String>& value) { SetSecurityGroupArns(value); return *this;}
    inline CreateLocationFsxWindowsRequest& WithSecurityGroupArns(Aws::Vector<Aws::String>&& value) { SetSecurityGroupArns(std::move(value)); return *this;}
    inline CreateLocationFsxWindowsRequest& AddSecurityGroupArns(const Aws::String& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }
    inline CreateLocationFsxWindowsRequest& AddSecurityGroupArns(Aws::String&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(std::move(value)); return *this; }
    inline CreateLocationFsxWindowsRequest& AddSecurityGroupArns(const char* value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateLocationFsxWindowsRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}
    inline CreateLocationFsxWindowsRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateLocationFsxWindowsRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateLocationFsxWindowsRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the user with the permissions to mount and access the files,
     * folders, and file metadata in your FSx for Windows File Server file system.</p>
     * <p>For information about choosing a user with the right level of access for your
     * transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-fsx-location.html#create-fsx-windows-location-permissions">required
     * permissions</a> for FSx for Windows File Server locations.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }
    inline CreateLocationFsxWindowsRequest& WithUser(const Aws::String& value) { SetUser(value); return *this;}
    inline CreateLocationFsxWindowsRequest& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}
    inline CreateLocationFsxWindowsRequest& WithUser(const char* value) { SetUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the Microsoft Active Directory domain that the FSx for
     * Windows File Server file system belongs to.</p> <p>If you have multiple Active
     * Directory domains in your environment, configuring this parameter makes sure
     * that DataSync connects to the right file system.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline CreateLocationFsxWindowsRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline CreateLocationFsxWindowsRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline CreateLocationFsxWindowsRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the password of the user with the permissions to mount and access
     * the files, folders, and file metadata in your FSx for Windows File Server file
     * system.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline CreateLocationFsxWindowsRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline CreateLocationFsxWindowsRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline CreateLocationFsxWindowsRequest& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}
  private:

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::String m_fsxFilesystemArn;
    bool m_fsxFilesystemArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupArns;
    bool m_securityGroupArnsHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
