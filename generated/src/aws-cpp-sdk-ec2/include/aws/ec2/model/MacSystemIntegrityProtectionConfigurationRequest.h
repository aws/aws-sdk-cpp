/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/MacSystemIntegrityProtectionSettingStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a custom configuration for a System Integrity Protection (SIP)
   * modification task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MacSystemIntegrityProtectionConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class MacSystemIntegrityProtectionConfigurationRequest
  {
  public:
    AWS_EC2_API MacSystemIntegrityProtectionConfigurationRequest() = default;
    AWS_EC2_API MacSystemIntegrityProtectionConfigurationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API MacSystemIntegrityProtectionConfigurationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Enables or disables Apple Internal.</p>
     */
    inline MacSystemIntegrityProtectionSettingStatus GetAppleInternal() const { return m_appleInternal; }
    inline bool AppleInternalHasBeenSet() const { return m_appleInternalHasBeenSet; }
    inline void SetAppleInternal(MacSystemIntegrityProtectionSettingStatus value) { m_appleInternalHasBeenSet = true; m_appleInternal = value; }
    inline MacSystemIntegrityProtectionConfigurationRequest& WithAppleInternal(MacSystemIntegrityProtectionSettingStatus value) { SetAppleInternal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables Base System.</p>
     */
    inline MacSystemIntegrityProtectionSettingStatus GetBaseSystem() const { return m_baseSystem; }
    inline bool BaseSystemHasBeenSet() const { return m_baseSystemHasBeenSet; }
    inline void SetBaseSystem(MacSystemIntegrityProtectionSettingStatus value) { m_baseSystemHasBeenSet = true; m_baseSystem = value; }
    inline MacSystemIntegrityProtectionConfigurationRequest& WithBaseSystem(MacSystemIntegrityProtectionSettingStatus value) { SetBaseSystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables Debugging Restrictions.</p>
     */
    inline MacSystemIntegrityProtectionSettingStatus GetDebuggingRestrictions() const { return m_debuggingRestrictions; }
    inline bool DebuggingRestrictionsHasBeenSet() const { return m_debuggingRestrictionsHasBeenSet; }
    inline void SetDebuggingRestrictions(MacSystemIntegrityProtectionSettingStatus value) { m_debuggingRestrictionsHasBeenSet = true; m_debuggingRestrictions = value; }
    inline MacSystemIntegrityProtectionConfigurationRequest& WithDebuggingRestrictions(MacSystemIntegrityProtectionSettingStatus value) { SetDebuggingRestrictions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables Dtrace Restrictions.</p>
     */
    inline MacSystemIntegrityProtectionSettingStatus GetDTraceRestrictions() const { return m_dTraceRestrictions; }
    inline bool DTraceRestrictionsHasBeenSet() const { return m_dTraceRestrictionsHasBeenSet; }
    inline void SetDTraceRestrictions(MacSystemIntegrityProtectionSettingStatus value) { m_dTraceRestrictionsHasBeenSet = true; m_dTraceRestrictions = value; }
    inline MacSystemIntegrityProtectionConfigurationRequest& WithDTraceRestrictions(MacSystemIntegrityProtectionSettingStatus value) { SetDTraceRestrictions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables Filesystem Protections.</p>
     */
    inline MacSystemIntegrityProtectionSettingStatus GetFilesystemProtections() const { return m_filesystemProtections; }
    inline bool FilesystemProtectionsHasBeenSet() const { return m_filesystemProtectionsHasBeenSet; }
    inline void SetFilesystemProtections(MacSystemIntegrityProtectionSettingStatus value) { m_filesystemProtectionsHasBeenSet = true; m_filesystemProtections = value; }
    inline MacSystemIntegrityProtectionConfigurationRequest& WithFilesystemProtections(MacSystemIntegrityProtectionSettingStatus value) { SetFilesystemProtections(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables Kext Signing.</p>
     */
    inline MacSystemIntegrityProtectionSettingStatus GetKextSigning() const { return m_kextSigning; }
    inline bool KextSigningHasBeenSet() const { return m_kextSigningHasBeenSet; }
    inline void SetKextSigning(MacSystemIntegrityProtectionSettingStatus value) { m_kextSigningHasBeenSet = true; m_kextSigning = value; }
    inline MacSystemIntegrityProtectionConfigurationRequest& WithKextSigning(MacSystemIntegrityProtectionSettingStatus value) { SetKextSigning(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables Nvram Protections.</p>
     */
    inline MacSystemIntegrityProtectionSettingStatus GetNvramProtections() const { return m_nvramProtections; }
    inline bool NvramProtectionsHasBeenSet() const { return m_nvramProtectionsHasBeenSet; }
    inline void SetNvramProtections(MacSystemIntegrityProtectionSettingStatus value) { m_nvramProtectionsHasBeenSet = true; m_nvramProtections = value; }
    inline MacSystemIntegrityProtectionConfigurationRequest& WithNvramProtections(MacSystemIntegrityProtectionSettingStatus value) { SetNvramProtections(value); return *this;}
    ///@}
  private:

    MacSystemIntegrityProtectionSettingStatus m_appleInternal{MacSystemIntegrityProtectionSettingStatus::NOT_SET};
    bool m_appleInternalHasBeenSet = false;

    MacSystemIntegrityProtectionSettingStatus m_baseSystem{MacSystemIntegrityProtectionSettingStatus::NOT_SET};
    bool m_baseSystemHasBeenSet = false;

    MacSystemIntegrityProtectionSettingStatus m_debuggingRestrictions{MacSystemIntegrityProtectionSettingStatus::NOT_SET};
    bool m_debuggingRestrictionsHasBeenSet = false;

    MacSystemIntegrityProtectionSettingStatus m_dTraceRestrictions{MacSystemIntegrityProtectionSettingStatus::NOT_SET};
    bool m_dTraceRestrictionsHasBeenSet = false;

    MacSystemIntegrityProtectionSettingStatus m_filesystemProtections{MacSystemIntegrityProtectionSettingStatus::NOT_SET};
    bool m_filesystemProtectionsHasBeenSet = false;

    MacSystemIntegrityProtectionSettingStatus m_kextSigning{MacSystemIntegrityProtectionSettingStatus::NOT_SET};
    bool m_kextSigningHasBeenSet = false;

    MacSystemIntegrityProtectionSettingStatus m_nvramProtections{MacSystemIntegrityProtectionSettingStatus::NOT_SET};
    bool m_nvramProtectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
