/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/StatementType.h>
#include <aws/athena/model/ResultConfiguration.h>
#include <aws/athena/model/QueryExecutionContext.h>
#include <aws/athena/model/QueryExecutionStatus.h>
#include <aws/athena/model/QueryExecutionStatistics.h>
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
  class AWS_ATHENA_API QueryExecution
  {
  public:
    QueryExecution();
    QueryExecution(Aws::Utils::Json::JsonView jsonValue);
    QueryExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for each query execution.</p>
     */
    inline const Aws::String& GetQueryExecutionId() const{ return m_queryExecutionId; }

    /**
     * <p>The unique identifier for each query execution.</p>
     */
    inline bool QueryExecutionIdHasBeenSet() const { return m_queryExecutionIdHasBeenSet; }

    /**
     * <p>The unique identifier for each query execution.</p>
     */
    inline void SetQueryExecutionId(const Aws::String& value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId = value; }

    /**
     * <p>The unique identifier for each query execution.</p>
     */
    inline void SetQueryExecutionId(Aws::String&& value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId = std::move(value); }

    /**
     * <p>The unique identifier for each query execution.</p>
     */
    inline void SetQueryExecutionId(const char* value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId.assign(value); }

    /**
     * <p>The unique identifier for each query execution.</p>
     */
    inline QueryExecution& WithQueryExecutionId(const Aws::String& value) { SetQueryExecutionId(value); return *this;}

    /**
     * <p>The unique identifier for each query execution.</p>
     */
    inline QueryExecution& WithQueryExecutionId(Aws::String&& value) { SetQueryExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for each query execution.</p>
     */
    inline QueryExecution& WithQueryExecutionId(const char* value) { SetQueryExecutionId(value); return *this;}


    /**
     * <p>The SQL query statements which the query execution ran.</p>
     */
    inline const Aws::String& GetQuery() const{ return m_query; }

    /**
     * <p>The SQL query statements which the query execution ran.</p>
     */
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }

    /**
     * <p>The SQL query statements which the query execution ran.</p>
     */
    inline void SetQuery(const Aws::String& value) { m_queryHasBeenSet = true; m_query = value; }

    /**
     * <p>The SQL query statements which the query execution ran.</p>
     */
    inline void SetQuery(Aws::String&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }

    /**
     * <p>The SQL query statements which the query execution ran.</p>
     */
    inline void SetQuery(const char* value) { m_queryHasBeenSet = true; m_query.assign(value); }

    /**
     * <p>The SQL query statements which the query execution ran.</p>
     */
    inline QueryExecution& WithQuery(const Aws::String& value) { SetQuery(value); return *this;}

    /**
     * <p>The SQL query statements which the query execution ran.</p>
     */
    inline QueryExecution& WithQuery(Aws::String&& value) { SetQuery(std::move(value)); return *this;}

    /**
     * <p>The SQL query statements which the query execution ran.</p>
     */
    inline QueryExecution& WithQuery(const char* value) { SetQuery(value); return *this;}


    /**
     * <p>The type of query statement that was run. <code>DDL</code> indicates DDL
     * query statements. <code>DML</code> indicates DML (Data Manipulation Language)
     * query statements, such as <code>CREATE TABLE AS SELECT</code>.
     * <code>UTILITY</code> indicates query statements other than DDL and DML, such as
     * <code>SHOW CREATE TABLE</code>, or <code>DESCRIBE &lt;table&gt;</code>.</p>
     */
    inline const StatementType& GetStatementType() const{ return m_statementType; }

    /**
     * <p>The type of query statement that was run. <code>DDL</code> indicates DDL
     * query statements. <code>DML</code> indicates DML (Data Manipulation Language)
     * query statements, such as <code>CREATE TABLE AS SELECT</code>.
     * <code>UTILITY</code> indicates query statements other than DDL and DML, such as
     * <code>SHOW CREATE TABLE</code>, or <code>DESCRIBE &lt;table&gt;</code>.</p>
     */
    inline bool StatementTypeHasBeenSet() const { return m_statementTypeHasBeenSet; }

    /**
     * <p>The type of query statement that was run. <code>DDL</code> indicates DDL
     * query statements. <code>DML</code> indicates DML (Data Manipulation Language)
     * query statements, such as <code>CREATE TABLE AS SELECT</code>.
     * <code>UTILITY</code> indicates query statements other than DDL and DML, such as
     * <code>SHOW CREATE TABLE</code>, or <code>DESCRIBE &lt;table&gt;</code>.</p>
     */
    inline void SetStatementType(const StatementType& value) { m_statementTypeHasBeenSet = true; m_statementType = value; }

    /**
     * <p>The type of query statement that was run. <code>DDL</code> indicates DDL
     * query statements. <code>DML</code> indicates DML (Data Manipulation Language)
     * query statements, such as <code>CREATE TABLE AS SELECT</code>.
     * <code>UTILITY</code> indicates query statements other than DDL and DML, such as
     * <code>SHOW CREATE TABLE</code>, or <code>DESCRIBE &lt;table&gt;</code>.</p>
     */
    inline void SetStatementType(StatementType&& value) { m_statementTypeHasBeenSet = true; m_statementType = std::move(value); }

    /**
     * <p>The type of query statement that was run. <code>DDL</code> indicates DDL
     * query statements. <code>DML</code> indicates DML (Data Manipulation Language)
     * query statements, such as <code>CREATE TABLE AS SELECT</code>.
     * <code>UTILITY</code> indicates query statements other than DDL and DML, such as
     * <code>SHOW CREATE TABLE</code>, or <code>DESCRIBE &lt;table&gt;</code>.</p>
     */
    inline QueryExecution& WithStatementType(const StatementType& value) { SetStatementType(value); return *this;}

    /**
     * <p>The type of query statement that was run. <code>DDL</code> indicates DDL
     * query statements. <code>DML</code> indicates DML (Data Manipulation Language)
     * query statements, such as <code>CREATE TABLE AS SELECT</code>.
     * <code>UTILITY</code> indicates query statements other than DDL and DML, such as
     * <code>SHOW CREATE TABLE</code>, or <code>DESCRIBE &lt;table&gt;</code>.</p>
     */
    inline QueryExecution& WithStatementType(StatementType&& value) { SetStatementType(std::move(value)); return *this;}


    /**
     * <p>The location in Amazon S3 where query results were stored and the encryption
     * option, if any, used for query results. These are known as "client-side
     * settings". If workgroup settings override client-side settings, then the query
     * uses the location for the query results and the encryption configuration that
     * are specified for the workgroup.</p>
     */
    inline const ResultConfiguration& GetResultConfiguration() const{ return m_resultConfiguration; }

    /**
     * <p>The location in Amazon S3 where query results were stored and the encryption
     * option, if any, used for query results. These are known as "client-side
     * settings". If workgroup settings override client-side settings, then the query
     * uses the location for the query results and the encryption configuration that
     * are specified for the workgroup.</p>
     */
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }

    /**
     * <p>The location in Amazon S3 where query results were stored and the encryption
     * option, if any, used for query results. These are known as "client-side
     * settings". If workgroup settings override client-side settings, then the query
     * uses the location for the query results and the encryption configuration that
     * are specified for the workgroup.</p>
     */
    inline void SetResultConfiguration(const ResultConfiguration& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = value; }

    /**
     * <p>The location in Amazon S3 where query results were stored and the encryption
     * option, if any, used for query results. These are known as "client-side
     * settings". If workgroup settings override client-side settings, then the query
     * uses the location for the query results and the encryption configuration that
     * are specified for the workgroup.</p>
     */
    inline void SetResultConfiguration(ResultConfiguration&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::move(value); }

    /**
     * <p>The location in Amazon S3 where query results were stored and the encryption
     * option, if any, used for query results. These are known as "client-side
     * settings". If workgroup settings override client-side settings, then the query
     * uses the location for the query results and the encryption configuration that
     * are specified for the workgroup.</p>
     */
    inline QueryExecution& WithResultConfiguration(const ResultConfiguration& value) { SetResultConfiguration(value); return *this;}

    /**
     * <p>The location in Amazon S3 where query results were stored and the encryption
     * option, if any, used for query results. These are known as "client-side
     * settings". If workgroup settings override client-side settings, then the query
     * uses the location for the query results and the encryption configuration that
     * are specified for the workgroup.</p>
     */
    inline QueryExecution& WithResultConfiguration(ResultConfiguration&& value) { SetResultConfiguration(std::move(value)); return *this;}


    /**
     * <p>The database in which the query execution occurred.</p>
     */
    inline const QueryExecutionContext& GetQueryExecutionContext() const{ return m_queryExecutionContext; }

    /**
     * <p>The database in which the query execution occurred.</p>
     */
    inline bool QueryExecutionContextHasBeenSet() const { return m_queryExecutionContextHasBeenSet; }

    /**
     * <p>The database in which the query execution occurred.</p>
     */
    inline void SetQueryExecutionContext(const QueryExecutionContext& value) { m_queryExecutionContextHasBeenSet = true; m_queryExecutionContext = value; }

    /**
     * <p>The database in which the query execution occurred.</p>
     */
    inline void SetQueryExecutionContext(QueryExecutionContext&& value) { m_queryExecutionContextHasBeenSet = true; m_queryExecutionContext = std::move(value); }

    /**
     * <p>The database in which the query execution occurred.</p>
     */
    inline QueryExecution& WithQueryExecutionContext(const QueryExecutionContext& value) { SetQueryExecutionContext(value); return *this;}

    /**
     * <p>The database in which the query execution occurred.</p>
     */
    inline QueryExecution& WithQueryExecutionContext(QueryExecutionContext&& value) { SetQueryExecutionContext(std::move(value)); return *this;}


    /**
     * <p>The completion date, current state, submission time, and state change reason
     * (if applicable) for the query execution.</p>
     */
    inline const QueryExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The completion date, current state, submission time, and state change reason
     * (if applicable) for the query execution.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The completion date, current state, submission time, and state change reason
     * (if applicable) for the query execution.</p>
     */
    inline void SetStatus(const QueryExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The completion date, current state, submission time, and state change reason
     * (if applicable) for the query execution.</p>
     */
    inline void SetStatus(QueryExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The completion date, current state, submission time, and state change reason
     * (if applicable) for the query execution.</p>
     */
    inline QueryExecution& WithStatus(const QueryExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The completion date, current state, submission time, and state change reason
     * (if applicable) for the query execution.</p>
     */
    inline QueryExecution& WithStatus(QueryExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The amount of data scanned during the query execution and the amount of time
     * that it took to execute, and the type of statement that was run.</p>
     */
    inline const QueryExecutionStatistics& GetStatistics() const{ return m_statistics; }

    /**
     * <p>The amount of data scanned during the query execution and the amount of time
     * that it took to execute, and the type of statement that was run.</p>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p>The amount of data scanned during the query execution and the amount of time
     * that it took to execute, and the type of statement that was run.</p>
     */
    inline void SetStatistics(const QueryExecutionStatistics& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>The amount of data scanned during the query execution and the amount of time
     * that it took to execute, and the type of statement that was run.</p>
     */
    inline void SetStatistics(QueryExecutionStatistics&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p>The amount of data scanned during the query execution and the amount of time
     * that it took to execute, and the type of statement that was run.</p>
     */
    inline QueryExecution& WithStatistics(const QueryExecutionStatistics& value) { SetStatistics(value); return *this;}

    /**
     * <p>The amount of data scanned during the query execution and the amount of time
     * that it took to execute, and the type of statement that was run.</p>
     */
    inline QueryExecution& WithStatistics(QueryExecutionStatistics&& value) { SetStatistics(std::move(value)); return *this;}


    /**
     * <p>The name of the workgroup in which the query ran.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }

    /**
     * <p>The name of the workgroup in which the query ran.</p>
     */
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }

    /**
     * <p>The name of the workgroup in which the query ran.</p>
     */
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }

    /**
     * <p>The name of the workgroup in which the query ran.</p>
     */
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }

    /**
     * <p>The name of the workgroup in which the query ran.</p>
     */
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }

    /**
     * <p>The name of the workgroup in which the query ran.</p>
     */
    inline QueryExecution& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}

    /**
     * <p>The name of the workgroup in which the query ran.</p>
     */
    inline QueryExecution& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the workgroup in which the query ran.</p>
     */
    inline QueryExecution& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}

  private:

    Aws::String m_queryExecutionId;
    bool m_queryExecutionIdHasBeenSet;

    Aws::String m_query;
    bool m_queryHasBeenSet;

    StatementType m_statementType;
    bool m_statementTypeHasBeenSet;

    ResultConfiguration m_resultConfiguration;
    bool m_resultConfigurationHasBeenSet;

    QueryExecutionContext m_queryExecutionContext;
    bool m_queryExecutionContextHasBeenSet;

    QueryExecutionStatus m_status;
    bool m_statusHasBeenSet;

    QueryExecutionStatistics m_statistics;
    bool m_statisticsHasBeenSet;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
