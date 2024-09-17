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
    AWS_CUSTOMERPROFILES_API MatchingResponse();
    AWS_CUSTOMERPROFILES_API MatchingResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API MatchingResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The flag that enables the matching process of duplicate profiles.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline MatchingResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time when do you want to start the Identity Resolution Job every
     * week.</p>
     */
    inline const JobSchedule& GetJobSchedule() const{ return m_jobSchedule; }
    inline bool JobScheduleHasBeenSet() const { return m_jobScheduleHasBeenSet; }
    inline void SetJobSchedule(const JobSchedule& value) { m_jobScheduleHasBeenSet = true; m_jobSchedule = value; }
    inline void SetJobSchedule(JobSchedule&& value) { m_jobScheduleHasBeenSet = true; m_jobSchedule = std::move(value); }
    inline MatchingResponse& WithJobSchedule(const JobSchedule& value) { SetJobSchedule(value); return *this;}
    inline MatchingResponse& WithJobSchedule(JobSchedule&& value) { SetJobSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information about the auto-merging process.</p>
     */
    inline const AutoMerging& GetAutoMerging() const{ return m_autoMerging; }
    inline bool AutoMergingHasBeenSet() const { return m_autoMergingHasBeenSet; }
    inline void SetAutoMerging(const AutoMerging& value) { m_autoMergingHasBeenSet = true; m_autoMerging = value; }
    inline void SetAutoMerging(AutoMerging&& value) { m_autoMergingHasBeenSet = true; m_autoMerging = std::move(value); }
    inline MatchingResponse& WithAutoMerging(const AutoMerging& value) { SetAutoMerging(value); return *this;}
    inline MatchingResponse& WithAutoMerging(AutoMerging&& value) { SetAutoMerging(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for exporting Identity Resolution results, for
     * example, to an S3 bucket.</p>
     */
    inline const ExportingConfig& GetExportingConfig() const{ return m_exportingConfig; }
    inline bool ExportingConfigHasBeenSet() const { return m_exportingConfigHasBeenSet; }
    inline void SetExportingConfig(const ExportingConfig& value) { m_exportingConfigHasBeenSet = true; m_exportingConfig = value; }
    inline void SetExportingConfig(ExportingConfig&& value) { m_exportingConfigHasBeenSet = true; m_exportingConfig = std::move(value); }
    inline MatchingResponse& WithExportingConfig(const ExportingConfig& value) { SetExportingConfig(value); return *this;}
    inline MatchingResponse& WithExportingConfig(ExportingConfig&& value) { SetExportingConfig(std::move(value)); return *this;}
    ///@}
  private:

    bool m_enabled;
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
