/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/StatementType.h>
#include <aws/athena/model/ManagedQueryResultsConfiguration.h>
#include <aws/athena/model/ResultConfiguration.h>
#include <aws/athena/model/ResultReuseConfiguration.h>
#include <aws/athena/model/QueryExecutionContext.h>
#include <aws/athena/model/QueryExecutionStatus.h>
#include <aws/athena/model/QueryExecutionStatistics.h>
#include <aws/athena/model/EngineVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/athena/model/QueryResultsS3AccessGrantsConfiguration.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Information about a single instance of a query execution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/QueryExecution">AWS
   * API Reference</a></p>
   */
  class QueryExecution
  {
  public:
    AWS_ATHENA_API QueryExecution() = default;
    AWS_ATHENA_API QueryExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API QueryExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for each query execution.</p>
     */
    inline const Aws::String& GetQueryExecutionId() const { return m_queryExecutionId; }
    inline bool QueryExecutionIdHasBeenSet() const { return m_queryExecutionIdHasBeenSet; }
    template<typename QueryExecutionIdT = Aws::String>
    void SetQueryExecutionId(QueryExecutionIdT&& value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId = std::forward<QueryExecutionIdT>(value); }
    template<typename QueryExecutionIdT = Aws::String>
    QueryExecution& WithQueryExecutionId(QueryExecutionIdT&& value) { SetQueryExecutionId(std::forward<QueryExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL query statements which the query execution ran.</p>
     */
    inline const Aws::String& GetQuery() const { return m_query; }
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
    template<typename QueryT = Aws::String>
    void SetQuery(QueryT&& value) { m_queryHasBeenSet = true; m_query = std::forward<QueryT>(value); }
    template<typename QueryT = Aws::String>
    QueryExecution& WithQuery(QueryT&& value) { SetQuery(std::forward<QueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of query statement that was run. <code>DDL</code> indicates DDL
     * query statements. <code>DML</code> indicates DML (Data Manipulation Language)
     * query statements, such as <code>CREATE TABLE AS SELECT</code>.
     * <code>UTILITY</code> indicates query statements other than DDL and DML, such as
     * <code>SHOW CREATE TABLE</code>, or <code>DESCRIBE TABLE</code>.</p>
     */
    inline StatementType GetStatementType() const { return m_statementType; }
    inline bool StatementTypeHasBeenSet() const { return m_statementTypeHasBeenSet; }
    inline void SetStatementType(StatementType value) { m_statementTypeHasBeenSet = true; m_statementType = value; }
    inline QueryExecution& WithStatementType(StatementType value) { SetStatementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration for storing results in Athena owned storage, which
     * includes whether this feature is enabled; whether encryption configuration, if
     * any, is used for encrypting query results. </p>
     */
    inline const ManagedQueryResultsConfiguration& GetManagedQueryResultsConfiguration() const { return m_managedQueryResultsConfiguration; }
    inline bool ManagedQueryResultsConfigurationHasBeenSet() const { return m_managedQueryResultsConfigurationHasBeenSet; }
    template<typename ManagedQueryResultsConfigurationT = ManagedQueryResultsConfiguration>
    void SetManagedQueryResultsConfiguration(ManagedQueryResultsConfigurationT&& value) { m_managedQueryResultsConfigurationHasBeenSet = true; m_managedQueryResultsConfiguration = std::forward<ManagedQueryResultsConfigurationT>(value); }
    template<typename ManagedQueryResultsConfigurationT = ManagedQueryResultsConfiguration>
    QueryExecution& WithManagedQueryResultsConfiguration(ManagedQueryResultsConfigurationT&& value) { SetManagedQueryResultsConfiguration(std::forward<ManagedQueryResultsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location in Amazon S3 where query and calculation results are stored and
     * the encryption option, if any, used for query results. These are known as
     * "client-side settings". If workgroup settings override client-side settings,
     * then the query uses the location for the query results and the encryption
     * configuration that are specified for the workgroup.</p>
     */
    inline const ResultConfiguration& GetResultConfiguration() const { return m_resultConfiguration; }
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }
    template<typename ResultConfigurationT = ResultConfiguration>
    void SetResultConfiguration(ResultConfigurationT&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::forward<ResultConfigurationT>(value); }
    template<typename ResultConfigurationT = ResultConfiguration>
    QueryExecution& WithResultConfiguration(ResultConfigurationT&& value) { SetResultConfiguration(std::forward<ResultConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the query result reuse behavior that was used for the query.</p>
     */
    inline const ResultReuseConfiguration& GetResultReuseConfiguration() const { return m_resultReuseConfiguration; }
    inline bool ResultReuseConfigurationHasBeenSet() const { return m_resultReuseConfigurationHasBeenSet; }
    template<typename ResultReuseConfigurationT = ResultReuseConfiguration>
    void SetResultReuseConfiguration(ResultReuseConfigurationT&& value) { m_resultReuseConfigurationHasBeenSet = true; m_resultReuseConfiguration = std::forward<ResultReuseConfigurationT>(value); }
    template<typename ResultReuseConfigurationT = ResultReuseConfiguration>
    QueryExecution& WithResultReuseConfiguration(ResultReuseConfigurationT&& value) { SetResultReuseConfiguration(std::forward<ResultReuseConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database in which the query execution occurred.</p>
     */
    inline const QueryExecutionContext& GetQueryExecutionContext() const { return m_queryExecutionContext; }
    inline bool QueryExecutionContextHasBeenSet() const { return m_queryExecutionContextHasBeenSet; }
    template<typename QueryExecutionContextT = QueryExecutionContext>
    void SetQueryExecutionContext(QueryExecutionContextT&& value) { m_queryExecutionContextHasBeenSet = true; m_queryExecutionContext = std::forward<QueryExecutionContextT>(value); }
    template<typename QueryExecutionContextT = QueryExecutionContext>
    QueryExecution& WithQueryExecutionContext(QueryExecutionContextT&& value) { SetQueryExecutionContext(std::forward<QueryExecutionContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The completion date, current state, submission time, and state change reason
     * (if applicable) for the query execution.</p>
     */
    inline const QueryExecutionStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = QueryExecutionStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = QueryExecutionStatus>
    QueryExecution& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Query execution statistics, such as the amount of data scanned, the amount of
     * time that the query took to process, and the type of statement that was run.</p>
     */
    inline const QueryExecutionStatistics& GetStatistics() const { return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    template<typename StatisticsT = QueryExecutionStatistics>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = QueryExecutionStatistics>
    QueryExecution& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup in which the query ran.</p>
     */
    inline const Aws::String& GetWorkGroup() const { return m_workGroup; }
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
    template<typename WorkGroupT = Aws::String>
    void SetWorkGroup(WorkGroupT&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::forward<WorkGroupT>(value); }
    template<typename WorkGroupT = Aws::String>
    QueryExecution& WithWorkGroup(WorkGroupT&& value) { SetWorkGroup(std::forward<WorkGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version that executed the query.</p>
     */
    inline const EngineVersion& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = EngineVersion>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = EngineVersion>
    QueryExecution& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of values for the parameters in a query. The values are applied
     * sequentially to the parameters in the query in the order in which the parameters
     * occur. The list of parameters is not returned in the response.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExecutionParameters() const { return m_executionParameters; }
    inline bool ExecutionParametersHasBeenSet() const { return m_executionParametersHasBeenSet; }
    template<typename ExecutionParametersT = Aws::Vector<Aws::String>>
    void SetExecutionParameters(ExecutionParametersT&& value) { m_executionParametersHasBeenSet = true; m_executionParameters = std::forward<ExecutionParametersT>(value); }
    template<typename ExecutionParametersT = Aws::Vector<Aws::String>>
    QueryExecution& WithExecutionParameters(ExecutionParametersT&& value) { SetExecutionParameters(std::forward<ExecutionParametersT>(value)); return *this;}
    template<typename ExecutionParametersT = Aws::String>
    QueryExecution& AddExecutionParameters(ExecutionParametersT&& value) { m_executionParametersHasBeenSet = true; m_executionParameters.emplace_back(std::forward<ExecutionParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The kind of query statement that was run.</p>
     */
    inline const Aws::String& GetSubstatementType() const { return m_substatementType; }
    inline bool SubstatementTypeHasBeenSet() const { return m_substatementTypeHasBeenSet; }
    template<typename SubstatementTypeT = Aws::String>
    void SetSubstatementType(SubstatementTypeT&& value) { m_substatementTypeHasBeenSet = true; m_substatementType = std::forward<SubstatementTypeT>(value); }
    template<typename SubstatementTypeT = Aws::String>
    QueryExecution& WithSubstatementType(SubstatementTypeT&& value) { SetSubstatementType(std::forward<SubstatementTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amazon S3 access grants are enabled for query results.</p>
     */
    inline const QueryResultsS3AccessGrantsConfiguration& GetQueryResultsS3AccessGrantsConfiguration() const { return m_queryResultsS3AccessGrantsConfiguration; }
    inline bool QueryResultsS3AccessGrantsConfigurationHasBeenSet() const { return m_queryResultsS3AccessGrantsConfigurationHasBeenSet; }
    template<typename QueryResultsS3AccessGrantsConfigurationT = QueryResultsS3AccessGrantsConfiguration>
    void SetQueryResultsS3AccessGrantsConfiguration(QueryResultsS3AccessGrantsConfigurationT&& value) { m_queryResultsS3AccessGrantsConfigurationHasBeenSet = true; m_queryResultsS3AccessGrantsConfiguration = std::forward<QueryResultsS3AccessGrantsConfigurationT>(value); }
    template<typename QueryResultsS3AccessGrantsConfigurationT = QueryResultsS3AccessGrantsConfiguration>
    QueryExecution& WithQueryResultsS3AccessGrantsConfiguration(QueryResultsS3AccessGrantsConfigurationT&& value) { SetQueryResultsS3AccessGrantsConfiguration(std::forward<QueryResultsS3AccessGrantsConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryExecutionId;
    bool m_queryExecutionIdHasBeenSet = false;

    Aws::String m_query;
    bool m_queryHasBeenSet = false;

    StatementType m_statementType{StatementType::NOT_SET};
    bool m_statementTypeHasBeenSet = false;

    ManagedQueryResultsConfiguration m_managedQueryResultsConfiguration;
    bool m_managedQueryResultsConfigurationHasBeenSet = false;

    ResultConfiguration m_resultConfiguration;
    bool m_resultConfigurationHasBeenSet = false;

    ResultReuseConfiguration m_resultReuseConfiguration;
    bool m_resultReuseConfigurationHasBeenSet = false;

    QueryExecutionContext m_queryExecutionContext;
    bool m_queryExecutionContextHasBeenSet = false;

    QueryExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    QueryExecutionStatistics m_statistics;
    bool m_statisticsHasBeenSet = false;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;

    EngineVersion m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_executionParameters;
    bool m_executionParametersHasBeenSet = false;

    Aws::String m_substatementType;
    bool m_substatementTypeHasBeenSet = false;

    QueryResultsS3AccessGrantsConfiguration m_queryResultsS3AccessGrantsConfiguration;
    bool m_queryResultsS3AccessGrantsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
