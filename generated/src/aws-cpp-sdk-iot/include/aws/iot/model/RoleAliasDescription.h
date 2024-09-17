/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RoleAliasDescription
  {
  public:
    AWS_IOT_API RoleAliasDescription();
    AWS_IOT_API RoleAliasDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API RoleAliasDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The role alias.</p>
     */
    inline const Aws::String& GetRoleAlias() const{ return m_roleAlias; }
    inline bool RoleAliasHasBeenSet() const { return m_roleAliasHasBeenSet; }
    inline void SetRoleAlias(const Aws::String& value) { m_roleAliasHasBeenSet = true; m_roleAlias = value; }
    inline void SetRoleAlias(Aws::String&& value) { m_roleAliasHasBeenSet = true; m_roleAlias = std::move(value); }
    inline void SetRoleAlias(const char* value) { m_roleAliasHasBeenSet = true; m_roleAlias.assign(value); }
    inline RoleAliasDescription& WithRoleAlias(const Aws::String& value) { SetRoleAlias(value); return *this;}
    inline RoleAliasDescription& WithRoleAlias(Aws::String&& value) { SetRoleAlias(std::move(value)); return *this;}
    inline RoleAliasDescription& WithRoleAlias(const char* value) { SetRoleAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role alias.</p>
     */
    inline const Aws::String& GetRoleAliasArn() const{ return m_roleAliasArn; }
    inline bool RoleAliasArnHasBeenSet() const { return m_roleAliasArnHasBeenSet; }
    inline void SetRoleAliasArn(const Aws::String& value) { m_roleAliasArnHasBeenSet = true; m_roleAliasArn = value; }
    inline void SetRoleAliasArn(Aws::String&& value) { m_roleAliasArnHasBeenSet = true; m_roleAliasArn = std::move(value); }
    inline void SetRoleAliasArn(const char* value) { m_roleAliasArnHasBeenSet = true; m_roleAliasArn.assign(value); }
    inline RoleAliasDescription& WithRoleAliasArn(const Aws::String& value) { SetRoleAliasArn(value); return *this;}
    inline RoleAliasDescription& WithRoleAliasArn(Aws::String&& value) { SetRoleAliasArn(std::move(value)); return *this;}
    inline RoleAliasDescription& WithRoleAliasArn(const char* value) { SetRoleAliasArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline RoleAliasDescription& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline RoleAliasDescription& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline RoleAliasDescription& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role alias owner.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline RoleAliasDescription& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline RoleAliasDescription& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline RoleAliasDescription& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds for which the credential is valid.</p>
     */
    inline int GetCredentialDurationSeconds() const{ return m_credentialDurationSeconds; }
    inline bool CredentialDurationSecondsHasBeenSet() const { return m_credentialDurationSecondsHasBeenSet; }
    inline void SetCredentialDurationSeconds(int value) { m_credentialDurationSecondsHasBeenSet = true; m_credentialDurationSeconds = value; }
    inline RoleAliasDescription& WithCredentialDurationSeconds(int value) { SetCredentialDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UNIX timestamp of when the role alias was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline RoleAliasDescription& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline RoleAliasDescription& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UNIX timestamp of when the role alias was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline RoleAliasDescription& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline RoleAliasDescription& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleAlias;
    bool m_roleAliasHasBeenSet = false;

    Aws::String m_roleAliasArn;
    bool m_roleAliasArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    int m_credentialDurationSeconds;
    bool m_credentialDurationSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
