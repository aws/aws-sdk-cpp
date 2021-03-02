/**
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
  class AWS_DATASYNC_API CreateLocationFsxWindowsRequest : public DataSyncRequest
  {
  public:
    CreateLocationFsxWindowsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationFsxWindows"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A subdirectory in the location’s path. This subdirectory in the Amazon FSx
     * for Windows File Server file system is used to read data from the Amazon FSx for
     * Windows File Server source location or write data to the FSx for Windows File
     * Server destination.</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>A subdirectory in the location’s path. This subdirectory in the Amazon FSx
     * for Windows File Server file system is used to read data from the Amazon FSx for
     * Windows File Server source location or write data to the FSx for Windows File
     * Server destination.</p>
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>A subdirectory in the location’s path. This subdirectory in the Amazon FSx
     * for Windows File Server file system is used to read data from the Amazon FSx for
     * Windows File Server source location or write data to the FSx for Windows File
     * Server destination.</p>
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>A subdirectory in the location’s path. This subdirectory in the Amazon FSx
     * for Windows File Server file system is used to read data from the Amazon FSx for
     * Windows File Server source location or write data to the FSx for Windows File
     * Server destination.</p>
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>A subdirectory in the location’s path. This subdirectory in the Amazon FSx
     * for Windows File Server file system is used to read data from the Amazon FSx for
     * Windows File Server source location or write data to the FSx for Windows File
     * Server destination.</p>
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>A subdirectory in the location’s path. This subdirectory in the Amazon FSx
     * for Windows File Server file system is used to read data from the Amazon FSx for
     * Windows File Server source location or write data to the FSx for Windows File
     * Server destination.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>A subdirectory in the location’s path. This subdirectory in the Amazon FSx
     * for Windows File Server file system is used to read data from the Amazon FSx for
     * Windows File Server source location or write data to the FSx for Windows File
     * Server destination.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>A subdirectory in the location’s path. This subdirectory in the Amazon FSx
     * for Windows File Server file system is used to read data from the Amazon FSx for
     * Windows File Server source location or write data to the FSx for Windows File
     * Server destination.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the FSx for Windows File Server file
     * system.</p>
     */
    inline const Aws::String& GetFsxFilesystemArn() const{ return m_fsxFilesystemArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the FSx for Windows File Server file
     * system.</p>
     */
    inline bool FsxFilesystemArnHasBeenSet() const { return m_fsxFilesystemArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the FSx for Windows File Server file
     * system.</p>
     */
    inline void SetFsxFilesystemArn(const Aws::String& value) { m_fsxFilesystemArnHasBeenSet = true; m_fsxFilesystemArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the FSx for Windows File Server file
     * system.</p>
     */
    inline void SetFsxFilesystemArn(Aws::String&& value) { m_fsxFilesystemArnHasBeenSet = true; m_fsxFilesystemArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the FSx for Windows File Server file
     * system.</p>
     */
    inline void SetFsxFilesystemArn(const char* value) { m_fsxFilesystemArnHasBeenSet = true; m_fsxFilesystemArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the FSx for Windows File Server file
     * system.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithFsxFilesystemArn(const Aws::String& value) { SetFsxFilesystemArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the FSx for Windows File Server file
     * system.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithFsxFilesystemArn(Aws::String&& value) { SetFsxFilesystemArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the FSx for Windows File Server file
     * system.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithFsxFilesystemArn(const char* value) { SetFsxFilesystemArn(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are to use to
     * configure the FSx for Windows File Server file system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const{ return m_securityGroupArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are to use to
     * configure the FSx for Windows File Server file system.</p>
     */
    inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are to use to
     * configure the FSx for Windows File Server file system.</p>
     */
    inline void SetSecurityGroupArns(const Aws::Vector<Aws::String>& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are to use to
     * configure the FSx for Windows File Server file system.</p>
     */
    inline void SetSecurityGroupArns(Aws::Vector<Aws::String>&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are to use to
     * configure the FSx for Windows File Server file system.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithSecurityGroupArns(const Aws::Vector<Aws::String>& value) { SetSecurityGroupArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are to use to
     * configure the FSx for Windows File Server file system.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithSecurityGroupArns(Aws::Vector<Aws::String>&& value) { SetSecurityGroupArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are to use to
     * configure the FSx for Windows File Server file system.</p>
     */
    inline CreateLocationFsxWindowsRequest& AddSecurityGroupArns(const Aws::String& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are to use to
     * configure the FSx for Windows File Server file system.</p>
     */
    inline CreateLocationFsxWindowsRequest& AddSecurityGroupArns(Aws::String&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the security groups that are to use to
     * configure the FSx for Windows File Server file system.</p>
     */
    inline CreateLocationFsxWindowsRequest& AddSecurityGroupArns(const char* value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }


    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline CreateLocationFsxWindowsRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key-value pair that represents a tag that you want to add to the
     * resource. The value can be an empty string. This value helps you manage, filter,
     * and search for your resources. We recommend that you create a name tag for your
     * location.</p>
     */
    inline CreateLocationFsxWindowsRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The user who has the permissions to access files and folders in the FSx for
     * Windows File Server file system.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>The user who has the permissions to access files and folders in the FSx for
     * Windows File Server file system.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>The user who has the permissions to access files and folders in the FSx for
     * Windows File Server file system.</p>
     */
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>The user who has the permissions to access files and folders in the FSx for
     * Windows File Server file system.</p>
     */
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>The user who has the permissions to access files and folders in the FSx for
     * Windows File Server file system.</p>
     */
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }

    /**
     * <p>The user who has the permissions to access files and folders in the FSx for
     * Windows File Server file system.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>The user who has the permissions to access files and folders in the FSx for
     * Windows File Server file system.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}

    /**
     * <p>The user who has the permissions to access files and folders in the FSx for
     * Windows File Server file system.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithUser(const char* value) { SetUser(value); return *this;}


    /**
     * <p>The name of the Windows domain that the FSx for Windows File Server belongs
     * to.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the Windows domain that the FSx for Windows File Server belongs
     * to.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The name of the Windows domain that the FSx for Windows File Server belongs
     * to.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the Windows domain that the FSx for Windows File Server belongs
     * to.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The name of the Windows domain that the FSx for Windows File Server belongs
     * to.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the Windows domain that the FSx for Windows File Server belongs
     * to.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the Windows domain that the FSx for Windows File Server belongs
     * to.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the Windows domain that the FSx for Windows File Server belongs
     * to.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The password of the user who has the permissions to access files and folders
     * in the FSx for Windows File Server file system.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password of the user who has the permissions to access files and folders
     * in the FSx for Windows File Server file system.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password of the user who has the permissions to access files and folders
     * in the FSx for Windows File Server file system.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password of the user who has the permissions to access files and folders
     * in the FSx for Windows File Server file system.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password of the user who has the permissions to access files and folders
     * in the FSx for Windows File Server file system.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password of the user who has the permissions to access files and folders
     * in the FSx for Windows File Server file system.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password of the user who has the permissions to access files and folders
     * in the FSx for Windows File Server file system.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password of the user who has the permissions to access files and folders
     * in the FSx for Windows File Server file system.</p>
     */
    inline CreateLocationFsxWindowsRequest& WithPassword(const char* value) { SetPassword(value); return *this;}

  private:

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet;

    Aws::String m_fsxFilesystemArn;
    bool m_fsxFilesystemArnHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupArns;
    bool m_securityGroupArnsHasBeenSet;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_user;
    bool m_userHasBeenSet;

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
