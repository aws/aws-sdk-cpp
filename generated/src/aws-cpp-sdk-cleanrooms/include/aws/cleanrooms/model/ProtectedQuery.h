/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/ProtectedQuerySQLParameters.h>
#include <aws/cleanrooms/model/ProtectedQueryStatus.h>
#include <aws/cleanrooms/model/ProtectedQueryResultConfiguration.h>
#include <aws/cleanrooms/model/ProtectedQueryStatistics.h>
#include <aws/cleanrooms/model/ProtectedQueryResult.h>
#include <aws/cleanrooms/model/ProtectedQueryError.h>
#include <aws/cleanrooms/model/DifferentialPrivacyParameters.h>
#include <aws/cleanrooms/model/ComputeConfiguration.h>
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
   * <p>The parameters for an Clean Rooms protected query.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQuery">AWS
   * API Reference</a></p>
   */
  class ProtectedQuery
  {
  public:
    AWS_CLEANROOMS_API ProtectedQuery() = default;
    AWS_CLEANROOMS_API ProtectedQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ProtectedQuery& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the membership.</p>
     */
    inline const Aws::String& GetMembershipId() const { return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    template<typename MembershipIdT = Aws::String>
    void SetMembershipId(MembershipIdT&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::forward<MembershipIdT>(value); }
    template<typename MembershipIdT = Aws::String>
    ProtectedQuery& WithMembershipId(MembershipIdT&& value) { SetMembershipId(std::forward<MembershipIdT>(value)); return *this;}
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
    ProtectedQuery& WithMembershipArn(MembershipArnT&& value) { SetMembershipArn(std::forward<MembershipArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the protected query was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    ProtectedQuery& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline const ProtectedQuerySQLParameters& GetSqlParameters() const { return m_sqlParameters; }
    inline bool SqlParametersHasBeenSet() const { return m_sqlParametersHasBeenSet; }
    template<typename SqlParametersT = ProtectedQuerySQLParameters>
    void SetSqlParameters(SqlParametersT&& value) { m_sqlParametersHasBeenSet = true; m_sqlParameters = std::forward<SqlParametersT>(value); }
    template<typename SqlParametersT = ProtectedQuerySQLParameters>
    ProtectedQuery& WithSqlParameters(SqlParametersT&& value) { SetSqlParameters(std::forward<SqlParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the query.</p>
     */
    inline ProtectedQueryStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ProtectedQueryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProtectedQuery& WithStatus(ProtectedQueryStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains any details needed to write the query results.</p>
     */
    inline const ProtectedQueryResultConfiguration& GetResultConfiguration() const { return m_resultConfiguration; }
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }
    template<typename ResultConfigurationT = ProtectedQueryResultConfiguration>
    void SetResultConfiguration(ResultConfigurationT&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::forward<ResultConfigurationT>(value); }
    template<typename ResultConfigurationT = ProtectedQueryResultConfiguration>
    ProtectedQuery& WithResultConfiguration(ResultConfigurationT&& value) { SetResultConfiguration(std::forward<ResultConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Statistics about protected query execution.</p>
     */
    inline const ProtectedQueryStatistics& GetStatistics() const { return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    template<typename StatisticsT = ProtectedQueryStatistics>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = ProtectedQueryStatistics>
    ProtectedQuery& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of the protected query.</p>
     */
    inline const ProtectedQueryResult& GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    template<typename ResultT = ProtectedQueryResult>
    void SetResult(ResultT&& value) { m_resultHasBeenSet = true; m_result = std::forward<ResultT>(value); }
    template<typename ResultT = ProtectedQueryResult>
    ProtectedQuery& WithResult(ResultT&& value) { SetResult(std::forward<ResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error thrown by the protected query.</p>
     */
    inline const ProtectedQueryError& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ProtectedQueryError>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ProtectedQueryError>
    ProtectedQuery& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sensitivity parameters of the differential privacy results of the
     * protected query.</p>
     */
    inline const DifferentialPrivacyParameters& GetDifferentialPrivacy() const { return m_differentialPrivacy; }
    inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }
    template<typename DifferentialPrivacyT = DifferentialPrivacyParameters>
    void SetDifferentialPrivacy(DifferentialPrivacyT&& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = std::forward<DifferentialPrivacyT>(value); }
    template<typename DifferentialPrivacyT = DifferentialPrivacyParameters>
    ProtectedQuery& WithDifferentialPrivacy(DifferentialPrivacyT&& value) { SetDifferentialPrivacy(std::forward<DifferentialPrivacyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The compute configuration for the protected query.</p>
     */
    inline const ComputeConfiguration& GetComputeConfiguration() const { return m_computeConfiguration; }
    inline bool ComputeConfigurationHasBeenSet() const { return m_computeConfigurationHasBeenSet; }
    template<typename ComputeConfigurationT = ComputeConfiguration>
    void SetComputeConfiguration(ComputeConfigurationT&& value) { m_computeConfigurationHasBeenSet = true; m_computeConfiguration = std::forward<ComputeConfigurationT>(value); }
    template<typename ComputeConfigurationT = ComputeConfiguration>
    ProtectedQuery& WithComputeConfiguration(ComputeConfigurationT&& value) { SetComputeConfiguration(std::forward<ComputeConfigurationT>(value)); return *this;}
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

    ProtectedQuerySQLParameters m_sqlParameters;
    bool m_sqlParametersHasBeenSet = false;

    ProtectedQueryStatus m_status{ProtectedQueryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ProtectedQueryResultConfiguration m_resultConfiguration;
    bool m_resultConfigurationHasBeenSet = false;

    ProtectedQueryStatistics m_statistics;
    bool m_statisticsHasBeenSet = false;

    ProtectedQueryResult m_result;
    bool m_resultHasBeenSet = false;

    ProtectedQueryError m_error;
    bool m_errorHasBeenSet = false;

    DifferentialPrivacyParameters m_differentialPrivacy;
    bool m_differentialPrivacyHasBeenSet = false;

    ComputeConfiguration m_computeConfiguration;
    bool m_computeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
