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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Role alias description.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RoleAliasDescription">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API RoleAliasDescription
  {
  public:
    RoleAliasDescription();
    RoleAliasDescription(Aws::Utils::Json::JsonView jsonValue);
    RoleAliasDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The role alias.</p>
     */
    inline const Aws::String& GetRoleAlias() const{ return m_roleAlias; }

    /**
     * <p>The role alias.</p>
     */
    inline bool RoleAliasHasBeenSet() const { return m_roleAliasHasBeenSet; }

    /**
     * <p>The role alias.</p>
     */
    inline void SetRoleAlias(const Aws::String& value) { m_roleAliasHasBeenSet = true; m_roleAlias = value; }

    /**
     * <p>The role alias.</p>
     */
    inline void SetRoleAlias(Aws::String&& value) { m_roleAliasHasBeenSet = true; m_roleAlias = std::move(value); }

    /**
     * <p>The role alias.</p>
     */
    inline void SetRoleAlias(const char* value) { m_roleAliasHasBeenSet = true; m_roleAlias.assign(value); }

    /**
     * <p>The role alias.</p>
     */
    inline RoleAliasDescription& WithRoleAlias(const Aws::String& value) { SetRoleAlias(value); return *this;}

    /**
     * <p>The role alias.</p>
     */
    inline RoleAliasDescription& WithRoleAlias(Aws::String&& value) { SetRoleAlias(std::move(value)); return *this;}

    /**
     * <p>The role alias.</p>
     */
    inline RoleAliasDescription& WithRoleAlias(const char* value) { SetRoleAlias(value); return *this;}


    /**
     * <p>The ARN of the role alias.</p>
     */
    inline const Aws::String& GetRoleAliasArn() const{ return m_roleAliasArn; }

    /**
     * <p>The ARN of the role alias.</p>
     */
    inline bool RoleAliasArnHasBeenSet() const { return m_roleAliasArnHasBeenSet; }

    /**
     * <p>The ARN of the role alias.</p>
     */
    inline void SetRoleAliasArn(const Aws::String& value) { m_roleAliasArnHasBeenSet = true; m_roleAliasArn = value; }

    /**
     * <p>The ARN of the role alias.</p>
     */
    inline void SetRoleAliasArn(Aws::String&& value) { m_roleAliasArnHasBeenSet = true; m_roleAliasArn = std::move(value); }

    /**
     * <p>The ARN of the role alias.</p>
     */
    inline void SetRoleAliasArn(const char* value) { m_roleAliasArnHasBeenSet = true; m_roleAliasArn.assign(value); }

    /**
     * <p>The ARN of the role alias.</p>
     */
    inline RoleAliasDescription& WithRoleAliasArn(const Aws::String& value) { SetRoleAliasArn(value); return *this;}

    /**
     * <p>The ARN of the role alias.</p>
     */
    inline RoleAliasDescription& WithRoleAliasArn(Aws::String&& value) { SetRoleAliasArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role alias.</p>
     */
    inline RoleAliasDescription& WithRoleAliasArn(const char* value) { SetRoleAliasArn(value); return *this;}


    /**
     * <p>The role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The role ARN.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The role ARN.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The role ARN.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The role ARN.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The role ARN.</p>
     */
    inline RoleAliasDescription& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The role ARN.</p>
     */
    inline RoleAliasDescription& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The role ARN.</p>
     */
    inline RoleAliasDescription& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The role alias owner.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The role alias owner.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The role alias owner.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The role alias owner.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The role alias owner.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The role alias owner.</p>
     */
    inline RoleAliasDescription& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The role alias owner.</p>
     */
    inline RoleAliasDescription& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The role alias owner.</p>
     */
    inline RoleAliasDescription& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The number of seconds for which the credential is valid.</p>
     */
    inline int GetCredentialDurationSeconds() const{ return m_credentialDurationSeconds; }

    /**
     * <p>The number of seconds for which the credential is valid.</p>
     */
    inline bool CredentialDurationSecondsHasBeenSet() const { return m_credentialDurationSecondsHasBeenSet; }

    /**
     * <p>The number of seconds for which the credential is valid.</p>
     */
    inline void SetCredentialDurationSeconds(int value) { m_credentialDurationSecondsHasBeenSet = true; m_credentialDurationSeconds = value; }

    /**
     * <p>The number of seconds for which the credential is valid.</p>
     */
    inline RoleAliasDescription& WithCredentialDurationSeconds(int value) { SetCredentialDurationSeconds(value); return *this;}


    /**
     * <p>The UNIX timestamp of when the role alias was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The UNIX timestamp of when the role alias was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The UNIX timestamp of when the role alias was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The UNIX timestamp of when the role alias was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The UNIX timestamp of when the role alias was created.</p>
     */
    inline RoleAliasDescription& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The UNIX timestamp of when the role alias was created.</p>
     */
    inline RoleAliasDescription& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The UNIX timestamp of when the role alias was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The UNIX timestamp of when the role alias was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The UNIX timestamp of when the role alias was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The UNIX timestamp of when the role alias was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The UNIX timestamp of when the role alias was last modified.</p>
     */
    inline RoleAliasDescription& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The UNIX timestamp of when the role alias was last modified.</p>
     */
    inline RoleAliasDescription& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}

  private:

    Aws::String m_roleAlias;
    bool m_roleAliasHasBeenSet;

    Aws::String m_roleAliasArn;
    bool m_roleAliasArnHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_owner;
    bool m_ownerHasBeenSet;

    int m_credentialDurationSeconds;
    bool m_credentialDurationSecondsHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
