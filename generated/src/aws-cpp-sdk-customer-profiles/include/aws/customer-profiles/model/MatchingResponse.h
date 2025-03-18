/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/JobSchedule.h>
#include <aws/customer-profiles/model/AutoMerging.h>
#include <aws/customer-profiles/model/ExportingConfig.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The flag that enables the matching process of duplicate
   * profiles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/MatchingResponse">AWS
   * API Reference</a></p>
   */
  class MatchingResponse
  {
  public:
    AWS_CUSTOMERPROFILES_API MatchingResponse() = default;
    AWS_CUSTOMERPROFILES_API MatchingResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API MatchingResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The flag that enables the matching process of duplicate profiles.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline MatchingResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time when do you want to start the Identity Resolution Job every
     * week.</p>
     */
    inline const JobSchedule& GetJobSchedule() const { return m_jobSchedule; }
    inline bool JobScheduleHasBeenSet() const { return m_jobScheduleHasBeenSet; }
    template<typename JobScheduleT = JobSchedule>
    void SetJobSchedule(JobScheduleT&& value) { m_jobScheduleHasBeenSet = true; m_jobSchedule = std::forward<JobScheduleT>(value); }
    template<typename JobScheduleT = JobSchedule>
    MatchingResponse& WithJobSchedule(JobScheduleT&& value) { SetJobSchedule(std::forward<JobScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information about the auto-merging process.</p>
     */
    inline const AutoMerging& GetAutoMerging() const { return m_autoMerging; }
    inline bool AutoMergingHasBeenSet() const { return m_autoMergingHasBeenSet; }
    template<typename AutoMergingT = AutoMerging>
    void SetAutoMerging(AutoMergingT&& value) { m_autoMergingHasBeenSet = true; m_autoMerging = std::forward<AutoMergingT>(value); }
    template<typename AutoMergingT = AutoMerging>
    MatchingResponse& WithAutoMerging(AutoMergingT&& value) { SetAutoMerging(std::forward<AutoMergingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for exporting Identity Resolution results, for
     * example, to an S3 bucket.</p>
     */
    inline const ExportingConfig& GetExportingConfig() const { return m_exportingConfig; }
    inline bool ExportingConfigHasBeenSet() const { return m_exportingConfigHasBeenSet; }
    template<typename ExportingConfigT = ExportingConfig>
    void SetExportingConfig(ExportingConfigT&& value) { m_exportingConfigHasBeenSet = true; m_exportingConfig = std::forward<ExportingConfigT>(value); }
    template<typename ExportingConfigT = ExportingConfig>
    MatchingResponse& WithExportingConfig(ExportingConfigT&& value) { SetExportingConfig(std::forward<ExportingConfigT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    JobSchedule m_jobSchedule;
    bool m_jobScheduleHasBeenSet = false;

    AutoMerging m_autoMerging;
    bool m_autoMergingHasBeenSet = false;

    ExportingConfig m_exportingConfig;
    bool m_exportingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
