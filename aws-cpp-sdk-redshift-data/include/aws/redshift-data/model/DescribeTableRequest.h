/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/redshift-data/RedshiftDataAPIServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftDataAPIService
{
namespace Model
{

  /**
   */
  class DescribeTableRequest : public RedshiftDataAPIServiceRequest
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API DescribeTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTable"; }

    AWS_REDSHIFTDATAAPISERVICE_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTDATAAPISERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline DescribeTableRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline DescribeTableRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline DescribeTableRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>A database name. The connected database is specified when you connect with
     * your authentication credentials. </p>
     */
    inline const Aws::String& GetConnectedDatabase() const{ return m_connectedDatabase; }

    /**
     * <p>A database name. The connected database is specified when you connect with
     * your authentication credentials. </p>
     */
    inline bool ConnectedDatabaseHasBeenSet() const { return m_connectedDatabaseHasBeenSet; }

    /**
     * <p>A database name. The connected database is specified when you connect with
     * your authentication credentials. </p>
     */
    inline void SetConnectedDatabase(const Aws::String& value) { m_connectedDatabaseHasBeenSet = true; m_connectedDatabase = value; }

    /**
     * <p>A database name. The connected database is specified when you connect with
     * your authentication credentials. </p>
     */
    inline void SetConnectedDatabase(Aws::String&& value) { m_connectedDatabaseHasBeenSet = true; m_connectedDatabase = std::move(value); }

    /**
     * <p>A database name. The connected database is specified when you connect with
     * your authentication credentials. </p>
     */
    inline void SetConnectedDatabase(const char* value) { m_connectedDatabaseHasBeenSet = true; m_connectedDatabase.assign(value); }

    /**
     * <p>A database name. The connected database is specified when you connect with
     * your authentication credentials. </p>
     */
    inline DescribeTableRequest& WithConnectedDatabase(const Aws::String& value) { SetConnectedDatabase(value); return *this;}

    /**
     * <p>A database name. The connected database is specified when you connect with
     * your authentication credentials. </p>
     */
    inline DescribeTableRequest& WithConnectedDatabase(Aws::String&& value) { SetConnectedDatabase(std::move(value)); return *this;}

    /**
     * <p>A database name. The connected database is specified when you connect with
     * your authentication credentials. </p>
     */
    inline DescribeTableRequest& WithConnectedDatabase(const char* value) { SetConnectedDatabase(value); return *this;}


    /**
     * <p>The name of the database that contains the tables to be described. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The name of the database that contains the tables to be described. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The name of the database that contains the tables to be described. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The name of the database that contains the tables to be described. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The name of the database that contains the tables to be described. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>The name of the database that contains the tables to be described. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline DescribeTableRequest& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the database that contains the tables to be described. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline DescribeTableRequest& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The name of the database that contains the tables to be described. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline DescribeTableRequest& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }

    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline bool DbUserHasBeenSet() const { return m_dbUserHasBeenSet; }

    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline void SetDbUser(const Aws::String& value) { m_dbUserHasBeenSet = true; m_dbUser = value; }

    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline void SetDbUser(Aws::String&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::move(value); }

    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline void SetDbUser(const char* value) { m_dbUserHasBeenSet = true; m_dbUser.assign(value); }

    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline DescribeTableRequest& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}

    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline DescribeTableRequest& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}

    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline DescribeTableRequest& WithDbUser(const char* value) { SetDbUser(value); return *this;}


    /**
     * <p>The maximum number of tables to return in the response. If more tables exist
     * than fit in one response, then <code>NextToken</code> is returned to page
     * through the results. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of tables to return in the response. If more tables exist
     * than fit in one response, then <code>NextToken</code> is returned to page
     * through the results. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of tables to return in the response. If more tables exist
     * than fit in one response, then <code>NextToken</code> is returned to page
     * through the results. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of tables to return in the response. If more tables exist
     * than fit in one response, then <code>NextToken</code> is returned to page
     * through the results. </p>
     */
    inline DescribeTableRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline DescribeTableRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline DescribeTableRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline DescribeTableRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The schema that contains the table. If no schema is specified, then matching
     * tables for all schemas are returned. </p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>The schema that contains the table. If no schema is specified, then matching
     * tables for all schemas are returned. </p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>The schema that contains the table. If no schema is specified, then matching
     * tables for all schemas are returned. </p>
     */
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>The schema that contains the table. If no schema is specified, then matching
     * tables for all schemas are returned. </p>
     */
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>The schema that contains the table. If no schema is specified, then matching
     * tables for all schemas are returned. </p>
     */
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }

    /**
     * <p>The schema that contains the table. If no schema is specified, then matching
     * tables for all schemas are returned. </p>
     */
    inline DescribeTableRequest& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>The schema that contains the table. If no schema is specified, then matching
     * tables for all schemas are returned. </p>
     */
    inline DescribeTableRequest& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The schema that contains the table. If no schema is specified, then matching
     * tables for all schemas are returned. </p>
     */
    inline DescribeTableRequest& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline DescribeTableRequest& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline DescribeTableRequest& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline DescribeTableRequest& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>The table name. If no table is specified, then all tables for all matching
     * schemas are returned. If no table and no schema is specified, then all tables
     * for all schemas in the database are returned</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }

    /**
     * <p>The table name. If no table is specified, then all tables for all matching
     * schemas are returned. If no table and no schema is specified, then all tables
     * for all schemas in the database are returned</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>The table name. If no table is specified, then all tables for all matching
     * schemas are returned. If no table and no schema is specified, then all tables
     * for all schemas in the database are returned</p>
     */
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>The table name. If no table is specified, then all tables for all matching
     * schemas are returned. If no table and no schema is specified, then all tables
     * for all schemas in the database are returned</p>
     */
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>The table name. If no table is specified, then all tables for all matching
     * schemas are returned. If no table and no schema is specified, then all tables
     * for all schemas in the database are returned</p>
     */
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }

    /**
     * <p>The table name. If no table is specified, then all tables for all matching
     * schemas are returned. If no table and no schema is specified, then all tables
     * for all schemas in the database are returned</p>
     */
    inline DescribeTableRequest& WithTable(const Aws::String& value) { SetTable(value); return *this;}

    /**
     * <p>The table name. If no table is specified, then all tables for all matching
     * schemas are returned. If no table and no schema is specified, then all tables
     * for all schemas in the database are returned</p>
     */
    inline DescribeTableRequest& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}

    /**
     * <p>The table name. If no table is specified, then all tables for all matching
     * schemas are returned. If no table and no schema is specified, then all tables
     * for all schemas in the database are returned</p>
     */
    inline DescribeTableRequest& WithTable(const char* value) { SetTable(value); return *this;}


    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }

    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }

    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }

    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }

    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }

    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline DescribeTableRequest& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}

    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline DescribeTableRequest& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}

    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline DescribeTableRequest& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_connectedDatabase;
    bool m_connectedDatabaseHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
