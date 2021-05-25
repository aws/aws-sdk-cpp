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
  class AWS_TRANSFER_API ListedAccess
  {
  public:
    ListedAccess();
    ListedAccess(Aws::Utils::Json::JsonView jsonValue);
    ListedAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described
     * access.</p>
     */
    inline const Aws::String& GetHomeDirectory() const{ return m_homeDirectory; }

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described
     * access.</p>
     */
    inline bool HomeDirectoryHasBeenSet() const { return m_homeDirectoryHasBeenSet; }

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described
     * access.</p>
     */
    inline void SetHomeDirectory(const Aws::String& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = value; }

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described
     * access.</p>
     */
    inline void SetHomeDirectory(Aws::String&& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = std::move(value); }

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described
     * access.</p>
     */
    inline void SetHomeDirectory(const char* value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory.assign(value); }

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described
     * access.</p>
     */
    inline ListedAccess& WithHomeDirectory(const Aws::String& value) { SetHomeDirectory(value); return *this;}

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described
     * access.</p>
     */
    inline ListedAccess& WithHomeDirectory(Aws::String&& value) { SetHomeDirectory(std::move(value)); return *this;}

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described
     * access.</p>
     */
    inline ListedAccess& WithHomeDirectory(const char* value) { SetHomeDirectory(value); return *this;}


    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as is
     * in their file transfer protocol clients. If you set it to <code>LOGICAL</code>,
     * you must provide mappings in the <code>HomeDirectoryMappings</code> for how you
     * want to make Amazon S3 paths visible to your users.</p>
     */
    inline const HomeDirectoryType& GetHomeDirectoryType() const{ return m_homeDirectoryType; }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as is
     * in their file transfer protocol clients. If you set it to <code>LOGICAL</code>,
     * you must provide mappings in the <code>HomeDirectoryMappings</code> for how you
     * want to make Amazon S3 paths visible to your users.</p>
     */
    inline bool HomeDirectoryTypeHasBeenSet() const { return m_homeDirectoryTypeHasBeenSet; }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as is
     * in their file transfer protocol clients. If you set it to <code>LOGICAL</code>,
     * you must provide mappings in the <code>HomeDirectoryMappings</code> for how you
     * want to make Amazon S3 paths visible to your users.</p>
     */
    inline void SetHomeDirectoryType(const HomeDirectoryType& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = value; }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as is
     * in their file transfer protocol clients. If you set it to <code>LOGICAL</code>,
     * you must provide mappings in the <code>HomeDirectoryMappings</code> for how you
     * want to make Amazon S3 paths visible to your users.</p>
     */
    inline void SetHomeDirectoryType(HomeDirectoryType&& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = std::move(value); }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as is
     * in their file transfer protocol clients. If you set it to <code>LOGICAL</code>,
     * you must provide mappings in the <code>HomeDirectoryMappings</code> for how you
     * want to make Amazon S3 paths visible to your users.</p>
     */
    inline ListedAccess& WithHomeDirectoryType(const HomeDirectoryType& value) { SetHomeDirectoryType(value); return *this;}

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as is
     * in their file transfer protocol clients. If you set it to <code>LOGICAL</code>,
     * you must provide mappings in the <code>HomeDirectoryMappings</code> for how you
     * want to make Amazon S3 paths visible to your users.</p>
     */
    inline ListedAccess& WithHomeDirectoryType(HomeDirectoryType&& value) { SetHomeDirectoryType(std::move(value)); return *this;}


    /**
     * <p>The AWS Identity and Access Management (IAM) role that controls access to
     * your Amazon S3 bucket from the specified associated access. The policies
     * attached to this role will determine the level of access that you want to
     * provide the associated access when transferring files into and out of your
     * Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows a server to access your resources when servicing
     * transfer requests for the associated access.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The AWS Identity and Access Management (IAM) role that controls access to
     * your Amazon S3 bucket from the specified associated access. The policies
     * attached to this role will determine the level of access that you want to
     * provide the associated access when transferring files into and out of your
     * Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows a server to access your resources when servicing
     * transfer requests for the associated access.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The AWS Identity and Access Management (IAM) role that controls access to
     * your Amazon S3 bucket from the specified associated access. The policies
     * attached to this role will determine the level of access that you want to
     * provide the associated access when transferring files into and out of your
     * Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows a server to access your resources when servicing
     * transfer requests for the associated access.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The AWS Identity and Access Management (IAM) role that controls access to
     * your Amazon S3 bucket from the specified associated access. The policies
     * attached to this role will determine the level of access that you want to
     * provide the associated access when transferring files into and out of your
     * Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows a server to access your resources when servicing
     * transfer requests for the associated access.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The AWS Identity and Access Management (IAM) role that controls access to
     * your Amazon S3 bucket from the specified associated access. The policies
     * attached to this role will determine the level of access that you want to
     * provide the associated access when transferring files into and out of your
     * Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows a server to access your resources when servicing
     * transfer requests for the associated access.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The AWS Identity and Access Management (IAM) role that controls access to
     * your Amazon S3 bucket from the specified associated access. The policies
     * attached to this role will determine the level of access that you want to
     * provide the associated access when transferring files into and out of your
     * Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows a server to access your resources when servicing
     * transfer requests for the associated access.</p>
     */
    inline ListedAccess& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The AWS Identity and Access Management (IAM) role that controls access to
     * your Amazon S3 bucket from the specified associated access. The policies
     * attached to this role will determine the level of access that you want to
     * provide the associated access when transferring files into and out of your
     * Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows a server to access your resources when servicing
     * transfer requests for the associated access.</p>
     */
    inline ListedAccess& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The AWS Identity and Access Management (IAM) role that controls access to
     * your Amazon S3 bucket from the specified associated access. The policies
     * attached to this role will determine the level of access that you want to
     * provide the associated access when transferring files into and out of your
     * Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows a server to access your resources when servicing
     * transfer requests for the associated access.</p>
     */
    inline ListedAccess& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. Think of the <code>ExternalID</code> as a group membership mechanism
     * that uses a unique identifier (often a SID, but could be a group name or
     * something else) as a basis. If the administrator of the account to which the
     * role belongs provided you with an external ID, then provide that value in the
     * <code>ExternalId</code> parameter. A cross-account role is usually set up to
     * trust everyone in an account. Therefore, the administrator of the trusting
     * account might send an external ID to the administrator of the trusted account.
     * That way, only someone with the ID can assume the role, rather than everyone in
     * the account.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of uppercase and lowercase alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. Think of the <code>ExternalID</code> as a group membership mechanism
     * that uses a unique identifier (often a SID, but could be a group name or
     * something else) as a basis. If the administrator of the account to which the
     * role belongs provided you with an external ID, then provide that value in the
     * <code>ExternalId</code> parameter. A cross-account role is usually set up to
     * trust everyone in an account. Therefore, the administrator of the trusting
     * account might send an external ID to the administrator of the trusted account.
     * That way, only someone with the ID can assume the role, rather than everyone in
     * the account.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of uppercase and lowercase alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. Think of the <code>ExternalID</code> as a group membership mechanism
     * that uses a unique identifier (often a SID, but could be a group name or
     * something else) as a basis. If the administrator of the account to which the
     * role belongs provided you with an external ID, then provide that value in the
     * <code>ExternalId</code> parameter. A cross-account role is usually set up to
     * trust everyone in an account. Therefore, the administrator of the trusting
     * account might send an external ID to the administrator of the trusted account.
     * That way, only someone with the ID can assume the role, rather than everyone in
     * the account.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of uppercase and lowercase alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. Think of the <code>ExternalID</code> as a group membership mechanism
     * that uses a unique identifier (often a SID, but could be a group name or
     * something else) as a basis. If the administrator of the account to which the
     * role belongs provided you with an external ID, then provide that value in the
     * <code>ExternalId</code> parameter. A cross-account role is usually set up to
     * trust everyone in an account. Therefore, the administrator of the trusting
     * account might send an external ID to the administrator of the trusted account.
     * That way, only someone with the ID can assume the role, rather than everyone in
     * the account.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of uppercase and lowercase alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. Think of the <code>ExternalID</code> as a group membership mechanism
     * that uses a unique identifier (often a SID, but could be a group name or
     * something else) as a basis. If the administrator of the account to which the
     * role belongs provided you with an external ID, then provide that value in the
     * <code>ExternalId</code> parameter. A cross-account role is usually set up to
     * trust everyone in an account. Therefore, the administrator of the trusting
     * account might send an external ID to the administrator of the trusted account.
     * That way, only someone with the ID can assume the role, rather than everyone in
     * the account.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of uppercase and lowercase alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. Think of the <code>ExternalID</code> as a group membership mechanism
     * that uses a unique identifier (often a SID, but could be a group name or
     * something else) as a basis. If the administrator of the account to which the
     * role belongs provided you with an external ID, then provide that value in the
     * <code>ExternalId</code> parameter. A cross-account role is usually set up to
     * trust everyone in an account. Therefore, the administrator of the trusting
     * account might send an external ID to the administrator of the trusted account.
     * That way, only someone with the ID can assume the role, rather than everyone in
     * the account.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of uppercase and lowercase alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline ListedAccess& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. Think of the <code>ExternalID</code> as a group membership mechanism
     * that uses a unique identifier (often a SID, but could be a group name or
     * something else) as a basis. If the administrator of the account to which the
     * role belongs provided you with an external ID, then provide that value in the
     * <code>ExternalId</code> parameter. A cross-account role is usually set up to
     * trust everyone in an account. Therefore, the administrator of the trusting
     * account might send an external ID to the administrator of the trusted account.
     * That way, only someone with the ID can assume the role, rather than everyone in
     * the account.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of uppercase and lowercase alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline ListedAccess& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. Think of the <code>ExternalID</code> as a group membership mechanism
     * that uses a unique identifier (often a SID, but could be a group name or
     * something else) as a basis. If the administrator of the account to which the
     * role belongs provided you with an external ID, then provide that value in the
     * <code>ExternalId</code> parameter. A cross-account role is usually set up to
     * trust everyone in an account. Therefore, the administrator of the trusting
     * account might send an external ID to the administrator of the trusted account.
     * That way, only someone with the ID can assume the role, rather than everyone in
     * the account.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of uppercase and lowercase alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline ListedAccess& WithExternalId(const char* value) { SetExternalId(value); return *this;}

  private:

    Aws::String m_homeDirectory;
    bool m_homeDirectoryHasBeenSet;

    HomeDirectoryType m_homeDirectoryType;
    bool m_homeDirectoryTypeHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
