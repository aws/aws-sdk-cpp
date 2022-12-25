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
  class ListTablesRequest : public RedshiftDataAPIServiceRequest
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API ListTablesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTables"; }

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
    inline ListTablesRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline ListTablesRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier. This parameter is required when connecting to a
     * cluster and authenticating using either Secrets Manager or temporary
     * credentials. </p>
     */
    inline ListTablesRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


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
    inline ListTablesRequest& WithConnectedDatabase(const Aws::String& value) { SetConnectedDatabase(value); return *this;}

    /**
     * <p>A database name. The connected database is specified when you connect with
     * your authentication credentials. </p>
     */
    inline ListTablesRequest& WithConnectedDatabase(Aws::String&& value) { SetConnectedDatabase(std::move(value)); return *this;}

    /**
     * <p>A database name. The connected database is specified when you connect with
     * your authentication credentials. </p>
     */
    inline ListTablesRequest& WithConnectedDatabase(const char* value) { SetConnectedDatabase(value); return *this;}


    /**
     * <p>The name of the database that contains the tables to list. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The name of the database that contains the tables to list. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The name of the database that contains the tables to list. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The name of the database that contains the tables to list. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The name of the database that contains the tables to list. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>The name of the database that contains the tables to list. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline ListTablesRequest& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the database that contains the tables to list. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline ListTablesRequest& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The name of the database that contains the tables to list. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline ListTablesRequest& WithDatabase(const char* value) { SetDatabase(value); return *this;}


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
    inline ListTablesRequest& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}

    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline ListTablesRequest& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}

    /**
     * <p>The database user name. This parameter is required when connecting to a
     * cluster and authenticating using temporary credentials. </p>
     */
    inline ListTablesRequest& WithDbUser(const char* value) { SetDbUser(value); return *this;}


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
    inline ListTablesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListTablesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline ListTablesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline ListTablesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A pattern to filter results by schema name. Within a schema pattern, "%"
     * means match any substring of 0 or more characters and "_" means match any one
     * character. Only schema name entries matching the search pattern are returned. If
     * <code>SchemaPattern</code> is not specified, then all tables that match
     * <code>TablePattern</code> are returned. If neither <code>SchemaPattern</code> or
     * <code>TablePattern</code> are specified, then all tables are returned. </p>
     */
    inline const Aws::String& GetSchemaPattern() const{ return m_schemaPattern; }

    /**
     * <p>A pattern to filter results by schema name. Within a schema pattern, "%"
     * means match any substring of 0 or more characters and "_" means match any one
     * character. Only schema name entries matching the search pattern are returned. If
     * <code>SchemaPattern</code> is not specified, then all tables that match
     * <code>TablePattern</code> are returned. If neither <code>SchemaPattern</code> or
     * <code>TablePattern</code> are specified, then all tables are returned. </p>
     */
    inline bool SchemaPatternHasBeenSet() const { return m_schemaPatternHasBeenSet; }

    /**
     * <p>A pattern to filter results by schema name. Within a schema pattern, "%"
     * means match any substring of 0 or more characters and "_" means match any one
     * character. Only schema name entries matching the search pattern are returned. If
     * <code>SchemaPattern</code> is not specified, then all tables that match
     * <code>TablePattern</code> are returned. If neither <code>SchemaPattern</code> or
     * <code>TablePattern</code> are specified, then all tables are returned. </p>
     */
    inline void SetSchemaPattern(const Aws::String& value) { m_schemaPatternHasBeenSet = true; m_schemaPattern = value; }

    /**
     * <p>A pattern to filter results by schema name. Within a schema pattern, "%"
     * means match any substring of 0 or more characters and "_" means match any one
     * character. Only schema name entries matching the search pattern are returned. If
     * <code>SchemaPattern</code> is not specified, then all tables that match
     * <code>TablePattern</code> are returned. If neither <code>SchemaPattern</code> or
     * <code>TablePattern</code> are specified, then all tables are returned. </p>
     */
    inline void SetSchemaPattern(Aws::String&& value) { m_schemaPatternHasBeenSet = true; m_schemaPattern = std::move(value); }

    /**
     * <p>A pattern to filter results by schema name. Within a schema pattern, "%"
     * means match any substring of 0 or more characters and "_" means match any one
     * character. Only schema name entries matching the search pattern are returned. If
     * <code>SchemaPattern</code> is not specified, then all tables that match
     * <code>TablePattern</code> are returned. If neither <code>SchemaPattern</code> or
     * <code>TablePattern</code> are specified, then all tables are returned. </p>
     */
    inline void SetSchemaPattern(const char* value) { m_schemaPatternHasBeenSet = true; m_schemaPattern.assign(value); }

    /**
     * <p>A pattern to filter results by schema name. Within a schema pattern, "%"
     * means match any substring of 0 or more characters and "_" means match any one
     * character. Only schema name entries matching the search pattern are returned. If
     * <code>SchemaPattern</code> is not specified, then all tables that match
     * <code>TablePattern</code> are returned. If neither <code>SchemaPattern</code> or
     * <code>TablePattern</code> are specified, then all tables are returned. </p>
     */
    inline ListTablesRequest& WithSchemaPattern(const Aws::String& value) { SetSchemaPattern(value); return *this;}

    /**
     * <p>A pattern to filter results by schema name. Within a schema pattern, "%"
     * means match any substring of 0 or more characters and "_" means match any one
     * character. Only schema name entries matching the search pattern are returned. If
     * <code>SchemaPattern</code> is not specified, then all tables that match
     * <code>TablePattern</code> are returned. If neither <code>SchemaPattern</code> or
     * <code>TablePattern</code> are specified, then all tables are returned. </p>
     */
    inline ListTablesRequest& WithSchemaPattern(Aws::String&& value) { SetSchemaPattern(std::move(value)); return *this;}

    /**
     * <p>A pattern to filter results by schema name. Within a schema pattern, "%"
     * means match any substring of 0 or more characters and "_" means match any one
     * character. Only schema name entries matching the search pattern are returned. If
     * <code>SchemaPattern</code> is not specified, then all tables that match
     * <code>TablePattern</code> are returned. If neither <code>SchemaPattern</code> or
     * <code>TablePattern</code> are specified, then all tables are returned. </p>
     */
    inline ListTablesRequest& WithSchemaPattern(const char* value) { SetSchemaPattern(value); return *this;}


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
    inline ListTablesRequest& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline ListTablesRequest& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline ListTablesRequest& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>A pattern to filter results by table name. Within a table pattern, "%" means
     * match any substring of 0 or more characters and "_" means match any one
     * character. Only table name entries matching the search pattern are returned. If
     * <code>TablePattern</code> is not specified, then all tables that match
     * <code>SchemaPattern</code>are returned. If neither <code>SchemaPattern</code> or
     * <code>TablePattern</code> are specified, then all tables are returned. </p>
     */
    inline const Aws::String& GetTablePattern() const{ return m_tablePattern; }

    /**
     * <p>A pattern to filter results by table name. Within a table pattern, "%" means
     * match any substring of 0 or more characters and "_" means match any one
     * character. Only table name entries matching the search pattern are returned. If
     * <code>TablePattern</code> is not specified, then all tables that match
     * <code>SchemaPattern</code>are returned. If neither <code>SchemaPattern</code> or
     * <code>TablePattern</code> are specified, then all tables are returned. </p>
     */
    inline bool TablePatternHasBeenSet() const { return m_tablePatternHasBeenSet; }

    /**
     * <p>A pattern to filter results by table name. Within a table pattern, "%" means
     * match any substring of 0 or more characters and "_" means match any one
     * character. Only table name entries matching the search pattern are returned. If
     * <code>TablePattern</code> is not specified, then all tables that match
     * <code>SchemaPattern</code>are returned. If neither <code>SchemaPattern</code> or
     * <code>TablePattern</code> are specified, then all tables are returned. </p>
     */
    inline void SetTablePattern(const Aws::String& value) { m_tablePatternHasBeenSet = true; m_tablePattern = value; }

    /**
     * <p>A pattern to filter results by table name. Within a table pattern, "%" means
     * match any substring of 0 or more characters and "_" means match any one
     * character. Only table name entries matching the search pattern are returned. If
     * <code>TablePattern</code> is not specified, then all tables that match
     * <code>SchemaPattern</code>are returned. If neither <code>SchemaPattern</code> or
     * <code>TablePattern</code> are specified, then all tables are returned. </p>
     */
    inline void SetTablePattern(Aws::String&& value) { m_tablePatternHasBeenSet = true; m_tablePattern = std::move(value); }

    /**
     * <p>A pattern to filter results by table name. Within a table pattern, "%" means
     * match any substring of 0 or more characters and "_" means match any one
     * character. Only table name entries matching the search pattern are returned. If
     * <code>TablePattern</code> is not specified, then all tables that match
     * <code>SchemaPattern</code>are returned. If neither <code>SchemaPattern</code> or
     * <code>TablePattern</code> are specified, then all tables are returned. </p>
     */
    inline void SetTablePattern(const char* value) { m_tablePatternHasBeenSet = true; m_tablePattern.assign(value); }

    /**
     * <p>A pattern to filter results by table name. Within a table pattern, "%" means
     * match any substring of 0 or more characters and "_" means match any one
     * character. Only table name entries matching the search pattern are returned. If
     * <code>TablePattern</code> is not specified, then all tables that match
     * <code>SchemaPattern</code>are returned. If neither <code>SchemaPattern</code> or
     * <code>TablePattern</code> are specified, then all tables are returned. </p>
     */
    inline ListTablesRequest& WithTablePattern(const Aws::String& value) { SetTablePattern(value); return *this;}

    /**
     * <p>A pattern to filter results by table name. Within a table pattern, "%" means
     * match any substring of 0 or more characters and "_" means match any one
     * character. Only table name entries matching the search pattern are returned. If
     * <code>TablePattern</code> is not specified, then all tables that match
     * <code>SchemaPattern</code>are returned. If neither <code>SchemaPattern</code> or
     * <code>TablePattern</code> are specified, then all tables are returned. </p>
     */
    inline ListTablesRequest& WithTablePattern(Aws::String&& value) { SetTablePattern(std::move(value)); return *this;}

    /**
     * <p>A pattern to filter results by table name. Within a table pattern, "%" means
     * match any substring of 0 or more characters and "_" means match any one
     * character. Only table name entries matching the search pattern are returned. If
     * <code>TablePattern</code> is not specified, then all tables that match
     * <code>SchemaPattern</code>are returned. If neither <code>SchemaPattern</code> or
     * <code>TablePattern</code> are specified, then all tables are returned. </p>
     */
    inline ListTablesRequest& WithTablePattern(const char* value) { SetTablePattern(value); return *this;}


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
    inline ListTablesRequest& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}

    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline ListTablesRequest& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}

    /**
     * <p>The serverless workgroup name. This parameter is required when connecting to
     * a serverless workgroup and authenticating using either Secrets Manager or
     * temporary credentials.</p>
     */
    inline ListTablesRequest& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}

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

    Aws::String m_schemaPattern;
    bool m_schemaPatternHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_tablePattern;
    bool m_tablePatternHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
