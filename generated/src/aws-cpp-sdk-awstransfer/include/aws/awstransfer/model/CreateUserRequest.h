/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/HomeDirectoryType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/PosixProfile.h>
#include <aws/awstransfer/model/HomeDirectoryMapEntry.h>
#include <aws/awstransfer/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class CreateUserRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API CreateUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    CreateUserRequest& WithHomeDirectory(HomeDirectoryT&& value) { SetHomeDirectory(std::forward<HomeDirectoryT>(value)); return *this;}
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
    inline CreateUserRequest& WithHomeDirectoryType(HomeDirectoryType value) { SetHomeDirectoryType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p>
     * <p>The following is an <code>Entry</code> and <code>Target</code> pair
     * example.</p> <p> <code>[ { "Entry": "/directory1", "Target":
     * "/bucket_name/home/mydirectory" } ]</code> </p> <p>In most cases, you can use
     * this value instead of the session policy to lock your user down to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to <code>/</code> and set <code>Target</code> to the value
     * the user should see for their home directory when they log in.</p> <p>The
     * following is an <code>Entry</code> and <code>Target</code> pair example for
     * <code>chroot</code>.</p> <p> <code>[ { "Entry": "/", "Target":
     * "/bucket_name/home/mydirectory" } ]</code> </p>
     */
    inline const Aws::Vector<HomeDirectoryMapEntry>& GetHomeDirectoryMappings() const { return m_homeDirectoryMappings; }
    inline bool HomeDirectoryMappingsHasBeenSet() const { return m_homeDirectoryMappingsHasBeenSet; }
    template<typename HomeDirectoryMappingsT = Aws::Vector<HomeDirectoryMapEntry>>
    void SetHomeDirectoryMappings(HomeDirectoryMappingsT&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings = std::forward<HomeDirectoryMappingsT>(value); }
    template<typename HomeDirectoryMappingsT = Aws::Vector<HomeDirectoryMapEntry>>
    CreateUserRequest& WithHomeDirectoryMappings(HomeDirectoryMappingsT&& value) { SetHomeDirectoryMappings(std::forward<HomeDirectoryMappingsT>(value)); return *this;}
    template<typename HomeDirectoryMappingsT = HomeDirectoryMapEntry>
    CreateUserRequest& AddHomeDirectoryMappings(HomeDirectoryMappingsT&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.emplace_back(std::forward<HomeDirectoryMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>This policy applies only when
     * the domain of <code>ServerId</code> is Amazon S3. Amazon EFS does not use
     * session policies.</p> <p>For session policies, Transfer Family stores the policy
     * as a JSON blob, instead of the Amazon Resource Name (ARN) of the policy. You
     * save the policy as a JSON blob and pass it in the <code>Policy</code>
     * argument.</p> <p>For an example of a session policy, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy.html">Example
     * session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    CreateUserRequest& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the full POSIX identity, including user ID (<code>Uid</code>),
     * group ID (<code>Gid</code>), and any secondary groups IDs
     * (<code>SecondaryGids</code>), that controls your users' access to your Amazon
     * EFS file systems. The POSIX permissions that are set on files and directories in
     * Amazon EFS determine the level of access your users get when transferring files
     * into and out of your Amazon EFS file systems.</p>
     */
    inline const PosixProfile& GetPosixProfile() const { return m_posixProfile; }
    inline bool PosixProfileHasBeenSet() const { return m_posixProfileHasBeenSet; }
    template<typename PosixProfileT = PosixProfile>
    void SetPosixProfile(PosixProfileT&& value) { m_posixProfileHasBeenSet = true; m_posixProfile = std::forward<PosixProfileT>(value); }
    template<typename PosixProfileT = PosixProfile>
    CreateUserRequest& WithPosixProfile(PosixProfileT&& value) { SetPosixProfile(std::forward<PosixProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    CreateUserRequest& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A system-assigned unique identifier for a server instance. This is the
     * specific server that you added your user to.</p>
     */
    inline const Aws::String& GetServerId() const { return m_serverId; }
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }
    template<typename ServerIdT = Aws::String>
    void SetServerId(ServerIdT&& value) { m_serverIdHasBeenSet = true; m_serverId = std::forward<ServerIdT>(value); }
    template<typename ServerIdT = Aws::String>
    CreateUserRequest& WithServerId(ServerIdT&& value) { SetServerId(std::forward<ServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public portion of the Secure Shell (SSH) key used to authenticate the
     * user to the server.</p> <p>The three standard SSH public key format elements are
     * <code>&lt;key type&gt;</code>, <code>&lt;body base64&gt;</code>, and an optional
     * <code>&lt;comment&gt;</code>, with spaces between each element.</p> <p>Transfer
     * Family accepts RSA, ECDSA, and ED25519 keys.</p> <ul> <li> <p>For RSA keys, the
     * key type is <code>ssh-rsa</code>.</p> </li> <li> <p>For ED25519 keys, the key
     * type is <code>ssh-ed25519</code>.</p> </li> <li> <p>For ECDSA keys, the key type
     * is either <code>ecdsa-sha2-nistp256</code>, <code>ecdsa-sha2-nistp384</code>, or
     * <code>ecdsa-sha2-nistp521</code>, depending on the size of the key you
     * generated.</p> </li> </ul>
     */
    inline const Aws::String& GetSshPublicKeyBody() const { return m_sshPublicKeyBody; }
    inline bool SshPublicKeyBodyHasBeenSet() const { return m_sshPublicKeyBodyHasBeenSet; }
    template<typename SshPublicKeyBodyT = Aws::String>
    void SetSshPublicKeyBody(SshPublicKeyBodyT&& value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody = std::forward<SshPublicKeyBodyT>(value); }
    template<typename SshPublicKeyBodyT = Aws::String>
    CreateUserRequest& WithSshPublicKeyBody(SshPublicKeyBodyT&& value) { SetSshPublicKeyBody(std::forward<SshPublicKeyBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that can be used to group and search for users. Tags are
     * metadata attached to users for any purpose.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateUserRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateUserRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies a user and is associated with a
     * <code>ServerId</code>. This user name must be a minimum of 3 and a maximum of
     * 100 characters long. The following are valid characters: a-z, A-Z, 0-9,
     * underscore '_', hyphen '-', period '.', and at sign '@'. The user name can't
     * start with a hyphen, period, or at sign.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    CreateUserRequest& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_homeDirectory;
    bool m_homeDirectoryHasBeenSet = false;

    HomeDirectoryType m_homeDirectoryType{HomeDirectoryType::NOT_SET};
    bool m_homeDirectoryTypeHasBeenSet = false;

    Aws::Vector<HomeDirectoryMapEntry> m_homeDirectoryMappings;
    bool m_homeDirectoryMappingsHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    PosixProfile m_posixProfile;
    bool m_posixProfileHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Aws::String m_sshPublicKeyBody;
    bool m_sshPublicKeyBodyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
