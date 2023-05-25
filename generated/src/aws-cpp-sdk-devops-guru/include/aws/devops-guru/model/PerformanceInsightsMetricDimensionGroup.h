/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>A logical grouping of Performance Insights metrics for a related subject
   * area. For example, the <code>db.sql</code> dimension group consists of the
   * following dimensions: <code>db.sql.id</code>, <code>db.sql.db_id</code>,
   * <code>db.sql.statement</code>, and <code>db.sql.tokenized_id</code>.</p> 
   * <p>Each response element returns a maximum of 500 bytes. For larger elements,
   * such as SQL statements, only the first 500 bytes are returned.</p> 
   * <p>Amazon RDS Performance Insights enables you to monitor and explore different
   * dimensions of database load based on data captured from a running DB instance.
   * DB load is measured as average active sessions. Performance Insights provides
   * the data to API consumers as a two-dimensional time-series dataset. The time
   * dimension provides DB load data for each time point in the queried time range.
   * Each time point decomposes overall load in relation to the requested dimensions,
   * measured at that time point. Examples include SQL, Wait event, User, and Host.
   * </p> <ul> <li> <p>To learn more about Performance Insights and Amazon Aurora DB
   * instances, go to the <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights.html">
   * Amazon Aurora User Guide</a>. </p> </li> <li> <p>To learn more about Performance
   * Insights and Amazon RDS DB instances, go to the <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">
   * Amazon RDS User Guide</a>. </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/PerformanceInsightsMetricDimensionGroup">AWS
   * API Reference</a></p>
   */
  class PerformanceInsightsMetricDimensionGroup
  {
  public:
    AWS_DEVOPSGURU_API PerformanceInsightsMetricDimensionGroup();
    AWS_DEVOPSGURU_API PerformanceInsightsMetricDimensionGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API PerformanceInsightsMetricDimensionGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dimension group. Its valid values are:</p> <ul> <li> <p>
     * <code>db</code> - The name of the database to which the client is connected
     * (only Aurora PostgreSQL, Amazon RDS PostgreSQL, Aurora MySQL, Amazon RDS MySQL,
     * and MariaDB)</p> </li> <li> <p> <code>db.application</code> - The name of the
     * application that is connected to the database (only Aurora PostgreSQL and RDS
     * PostgreSQL)</p> </li> <li> <p> <code>db.host</code> - The host name of the
     * connected client (all engines)</p> </li> <li> <p> <code>db.session_type</code> -
     * The type of the current session (only Aurora PostgreSQL and RDS PostgreSQL)</p>
     * </li> <li> <p> <code>db.sql</code> - The SQL that is currently executing (all
     * engines)</p> </li> <li> <p> <code>db.sql_tokenized</code> - The SQL digest (all
     * engines)</p> </li> <li> <p> <code>db.wait_event</code> - The event for which the
     * database backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event_type</code> - The type of event for which the database
     * backend is waiting (all engines)</p> </li> <li> <p> <code>db.user</code> - The
     * user logged in to the database (all engines)</p> </li> </ul>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>The name of the dimension group. Its valid values are:</p> <ul> <li> <p>
     * <code>db</code> - The name of the database to which the client is connected
     * (only Aurora PostgreSQL, Amazon RDS PostgreSQL, Aurora MySQL, Amazon RDS MySQL,
     * and MariaDB)</p> </li> <li> <p> <code>db.application</code> - The name of the
     * application that is connected to the database (only Aurora PostgreSQL and RDS
     * PostgreSQL)</p> </li> <li> <p> <code>db.host</code> - The host name of the
     * connected client (all engines)</p> </li> <li> <p> <code>db.session_type</code> -
     * The type of the current session (only Aurora PostgreSQL and RDS PostgreSQL)</p>
     * </li> <li> <p> <code>db.sql</code> - The SQL that is currently executing (all
     * engines)</p> </li> <li> <p> <code>db.sql_tokenized</code> - The SQL digest (all
     * engines)</p> </li> <li> <p> <code>db.wait_event</code> - The event for which the
     * database backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event_type</code> - The type of event for which the database
     * backend is waiting (all engines)</p> </li> <li> <p> <code>db.user</code> - The
     * user logged in to the database (all engines)</p> </li> </ul>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The name of the dimension group. Its valid values are:</p> <ul> <li> <p>
     * <code>db</code> - The name of the database to which the client is connected
     * (only Aurora PostgreSQL, Amazon RDS PostgreSQL, Aurora MySQL, Amazon RDS MySQL,
     * and MariaDB)</p> </li> <li> <p> <code>db.application</code> - The name of the
     * application that is connected to the database (only Aurora PostgreSQL and RDS
     * PostgreSQL)</p> </li> <li> <p> <code>db.host</code> - The host name of the
     * connected client (all engines)</p> </li> <li> <p> <code>db.session_type</code> -
     * The type of the current session (only Aurora PostgreSQL and RDS PostgreSQL)</p>
     * </li> <li> <p> <code>db.sql</code> - The SQL that is currently executing (all
     * engines)</p> </li> <li> <p> <code>db.sql_tokenized</code> - The SQL digest (all
     * engines)</p> </li> <li> <p> <code>db.wait_event</code> - The event for which the
     * database backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event_type</code> - The type of event for which the database
     * backend is waiting (all engines)</p> </li> <li> <p> <code>db.user</code> - The
     * user logged in to the database (all engines)</p> </li> </ul>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name of the dimension group. Its valid values are:</p> <ul> <li> <p>
     * <code>db</code> - The name of the database to which the client is connected
     * (only Aurora PostgreSQL, Amazon RDS PostgreSQL, Aurora MySQL, Amazon RDS MySQL,
     * and MariaDB)</p> </li> <li> <p> <code>db.application</code> - The name of the
     * application that is connected to the database (only Aurora PostgreSQL and RDS
     * PostgreSQL)</p> </li> <li> <p> <code>db.host</code> - The host name of the
     * connected client (all engines)</p> </li> <li> <p> <code>db.session_type</code> -
     * The type of the current session (only Aurora PostgreSQL and RDS PostgreSQL)</p>
     * </li> <li> <p> <code>db.sql</code> - The SQL that is currently executing (all
     * engines)</p> </li> <li> <p> <code>db.sql_tokenized</code> - The SQL digest (all
     * engines)</p> </li> <li> <p> <code>db.wait_event</code> - The event for which the
     * database backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event_type</code> - The type of event for which the database
     * backend is waiting (all engines)</p> </li> <li> <p> <code>db.user</code> - The
     * user logged in to the database (all engines)</p> </li> </ul>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The name of the dimension group. Its valid values are:</p> <ul> <li> <p>
     * <code>db</code> - The name of the database to which the client is connected
     * (only Aurora PostgreSQL, Amazon RDS PostgreSQL, Aurora MySQL, Amazon RDS MySQL,
     * and MariaDB)</p> </li> <li> <p> <code>db.application</code> - The name of the
     * application that is connected to the database (only Aurora PostgreSQL and RDS
     * PostgreSQL)</p> </li> <li> <p> <code>db.host</code> - The host name of the
     * connected client (all engines)</p> </li> <li> <p> <code>db.session_type</code> -
     * The type of the current session (only Aurora PostgreSQL and RDS PostgreSQL)</p>
     * </li> <li> <p> <code>db.sql</code> - The SQL that is currently executing (all
     * engines)</p> </li> <li> <p> <code>db.sql_tokenized</code> - The SQL digest (all
     * engines)</p> </li> <li> <p> <code>db.wait_event</code> - The event for which the
     * database backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event_type</code> - The type of event for which the database
     * backend is waiting (all engines)</p> </li> <li> <p> <code>db.user</code> - The
     * user logged in to the database (all engines)</p> </li> </ul>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>The name of the dimension group. Its valid values are:</p> <ul> <li> <p>
     * <code>db</code> - The name of the database to which the client is connected
     * (only Aurora PostgreSQL, Amazon RDS PostgreSQL, Aurora MySQL, Amazon RDS MySQL,
     * and MariaDB)</p> </li> <li> <p> <code>db.application</code> - The name of the
     * application that is connected to the database (only Aurora PostgreSQL and RDS
     * PostgreSQL)</p> </li> <li> <p> <code>db.host</code> - The host name of the
     * connected client (all engines)</p> </li> <li> <p> <code>db.session_type</code> -
     * The type of the current session (only Aurora PostgreSQL and RDS PostgreSQL)</p>
     * </li> <li> <p> <code>db.sql</code> - The SQL that is currently executing (all
     * engines)</p> </li> <li> <p> <code>db.sql_tokenized</code> - The SQL digest (all
     * engines)</p> </li> <li> <p> <code>db.wait_event</code> - The event for which the
     * database backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event_type</code> - The type of event for which the database
     * backend is waiting (all engines)</p> </li> <li> <p> <code>db.user</code> - The
     * user logged in to the database (all engines)</p> </li> </ul>
     */
    inline PerformanceInsightsMetricDimensionGroup& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>The name of the dimension group. Its valid values are:</p> <ul> <li> <p>
     * <code>db</code> - The name of the database to which the client is connected
     * (only Aurora PostgreSQL, Amazon RDS PostgreSQL, Aurora MySQL, Amazon RDS MySQL,
     * and MariaDB)</p> </li> <li> <p> <code>db.application</code> - The name of the
     * application that is connected to the database (only Aurora PostgreSQL and RDS
     * PostgreSQL)</p> </li> <li> <p> <code>db.host</code> - The host name of the
     * connected client (all engines)</p> </li> <li> <p> <code>db.session_type</code> -
     * The type of the current session (only Aurora PostgreSQL and RDS PostgreSQL)</p>
     * </li> <li> <p> <code>db.sql</code> - The SQL that is currently executing (all
     * engines)</p> </li> <li> <p> <code>db.sql_tokenized</code> - The SQL digest (all
     * engines)</p> </li> <li> <p> <code>db.wait_event</code> - The event for which the
     * database backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event_type</code> - The type of event for which the database
     * backend is waiting (all engines)</p> </li> <li> <p> <code>db.user</code> - The
     * user logged in to the database (all engines)</p> </li> </ul>
     */
    inline PerformanceInsightsMetricDimensionGroup& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the dimension group. Its valid values are:</p> <ul> <li> <p>
     * <code>db</code> - The name of the database to which the client is connected
     * (only Aurora PostgreSQL, Amazon RDS PostgreSQL, Aurora MySQL, Amazon RDS MySQL,
     * and MariaDB)</p> </li> <li> <p> <code>db.application</code> - The name of the
     * application that is connected to the database (only Aurora PostgreSQL and RDS
     * PostgreSQL)</p> </li> <li> <p> <code>db.host</code> - The host name of the
     * connected client (all engines)</p> </li> <li> <p> <code>db.session_type</code> -
     * The type of the current session (only Aurora PostgreSQL and RDS PostgreSQL)</p>
     * </li> <li> <p> <code>db.sql</code> - The SQL that is currently executing (all
     * engines)</p> </li> <li> <p> <code>db.sql_tokenized</code> - The SQL digest (all
     * engines)</p> </li> <li> <p> <code>db.wait_event</code> - The event for which the
     * database backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event_type</code> - The type of event for which the database
     * backend is waiting (all engines)</p> </li> <li> <p> <code>db.user</code> - The
     * user logged in to the database (all engines)</p> </li> </ul>
     */
    inline PerformanceInsightsMetricDimensionGroup& WithGroup(const char* value) { SetGroup(value); return *this;}


    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>
     * <code>db.application.name</code> - The name of the application that is connected
     * to the database (only Aurora PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p>
     * <code>db.host.id</code> - The host ID of the connected client (all engines)</p>
     * </li> <li> <p> <code>db.host.name</code> - The host name of the connected client
     * (all engines)</p> </li> <li> <p> <code>db.name</code> - The name of the database
     * to which the client is connected (only Aurora PostgreSQL, Amazon RDS PostgreSQL,
     * Aurora MySQL, Amazon RDS MySQL, and MariaDB)</p> </li> <li> <p>
     * <code>db.session_type.name</code> - The type of the current session (only Aurora
     * PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p> <code>db.sql.id</code> - The
     * SQL ID generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql.db_id</code> - The SQL ID generated by the database (all
     * engines)</p> </li> <li> <p> <code>db.sql.statement</code> - The SQL text that is
     * being executed (all engines)</p> </li> <li> <p> <code>db.sql.tokenized_id</code>
     * </p> </li> <li> <p> <code>db.sql_tokenized.id</code> - The SQL digest ID
     * generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql_tokenized.db_id</code> - SQL digest ID generated by the database
     * (all engines)</p> </li> <li> <p> <code>db.sql_tokenized.statement</code> - The
     * SQL digest text (all engines)</p> </li> <li> <p> <code>db.user.id</code> - The
     * ID of the user logged in to the database (all engines)</p> </li> <li> <p>
     * <code>db.user.name</code> - The name of the user logged in to the database (all
     * engines)</p> </li> <li> <p> <code>db.wait_event.name</code> - The event for
     * which the backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event.type</code> - The type of event for which the backend is
     * waiting (all engines)</p> </li> <li> <p> <code>db.wait_event_type.name</code> -
     * The name of the event type for which the backend is waiting (all engines)</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>
     * <code>db.application.name</code> - The name of the application that is connected
     * to the database (only Aurora PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p>
     * <code>db.host.id</code> - The host ID of the connected client (all engines)</p>
     * </li> <li> <p> <code>db.host.name</code> - The host name of the connected client
     * (all engines)</p> </li> <li> <p> <code>db.name</code> - The name of the database
     * to which the client is connected (only Aurora PostgreSQL, Amazon RDS PostgreSQL,
     * Aurora MySQL, Amazon RDS MySQL, and MariaDB)</p> </li> <li> <p>
     * <code>db.session_type.name</code> - The type of the current session (only Aurora
     * PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p> <code>db.sql.id</code> - The
     * SQL ID generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql.db_id</code> - The SQL ID generated by the database (all
     * engines)</p> </li> <li> <p> <code>db.sql.statement</code> - The SQL text that is
     * being executed (all engines)</p> </li> <li> <p> <code>db.sql.tokenized_id</code>
     * </p> </li> <li> <p> <code>db.sql_tokenized.id</code> - The SQL digest ID
     * generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql_tokenized.db_id</code> - SQL digest ID generated by the database
     * (all engines)</p> </li> <li> <p> <code>db.sql_tokenized.statement</code> - The
     * SQL digest text (all engines)</p> </li> <li> <p> <code>db.user.id</code> - The
     * ID of the user logged in to the database (all engines)</p> </li> <li> <p>
     * <code>db.user.name</code> - The name of the user logged in to the database (all
     * engines)</p> </li> <li> <p> <code>db.wait_event.name</code> - The event for
     * which the backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event.type</code> - The type of event for which the backend is
     * waiting (all engines)</p> </li> <li> <p> <code>db.wait_event_type.name</code> -
     * The name of the event type for which the backend is waiting (all engines)</p>
     * </li> </ul>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>
     * <code>db.application.name</code> - The name of the application that is connected
     * to the database (only Aurora PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p>
     * <code>db.host.id</code> - The host ID of the connected client (all engines)</p>
     * </li> <li> <p> <code>db.host.name</code> - The host name of the connected client
     * (all engines)</p> </li> <li> <p> <code>db.name</code> - The name of the database
     * to which the client is connected (only Aurora PostgreSQL, Amazon RDS PostgreSQL,
     * Aurora MySQL, Amazon RDS MySQL, and MariaDB)</p> </li> <li> <p>
     * <code>db.session_type.name</code> - The type of the current session (only Aurora
     * PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p> <code>db.sql.id</code> - The
     * SQL ID generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql.db_id</code> - The SQL ID generated by the database (all
     * engines)</p> </li> <li> <p> <code>db.sql.statement</code> - The SQL text that is
     * being executed (all engines)</p> </li> <li> <p> <code>db.sql.tokenized_id</code>
     * </p> </li> <li> <p> <code>db.sql_tokenized.id</code> - The SQL digest ID
     * generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql_tokenized.db_id</code> - SQL digest ID generated by the database
     * (all engines)</p> </li> <li> <p> <code>db.sql_tokenized.statement</code> - The
     * SQL digest text (all engines)</p> </li> <li> <p> <code>db.user.id</code> - The
     * ID of the user logged in to the database (all engines)</p> </li> <li> <p>
     * <code>db.user.name</code> - The name of the user logged in to the database (all
     * engines)</p> </li> <li> <p> <code>db.wait_event.name</code> - The event for
     * which the backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event.type</code> - The type of event for which the backend is
     * waiting (all engines)</p> </li> <li> <p> <code>db.wait_event_type.name</code> -
     * The name of the event type for which the backend is waiting (all engines)</p>
     * </li> </ul>
     */
    inline void SetDimensions(const Aws::Vector<Aws::String>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>
     * <code>db.application.name</code> - The name of the application that is connected
     * to the database (only Aurora PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p>
     * <code>db.host.id</code> - The host ID of the connected client (all engines)</p>
     * </li> <li> <p> <code>db.host.name</code> - The host name of the connected client
     * (all engines)</p> </li> <li> <p> <code>db.name</code> - The name of the database
     * to which the client is connected (only Aurora PostgreSQL, Amazon RDS PostgreSQL,
     * Aurora MySQL, Amazon RDS MySQL, and MariaDB)</p> </li> <li> <p>
     * <code>db.session_type.name</code> - The type of the current session (only Aurora
     * PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p> <code>db.sql.id</code> - The
     * SQL ID generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql.db_id</code> - The SQL ID generated by the database (all
     * engines)</p> </li> <li> <p> <code>db.sql.statement</code> - The SQL text that is
     * being executed (all engines)</p> </li> <li> <p> <code>db.sql.tokenized_id</code>
     * </p> </li> <li> <p> <code>db.sql_tokenized.id</code> - The SQL digest ID
     * generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql_tokenized.db_id</code> - SQL digest ID generated by the database
     * (all engines)</p> </li> <li> <p> <code>db.sql_tokenized.statement</code> - The
     * SQL digest text (all engines)</p> </li> <li> <p> <code>db.user.id</code> - The
     * ID of the user logged in to the database (all engines)</p> </li> <li> <p>
     * <code>db.user.name</code> - The name of the user logged in to the database (all
     * engines)</p> </li> <li> <p> <code>db.wait_event.name</code> - The event for
     * which the backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event.type</code> - The type of event for which the backend is
     * waiting (all engines)</p> </li> <li> <p> <code>db.wait_event_type.name</code> -
     * The name of the event type for which the backend is waiting (all engines)</p>
     * </li> </ul>
     */
    inline void SetDimensions(Aws::Vector<Aws::String>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>
     * <code>db.application.name</code> - The name of the application that is connected
     * to the database (only Aurora PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p>
     * <code>db.host.id</code> - The host ID of the connected client (all engines)</p>
     * </li> <li> <p> <code>db.host.name</code> - The host name of the connected client
     * (all engines)</p> </li> <li> <p> <code>db.name</code> - The name of the database
     * to which the client is connected (only Aurora PostgreSQL, Amazon RDS PostgreSQL,
     * Aurora MySQL, Amazon RDS MySQL, and MariaDB)</p> </li> <li> <p>
     * <code>db.session_type.name</code> - The type of the current session (only Aurora
     * PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p> <code>db.sql.id</code> - The
     * SQL ID generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql.db_id</code> - The SQL ID generated by the database (all
     * engines)</p> </li> <li> <p> <code>db.sql.statement</code> - The SQL text that is
     * being executed (all engines)</p> </li> <li> <p> <code>db.sql.tokenized_id</code>
     * </p> </li> <li> <p> <code>db.sql_tokenized.id</code> - The SQL digest ID
     * generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql_tokenized.db_id</code> - SQL digest ID generated by the database
     * (all engines)</p> </li> <li> <p> <code>db.sql_tokenized.statement</code> - The
     * SQL digest text (all engines)</p> </li> <li> <p> <code>db.user.id</code> - The
     * ID of the user logged in to the database (all engines)</p> </li> <li> <p>
     * <code>db.user.name</code> - The name of the user logged in to the database (all
     * engines)</p> </li> <li> <p> <code>db.wait_event.name</code> - The event for
     * which the backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event.type</code> - The type of event for which the backend is
     * waiting (all engines)</p> </li> <li> <p> <code>db.wait_event_type.name</code> -
     * The name of the event type for which the backend is waiting (all engines)</p>
     * </li> </ul>
     */
    inline PerformanceInsightsMetricDimensionGroup& WithDimensions(const Aws::Vector<Aws::String>& value) { SetDimensions(value); return *this;}

    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>
     * <code>db.application.name</code> - The name of the application that is connected
     * to the database (only Aurora PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p>
     * <code>db.host.id</code> - The host ID of the connected client (all engines)</p>
     * </li> <li> <p> <code>db.host.name</code> - The host name of the connected client
     * (all engines)</p> </li> <li> <p> <code>db.name</code> - The name of the database
     * to which the client is connected (only Aurora PostgreSQL, Amazon RDS PostgreSQL,
     * Aurora MySQL, Amazon RDS MySQL, and MariaDB)</p> </li> <li> <p>
     * <code>db.session_type.name</code> - The type of the current session (only Aurora
     * PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p> <code>db.sql.id</code> - The
     * SQL ID generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql.db_id</code> - The SQL ID generated by the database (all
     * engines)</p> </li> <li> <p> <code>db.sql.statement</code> - The SQL text that is
     * being executed (all engines)</p> </li> <li> <p> <code>db.sql.tokenized_id</code>
     * </p> </li> <li> <p> <code>db.sql_tokenized.id</code> - The SQL digest ID
     * generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql_tokenized.db_id</code> - SQL digest ID generated by the database
     * (all engines)</p> </li> <li> <p> <code>db.sql_tokenized.statement</code> - The
     * SQL digest text (all engines)</p> </li> <li> <p> <code>db.user.id</code> - The
     * ID of the user logged in to the database (all engines)</p> </li> <li> <p>
     * <code>db.user.name</code> - The name of the user logged in to the database (all
     * engines)</p> </li> <li> <p> <code>db.wait_event.name</code> - The event for
     * which the backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event.type</code> - The type of event for which the backend is
     * waiting (all engines)</p> </li> <li> <p> <code>db.wait_event_type.name</code> -
     * The name of the event type for which the backend is waiting (all engines)</p>
     * </li> </ul>
     */
    inline PerformanceInsightsMetricDimensionGroup& WithDimensions(Aws::Vector<Aws::String>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>
     * <code>db.application.name</code> - The name of the application that is connected
     * to the database (only Aurora PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p>
     * <code>db.host.id</code> - The host ID of the connected client (all engines)</p>
     * </li> <li> <p> <code>db.host.name</code> - The host name of the connected client
     * (all engines)</p> </li> <li> <p> <code>db.name</code> - The name of the database
     * to which the client is connected (only Aurora PostgreSQL, Amazon RDS PostgreSQL,
     * Aurora MySQL, Amazon RDS MySQL, and MariaDB)</p> </li> <li> <p>
     * <code>db.session_type.name</code> - The type of the current session (only Aurora
     * PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p> <code>db.sql.id</code> - The
     * SQL ID generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql.db_id</code> - The SQL ID generated by the database (all
     * engines)</p> </li> <li> <p> <code>db.sql.statement</code> - The SQL text that is
     * being executed (all engines)</p> </li> <li> <p> <code>db.sql.tokenized_id</code>
     * </p> </li> <li> <p> <code>db.sql_tokenized.id</code> - The SQL digest ID
     * generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql_tokenized.db_id</code> - SQL digest ID generated by the database
     * (all engines)</p> </li> <li> <p> <code>db.sql_tokenized.statement</code> - The
     * SQL digest text (all engines)</p> </li> <li> <p> <code>db.user.id</code> - The
     * ID of the user logged in to the database (all engines)</p> </li> <li> <p>
     * <code>db.user.name</code> - The name of the user logged in to the database (all
     * engines)</p> </li> <li> <p> <code>db.wait_event.name</code> - The event for
     * which the backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event.type</code> - The type of event for which the backend is
     * waiting (all engines)</p> </li> <li> <p> <code>db.wait_event_type.name</code> -
     * The name of the event type for which the backend is waiting (all engines)</p>
     * </li> </ul>
     */
    inline PerformanceInsightsMetricDimensionGroup& AddDimensions(const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>
     * <code>db.application.name</code> - The name of the application that is connected
     * to the database (only Aurora PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p>
     * <code>db.host.id</code> - The host ID of the connected client (all engines)</p>
     * </li> <li> <p> <code>db.host.name</code> - The host name of the connected client
     * (all engines)</p> </li> <li> <p> <code>db.name</code> - The name of the database
     * to which the client is connected (only Aurora PostgreSQL, Amazon RDS PostgreSQL,
     * Aurora MySQL, Amazon RDS MySQL, and MariaDB)</p> </li> <li> <p>
     * <code>db.session_type.name</code> - The type of the current session (only Aurora
     * PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p> <code>db.sql.id</code> - The
     * SQL ID generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql.db_id</code> - The SQL ID generated by the database (all
     * engines)</p> </li> <li> <p> <code>db.sql.statement</code> - The SQL text that is
     * being executed (all engines)</p> </li> <li> <p> <code>db.sql.tokenized_id</code>
     * </p> </li> <li> <p> <code>db.sql_tokenized.id</code> - The SQL digest ID
     * generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql_tokenized.db_id</code> - SQL digest ID generated by the database
     * (all engines)</p> </li> <li> <p> <code>db.sql_tokenized.statement</code> - The
     * SQL digest text (all engines)</p> </li> <li> <p> <code>db.user.id</code> - The
     * ID of the user logged in to the database (all engines)</p> </li> <li> <p>
     * <code>db.user.name</code> - The name of the user logged in to the database (all
     * engines)</p> </li> <li> <p> <code>db.wait_event.name</code> - The event for
     * which the backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event.type</code> - The type of event for which the backend is
     * waiting (all engines)</p> </li> <li> <p> <code>db.wait_event_type.name</code> -
     * The name of the event type for which the backend is waiting (all engines)</p>
     * </li> </ul>
     */
    inline PerformanceInsightsMetricDimensionGroup& AddDimensions(Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of specific dimensions from a dimension group. If this parameter is
     * not present, then it signifies that all of the dimensions in the group were
     * requested or are present in the response.</p> <p>Valid values for elements in
     * the <code>Dimensions</code> array are:</p> <ul> <li> <p>
     * <code>db.application.name</code> - The name of the application that is connected
     * to the database (only Aurora PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p>
     * <code>db.host.id</code> - The host ID of the connected client (all engines)</p>
     * </li> <li> <p> <code>db.host.name</code> - The host name of the connected client
     * (all engines)</p> </li> <li> <p> <code>db.name</code> - The name of the database
     * to which the client is connected (only Aurora PostgreSQL, Amazon RDS PostgreSQL,
     * Aurora MySQL, Amazon RDS MySQL, and MariaDB)</p> </li> <li> <p>
     * <code>db.session_type.name</code> - The type of the current session (only Aurora
     * PostgreSQL and RDS PostgreSQL)</p> </li> <li> <p> <code>db.sql.id</code> - The
     * SQL ID generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql.db_id</code> - The SQL ID generated by the database (all
     * engines)</p> </li> <li> <p> <code>db.sql.statement</code> - The SQL text that is
     * being executed (all engines)</p> </li> <li> <p> <code>db.sql.tokenized_id</code>
     * </p> </li> <li> <p> <code>db.sql_tokenized.id</code> - The SQL digest ID
     * generated by Performance Insights (all engines)</p> </li> <li> <p>
     * <code>db.sql_tokenized.db_id</code> - SQL digest ID generated by the database
     * (all engines)</p> </li> <li> <p> <code>db.sql_tokenized.statement</code> - The
     * SQL digest text (all engines)</p> </li> <li> <p> <code>db.user.id</code> - The
     * ID of the user logged in to the database (all engines)</p> </li> <li> <p>
     * <code>db.user.name</code> - The name of the user logged in to the database (all
     * engines)</p> </li> <li> <p> <code>db.wait_event.name</code> - The event for
     * which the backend is waiting (all engines)</p> </li> <li> <p>
     * <code>db.wait_event.type</code> - The type of event for which the backend is
     * waiting (all engines)</p> </li> <li> <p> <code>db.wait_event_type.name</code> -
     * The name of the event type for which the backend is waiting (all engines)</p>
     * </li> </ul>
     */
    inline PerformanceInsightsMetricDimensionGroup& AddDimensions(const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }


    /**
     * <p>The maximum number of items to fetch for this dimension group.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items to fetch for this dimension group.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of items to fetch for this dimension group.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items to fetch for this dimension group.</p>
     */
    inline PerformanceInsightsMetricDimensionGroup& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::Vector<Aws::String> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
