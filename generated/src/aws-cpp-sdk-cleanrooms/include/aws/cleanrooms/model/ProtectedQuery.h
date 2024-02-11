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
    AWS_CLEANROOMS_API ProtectedQuery();
    AWS_CLEANROOMS_API ProtectedQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline ProtectedQuery& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline ProtectedQuery& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a protected query instance.</p>
     */
    inline ProtectedQuery& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The identifier for the membership.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }

    /**
     * <p>The identifier for the membership.</p>
     */
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }

    /**
     * <p>The identifier for the membership.</p>
     */
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }

    /**
     * <p>The identifier for the membership.</p>
     */
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }

    /**
     * <p>The identifier for the membership.</p>
     */
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }

    /**
     * <p>The identifier for the membership.</p>
     */
    inline ProtectedQuery& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}

    /**
     * <p>The identifier for the membership.</p>
     */
    inline ProtectedQuery& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the membership.</p>
     */
    inline ProtectedQuery& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}


    /**
     * <p>The ARN of the membership.</p>
     */
    inline const Aws::String& GetMembershipArn() const{ return m_membershipArn; }

    /**
     * <p>The ARN of the membership.</p>
     */
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }

    /**
     * <p>The ARN of the membership.</p>
     */
    inline void SetMembershipArn(const Aws::String& value) { m_membershipArnHasBeenSet = true; m_membershipArn = value; }

    /**
     * <p>The ARN of the membership.</p>
     */
    inline void SetMembershipArn(Aws::String&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::move(value); }

    /**
     * <p>The ARN of the membership.</p>
     */
    inline void SetMembershipArn(const char* value) { m_membershipArnHasBeenSet = true; m_membershipArn.assign(value); }

    /**
     * <p>The ARN of the membership.</p>
     */
    inline ProtectedQuery& WithMembershipArn(const Aws::String& value) { SetMembershipArn(value); return *this;}

    /**
     * <p>The ARN of the membership.</p>
     */
    inline ProtectedQuery& WithMembershipArn(Aws::String&& value) { SetMembershipArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the membership.</p>
     */
    inline ProtectedQuery& WithMembershipArn(const char* value) { SetMembershipArn(value); return *this;}


    /**
     * <p>The time at which the protected query was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time at which the protected query was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time at which the protected query was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time at which the protected query was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time at which the protected query was created.</p>
     */
    inline ProtectedQuery& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time at which the protected query was created.</p>
     */
    inline ProtectedQuery& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline const ProtectedQuerySQLParameters& GetSqlParameters() const{ return m_sqlParameters; }

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline bool SqlParametersHasBeenSet() const { return m_sqlParametersHasBeenSet; }

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline void SetSqlParameters(const ProtectedQuerySQLParameters& value) { m_sqlParametersHasBeenSet = true; m_sqlParameters = value; }

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline void SetSqlParameters(ProtectedQuerySQLParameters&& value) { m_sqlParametersHasBeenSet = true; m_sqlParameters = std::move(value); }

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline ProtectedQuery& WithSqlParameters(const ProtectedQuerySQLParameters& value) { SetSqlParameters(value); return *this;}

    /**
     * <p>The protected query SQL parameters.</p>
     */
    inline ProtectedQuery& WithSqlParameters(ProtectedQuerySQLParameters&& value) { SetSqlParameters(std::move(value)); return *this;}


    /**
     * <p>The status of the query.</p>
     */
    inline const ProtectedQueryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the query.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the query.</p>
     */
    inline void SetStatus(const ProtectedQueryStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the query.</p>
     */
    inline void SetStatus(ProtectedQueryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the query.</p>
     */
    inline ProtectedQuery& WithStatus(const ProtectedQueryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the query.</p>
     */
    inline ProtectedQuery& WithStatus(ProtectedQueryStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Contains any details needed to write the query results.</p>
     */
    inline const ProtectedQueryResultConfiguration& GetResultConfiguration() const{ return m_resultConfiguration; }

    /**
     * <p>Contains any details needed to write the query results.</p>
     */
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }

    /**
     * <p>Contains any details needed to write the query results.</p>
     */
    inline void SetResultConfiguration(const ProtectedQueryResultConfiguration& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = value; }

    /**
     * <p>Contains any details needed to write the query results.</p>
     */
    inline void SetResultConfiguration(ProtectedQueryResultConfiguration&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::move(value); }

    /**
     * <p>Contains any details needed to write the query results.</p>
     */
    inline ProtectedQuery& WithResultConfiguration(const ProtectedQueryResultConfiguration& value) { SetResultConfiguration(value); return *this;}

    /**
     * <p>Contains any details needed to write the query results.</p>
     */
    inline ProtectedQuery& WithResultConfiguration(ProtectedQueryResultConfiguration&& value) { SetResultConfiguration(std::move(value)); return *this;}


    /**
     * <p>Statistics about protected query execution.</p>
     */
    inline const ProtectedQueryStatistics& GetStatistics() const{ return m_statistics; }

    /**
     * <p>Statistics about protected query execution.</p>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p>Statistics about protected query execution.</p>
     */
    inline void SetStatistics(const ProtectedQueryStatistics& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>Statistics about protected query execution.</p>
     */
    inline void SetStatistics(ProtectedQueryStatistics&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p>Statistics about protected query execution.</p>
     */
    inline ProtectedQuery& WithStatistics(const ProtectedQueryStatistics& value) { SetStatistics(value); return *this;}

    /**
     * <p>Statistics about protected query execution.</p>
     */
    inline ProtectedQuery& WithStatistics(ProtectedQueryStatistics&& value) { SetStatistics(std::move(value)); return *this;}


    /**
     * <p>The result of the protected query.</p>
     */
    inline const ProtectedQueryResult& GetResult() const{ return m_result; }

    /**
     * <p>The result of the protected query.</p>
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * <p>The result of the protected query.</p>
     */
    inline void SetResult(const ProtectedQueryResult& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>The result of the protected query.</p>
     */
    inline void SetResult(ProtectedQueryResult&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p>The result of the protected query.</p>
     */
    inline ProtectedQuery& WithResult(const ProtectedQueryResult& value) { SetResult(value); return *this;}

    /**
     * <p>The result of the protected query.</p>
     */
    inline ProtectedQuery& WithResult(ProtectedQueryResult&& value) { SetResult(std::move(value)); return *this;}


    /**
     * <p>An error thrown by the protected query.</p>
     */
    inline const ProtectedQueryError& GetError() const{ return m_error; }

    /**
     * <p>An error thrown by the protected query.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>An error thrown by the protected query.</p>
     */
    inline void SetError(const ProtectedQueryError& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>An error thrown by the protected query.</p>
     */
    inline void SetError(ProtectedQueryError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>An error thrown by the protected query.</p>
     */
    inline ProtectedQuery& WithError(const ProtectedQueryError& value) { SetError(value); return *this;}

    /**
     * <p>An error thrown by the protected query.</p>
     */
    inline ProtectedQuery& WithError(ProtectedQueryError&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>The sensitivity parameters of the differential privacy results of the
     * protected query.</p>
     */
    inline const DifferentialPrivacyParameters& GetDifferentialPrivacy() const{ return m_differentialPrivacy; }

    /**
     * <p>The sensitivity parameters of the differential privacy results of the
     * protected query.</p>
     */
    inline bool DifferentialPrivacyHasBeenSet() const { return m_differentialPrivacyHasBeenSet; }

    /**
     * <p>The sensitivity parameters of the differential privacy results of the
     * protected query.</p>
     */
    inline void SetDifferentialPrivacy(const DifferentialPrivacyParameters& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = value; }

    /**
     * <p>The sensitivity parameters of the differential privacy results of the
     * protected query.</p>
     */
    inline void SetDifferentialPrivacy(DifferentialPrivacyParameters&& value) { m_differentialPrivacyHasBeenSet = true; m_differentialPrivacy = std::move(value); }

    /**
     * <p>The sensitivity parameters of the differential privacy results of the
     * protected query.</p>
     */
    inline ProtectedQuery& WithDifferentialPrivacy(const DifferentialPrivacyParameters& value) { SetDifferentialPrivacy(value); return *this;}

    /**
     * <p>The sensitivity parameters of the differential privacy results of the
     * protected query.</p>
     */
    inline ProtectedQuery& WithDifferentialPrivacy(DifferentialPrivacyParameters&& value) { SetDifferentialPrivacy(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    ProtectedQuerySQLParameters m_sqlParameters;
    bool m_sqlParametersHasBeenSet = false;

    ProtectedQueryStatus m_status;
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
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
