/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/HomeDirectoryType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Transfer
{
namespace Model
{

  /**
   * <p>Lists the properties for one or more specified associated
   * accesses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListedAccess">AWS
   * API Reference</a></p>
   */
  class ListedAccess
  {
  public:
    AWS_TRANSFER_API ListedAccess();
    AWS_TRANSFER_API ListedAccess(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ListedAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline const Aws::String& GetHomeDirectory() const{ return m_homeDirectory; }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline bool HomeDirectoryHasBeenSet() const { return m_homeDirectoryHasBeenSet; }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline void SetHomeDirectory(const Aws::String& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = value; }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline void SetHomeDirectory(Aws::String&& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = std::move(value); }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline void SetHomeDirectory(const char* value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory.assign(value); }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline ListedAccess& WithHomeDirectory(const Aws::String& value) { SetHomeDirectory(value); return *this;}

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline ListedAccess& WithHomeDirectory(Aws::String&& value) { SetHomeDirectory(std::move(value)); return *this;}

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline ListedAccess& WithHomeDirectory(const char* value) { SetHomeDirectory(value); return *this;}


    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or EFS paths
     * as is in their file transfer protocol clients. If you set it
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>
     */
    inline const HomeDirectoryType& GetHomeDirectoryType() const{ return m_homeDirectoryType; }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or EFS paths
     * as is in their file transfer protocol clients. If you set it
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>
     */
    inline bool HomeDirectoryTypeHasBeenSet() const { return m_homeDirectoryTypeHasBeenSet; }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or EFS paths
     * as is in their file transfer protocol clients. If you set it
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>
     */
    inline void SetHomeDirectoryType(const HomeDirectoryType& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = value; }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or EFS paths
     * as is in their file transfer protocol clients. If you set it
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>
     */
    inline void SetHomeDirectoryType(HomeDirectoryType&& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = std::move(value); }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or EFS paths
     * as is in their file transfer protocol clients. If you set it
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>
     */
    inline ListedAccess& WithHomeDirectoryType(const HomeDirectoryType& value) { SetHomeDirectoryType(value); return *this;}

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or EFS paths
     * as is in their file transfer protocol clients. If you set it
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>
     */
    inline ListedAccess& WithHomeDirectoryType(HomeDirectoryType&& value) { SetHomeDirectoryType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline ListedAccess& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline ListedAccess& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline ListedAccess& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline ListedAccess& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline ListedAccess& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline ListedAccess& WithExternalId(const char* value) { SetExternalId(value); return *this;}

  private:

    Aws::String m_homeDirectory;
    bool m_homeDirectoryHasBeenSet = false;

    HomeDirectoryType m_homeDirectoryType;
    bool m_homeDirectoryTypeHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
