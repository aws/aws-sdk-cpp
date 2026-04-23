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
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/SshPublicKey.h>
#include <aws/awstransfer/model/Tag.h>
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
   * <p>Returns properties of the user that you wish to describe.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedUser">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSFER_API DescribedUser
  {
  public:
    DescribedUser();
    DescribedUser(Aws::Utils::Json::JsonView jsonValue);
    DescribedUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This property contains the unique Amazon Resource Name (ARN) for the user
     * that was requested to be described.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>This property contains the unique Amazon Resource Name (ARN) for the user
     * that was requested to be described.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>This property contains the unique Amazon Resource Name (ARN) for the user
     * that was requested to be described.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>This property contains the unique Amazon Resource Name (ARN) for the user
     * that was requested to be described.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>This property contains the unique Amazon Resource Name (ARN) for the user
     * that was requested to be described.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>This property contains the unique Amazon Resource Name (ARN) for the user
     * that was requested to be described.</p>
     */
    inline DescribedUser& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>This property contains the unique Amazon Resource Name (ARN) for the user
     * that was requested to be described.</p>
     */
    inline DescribedUser& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>This property contains the unique Amazon Resource Name (ARN) for the user
     * that was requested to be described.</p>
     */
    inline DescribedUser& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>This property specifies the landing directory (or folder) which is the
     * location that files are written to or read from in an Amazon S3 bucket for the
     * described user. An example would be:
     * <code>/<i>bucket_name</i>/home/<i>username</i> </code>.</p>
     */
    inline const Aws::String& GetHomeDirectory() const{ return m_homeDirectory; }

    /**
     * <p>This property specifies the landing directory (or folder) which is the
     * location that files are written to or read from in an Amazon S3 bucket for the
     * described user. An example would be:
     * <code>/<i>bucket_name</i>/home/<i>username</i> </code>.</p>
     */
    inline bool HomeDirectoryHasBeenSet() const { return m_homeDirectoryHasBeenSet; }

    /**
     * <p>This property specifies the landing directory (or folder) which is the
     * location that files are written to or read from in an Amazon S3 bucket for the
     * described user. An example would be:
     * <code>/<i>bucket_name</i>/home/<i>username</i> </code>.</p>
     */
    inline void SetHomeDirectory(const Aws::String& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = value; }

    /**
     * <p>This property specifies the landing directory (or folder) which is the
     * location that files are written to or read from in an Amazon S3 bucket for the
     * described user. An example would be:
     * <code>/<i>bucket_name</i>/home/<i>username</i> </code>.</p>
     */
    inline void SetHomeDirectory(Aws::String&& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = std::move(value); }

    /**
     * <p>This property specifies the landing directory (or folder) which is the
     * location that files are written to or read from in an Amazon S3 bucket for the
     * described user. An example would be:
     * <code>/<i>bucket_name</i>/home/<i>username</i> </code>.</p>
     */
    inline void SetHomeDirectory(const char* value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory.assign(value); }

    /**
     * <p>This property specifies the landing directory (or folder) which is the
     * location that files are written to or read from in an Amazon S3 bucket for the
     * described user. An example would be:
     * <code>/<i>bucket_name</i>/home/<i>username</i> </code>.</p>
     */
    inline DescribedUser& WithHomeDirectory(const Aws::String& value) { SetHomeDirectory(value); return *this;}

    /**
     * <p>This property specifies the landing directory (or folder) which is the
     * location that files are written to or read from in an Amazon S3 bucket for the
     * described user. An example would be:
     * <code>/<i>bucket_name</i>/home/<i>username</i> </code>.</p>
     */
    inline DescribedUser& WithHomeDirectory(Aws::String&& value) { SetHomeDirectory(std::move(value)); return *this;}

    /**
     * <p>This property specifies the landing directory (or folder) which is the
     * location that files are written to or read from in an Amazon S3 bucket for the
     * described user. An example would be:
     * <code>/<i>bucket_name</i>/home/<i>username</i> </code>.</p>
     */
    inline DescribedUser& WithHomeDirectory(const char* value) { SetHomeDirectory(value); return *this;}


    /**
     * <p>Specifies the name of the policy in use for the described user.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>Specifies the name of the policy in use for the described user.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>Specifies the name of the policy in use for the described user.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>Specifies the name of the policy in use for the described user.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>Specifies the name of the policy in use for the described user.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>Specifies the name of the policy in use for the described user.</p>
     */
    inline DescribedUser& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>Specifies the name of the policy in use for the described user.</p>
     */
    inline DescribedUser& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the policy in use for the described user.</p>
     */
    inline DescribedUser& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>This property specifies the IAM role that controls your user's access to your
     * Amazon S3 bucket. The policies attached to this role will determine the level of
     * access you want to provide your users when transferring files into and out of
     * your Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows the SFTP server to access your resources when servicing
     * your SFTP user's transfer requests.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>This property specifies the IAM role that controls your user's access to your
     * Amazon S3 bucket. The policies attached to this role will determine the level of
     * access you want to provide your users when transferring files into and out of
     * your Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows the SFTP server to access your resources when servicing
     * your SFTP user's transfer requests.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>This property specifies the IAM role that controls your user's access to your
     * Amazon S3 bucket. The policies attached to this role will determine the level of
     * access you want to provide your users when transferring files into and out of
     * your Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows the SFTP server to access your resources when servicing
     * your SFTP user's transfer requests.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>This property specifies the IAM role that controls your user's access to your
     * Amazon S3 bucket. The policies attached to this role will determine the level of
     * access you want to provide your users when transferring files into and out of
     * your Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows the SFTP server to access your resources when servicing
     * your SFTP user's transfer requests.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>This property specifies the IAM role that controls your user's access to your
     * Amazon S3 bucket. The policies attached to this role will determine the level of
     * access you want to provide your users when transferring files into and out of
     * your Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows the SFTP server to access your resources when servicing
     * your SFTP user's transfer requests.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>This property specifies the IAM role that controls your user's access to your
     * Amazon S3 bucket. The policies attached to this role will determine the level of
     * access you want to provide your users when transferring files into and out of
     * your Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows the SFTP server to access your resources when servicing
     * your SFTP user's transfer requests.</p>
     */
    inline DescribedUser& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>This property specifies the IAM role that controls your user's access to your
     * Amazon S3 bucket. The policies attached to this role will determine the level of
     * access you want to provide your users when transferring files into and out of
     * your Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows the SFTP server to access your resources when servicing
     * your SFTP user's transfer requests.</p>
     */
    inline DescribedUser& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>This property specifies the IAM role that controls your user's access to your
     * Amazon S3 bucket. The policies attached to this role will determine the level of
     * access you want to provide your users when transferring files into and out of
     * your Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows the SFTP server to access your resources when servicing
     * your SFTP user's transfer requests.</p>
     */
    inline DescribedUser& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>This property contains the public key portion of the Secure Shell (SSH) keys
     * stored for the described user.</p>
     */
    inline const Aws::Vector<SshPublicKey>& GetSshPublicKeys() const{ return m_sshPublicKeys; }

    /**
     * <p>This property contains the public key portion of the Secure Shell (SSH) keys
     * stored for the described user.</p>
     */
    inline bool SshPublicKeysHasBeenSet() const { return m_sshPublicKeysHasBeenSet; }

    /**
     * <p>This property contains the public key portion of the Secure Shell (SSH) keys
     * stored for the described user.</p>
     */
    inline void SetSshPublicKeys(const Aws::Vector<SshPublicKey>& value) { m_sshPublicKeysHasBeenSet = true; m_sshPublicKeys = value; }

    /**
     * <p>This property contains the public key portion of the Secure Shell (SSH) keys
     * stored for the described user.</p>
     */
    inline void SetSshPublicKeys(Aws::Vector<SshPublicKey>&& value) { m_sshPublicKeysHasBeenSet = true; m_sshPublicKeys = std::move(value); }

    /**
     * <p>This property contains the public key portion of the Secure Shell (SSH) keys
     * stored for the described user.</p>
     */
    inline DescribedUser& WithSshPublicKeys(const Aws::Vector<SshPublicKey>& value) { SetSshPublicKeys(value); return *this;}

    /**
     * <p>This property contains the public key portion of the Secure Shell (SSH) keys
     * stored for the described user.</p>
     */
    inline DescribedUser& WithSshPublicKeys(Aws::Vector<SshPublicKey>&& value) { SetSshPublicKeys(std::move(value)); return *this;}

    /**
     * <p>This property contains the public key portion of the Secure Shell (SSH) keys
     * stored for the described user.</p>
     */
    inline DescribedUser& AddSshPublicKeys(const SshPublicKey& value) { m_sshPublicKeysHasBeenSet = true; m_sshPublicKeys.push_back(value); return *this; }

    /**
     * <p>This property contains the public key portion of the Secure Shell (SSH) keys
     * stored for the described user.</p>
     */
    inline DescribedUser& AddSshPublicKeys(SshPublicKey&& value) { m_sshPublicKeysHasBeenSet = true; m_sshPublicKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>This property contains the key-value pairs for the user requested. Tag can be
     * used to search for and group users for a variety of purposes.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>This property contains the key-value pairs for the user requested. Tag can be
     * used to search for and group users for a variety of purposes.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>This property contains the key-value pairs for the user requested. Tag can be
     * used to search for and group users for a variety of purposes.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>This property contains the key-value pairs for the user requested. Tag can be
     * used to search for and group users for a variety of purposes.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>This property contains the key-value pairs for the user requested. Tag can be
     * used to search for and group users for a variety of purposes.</p>
     */
    inline DescribedUser& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>This property contains the key-value pairs for the user requested. Tag can be
     * used to search for and group users for a variety of purposes.</p>
     */
    inline DescribedUser& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>This property contains the key-value pairs for the user requested. Tag can be
     * used to search for and group users for a variety of purposes.</p>
     */
    inline DescribedUser& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>This property contains the key-value pairs for the user requested. Tag can be
     * used to search for and group users for a variety of purposes.</p>
     */
    inline DescribedUser& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>This property is the name of the user that was requested to be described.
     * User names are used for authentication purposes. This is the string that will be
     * used by your user when they log in to your SFTP server.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>This property is the name of the user that was requested to be described.
     * User names are used for authentication purposes. This is the string that will be
     * used by your user when they log in to your SFTP server.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>This property is the name of the user that was requested to be described.
     * User names are used for authentication purposes. This is the string that will be
     * used by your user when they log in to your SFTP server.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>This property is the name of the user that was requested to be described.
     * User names are used for authentication purposes. This is the string that will be
     * used by your user when they log in to your SFTP server.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>This property is the name of the user that was requested to be described.
     * User names are used for authentication purposes. This is the string that will be
     * used by your user when they log in to your SFTP server.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>This property is the name of the user that was requested to be described.
     * User names are used for authentication purposes. This is the string that will be
     * used by your user when they log in to your SFTP server.</p>
     */
    inline DescribedUser& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>This property is the name of the user that was requested to be described.
     * User names are used for authentication purposes. This is the string that will be
     * used by your user when they log in to your SFTP server.</p>
     */
    inline DescribedUser& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>This property is the name of the user that was requested to be described.
     * User names are used for authentication purposes. This is the string that will be
     * used by your user when they log in to your SFTP server.</p>
     */
    inline DescribedUser& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_homeDirectory;
    bool m_homeDirectoryHasBeenSet;

    Aws::String m_policy;
    bool m_policyHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    Aws::Vector<SshPublicKey> m_sshPublicKeys;
    bool m_sshPublicKeysHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
