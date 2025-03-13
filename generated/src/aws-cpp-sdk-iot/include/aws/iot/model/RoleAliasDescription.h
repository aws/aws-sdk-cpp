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
    AWS_IOT_API RoleAliasDescription() = default;
    AWS_IOT_API RoleAliasDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API RoleAliasDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The role alias.</p>
     */
    inline const Aws::String& GetRoleAlias() const { return m_roleAlias; }
    inline bool RoleAliasHasBeenSet() const { return m_roleAliasHasBeenSet; }
    template<typename RoleAliasT = Aws::String>
    void SetRoleAlias(RoleAliasT&& value) { m_roleAliasHasBeenSet = true; m_roleAlias = std::forward<RoleAliasT>(value); }
    template<typename RoleAliasT = Aws::String>
    RoleAliasDescription& WithRoleAlias(RoleAliasT&& value) { SetRoleAlias(std::forward<RoleAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role alias.</p>
     */
    inline const Aws::String& GetRoleAliasArn() const { return m_roleAliasArn; }
    inline bool RoleAliasArnHasBeenSet() const { return m_roleAliasArnHasBeenSet; }
    template<typename RoleAliasArnT = Aws::String>
    void SetRoleAliasArn(RoleAliasArnT&& value) { m_roleAliasArnHasBeenSet = true; m_roleAliasArn = std::forward<RoleAliasArnT>(value); }
    template<typename RoleAliasArnT = Aws::String>
    RoleAliasDescription& WithRoleAliasArn(RoleAliasArnT&& value) { SetRoleAliasArn(std::forward<RoleAliasArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    RoleAliasDescription& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role alias owner.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    RoleAliasDescription& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds for which the credential is valid.</p>
     */
    inline int GetCredentialDurationSeconds() const { return m_credentialDurationSeconds; }
    inline bool CredentialDurationSecondsHasBeenSet() const { return m_credentialDurationSecondsHasBeenSet; }
    inline void SetCredentialDurationSeconds(int value) { m_credentialDurationSecondsHasBeenSet = true; m_credentialDurationSeconds = value; }
    inline RoleAliasDescription& WithCredentialDurationSeconds(int value) { SetCredentialDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UNIX timestamp of when the role alias was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    RoleAliasDescription& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UNIX timestamp of when the role alias was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    RoleAliasDescription& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
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

    int m_credentialDurationSeconds{0};
    bool m_credentialDurationSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
