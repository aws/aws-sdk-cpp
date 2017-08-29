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
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeStar
{
namespace Model
{
  class AWS_CODESTAR_API UpdateUserProfileResult
  {
  public:
    UpdateUserProfileResult();
    UpdateUserProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateUserProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline void SetUserArn(const char* value) { m_userArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline UpdateUserProfileResult& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline UpdateUserProfileResult& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user in IAM.</p>
     */
    inline UpdateUserProfileResult& WithUserArn(const char* value) { SetUserArn(value); return *this;}


    /**
     * <p>The name that is displayed as the friendly name for the user in AWS
     * CodeStar.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name that is displayed as the friendly name for the user in AWS
     * CodeStar.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The name that is displayed as the friendly name for the user in AWS
     * CodeStar.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The name that is displayed as the friendly name for the user in AWS
     * CodeStar.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The name that is displayed as the friendly name for the user in AWS
     * CodeStar.</p>
     */
    inline UpdateUserProfileResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name that is displayed as the friendly name for the user in AWS
     * CodeStar.</p>
     */
    inline UpdateUserProfileResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name that is displayed as the friendly name for the user in AWS
     * CodeStar.</p>
     */
    inline UpdateUserProfileResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The email address that is displayed as part of the user's profile in AWS
     * CodeStar.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address that is displayed as part of the user's profile in AWS
     * CodeStar.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddress = value; }

    /**
     * <p>The email address that is displayed as part of the user's profile in AWS
     * CodeStar.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddress = std::move(value); }

    /**
     * <p>The email address that is displayed as part of the user's profile in AWS
     * CodeStar.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddress.assign(value); }

    /**
     * <p>The email address that is displayed as part of the user's profile in AWS
     * CodeStar.</p>
     */
    inline UpdateUserProfileResult& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address that is displayed as part of the user's profile in AWS
     * CodeStar.</p>
     */
    inline UpdateUserProfileResult& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address that is displayed as part of the user's profile in AWS
     * CodeStar.</p>
     */
    inline UpdateUserProfileResult& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>The SSH public key associated with the user in AWS CodeStar. This is the
     * public portion of the public/private keypair the user can use to access project
     * resources if a project owner allows the user remote access to those
     * resources.</p>
     */
    inline const Aws::String& GetSshPublicKey() const{ return m_sshPublicKey; }

    /**
     * <p>The SSH public key associated with the user in AWS CodeStar. This is the
     * public portion of the public/private keypair the user can use to access project
     * resources if a project owner allows the user remote access to those
     * resources.</p>
     */
    inline void SetSshPublicKey(const Aws::String& value) { m_sshPublicKey = value; }

    /**
     * <p>The SSH public key associated with the user in AWS CodeStar. This is the
     * public portion of the public/private keypair the user can use to access project
     * resources if a project owner allows the user remote access to those
     * resources.</p>
     */
    inline void SetSshPublicKey(Aws::String&& value) { m_sshPublicKey = std::move(value); }

    /**
     * <p>The SSH public key associated with the user in AWS CodeStar. This is the
     * public portion of the public/private keypair the user can use to access project
     * resources if a project owner allows the user remote access to those
     * resources.</p>
     */
    inline void SetSshPublicKey(const char* value) { m_sshPublicKey.assign(value); }

    /**
     * <p>The SSH public key associated with the user in AWS CodeStar. This is the
     * public portion of the public/private keypair the user can use to access project
     * resources if a project owner allows the user remote access to those
     * resources.</p>
     */
    inline UpdateUserProfileResult& WithSshPublicKey(const Aws::String& value) { SetSshPublicKey(value); return *this;}

    /**
     * <p>The SSH public key associated with the user in AWS CodeStar. This is the
     * public portion of the public/private keypair the user can use to access project
     * resources if a project owner allows the user remote access to those
     * resources.</p>
     */
    inline UpdateUserProfileResult& WithSshPublicKey(Aws::String&& value) { SetSshPublicKey(std::move(value)); return *this;}

    /**
     * <p>The SSH public key associated with the user in AWS CodeStar. This is the
     * public portion of the public/private keypair the user can use to access project
     * resources if a project owner allows the user remote access to those
     * resources.</p>
     */
    inline UpdateUserProfileResult& WithSshPublicKey(const char* value) { SetSshPublicKey(value); return *this;}


    /**
     * <p>The date the user profile was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The date the user profile was created, in timestamp format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The date the user profile was created, in timestamp format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The date the user profile was created, in timestamp format.</p>
     */
    inline UpdateUserProfileResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The date the user profile was created, in timestamp format.</p>
     */
    inline UpdateUserProfileResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The date the user profile was last modified, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }

    /**
     * <p>The date the user profile was last modified, in timestamp format.</p>
     */
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestamp = value; }

    /**
     * <p>The date the user profile was last modified, in timestamp format.</p>
     */
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestamp = std::move(value); }

    /**
     * <p>The date the user profile was last modified, in timestamp format.</p>
     */
    inline UpdateUserProfileResult& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}

    /**
     * <p>The date the user profile was last modified, in timestamp format.</p>
     */
    inline UpdateUserProfileResult& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_userArn;

    Aws::String m_displayName;

    Aws::String m_emailAddress;

    Aws::String m_sshPublicKey;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_lastModifiedTimestamp;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
