/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/ActiveDirectorySettings.h>
#include <aws/license-manager-user-subscriptions/model/ActiveDirectoryType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ActiveDirectoryIdentityProvider();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ActiveDirectoryIdentityProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ActiveDirectoryIdentityProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>ActiveDirectorySettings</code> resource contains details about the
     * Active Directory, including network access details such as domain name and IP
     * addresses, and the credential provider for user administration.</p>
     */
    inline const ActiveDirectorySettings& GetActiveDirectorySettings() const{ return m_activeDirectorySettings; }
    inline bool ActiveDirectorySettingsHasBeenSet() const { return m_activeDirectorySettingsHasBeenSet; }
    inline void SetActiveDirectorySettings(const ActiveDirectorySettings& value) { m_activeDirectorySettingsHasBeenSet = true; m_activeDirectorySettings = value; }
    inline void SetActiveDirectorySettings(ActiveDirectorySettings&& value) { m_activeDirectorySettingsHasBeenSet = true; m_activeDirectorySettings = std::move(value); }
    inline ActiveDirectoryIdentityProvider& WithActiveDirectorySettings(const ActiveDirectorySettings& value) { SetActiveDirectorySettings(value); return *this;}
    inline ActiveDirectoryIdentityProvider& WithActiveDirectorySettings(ActiveDirectorySettings&& value) { SetActiveDirectorySettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Active Directory – either a self-managed Active Directory or an
     * Amazon Web Services Managed Active Directory.</p>
     */
    inline const ActiveDirectoryType& GetActiveDirectoryType() const{ return m_activeDirectoryType; }
    inline bool ActiveDirectoryTypeHasBeenSet() const { return m_activeDirectoryTypeHasBeenSet; }
    inline void SetActiveDirectoryType(const ActiveDirectoryType& value) { m_activeDirectoryTypeHasBeenSet = true; m_activeDirectoryType = value; }
    inline void SetActiveDirectoryType(ActiveDirectoryType&& value) { m_activeDirectoryTypeHasBeenSet = true; m_activeDirectoryType = std::move(value); }
    inline ActiveDirectoryIdentityProvider& WithActiveDirectoryType(const ActiveDirectoryType& value) { SetActiveDirectoryType(value); return *this;}
    inline ActiveDirectoryIdentityProvider& WithActiveDirectoryType(ActiveDirectoryType&& value) { SetActiveDirectoryType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory ID for an Active Directory identity provider.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline ActiveDirectoryIdentityProvider& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline ActiveDirectoryIdentityProvider& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline ActiveDirectoryIdentityProvider& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}
  private:

    ActiveDirectorySettings m_activeDirectorySettings;
    bool m_activeDirectorySettingsHasBeenSet = false;

    ActiveDirectoryType m_activeDirectoryType;
    bool m_activeDirectoryTypeHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
