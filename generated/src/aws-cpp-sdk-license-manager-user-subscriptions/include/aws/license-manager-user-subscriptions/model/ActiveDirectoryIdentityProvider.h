/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/ActiveDirectorySettings.h>
#include <aws/license-manager-user-subscriptions/model/ActiveDirectoryType.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   * <p>Details about an Active Directory identity provider.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/ActiveDirectoryIdentityProvider">AWS
   * API Reference</a></p>
   */
  class ActiveDirectoryIdentityProvider
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ActiveDirectoryIdentityProvider() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ActiveDirectoryIdentityProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ActiveDirectoryIdentityProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The directory ID for an Active Directory identity provider.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    ActiveDirectoryIdentityProvider& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ActiveDirectorySettings</code> resource contains details about the
     * Active Directory, including network access details such as domain name and IP
     * addresses, and the credential provider for user administration.</p>
     */
    inline const ActiveDirectorySettings& GetActiveDirectorySettings() const { return m_activeDirectorySettings; }
    inline bool ActiveDirectorySettingsHasBeenSet() const { return m_activeDirectorySettingsHasBeenSet; }
    template<typename ActiveDirectorySettingsT = ActiveDirectorySettings>
    void SetActiveDirectorySettings(ActiveDirectorySettingsT&& value) { m_activeDirectorySettingsHasBeenSet = true; m_activeDirectorySettings = std::forward<ActiveDirectorySettingsT>(value); }
    template<typename ActiveDirectorySettingsT = ActiveDirectorySettings>
    ActiveDirectoryIdentityProvider& WithActiveDirectorySettings(ActiveDirectorySettingsT&& value) { SetActiveDirectorySettings(std::forward<ActiveDirectorySettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Active Directory – either a self-managed Active Directory or an
     * Amazon Web Services Managed Active Directory.</p>
     */
    inline ActiveDirectoryType GetActiveDirectoryType() const { return m_activeDirectoryType; }
    inline bool ActiveDirectoryTypeHasBeenSet() const { return m_activeDirectoryTypeHasBeenSet; }
    inline void SetActiveDirectoryType(ActiveDirectoryType value) { m_activeDirectoryTypeHasBeenSet = true; m_activeDirectoryType = value; }
    inline ActiveDirectoryIdentityProvider& WithActiveDirectoryType(ActiveDirectoryType value) { SetActiveDirectoryType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether this directory is shared from an Amazon Web Services Managed Active
     * Directory. The default value is false.</p>
     */
    inline bool GetIsSharedActiveDirectory() const { return m_isSharedActiveDirectory; }
    inline bool IsSharedActiveDirectoryHasBeenSet() const { return m_isSharedActiveDirectoryHasBeenSet; }
    inline void SetIsSharedActiveDirectory(bool value) { m_isSharedActiveDirectoryHasBeenSet = true; m_isSharedActiveDirectory = value; }
    inline ActiveDirectoryIdentityProvider& WithIsSharedActiveDirectory(bool value) { SetIsSharedActiveDirectory(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    ActiveDirectorySettings m_activeDirectorySettings;
    bool m_activeDirectorySettingsHasBeenSet = false;

    ActiveDirectoryType m_activeDirectoryType{ActiveDirectoryType::NOT_SET};
    bool m_activeDirectoryTypeHasBeenSet = false;

    bool m_isSharedActiveDirectory{false};
    bool m_isSharedActiveDirectoryHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
