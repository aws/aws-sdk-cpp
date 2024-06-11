/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/StatementType.h>
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
    AWS_ATHENA_API QueryExecution();
    AWS_ATHENA_API QueryExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API QueryExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for each query execution.</p>
     */
    inline const Aws::String& GetQueryExecutionId() const{ return m_queryExecutionId; }
    inline bool QueryExecutionIdHasBeenSet() const { return m_queryExecutionIdHasBeenSet; }
    inline void SetQueryExecutionId(const Aws::String& value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId = value; }
    inline void SetQueryExecutionId(Aws::String&& value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId = std::move(value); }
    inline void SetQueryExecutionId(const char* value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId.assign(value); }
    inline QueryExecution& WithQueryExecutionId(const Aws::String& value) { SetQueryExecutionId(value); return *this;}
    inline QueryExecution& WithQueryExecutionId(Aws::String&& value) { SetQueryExecutionId(std::move(value)); return *this;}
    inline QueryExecution& WithQueryExecutionId(const char* value) { SetQueryExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL query statements which the query execution ran.</p>
     */
    inline const Aws::String& GetQuery() const{ return m_query; }
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
    inline void SetQuery(const Aws::String& value) { m_queryHasBeenSet = true; m_query = value; }
    inline void SetQuery(Aws::String&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }
    inline void SetQuery(const char* value) { m_queryHasBeenSet = true; m_query.assign(value); }
    inline QueryExecution& WithQuery(const Aws::String& value) { SetQuery(value); return *this;}
    inline QueryExecution& WithQuery(Aws::String&& value) { SetQuery(std::move(value)); return *this;}
    inline QueryExecution& WithQuery(const char* value) { SetQuery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of query statement that was run. <code>DDL</code> indicates DDL
     * query statements. <code>DML</code> indicates DML (Data Manipulation Language)
     * query statements, such as <code>CREATE TABLE AS SELECT</code>.
     * <code>UTILITY</code> indicates query statements other than DDL and DML, such as
     * <code>SHOW CREATE TABLE</code>, or <code>DESCRIBE TABLE</code>.</p>
     */
    inline const StatementType& GetStatementType() const{ return m_statementType; }
    inline bool StatementTypeHasBeenSet() const { return m_statementTypeHasBeenSet; }
    inline void SetStatementType(const StatementType& value) { m_statementTypeHasBeenSet = true; m_statementType = value; }
    inline void SetStatementType(StatementType&& value) { m_statementTypeHasBeenSet = true; m_statementType = std::move(value); }
    inline QueryExecution& WithStatementType(const StatementType& value) { SetStatementType(value); return *this;}
    inline QueryExecution& WithStatementType(StatementType&& value) { SetStatementType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location in Amazon S3 where query and calculation results are stored and
     * the encryption option, if any, used for query results. These are known as
     * "client-side settings". If workgroup settings override client-side settings,
     * then the query uses the location for the query results and the encryption
     * configuration that are specified for the workgroup.</p>
     */
    inline const ResultConfiguration& GetResultConfiguration() const{ return m_resultConfiguration; }
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }
    inline void SetResultConfiguration(const ResultConfiguration& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = value; }
    inline void SetResultConfiguration(ResultConfiguration&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::move(value); }
    inline QueryExecution& WithResultConfiguration(const ResultConfiguration& value) { SetResultConfiguration(value); return *this;}
    inline QueryExecution& WithResultConfiguration(ResultConfiguration&& value) { SetResultConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the query result reuse behavior that was used for the query.</p>
     */
    inline const ResultReuseConfiguration& GetResultReuseConfiguration() const{ return m_resultReuseConfiguration; }
    inline bool ResultReuseConfigurationHasBeenSet() const { return m_resultReuseConfigurationHasBeenSet; }
    inline void SetResultReuseConfiguration(const ResultReuseConfiguration& value) { m_resultReuseConfigurationHasBeenSet = true; m_resultReuseConfiguration = value; }
    inline void SetResultReuseConfiguration(ResultReuseConfiguration&& value) { m_resultReuseConfigurationHasBeenSet = true; m_resultReuseConfiguration = std::move(value); }
    inline QueryExecution& WithResultReuseConfiguration(const ResultReuseConfiguration& value) { SetResultReuseConfiguration(value); return *this;}
    inline QueryExecution& WithResultReuseConfiguration(ResultReuseConfiguration&& value) { SetResultReuseConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database in which the query execution occurred.</p>
     */
    inline const QueryExecutionContext& GetQueryExecutionContext() const{ return m_queryExecutionContext; }
    inline bool QueryExecutionContextHasBeenSet() const { return m_queryExecutionContextHasBeenSet; }
    inline void SetQueryExecutionContext(const QueryExecutionContext& value) { m_queryExecutionContextHasBeenSet = true; m_queryExecutionContext = value; }
    inline void SetQueryExecutionContext(QueryExecutionContext&& value) { m_queryExecutionContextHasBeenSet = true; m_queryExecutionContext = std::move(value); }
    inline QueryExecution& WithQueryExecutionContext(const QueryExecutionContext& value) { SetQueryExecutionContext(value); return *this;}
    inline QueryExecution& WithQueryExecutionContext(QueryExecutionContext&& value) { SetQueryExecutionContext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The completion date, current state, submission time, and state change reason
     * (if applicable) for the query execution.</p>
     */
    inline const QueryExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const QueryExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(QueryExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline QueryExecution& WithStatus(const QueryExecutionStatus& value) { SetStatus(value); return *this;}
    inline QueryExecution& WithStatus(QueryExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Query execution statistics, such as the amount of data scanned, the amount of
     * time that the query took to process, and the type of statement that was run.</p>
     */
    inline const QueryExecutionStatistics& GetStatistics() const{ return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    inline void SetStatistics(const QueryExecutionStatistics& value) { m_statisticsHasBeenSet = true; m_statistics = value; }
    inline void SetStatistics(QueryExecutionStatistics&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }
    inline QueryExecution& WithStatistics(const QueryExecutionStatistics& value) { SetStatistics(value); return *this;}
    inline QueryExecution& WithStatistics(QueryExecutionStatistics&& value) { SetStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup in which the query ran.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }
    inline QueryExecution& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}
    inline QueryExecution& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}
    inline QueryExecution& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version that executed the query.</p>
     */
    inline const EngineVersion& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const EngineVersion& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(EngineVersion&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline QueryExecution& WithEngineVersion(const EngineVersion& value) { SetEngineVersion(value); return *this;}
    inline QueryExecution& WithEngineVersion(EngineVersion&& value) { SetEngineVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of values for the parameters in a query. The values are applied
     * sequentially to the parameters in the query in the order in which the parameters
     * occur. The list of parameters is not returned in the response.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExecutionParameters() const{ return m_executionParameters; }
    inline bool ExecutionParametersHasBeenSet() const { return m_executionParametersHasBeenSet; }
    inline void SetExecutionParameters(const Aws::Vector<Aws::String>& value) { m_executionParametersHasBeenSet = true; m_executionParameters = value; }
    inline void SetExecutionParameters(Aws::Vector<Aws::String>&& value) { m_executionParametersHasBeenSet = true; m_executionParameters = std::move(value); }
    inline QueryExecution& WithExecutionParameters(const Aws::Vector<Aws::String>& value) { SetExecutionParameters(value); return *this;}
    inline QueryExecution& WithExecutionParameters(Aws::Vector<Aws::String>&& value) { SetExecutionParameters(std::move(value)); return *this;}
    inline QueryExecution& AddExecutionParameters(const Aws::String& value) { m_executionParametersHasBeenSet = true; m_executionParameters.push_back(value); return *this; }
    inline QueryExecution& AddExecutionParameters(Aws::String&& value) { m_executionParametersHasBeenSet = true; m_executionParameters.push_back(std::move(value)); return *this; }
    inline QueryExecution& AddExecutionParameters(const char* value) { m_executionParametersHasBeenSet = true; m_executionParameters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The kind of query statement that was run.</p>
     */
    inline const Aws::String& GetSubstatementType() const{ return m_substatementType; }
    inline bool SubstatementTypeHasBeenSet() const { return m_substatementTypeHasBeenSet; }
    inline void SetSubstatementType(const Aws::String& value) { m_substatementTypeHasBeenSet = true; m_substatementType = value; }
    inline void SetSubstatementType(Aws::String&& value) { m_substatementTypeHasBeenSet = true; m_substatementType = std::move(value); }
    inline void SetSubstatementType(const char* value) { m_substatementTypeHasBeenSet = true; m_substatementType.assign(value); }
    inline QueryExecution& WithSubstatementType(const Aws::String& value) { SetSubstatementType(value); return *this;}
    inline QueryExecution& WithSubstatementType(Aws::String&& value) { SetSubstatementType(std::move(value)); return *this;}
    inline QueryExecution& WithSubstatementType(const char* value) { SetSubstatementType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amazon S3 access grants are enabled for query results.</p>
     */
    inline const QueryResultsS3AccessGrantsConfiguration& GetQueryResultsS3AccessGrantsConfiguration() const{ return m_queryResultsS3AccessGrantsConfiguration; }
    inline bool QueryResultsS3AccessGrantsConfigurationHasBeenSet() const { return m_queryResultsS3AccessGrantsConfigurationHasBeenSet; }
    inline void SetQueryResultsS3AccessGrantsConfiguration(const QueryResultsS3AccessGrantsConfiguration& value) { m_queryResultsS3AccessGrantsConfigurationHasBeenSet = true; m_queryResultsS3AccessGrantsConfiguration = value; }
    inline void SetQueryResultsS3AccessGrantsConfiguration(QueryResultsS3AccessGrantsConfiguration&& value) { m_queryResultsS3AccessGrantsConfigurationHasBeenSet = true; m_queryResultsS3AccessGrantsConfiguration = std::move(value); }
    inline QueryExecution& WithQueryResultsS3AccessGrantsConfiguration(const QueryResultsS3AccessGrantsConfiguration& value) { SetQueryResultsS3AccessGrantsConfiguration(value); return *this;}
    inline QueryExecution& WithQueryResultsS3AccessGrantsConfiguration(QueryResultsS3AccessGrantsConfiguration&& value) { SetQueryResultsS3AccessGrantsConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryExecutionId;
    bool m_queryExecutionIdHasBeenSet = false;

    Aws::String m_query;
    bool m_queryHasBeenSet = false;

    StatementType m_statementType;
    bool m_statementTypeHasBeenSet = false;

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
