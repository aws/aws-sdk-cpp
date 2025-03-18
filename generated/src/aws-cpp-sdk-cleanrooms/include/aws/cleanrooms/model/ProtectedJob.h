/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/ProtectedJobParameters.h>
#include <aws/cleanrooms/model/ProtectedJobStatus.h>
#include <aws/cleanrooms/model/ProtectedJobResultConfigurationOutput.h>
#include <aws/cleanrooms/model/ProtectedJobStatistics.h>
#include <aws/cleanrooms/model/ProtectedJobResult.h>
#include <aws/cleanrooms/model/ProtectedJobError.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The parameters for an Clean Rooms protected job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedJob">AWS
   * API Reference</a></p>
   */
  class ProtectedJob
  {
  public:
    AWS_CLEANROOMS_API ProtectedJob();
    AWS_CLEANROOMS_API ProtectedJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for a protected job instance.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ProtectedJob& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ProtectedJob& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ProtectedJob& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>he identifier for the membership.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }
    inline ProtectedJob& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}
    inline ProtectedJob& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}
    inline ProtectedJob& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the membership.</p>
     */
    inline const Aws::String& GetMembershipArn() const{ return m_membershipArn; }
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }
    inline void SetMembershipArn(const Aws::String& value) { m_membershipArnHasBeenSet = true; m_membershipArn = value; }
    inline void SetMembershipArn(Aws::String&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::move(value); }
    inline void SetMembershipArn(const char* value) { m_membershipArnHasBeenSet = true; m_membershipArn.assign(value); }
    inline ProtectedJob& WithMembershipArn(const Aws::String& value) { SetMembershipArn(value); return *this;}
    inline ProtectedJob& WithMembershipArn(Aws::String&& value) { SetMembershipArn(std::move(value)); return *this;}
    inline ProtectedJob& WithMembershipArn(const char* value) { SetMembershipArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The creation time of the protected job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline ProtectedJob& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline ProtectedJob& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The job parameters for the protected job.</p>
     */
    inline const ProtectedJobParameters& GetJobParameters() const{ return m_jobParameters; }
    inline bool JobParametersHasBeenSet() const { return m_jobParametersHasBeenSet; }
    inline void SetJobParameters(const ProtectedJobParameters& value) { m_jobParametersHasBeenSet = true; m_jobParameters = value; }
    inline void SetJobParameters(ProtectedJobParameters&& value) { m_jobParametersHasBeenSet = true; m_jobParameters = std::move(value); }
    inline ProtectedJob& WithJobParameters(const ProtectedJobParameters& value) { SetJobParameters(value); return *this;}
    inline ProtectedJob& WithJobParameters(ProtectedJobParameters&& value) { SetJobParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the protected job.</p>
     */
    inline const ProtectedJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ProtectedJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ProtectedJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ProtectedJob& WithStatus(const ProtectedJobStatus& value) { SetStatus(value); return *this;}
    inline ProtectedJob& WithStatus(ProtectedJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains any details needed to write the job results.</p>
     */
    inline const ProtectedJobResultConfigurationOutput& GetResultConfiguration() const{ return m_resultConfiguration; }
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }
    inline void SetResultConfiguration(const ProtectedJobResultConfigurationOutput& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = value; }
    inline void SetResultConfiguration(ProtectedJobResultConfigurationOutput&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::move(value); }
    inline ProtectedJob& WithResultConfiguration(const ProtectedJobResultConfigurationOutput& value) { SetResultConfiguration(value); return *this;}
    inline ProtectedJob& WithResultConfiguration(ProtectedJobResultConfigurationOutput&& value) { SetResultConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The statistics of the protected job.</p>
     */
    inline const ProtectedJobStatistics& GetStatistics() const{ return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    inline void SetStatistics(const ProtectedJobStatistics& value) { m_statisticsHasBeenSet = true; m_statistics = value; }
    inline void SetStatistics(ProtectedJobStatistics&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }
    inline ProtectedJob& WithStatistics(const ProtectedJobStatistics& value) { SetStatistics(value); return *this;}
    inline ProtectedJob& WithStatistics(ProtectedJobStatistics&& value) { SetStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The result of the protected job.</p>
     */
    inline const ProtectedJobResult& GetResult() const{ return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(const ProtectedJobResult& value) { m_resultHasBeenSet = true; m_result = value; }
    inline void SetResult(ProtectedJobResult&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }
    inline ProtectedJob& WithResult(const ProtectedJobResult& value) { SetResult(value); return *this;}
    inline ProtectedJob& WithResult(ProtectedJobResult&& value) { SetResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error from the protected job.</p>
     */
    inline const ProtectedJobError& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const ProtectedJobError& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(ProtectedJobError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline ProtectedJob& WithError(const ProtectedJobError& value) { SetError(value); return *this;}
    inline ProtectedJob& WithError(ProtectedJobError&& value) { SetError(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    ProtectedJobParameters m_jobParameters;
    bool m_jobParametersHasBeenSet = false;

    ProtectedJobStatus m_status;
    bool m_statusHasBeenSet = false;

    ProtectedJobResultConfigurationOutput m_resultConfiguration;
    bool m_resultConfigurationHasBeenSet = false;

    ProtectedJobStatistics m_statistics;
    bool m_statisticsHasBeenSet = false;

    ProtectedJobResult m_result;
    bool m_resultHasBeenSet = false;

    ProtectedJobError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
