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
#include <aws/cleanrooms/model/ProtectedJobComputeConfiguration.h>
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
    AWS_CLEANROOMS_API ProtectedJob() = default;
    AWS_CLEANROOMS_API ProtectedJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for a protected job instance.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ProtectedJob& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>he identifier for the membership.</p>
     */
    inline const Aws::String& GetMembershipId() const { return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    template<typename MembershipIdT = Aws::String>
    void SetMembershipId(MembershipIdT&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::forward<MembershipIdT>(value); }
    template<typename MembershipIdT = Aws::String>
    ProtectedJob& WithMembershipId(MembershipIdT&& value) { SetMembershipId(std::forward<MembershipIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the membership.</p>
     */
    inline const Aws::String& GetMembershipArn() const { return m_membershipArn; }
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }
    template<typename MembershipArnT = Aws::String>
    void SetMembershipArn(MembershipArnT&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::forward<MembershipArnT>(value); }
    template<typename MembershipArnT = Aws::String>
    ProtectedJob& WithMembershipArn(MembershipArnT&& value) { SetMembershipArn(std::forward<MembershipArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The creation time of the protected job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    ProtectedJob& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The job parameters for the protected job.</p>
     */
    inline const ProtectedJobParameters& GetJobParameters() const { return m_jobParameters; }
    inline bool JobParametersHasBeenSet() const { return m_jobParametersHasBeenSet; }
    template<typename JobParametersT = ProtectedJobParameters>
    void SetJobParameters(JobParametersT&& value) { m_jobParametersHasBeenSet = true; m_jobParameters = std::forward<JobParametersT>(value); }
    template<typename JobParametersT = ProtectedJobParameters>
    ProtectedJob& WithJobParameters(JobParametersT&& value) { SetJobParameters(std::forward<JobParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the protected job.</p>
     */
    inline ProtectedJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ProtectedJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProtectedJob& WithStatus(ProtectedJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains any details needed to write the job results.</p>
     */
    inline const ProtectedJobResultConfigurationOutput& GetResultConfiguration() const { return m_resultConfiguration; }
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }
    template<typename ResultConfigurationT = ProtectedJobResultConfigurationOutput>
    void SetResultConfiguration(ResultConfigurationT&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::forward<ResultConfigurationT>(value); }
    template<typename ResultConfigurationT = ProtectedJobResultConfigurationOutput>
    ProtectedJob& WithResultConfiguration(ResultConfigurationT&& value) { SetResultConfiguration(std::forward<ResultConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The statistics of the protected job.</p>
     */
    inline const ProtectedJobStatistics& GetStatistics() const { return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    template<typename StatisticsT = ProtectedJobStatistics>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = ProtectedJobStatistics>
    ProtectedJob& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The result of the protected job.</p>
     */
    inline const ProtectedJobResult& GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    template<typename ResultT = ProtectedJobResult>
    void SetResult(ResultT&& value) { m_resultHasBeenSet = true; m_result = std::forward<ResultT>(value); }
    template<typename ResultT = ProtectedJobResult>
    ProtectedJob& WithResult(ResultT&& value) { SetResult(std::forward<ResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error from the protected job.</p>
     */
    inline const ProtectedJobError& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ProtectedJobError>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ProtectedJobError>
    ProtectedJob& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute configuration for the protected job.</p>
     */
    inline const ProtectedJobComputeConfiguration& GetComputeConfiguration() const { return m_computeConfiguration; }
    inline bool ComputeConfigurationHasBeenSet() const { return m_computeConfigurationHasBeenSet; }
    template<typename ComputeConfigurationT = ProtectedJobComputeConfiguration>
    void SetComputeConfiguration(ComputeConfigurationT&& value) { m_computeConfigurationHasBeenSet = true; m_computeConfiguration = std::forward<ComputeConfigurationT>(value); }
    template<typename ComputeConfigurationT = ProtectedJobComputeConfiguration>
    ProtectedJob& WithComputeConfiguration(ComputeConfigurationT&& value) { SetComputeConfiguration(std::forward<ComputeConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    ProtectedJobParameters m_jobParameters;
    bool m_jobParametersHasBeenSet = false;

    ProtectedJobStatus m_status{ProtectedJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ProtectedJobResultConfigurationOutput m_resultConfiguration;
    bool m_resultConfigurationHasBeenSet = false;

    ProtectedJobStatistics m_statistics;
    bool m_statisticsHasBeenSet = false;

    ProtectedJobResult m_result;
    bool m_resultHasBeenSet = false;

    ProtectedJobError m_error;
    bool m_errorHasBeenSet = false;

    ProtectedJobComputeConfiguration m_computeConfiguration;
    bool m_computeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
