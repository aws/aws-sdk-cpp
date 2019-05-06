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
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/rds-data/RDSDataServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDSDataService
{
namespace Model
{

  /**
   * Execute SQL Request<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ExecuteSqlRequest">AWS
   * API Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API ExecuteSqlRequest : public RDSDataServiceRequest
  {
  public:
    ExecuteSqlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteSql"; }

    Aws::String SerializePayload() const override;


    /**
     * ARN of the db credentials in AWS Secret Store or the friendly secret name
     */
    inline const Aws::String& GetAwsSecretStoreArn() const{ return m_awsSecretStoreArn; }

    /**
     * ARN of the db credentials in AWS Secret Store or the friendly secret name
     */
    inline bool AwsSecretStoreArnHasBeenSet() const { return m_awsSecretStoreArnHasBeenSet; }

    /**
     * ARN of the db credentials in AWS Secret Store or the friendly secret name
     */
    inline void SetAwsSecretStoreArn(const Aws::String& value) { m_awsSecretStoreArnHasBeenSet = true; m_awsSecretStoreArn = value; }

    /**
     * ARN of the db credentials in AWS Secret Store or the friendly secret name
     */
    inline void SetAwsSecretStoreArn(Aws::String&& value) { m_awsSecretStoreArnHasBeenSet = true; m_awsSecretStoreArn = std::move(value); }

    /**
     * ARN of the db credentials in AWS Secret Store or the friendly secret name
     */
    inline void SetAwsSecretStoreArn(const char* value) { m_awsSecretStoreArnHasBeenSet = true; m_awsSecretStoreArn.assign(value); }

    /**
     * ARN of the db credentials in AWS Secret Store or the friendly secret name
     */
    inline ExecuteSqlRequest& WithAwsSecretStoreArn(const Aws::String& value) { SetAwsSecretStoreArn(value); return *this;}

    /**
     * ARN of the db credentials in AWS Secret Store or the friendly secret name
     */
    inline ExecuteSqlRequest& WithAwsSecretStoreArn(Aws::String&& value) { SetAwsSecretStoreArn(std::move(value)); return *this;}

    /**
     * ARN of the db credentials in AWS Secret Store or the friendly secret name
     */
    inline ExecuteSqlRequest& WithAwsSecretStoreArn(const char* value) { SetAwsSecretStoreArn(value); return *this;}


    /**
     * Target DB name
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * Target DB name
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * Target DB name
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * Target DB name
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * Target DB name
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * Target DB name
     */
    inline ExecuteSqlRequest& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * Target DB name
     */
    inline ExecuteSqlRequest& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * Target DB name
     */
    inline ExecuteSqlRequest& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * ARN of the target db cluster or instance
     */
    inline const Aws::String& GetDbClusterOrInstanceArn() const{ return m_dbClusterOrInstanceArn; }

    /**
     * ARN of the target db cluster or instance
     */
    inline bool DbClusterOrInstanceArnHasBeenSet() const { return m_dbClusterOrInstanceArnHasBeenSet; }

    /**
     * ARN of the target db cluster or instance
     */
    inline void SetDbClusterOrInstanceArn(const Aws::String& value) { m_dbClusterOrInstanceArnHasBeenSet = true; m_dbClusterOrInstanceArn = value; }

    /**
     * ARN of the target db cluster or instance
     */
    inline void SetDbClusterOrInstanceArn(Aws::String&& value) { m_dbClusterOrInstanceArnHasBeenSet = true; m_dbClusterOrInstanceArn = std::move(value); }

    /**
     * ARN of the target db cluster or instance
     */
    inline void SetDbClusterOrInstanceArn(const char* value) { m_dbClusterOrInstanceArnHasBeenSet = true; m_dbClusterOrInstanceArn.assign(value); }

    /**
     * ARN of the target db cluster or instance
     */
    inline ExecuteSqlRequest& WithDbClusterOrInstanceArn(const Aws::String& value) { SetDbClusterOrInstanceArn(value); return *this;}

    /**
     * ARN of the target db cluster or instance
     */
    inline ExecuteSqlRequest& WithDbClusterOrInstanceArn(Aws::String&& value) { SetDbClusterOrInstanceArn(std::move(value)); return *this;}

    /**
     * ARN of the target db cluster or instance
     */
    inline ExecuteSqlRequest& WithDbClusterOrInstanceArn(const char* value) { SetDbClusterOrInstanceArn(value); return *this;}


    /**
     * Target Schema name
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * Target Schema name
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * Target Schema name
     */
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * Target Schema name
     */
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * Target Schema name
     */
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }

    /**
     * Target Schema name
     */
    inline ExecuteSqlRequest& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * Target Schema name
     */
    inline ExecuteSqlRequest& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * Target Schema name
     */
    inline ExecuteSqlRequest& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * SQL statement(s) to be executed. Statements can be chained by using semicolons
     */
    inline const Aws::String& GetSqlStatements() const{ return m_sqlStatements; }

    /**
     * SQL statement(s) to be executed. Statements can be chained by using semicolons
     */
    inline bool SqlStatementsHasBeenSet() const { return m_sqlStatementsHasBeenSet; }

    /**
     * SQL statement(s) to be executed. Statements can be chained by using semicolons
     */
    inline void SetSqlStatements(const Aws::String& value) { m_sqlStatementsHasBeenSet = true; m_sqlStatements = value; }

    /**
     * SQL statement(s) to be executed. Statements can be chained by using semicolons
     */
    inline void SetSqlStatements(Aws::String&& value) { m_sqlStatementsHasBeenSet = true; m_sqlStatements = std::move(value); }

    /**
     * SQL statement(s) to be executed. Statements can be chained by using semicolons
     */
    inline void SetSqlStatements(const char* value) { m_sqlStatementsHasBeenSet = true; m_sqlStatements.assign(value); }

    /**
     * SQL statement(s) to be executed. Statements can be chained by using semicolons
     */
    inline ExecuteSqlRequest& WithSqlStatements(const Aws::String& value) { SetSqlStatements(value); return *this;}

    /**
     * SQL statement(s) to be executed. Statements can be chained by using semicolons
     */
    inline ExecuteSqlRequest& WithSqlStatements(Aws::String&& value) { SetSqlStatements(std::move(value)); return *this;}

    /**
     * SQL statement(s) to be executed. Statements can be chained by using semicolons
     */
    inline ExecuteSqlRequest& WithSqlStatements(const char* value) { SetSqlStatements(value); return *this;}

  private:

    Aws::String m_awsSecretStoreArn;
    bool m_awsSecretStoreArnHasBeenSet;

    Aws::String m_database;
    bool m_databaseHasBeenSet;

    Aws::String m_dbClusterOrInstanceArn;
    bool m_dbClusterOrInstanceArnHasBeenSet;

    Aws::String m_schema;
    bool m_schemaHasBeenSet;

    Aws::String m_sqlStatements;
    bool m_sqlStatementsHasBeenSet;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
