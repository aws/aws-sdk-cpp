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
   * <p>Returns properties of the user that you specify.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListedUser">AWS
   * API Reference</a></p>
   */
  class ListedUser
  {
  public:
    AWS_TRANSFER_API ListedUser() = default;
    AWS_TRANSFER_API ListedUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ListedUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the unique Amazon Resource Name (ARN) for the user that you want to
     * learn about.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListedUser& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>  <p>You can use the
     * <code>HomeDirectory</code> parameter for <code>HomeDirectoryType</code> when it
     * is set to either <code>PATH</code> or <code>LOGICAL</code>.</p> 
     */
    inline const Aws::String& GetHomeDirectory() const { return m_homeDirectory; }
    inline bool HomeDirectoryHasBeenSet() const { return m_homeDirectoryHasBeenSet; }
    template<typename HomeDirectoryT = Aws::String>
    void SetHomeDirectory(HomeDirectoryT&& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = std::forward<HomeDirectoryT>(value); }
    template<typename HomeDirectoryT = Aws::String>
    ListedUser& WithHomeDirectory(HomeDirectoryT&& value) { SetHomeDirectory(std::forward<HomeDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or Amazon EFS
     * path as is in their file transfer protocol clients. If you set it to
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>  <p>If <code>HomeDirectoryType</code>
     * is <code>LOGICAL</code>, you must provide mappings, using the
     * <code>HomeDirectoryMappings</code> parameter. If, on the other hand,
     * <code>HomeDirectoryType</code> is <code>PATH</code>, you provide an absolute
     * path using the <code>HomeDirectory</code> parameter. You cannot have both
     * <code>HomeDirectory</code> and <code>HomeDirectoryMappings</code> in your
     * template.</p> 
     */
    inline HomeDirectoryType GetHomeDirectoryType() const { return m_homeDirectoryType; }
    inline bool HomeDirectoryTypeHasBeenSet() const { return m_homeDirectoryTypeHasBeenSet; }
    inline void SetHomeDirectoryType(HomeDirectoryType value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = value; }
    inline ListedUser& WithHomeDirectoryType(HomeDirectoryType value) { SetHomeDirectoryType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>  <p>The IAM role that
     * controls your users' access to your Amazon S3 bucket for servers with
     * <code>Domain=S3</code>, or your EFS file system for servers with
     * <code>Domain=EFS</code>. </p> <p>The policies attached to this role determine
     * the level of access you want to provide your users when transferring files into
     * and out of your S3 buckets or EFS file systems.</p> 
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    ListedUser& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of SSH public keys stored for the user you
     * specified.</p>
     */
    inline int GetSshPublicKeyCount() const { return m_sshPublicKeyCount; }
    inline bool SshPublicKeyCountHasBeenSet() const { return m_sshPublicKeyCountHasBeenSet; }
    inline void SetSshPublicKeyCount(int value) { m_sshPublicKeyCountHasBeenSet = true; m_sshPublicKeyCount = value; }
    inline ListedUser& WithSshPublicKeyCount(int value) { SetSshPublicKeyCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the user whose ARN was specified. User names are used
     * for authentication purposes.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    ListedUser& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_homeDirectory;
    bool m_homeDirectoryHasBeenSet = false;

    HomeDirectoryType m_homeDirectoryType{HomeDirectoryType::NOT_SET};
    bool m_homeDirectoryTypeHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    int m_sshPublicKeyCount{0};
    bool m_sshPublicKeyCountHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
