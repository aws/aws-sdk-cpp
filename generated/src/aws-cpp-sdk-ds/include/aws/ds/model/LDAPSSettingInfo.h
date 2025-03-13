/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/LDAPSStatus.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains general information about the LDAPS settings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/LDAPSSettingInfo">AWS
   * API Reference</a></p>
   */
  class LDAPSSettingInfo
  {
  public:
    AWS_DIRECTORYSERVICE_API LDAPSSettingInfo() = default;
    AWS_DIRECTORYSERVICE_API LDAPSSettingInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API LDAPSSettingInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the LDAPS settings.</p>
     */
    inline LDAPSStatus GetLDAPSStatus() const { return m_lDAPSStatus; }
    inline bool LDAPSStatusHasBeenSet() const { return m_lDAPSStatusHasBeenSet; }
    inline void SetLDAPSStatus(LDAPSStatus value) { m_lDAPSStatusHasBeenSet = true; m_lDAPSStatus = value; }
    inline LDAPSSettingInfo& WithLDAPSStatus(LDAPSStatus value) { SetLDAPSStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes a state change for LDAPS.</p>
     */
    inline const Aws::String& GetLDAPSStatusReason() const { return m_lDAPSStatusReason; }
    inline bool LDAPSStatusReasonHasBeenSet() const { return m_lDAPSStatusReasonHasBeenSet; }
    template<typename LDAPSStatusReasonT = Aws::String>
    void SetLDAPSStatusReason(LDAPSStatusReasonT&& value) { m_lDAPSStatusReasonHasBeenSet = true; m_lDAPSStatusReason = std::forward<LDAPSStatusReasonT>(value); }
    template<typename LDAPSStatusReasonT = Aws::String>
    LDAPSSettingInfo& WithLDAPSStatusReason(LDAPSStatusReasonT&& value) { SetLDAPSStatusReason(std::forward<LDAPSStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the LDAPS settings were last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    LDAPSSettingInfo& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}
  private:

    LDAPSStatus m_lDAPSStatus{LDAPSStatus::NOT_SET};
    bool m_lDAPSStatusHasBeenSet = false;

    Aws::String m_lDAPSStatusReason;
    bool m_lDAPSStatusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
