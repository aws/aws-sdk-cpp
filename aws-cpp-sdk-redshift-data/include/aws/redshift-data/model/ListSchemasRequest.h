﻿/**
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
  class AWS_REDSHIFTDATAAPISERVICE_API ListSchemasRequest : public RedshiftDataAPIServiceRequest
  {
  public:
    ListSchemasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSchemas"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The cluster identifier. This parameter is required when authenticating using
     * either Secrets Manager or temporary credentials. </p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The cluster identifier. This parameter is required when authenticating using
     * either Secrets Manager or temporary credentials. </p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier. This parameter is required when authenticating using
     * either Secrets Manager or temporary credentials. </p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The cluster identifier. This parameter is required when authenticating using
     * either Secrets Manager or temporary credentials. </p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier. This parameter is required when authenticating using
     * either Secrets Manager or temporary credentials. </p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier. This parameter is required when authenticating using
     * either Secrets Manager or temporary credentials. </p>
     */
    inline ListSchemasRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier. This parameter is required when authenticating using
     * either Secrets Manager or temporary credentials. </p>
     */
    inline ListSchemasRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier. This parameter is required when authenticating using
     * either Secrets Manager or temporary credentials. </p>
     */
    inline ListSchemasRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


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
    inline ListSchemasRequest& WithConnectedDatabase(const Aws::String& value) { SetConnectedDatabase(value); return *this;}

    /**
     * <p>A database name. The connected database is specified when you connect with
     * your authentication credentials. </p>
     */
    inline ListSchemasRequest& WithConnectedDatabase(Aws::String&& value) { SetConnectedDatabase(std::move(value)); return *this;}

    /**
     * <p>A database name. The connected database is specified when you connect with
     * your authentication credentials. </p>
     */
    inline ListSchemasRequest& WithConnectedDatabase(const char* value) { SetConnectedDatabase(value); return *this;}


    /**
     * <p>The name of the database that contains the schemas to list. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The name of the database that contains the schemas to list. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The name of the database that contains the schemas to list. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The name of the database that contains the schemas to list. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The name of the database that contains the schemas to list. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>The name of the database that contains the schemas to list. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline ListSchemasRequest& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the database that contains the schemas to list. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline ListSchemasRequest& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The name of the database that contains the schemas to list. If
     * <code>ConnectedDatabase</code> is not specified, this is also the database to
     * connect to with your authentication credentials.</p>
     */
    inline ListSchemasRequest& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>The database user name. This parameter is required when authenticating using
     * temporary credentials. </p>
     */
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }

    /**
     * <p>The database user name. This parameter is required when authenticating using
     * temporary credentials. </p>
     */
    inline bool DbUserHasBeenSet() const { return m_dbUserHasBeenSet; }

    /**
     * <p>The database user name. This parameter is required when authenticating using
     * temporary credentials. </p>
     */
    inline void SetDbUser(const Aws::String& value) { m_dbUserHasBeenSet = true; m_dbUser = value; }

    /**
     * <p>The database user name. This parameter is required when authenticating using
     * temporary credentials. </p>
     */
    inline void SetDbUser(Aws::String&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::move(value); }

    /**
     * <p>The database user name. This parameter is required when authenticating using
     * temporary credentials. </p>
     */
    inline void SetDbUser(const char* value) { m_dbUserHasBeenSet = true; m_dbUser.assign(value); }

    /**
     * <p>The database user name. This parameter is required when authenticating using
     * temporary credentials. </p>
     */
    inline ListSchemasRequest& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}

    /**
     * <p>The database user name. This parameter is required when authenticating using
     * temporary credentials. </p>
     */
    inline ListSchemasRequest& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}

    /**
     * <p>The database user name. This parameter is required when authenticating using
     * temporary credentials. </p>
     */
    inline ListSchemasRequest& WithDbUser(const char* value) { SetDbUser(value); return *this;}


    /**
     * <p>The maximum number of schemas to return in the response. If more schemas
     * exist than fit in one response, then <code>NextToken</code> is returned to page
     * through the results. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of schemas to return in the response. If more schemas
     * exist than fit in one response, then <code>NextToken</code> is returned to page
     * through the results. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of schemas to return in the response. If more schemas
     * exist than fit in one response, then <code>NextToken</code> is returned to page
     * through the results. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of schemas to return in the response. If more schemas
     * exist than fit in one response, then <code>NextToken</code> is returned to page
     * through the results. </p>
     */
    inline ListSchemasRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListSchemasRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline ListSchemasRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned NextToken value in
     * the next NextToken parameter and retrying the command. If the NextToken field is
     * empty, all response records have been retrieved for the request. </p>
     */
    inline ListSchemasRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A pattern to filter results by schema name. Within a schema pattern, "%"
     * means match any substring of 0 or more characters and "_" means match any one
     * character. Only schema name entries matching the search pattern are returned.
     * </p>
     */
    inline const Aws::String& GetSchemaPattern() const{ return m_schemaPattern; }

    /**
     * <p>A pattern to filter results by schema name. Within a schema pattern, "%"
     * means match any substring of 0 or more characters and "_" means match any one
     * character. Only schema name entries matching the search pattern are returned.
     * </p>
     */
    inline bool SchemaPatternHasBeenSet() const { return m_schemaPatternHasBeenSet; }

    /**
     * <p>A pattern to filter results by schema name. Within a schema pattern, "%"
     * means match any substring of 0 or more characters and "_" means match any one
     * character. Only schema name entries matching the search pattern are returned.
     * </p>
     */
    inline void SetSchemaPattern(const Aws::String& value) { m_schemaPatternHasBeenSet = true; m_schemaPattern = value; }

    /**
     * <p>A pattern to filter results by schema name. Within a schema pattern, "%"
     * means match any substring of 0 or more characters and "_" means match any one
     * character. Only schema name entries matching the search pattern are returned.
     * </p>
     */
    inline void SetSchemaPattern(Aws::String&& value) { m_schemaPatternHasBeenSet = true; m_schemaPattern = std::move(value); }

    /**
     * <p>A pattern to filter results by schema name. Within a schema pattern, "%"
     * means match any substring of 0 or more characters and "_" means match any one
     * character. Only schema name entries matching the search pattern are returned.
     * </p>
     */
    inline void SetSchemaPattern(const char* value) { m_schemaPatternHasBeenSet = true; m_schemaPattern.assign(value); }

    /**
     * <p>A pattern to filter results by schema name. Within a schema pattern, "%"
     * means match any substring of 0 or more characters and "_" means match any one
     * character. Only schema name entries matching the search pattern are returned.
     * </p>
     */
    inline ListSchemasRequest& WithSchemaPattern(const Aws::String& value) { SetSchemaPattern(value); return *this;}

    /**
     * <p>A pattern to filter results by schema name. Within a schema pattern, "%"
     * means match any substring of 0 or more characters and "_" means match any one
     * character. Only schema name entries matching the search pattern are returned.
     * </p>
     */
    inline ListSchemasRequest& WithSchemaPattern(Aws::String&& value) { SetSchemaPattern(std::move(value)); return *this;}

    /**
     * <p>A pattern to filter results by schema name. Within a schema pattern, "%"
     * means match any substring of 0 or more characters and "_" means match any one
     * character. Only schema name entries matching the search pattern are returned.
     * </p>
     */
    inline ListSchemasRequest& WithSchemaPattern(const char* value) { SetSchemaPattern(value); return *this;}


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
    inline ListSchemasRequest& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline ListSchemasRequest& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the database. This
     * parameter is required when authenticating using Secrets Manager. </p>
     */
    inline ListSchemasRequest& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    Aws::String m_connectedDatabase;
    bool m_connectedDatabaseHasBeenSet;

    Aws::String m_database;
    bool m_databaseHasBeenSet;

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_schemaPattern;
    bool m_schemaPatternHasBeenSet;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
