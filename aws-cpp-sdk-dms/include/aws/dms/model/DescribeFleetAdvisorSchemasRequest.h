﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/Filter.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorSchemasRequest : public DatabaseMigrationServiceRequest
  {
  public:
    DescribeFleetAdvisorSchemasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFleetAdvisorSchemas"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> If you specify any of the following filters, the output includes information
     * for only those schemas that meet the filter criteria:</p> <ul> <li> <p>
     * <code>complexity</code> – The schema's complexity, for example
     * <code>Simple</code>.</p> </li> <li> <p> <code>database-id</code> – The ID of the
     * schema's database.</p> </li> <li> <p> <code>database-ip-address</code> – The IP
     * address of the schema's database.</p> </li> <li> <p> <code>database-name</code>
     * – The name of the schema's database.</p> </li> <li> <p>
     * <code>database-engine</code> – The name of the schema database's engine.</p>
     * </li> <li> <p> <code>original-schema-name</code> – The name of the schema's
     * database's main schema.</p> </li> <li> <p> <code>schema-id</code> – The ID of
     * the schema, for example <code>15</code>.</p> </li> <li> <p>
     * <code>schema-name</code> – The name of the schema.</p> </li> <li> <p>
     * <code>server-ip-address</code> – The IP address of the schema database's
     * server.</p> </li> </ul> <p>An example is: <code>describe-fleet-advisor-schemas
     * --filter Name="schema-id",Values="50"</code> </p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p> If you specify any of the following filters, the output includes information
     * for only those schemas that meet the filter criteria:</p> <ul> <li> <p>
     * <code>complexity</code> – The schema's complexity, for example
     * <code>Simple</code>.</p> </li> <li> <p> <code>database-id</code> – The ID of the
     * schema's database.</p> </li> <li> <p> <code>database-ip-address</code> – The IP
     * address of the schema's database.</p> </li> <li> <p> <code>database-name</code>
     * – The name of the schema's database.</p> </li> <li> <p>
     * <code>database-engine</code> – The name of the schema database's engine.</p>
     * </li> <li> <p> <code>original-schema-name</code> – The name of the schema's
     * database's main schema.</p> </li> <li> <p> <code>schema-id</code> – The ID of
     * the schema, for example <code>15</code>.</p> </li> <li> <p>
     * <code>schema-name</code> – The name of the schema.</p> </li> <li> <p>
     * <code>server-ip-address</code> – The IP address of the schema database's
     * server.</p> </li> </ul> <p>An example is: <code>describe-fleet-advisor-schemas
     * --filter Name="schema-id",Values="50"</code> </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p> If you specify any of the following filters, the output includes information
     * for only those schemas that meet the filter criteria:</p> <ul> <li> <p>
     * <code>complexity</code> – The schema's complexity, for example
     * <code>Simple</code>.</p> </li> <li> <p> <code>database-id</code> – The ID of the
     * schema's database.</p> </li> <li> <p> <code>database-ip-address</code> – The IP
     * address of the schema's database.</p> </li> <li> <p> <code>database-name</code>
     * – The name of the schema's database.</p> </li> <li> <p>
     * <code>database-engine</code> – The name of the schema database's engine.</p>
     * </li> <li> <p> <code>original-schema-name</code> – The name of the schema's
     * database's main schema.</p> </li> <li> <p> <code>schema-id</code> – The ID of
     * the schema, for example <code>15</code>.</p> </li> <li> <p>
     * <code>schema-name</code> – The name of the schema.</p> </li> <li> <p>
     * <code>server-ip-address</code> – The IP address of the schema database's
     * server.</p> </li> </ul> <p>An example is: <code>describe-fleet-advisor-schemas
     * --filter Name="schema-id",Values="50"</code> </p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p> If you specify any of the following filters, the output includes information
     * for only those schemas that meet the filter criteria:</p> <ul> <li> <p>
     * <code>complexity</code> – The schema's complexity, for example
     * <code>Simple</code>.</p> </li> <li> <p> <code>database-id</code> – The ID of the
     * schema's database.</p> </li> <li> <p> <code>database-ip-address</code> – The IP
     * address of the schema's database.</p> </li> <li> <p> <code>database-name</code>
     * – The name of the schema's database.</p> </li> <li> <p>
     * <code>database-engine</code> – The name of the schema database's engine.</p>
     * </li> <li> <p> <code>original-schema-name</code> – The name of the schema's
     * database's main schema.</p> </li> <li> <p> <code>schema-id</code> – The ID of
     * the schema, for example <code>15</code>.</p> </li> <li> <p>
     * <code>schema-name</code> – The name of the schema.</p> </li> <li> <p>
     * <code>server-ip-address</code> – The IP address of the schema database's
     * server.</p> </li> </ul> <p>An example is: <code>describe-fleet-advisor-schemas
     * --filter Name="schema-id",Values="50"</code> </p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p> If you specify any of the following filters, the output includes information
     * for only those schemas that meet the filter criteria:</p> <ul> <li> <p>
     * <code>complexity</code> – The schema's complexity, for example
     * <code>Simple</code>.</p> </li> <li> <p> <code>database-id</code> – The ID of the
     * schema's database.</p> </li> <li> <p> <code>database-ip-address</code> – The IP
     * address of the schema's database.</p> </li> <li> <p> <code>database-name</code>
     * – The name of the schema's database.</p> </li> <li> <p>
     * <code>database-engine</code> – The name of the schema database's engine.</p>
     * </li> <li> <p> <code>original-schema-name</code> – The name of the schema's
     * database's main schema.</p> </li> <li> <p> <code>schema-id</code> – The ID of
     * the schema, for example <code>15</code>.</p> </li> <li> <p>
     * <code>schema-name</code> – The name of the schema.</p> </li> <li> <p>
     * <code>server-ip-address</code> – The IP address of the schema database's
     * server.</p> </li> </ul> <p>An example is: <code>describe-fleet-advisor-schemas
     * --filter Name="schema-id",Values="50"</code> </p>
     */
    inline DescribeFleetAdvisorSchemasRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p> If you specify any of the following filters, the output includes information
     * for only those schemas that meet the filter criteria:</p> <ul> <li> <p>
     * <code>complexity</code> – The schema's complexity, for example
     * <code>Simple</code>.</p> </li> <li> <p> <code>database-id</code> – The ID of the
     * schema's database.</p> </li> <li> <p> <code>database-ip-address</code> – The IP
     * address of the schema's database.</p> </li> <li> <p> <code>database-name</code>
     * – The name of the schema's database.</p> </li> <li> <p>
     * <code>database-engine</code> – The name of the schema database's engine.</p>
     * </li> <li> <p> <code>original-schema-name</code> – The name of the schema's
     * database's main schema.</p> </li> <li> <p> <code>schema-id</code> – The ID of
     * the schema, for example <code>15</code>.</p> </li> <li> <p>
     * <code>schema-name</code> – The name of the schema.</p> </li> <li> <p>
     * <code>server-ip-address</code> – The IP address of the schema database's
     * server.</p> </li> </ul> <p>An example is: <code>describe-fleet-advisor-schemas
     * --filter Name="schema-id",Values="50"</code> </p>
     */
    inline DescribeFleetAdvisorSchemasRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p> If you specify any of the following filters, the output includes information
     * for only those schemas that meet the filter criteria:</p> <ul> <li> <p>
     * <code>complexity</code> – The schema's complexity, for example
     * <code>Simple</code>.</p> </li> <li> <p> <code>database-id</code> – The ID of the
     * schema's database.</p> </li> <li> <p> <code>database-ip-address</code> – The IP
     * address of the schema's database.</p> </li> <li> <p> <code>database-name</code>
     * – The name of the schema's database.</p> </li> <li> <p>
     * <code>database-engine</code> – The name of the schema database's engine.</p>
     * </li> <li> <p> <code>original-schema-name</code> – The name of the schema's
     * database's main schema.</p> </li> <li> <p> <code>schema-id</code> – The ID of
     * the schema, for example <code>15</code>.</p> </li> <li> <p>
     * <code>schema-name</code> – The name of the schema.</p> </li> <li> <p>
     * <code>server-ip-address</code> – The IP address of the schema database's
     * server.</p> </li> </ul> <p>An example is: <code>describe-fleet-advisor-schemas
     * --filter Name="schema-id",Values="50"</code> </p>
     */
    inline DescribeFleetAdvisorSchemasRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p> If you specify any of the following filters, the output includes information
     * for only those schemas that meet the filter criteria:</p> <ul> <li> <p>
     * <code>complexity</code> – The schema's complexity, for example
     * <code>Simple</code>.</p> </li> <li> <p> <code>database-id</code> – The ID of the
     * schema's database.</p> </li> <li> <p> <code>database-ip-address</code> – The IP
     * address of the schema's database.</p> </li> <li> <p> <code>database-name</code>
     * – The name of the schema's database.</p> </li> <li> <p>
     * <code>database-engine</code> – The name of the schema database's engine.</p>
     * </li> <li> <p> <code>original-schema-name</code> – The name of the schema's
     * database's main schema.</p> </li> <li> <p> <code>schema-id</code> – The ID of
     * the schema, for example <code>15</code>.</p> </li> <li> <p>
     * <code>schema-name</code> – The name of the schema.</p> </li> <li> <p>
     * <code>server-ip-address</code> – The IP address of the schema database's
     * server.</p> </li> </ul> <p>An example is: <code>describe-fleet-advisor-schemas
     * --filter Name="schema-id",Values="50"</code> </p>
     */
    inline DescribeFleetAdvisorSchemasRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>Sets the maximum number of records returned in the response.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>Sets the maximum number of records returned in the response.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>Sets the maximum number of records returned in the response.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>Sets the maximum number of records returned in the response.</p>
     */
    inline DescribeFleetAdvisorSchemasRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>If <code>NextToken</code> is returned by a previous response, there are more
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>NextToken</code> is returned by a previous response, there are more
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If <code>NextToken</code> is returned by a previous response, there are more
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If <code>NextToken</code> is returned by a previous response, there are more
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If <code>NextToken</code> is returned by a previous response, there are more
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If <code>NextToken</code> is returned by a previous response, there are more
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. </p>
     */
    inline DescribeFleetAdvisorSchemasRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned by a previous response, there are more
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. </p>
     */
    inline DescribeFleetAdvisorSchemasRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned by a previous response, there are more
     * results available. The value of <code>NextToken</code> is a unique pagination
     * token for each page. Make the call again using the returned token to retrieve
     * the next page. Keep all other arguments unchanged. </p>
     */
    inline DescribeFleetAdvisorSchemasRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
