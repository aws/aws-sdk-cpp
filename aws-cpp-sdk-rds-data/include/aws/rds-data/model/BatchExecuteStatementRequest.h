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
   * <p>The request parameters represent the input of a SQL statement over an array
   * of
            data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/BatchExecuteStatementRequest">AWS
   * API Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API BatchExecuteStatementRequest : public RDSDataServiceRequest
  {
  public:
    BatchExecuteStatementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchExecuteStatement"; }

    Aws::String SerializePayload() const override;


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
    inline BatchExecuteStatementRequest& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the database.</p>
     */
    inline BatchExecuteStatementRequest& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The name of the database.</p>
     */
    inline BatchExecuteStatementRequest& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>The parameter set for the batch operation.</p>
     */
    inline const Aws::Vector<Aws::Vector<SqlParameter>>& GetParameterSets() const{ return m_parameterSets; }

    /**
     * <p>The parameter set for the batch operation.</p>
     */
    inline bool ParameterSetsHasBeenSet() const { return m_parameterSetsHasBeenSet; }

    /**
     * <p>The parameter set for the batch operation.</p>
     */
    inline void SetParameterSets(const Aws::Vector<Aws::Vector<SqlParameter>>& value) { m_parameterSetsHasBeenSet = true; m_parameterSets = value; }

    /**
     * <p>The parameter set for the batch operation.</p>
     */
    inline void SetParameterSets(Aws::Vector<Aws::Vector<SqlParameter>>&& value) { m_parameterSetsHasBeenSet = true; m_parameterSets = std::move(value); }

    /**
     * <p>The parameter set for the batch operation.</p>
     */
    inline BatchExecuteStatementRequest& WithParameterSets(const Aws::Vector<Aws::Vector<SqlParameter>>& value) { SetParameterSets(value); return *this;}

    /**
     * <p>The parameter set for the batch operation.</p>
     */
    inline BatchExecuteStatementRequest& WithParameterSets(Aws::Vector<Aws::Vector<SqlParameter>>&& value) { SetParameterSets(std::move(value)); return *this;}

    /**
     * <p>The parameter set for the batch operation.</p>
     */
    inline BatchExecuteStatementRequest& AddParameterSets(const Aws::Vector<SqlParameter>& value) { m_parameterSetsHasBeenSet = true; m_parameterSets.push_back(value); return *this; }

    /**
     * <p>The parameter set for the batch operation.</p>
     */
    inline BatchExecuteStatementRequest& AddParameterSets(Aws::Vector<SqlParameter>&& value) { m_parameterSetsHasBeenSet = true; m_parameterSets.push_back(std::move(value)); return *this; }


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
    inline BatchExecuteStatementRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora Serverless DB cluster.</p>
     */
    inline BatchExecuteStatementRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Aurora Serverless DB cluster.</p>
     */
    inline BatchExecuteStatementRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


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
    inline BatchExecuteStatementRequest& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>The name of the database schema.</p>
     */
    inline BatchExecuteStatementRequest& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The name of the database schema.</p>
     */
    inline BatchExecuteStatementRequest& WithSchema(const char* value) { SetSchema(value); return *this;}


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
    inline BatchExecuteStatementRequest& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the DB cluster.</p>
     */
    inline BatchExecuteStatementRequest& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the DB cluster.</p>
     */
    inline BatchExecuteStatementRequest& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


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
    inline BatchExecuteStatementRequest& WithSql(const Aws::String& value) { SetSql(value); return *this;}

    /**
     * <p>The SQL statement to run.</p>
     */
    inline BatchExecuteStatementRequest& WithSql(Aws::String&& value) { SetSql(std::move(value)); return *this;}

    /**
     * <p>The SQL statement to run.</p>
     */
    inline BatchExecuteStatementRequest& WithSql(const char* value) { SetSql(value); return *this;}


    /**
     * <p>The identifier of a transaction that was started by using the
               
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     
     * transaction that you want to include the SQL statement in.</p>
        <p>If the
     * SQL statement is not part of a transaction, don't set this
           
     * parameter.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The identifier of a transaction that was started by using the
               
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     
     * transaction that you want to include the SQL statement in.</p>
        <p>If the
     * SQL statement is not part of a transaction, don't set this
           
     * parameter.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The identifier of a transaction that was started by using the
               
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     
     * transaction that you want to include the SQL statement in.</p>
        <p>If the
     * SQL statement is not part of a transaction, don't set this
           
     * parameter.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The identifier of a transaction that was started by using the
               
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     
     * transaction that you want to include the SQL statement in.</p>
        <p>If the
     * SQL statement is not part of a transaction, don't set this
           
     * parameter.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The identifier of a transaction that was started by using the
               
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     
     * transaction that you want to include the SQL statement in.</p>
        <p>If the
     * SQL statement is not part of a transaction, don't set this
           
     * parameter.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The identifier of a transaction that was started by using the
               
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     
     * transaction that you want to include the SQL statement in.</p>
        <p>If the
     * SQL statement is not part of a transaction, don't set this
           
     * parameter.</p>
     */
    inline BatchExecuteStatementRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The identifier of a transaction that was started by using the
               
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     
     * transaction that you want to include the SQL statement in.</p>
        <p>If the
     * SQL statement is not part of a transaction, don't set this
           
     * parameter.</p>
     */
    inline BatchExecuteStatementRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a transaction that was started by using the
               
     * <code>BeginTransaction</code> operation. Specify the transaction ID of the
     
     * transaction that you want to include the SQL statement in.</p>
        <p>If the
     * SQL statement is not part of a transaction, don't set this
           
     * parameter.</p>
     */
    inline BatchExecuteStatementRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}

  private:

    Aws::String m_database;
    bool m_databaseHasBeenSet;

    Aws::Vector<Aws::Vector<SqlParameter>> m_parameterSets;
    bool m_parameterSetsHasBeenSet;

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
