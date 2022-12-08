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
    AWS_DIRECTORYSERVICE_API LDAPSSettingInfo();
    AWS_DIRECTORYSERVICE_API LDAPSSettingInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API LDAPSSettingInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state of the LDAPS settings.</p>
     */
    inline const LDAPSStatus& GetLDAPSStatus() const{ return m_lDAPSStatus; }

    /**
     * <p>The state of the LDAPS settings.</p>
     */
    inline bool LDAPSStatusHasBeenSet() const { return m_lDAPSStatusHasBeenSet; }

    /**
     * <p>The state of the LDAPS settings.</p>
     */
    inline void SetLDAPSStatus(const LDAPSStatus& value) { m_lDAPSStatusHasBeenSet = true; m_lDAPSStatus = value; }

    /**
     * <p>The state of the LDAPS settings.</p>
     */
    inline void SetLDAPSStatus(LDAPSStatus&& value) { m_lDAPSStatusHasBeenSet = true; m_lDAPSStatus = std::move(value); }

    /**
     * <p>The state of the LDAPS settings.</p>
     */
    inline LDAPSSettingInfo& WithLDAPSStatus(const LDAPSStatus& value) { SetLDAPSStatus(value); return *this;}

    /**
     * <p>The state of the LDAPS settings.</p>
     */
    inline LDAPSSettingInfo& WithLDAPSStatus(LDAPSStatus&& value) { SetLDAPSStatus(std::move(value)); return *this;}


    /**
     * <p>Describes a state change for LDAPS.</p>
     */
    inline const Aws::String& GetLDAPSStatusReason() const{ return m_lDAPSStatusReason; }

    /**
     * <p>Describes a state change for LDAPS.</p>
     */
    inline bool LDAPSStatusReasonHasBeenSet() const { return m_lDAPSStatusReasonHasBeenSet; }

    /**
     * <p>Describes a state change for LDAPS.</p>
     */
    inline void SetLDAPSStatusReason(const Aws::String& value) { m_lDAPSStatusReasonHasBeenSet = true; m_lDAPSStatusReason = value; }

    /**
     * <p>Describes a state change for LDAPS.</p>
     */
    inline void SetLDAPSStatusReason(Aws::String&& value) { m_lDAPSStatusReasonHasBeenSet = true; m_lDAPSStatusReason = std::move(value); }

    /**
     * <p>Describes a state change for LDAPS.</p>
     */
    inline void SetLDAPSStatusReason(const char* value) { m_lDAPSStatusReasonHasBeenSet = true; m_lDAPSStatusReason.assign(value); }

    /**
     * <p>Describes a state change for LDAPS.</p>
     */
    inline LDAPSSettingInfo& WithLDAPSStatusReason(const Aws::String& value) { SetLDAPSStatusReason(value); return *this;}

    /**
     * <p>Describes a state change for LDAPS.</p>
     */
    inline LDAPSSettingInfo& WithLDAPSStatusReason(Aws::String&& value) { SetLDAPSStatusReason(std::move(value)); return *this;}

    /**
     * <p>Describes a state change for LDAPS.</p>
     */
    inline LDAPSSettingInfo& WithLDAPSStatusReason(const char* value) { SetLDAPSStatusReason(value); return *this;}


    /**
     * <p>The date and time when the LDAPS settings were last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time when the LDAPS settings were last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time when the LDAPS settings were last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time when the LDAPS settings were last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time when the LDAPS settings were last updated.</p>
     */
    inline LDAPSSettingInfo& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time when the LDAPS settings were last updated.</p>
     */
    inline LDAPSSettingInfo& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    LDAPSStatus m_lDAPSStatus;
    bool m_lDAPSStatusHasBeenSet = false;

    Aws::String m_lDAPSStatusReason;
    bool m_lDAPSStatusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
