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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds-data/model/SqlParameter.h>
#include <utility>

namespace Aws
{
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>The request parameters represent the input of a request to run a SQL
   * statement against
            a database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ExecuteStatementRequest">AWS
   * API Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API ExecuteStatementRequest : public RDSDataServiceRequest
  {
  public:
    ExecuteStatementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteStatement"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A value that indicates whether to continue running the statement after 
     
     * the call times out. By default, the statement stops running when the call 
     
     * times out.</p>
        <important>
            <p>For DDL statements, we
     * recommend continuing to run the statement after 
               the call times
     * out. When a DDL statement terminates before it is finished 
              
     * running, it can result in errors and possibly corrupted data structures.</p>
   
     *     </important>
     */
    inline bool GetContinueAfterTimeout() const{ return m_continueAfterTimeout; }

    /**
     * <p>A value that indicates whether to continue running the statement after 
     
     * the call times out. By default, the statement stops running when the call 
     
     * times out.</p>
        <important>
            <p>For DDL statements, we
     * recommend continuing to run the statement after 
               the call times
     * out. When a DDL statement terminates before it is finished 
              
     * running, it can result in errors and possibly corrupted data structures.</p>
   
     *     </important>
     */
    inline bool ContinueAfterTimeoutHasBeenSet() const { return m_continueAfterTimeoutHasBeenSet; }

    /**
     * <p>A value that indicates whether to continue running the statement after 
     
     * the call times out. By default, the statement stops running when the call 
     
     * times out.</p>
        <important>
            <p>For DDL statements, we
     * recommend continuing to run the statement after 
               the call times
     * out. When a DDL statement terminates before it is finished 
              
     * running, it can result in errors and possibly corrupted data structures.</p>
   
     *     </important>
     */
    inline void SetContinueAfterTimeout(bool value) { m_continueAfterTimeoutHasBeenSet = true; m_continueAfterTimeout = value; }

    /**
     * <p>A value that indicates whether to continue running the statement after 
     
     * the call times out. By default, the statement stops running when the call 
     
     * times out.</p>
        <important>
            <p>For DDL statements, we
     * recommend continuing to run the statement after 
               the call times
     * out. When a DDL statement terminates before it is finished 
              
     * running, it can result in errors and possibly corrupted data structures.</p>
   
     *     </important>
     */
    inline ExecuteStatementRequest& WithContinueAfterTimeout(bool value) { SetContinueAfterTimeout(value); return *this;}


    /**
     * <p>The name of the database.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The name of the database.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The name of the database.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The name of the database.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The name of the database.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>The name of the database.</p>
     */
    inline ExecuteStatementRequest& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the database.</p>
     */
    inline ExecuteStatementRequest& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The name of the database.</p>
     */
    inline ExecuteStatementRequest& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>A value that indicates whether to include metadata in the results.</p>
     */
    inline bool GetIncludeResultMetadata() const{ return m_includeResultMetadata; }

    /**
     * <p>A value that indicates whether to include metadata in the results.</p>
     */
    inline bool IncludeResultMetadataHasBeenSet() const { return m_includeResultMetadataHasBeenSet; }

    /**
     * <p>A value that indicates whether to include metadata in the results.</p>
     */
    inline void SetIncludeResultMetadata(bool value) { m_includeResultMetadataHasBeenSet = true; m_includeResultMetadata = value; }

    /**
     * <p>A value that indicates whether to include metadata in the results.</p>
     */
    inline ExecuteStatementRequest& WithIncludeResultMetadata(bool value) { SetIncludeResultMetadata(value); return *this;}


    /**
     * <p>The parameters for the SQL statement.</p>
     */
    inline const Aws::Vector<SqlParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters for the SQL statement.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters for the SQL statement.</p>
     */
    inline void SetParameters(const Aws::Vector<SqlParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters for the SQL statement.</p>
     */
    inline void SetParameters(Aws::Vector<SqlParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters for the SQL statement.</p>
     */
    inline ExecuteStatementRequest& WithParameters(const Aws::Vector<SqlParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters for the SQL statement.</p>
     */
    inline ExecuteStatementRequest& WithParameters(Aws::Vector<SqlParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters for the SQL statement.</p>
     */
    inline ExecuteStatementRequest& AddParameters(const SqlParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>The parameters for the SQL statement.</p>
     */
    inline ExecuteStatementRequest& AddParameters(SqlParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora Serverless DB cluster.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora Serverless DB cluster.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora Serverless DB cluster.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora Serverless DB cluster.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora Serverless DB cluster.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora Serverless DB cluster.</p>
     */
    inline ExecuteStatementRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora Serverless DB cluster.</p>
     */
    inline ExecuteStatementRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora Serverless DB cluster.</p>
     */
    inline ExecuteStatementRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The name of the database schema.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>The name of the database schema.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>The name of the database schema.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>The name of the database schema.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>The name of the database schema.</p>
     */
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }

    /**
     * <p>The name of the database schema.</p>
     */
    inline ExecuteStatementRequest& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>The name of the database schema.</p>
     */
    inline ExecuteStatementRequest& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The name of the database schema.</p>
     */
    inline ExecuteStatementRequest& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>The name or ARN of the secret that enables access to the DB cluster.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The name or ARN of the secret that enables access to the DB cluster.</p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The name or ARN of the secret that enables access to the DB cluster.</p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The name or ARN of the secret that enables access to the DB cluster.</p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The name or ARN of the secret that enables access to the DB cluster.</p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The name or ARN of the secret that enables access to the DB cluster.</p>
     */
    inline ExecuteStatementRequest& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the DB cluster.</p>
     */
    inline ExecuteStatementRequest& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the DB cluster.</p>
     */
    inline ExecuteStatementRequest& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>The SQL statement to run.</p>
     */
    inline const Aws::String& GetSql() const{ return m_sql; }

    /**
     * <p>The SQL statement to run.</p>
     */
    inline bool SqlHasBeenSet() const { return m_sqlHasBeenSet; }

    /**
     * <p>The SQL statement to run.</p>
     */
    inline void SetSql(const Aws::String& value) { m_sqlHasBeenSet = true; m_sql = value; }

    /**
     * <p>The SQL statement to run.</p>
     */
    inline void SetSql(Aws::String&& value) { m_sqlHasBeenSet = true; m_sql = std::move(value); }

    /**
     * <p>The SQL statement to run.</p>
     */
    inline void SetSql(const char* value) { m_sqlHasBeenSet = true; m_sql.assign(value); }

    /**
     * <p>The SQL statement to run.</p>
     */
    inline ExecuteStatementRequest& WithSql(const Aws::String& value) { SetSql(value); return *this;}

    /**
     * <p>The SQL statement to run.</p>
     */
    inline ExecuteStatementRequest& WithSql(Aws::String&& value) { SetSql(std::move(value)); return *this;}

    /**
     * <p>The SQL statement to run.</p>
     */
    inline ExecuteStatementRequest& WithSql(const char* value) { SetSql(value); return *this;}


    /**
     * <p>The identifier of a transaction that was started by using the
               
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     
     * transaction that you want to include the SQL statement in.</p>
        <p>If the
     * SQL statement is not part of a transaction, don't set this parameter.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The identifier of a transaction that was started by using the
               
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     
     * transaction that you want to include the SQL statement in.</p>
        <p>If the
     * SQL statement is not part of a transaction, don't set this parameter.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The identifier of a transaction that was started by using the
               
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     
     * transaction that you want to include the SQL statement in.</p>
        <p>If the
     * SQL statement is not part of a transaction, don't set this parameter.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The identifier of a transaction that was started by using the
               
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     
     * transaction that you want to include the SQL statement in.</p>
        <p>If the
     * SQL statement is not part of a transaction, don't set this parameter.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The identifier of a transaction that was started by using the
               
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     
     * transaction that you want to include the SQL statement in.</p>
        <p>If the
     * SQL statement is not part of a transaction, don't set this parameter.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The identifier of a transaction that was started by using the
               
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     
     * transaction that you want to include the SQL statement in.</p>
        <p>If the
     * SQL statement is not part of a transaction, don't set this parameter.</p>
     */
    inline ExecuteStatementRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The identifier of a transaction that was started by using the
               
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     
     * transaction that you want to include the SQL statement in.</p>
        <p>If the
     * SQL statement is not part of a transaction, don't set this parameter.</p>
     */
    inline ExecuteStatementRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a transaction that was started by using the
               
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     
     * transaction that you want to include the SQL statement in.</p>
        <p>If the
     * SQL statement is not part of a transaction, don't set this parameter.</p>
     */
    inline ExecuteStatementRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}

  private:

    bool m_continueAfterTimeout;
    bool m_continueAfterTimeoutHasBeenSet;

    Aws::String m_database;
    bool m_databaseHasBeenSet;

    bool m_includeResultMetadata;
    bool m_includeResultMetadataHasBeenSet;

    Aws::Vector<SqlParameter> m_parameters;
    bool m_parametersHasBeenSet;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::String m_schema;
    bool m_schemaHasBeenSet;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet;

    Aws::String m_sql;
    bool m_sqlHasBeenSet;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
