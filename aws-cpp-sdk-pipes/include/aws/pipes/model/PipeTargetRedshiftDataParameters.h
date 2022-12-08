/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>These are custom parameters to be used when the target is a Amazon Redshift
   * cluster to invoke the Amazon Redshift Data API ExecuteStatement.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetRedshiftDataParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetRedshiftDataParameters
  {
  public:
    AWS_PIPES_API PipeTargetRedshiftDataParameters();
    AWS_PIPES_API PipeTargetRedshiftDataParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetRedshiftDataParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the database. Required when authenticating using temporary
     * credentials.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The name of the database. Required when authenticating using temporary
     * credentials.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The name of the database. Required when authenticating using temporary
     * credentials.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The name of the database. Required when authenticating using temporary
     * credentials.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The name of the database. Required when authenticating using temporary
     * credentials.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>The name of the database. Required when authenticating using temporary
     * credentials.</p>
     */
    inline PipeTargetRedshiftDataParameters& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the database. Required when authenticating using temporary
     * credentials.</p>
     */
    inline PipeTargetRedshiftDataParameters& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The name of the database. Required when authenticating using temporary
     * credentials.</p>
     */
    inline PipeTargetRedshiftDataParameters& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>The database user name. Required when authenticating using temporary
     * credentials.</p>
     */
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }

    /**
     * <p>The database user name. Required when authenticating using temporary
     * credentials.</p>
     */
    inline bool DbUserHasBeenSet() const { return m_dbUserHasBeenSet; }

    /**
     * <p>The database user name. Required when authenticating using temporary
     * credentials.</p>
     */
    inline void SetDbUser(const Aws::String& value) { m_dbUserHasBeenSet = true; m_dbUser = value; }

    /**
     * <p>The database user name. Required when authenticating using temporary
     * credentials.</p>
     */
    inline void SetDbUser(Aws::String&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::move(value); }

    /**
     * <p>The database user name. Required when authenticating using temporary
     * credentials.</p>
     */
    inline void SetDbUser(const char* value) { m_dbUserHasBeenSet = true; m_dbUser.assign(value); }

    /**
     * <p>The database user name. Required when authenticating using temporary
     * credentials.</p>
     */
    inline PipeTargetRedshiftDataParameters& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}

    /**
     * <p>The database user name. Required when authenticating using temporary
     * credentials.</p>
     */
    inline PipeTargetRedshiftDataParameters& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}

    /**
     * <p>The database user name. Required when authenticating using temporary
     * credentials.</p>
     */
    inline PipeTargetRedshiftDataParameters& WithDbUser(const char* value) { SetDbUser(value); return *this;}


    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using SageMaker.</p>
     */
    inline const Aws::String& GetSecretManagerArn() const{ return m_secretManagerArn; }

    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using SageMaker.</p>
     */
    inline bool SecretManagerArnHasBeenSet() const { return m_secretManagerArnHasBeenSet; }

    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using SageMaker.</p>
     */
    inline void SetSecretManagerArn(const Aws::String& value) { m_secretManagerArnHasBeenSet = true; m_secretManagerArn = value; }

    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using SageMaker.</p>
     */
    inline void SetSecretManagerArn(Aws::String&& value) { m_secretManagerArnHasBeenSet = true; m_secretManagerArn = std::move(value); }

    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using SageMaker.</p>
     */
    inline void SetSecretManagerArn(const char* value) { m_secretManagerArnHasBeenSet = true; m_secretManagerArn.assign(value); }

    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using SageMaker.</p>
     */
    inline PipeTargetRedshiftDataParameters& WithSecretManagerArn(const Aws::String& value) { SetSecretManagerArn(value); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using SageMaker.</p>
     */
    inline PipeTargetRedshiftDataParameters& WithSecretManagerArn(Aws::String&& value) { SetSecretManagerArn(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using SageMaker.</p>
     */
    inline PipeTargetRedshiftDataParameters& WithSecretManagerArn(const char* value) { SetSecretManagerArn(value); return *this;}


    /**
     * <p>The SQL statement text to run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSqls() const{ return m_sqls; }

    /**
     * <p>The SQL statement text to run.</p>
     */
    inline bool SqlsHasBeenSet() const { return m_sqlsHasBeenSet; }

    /**
     * <p>The SQL statement text to run.</p>
     */
    inline void SetSqls(const Aws::Vector<Aws::String>& value) { m_sqlsHasBeenSet = true; m_sqls = value; }

    /**
     * <p>The SQL statement text to run.</p>
     */
    inline void SetSqls(Aws::Vector<Aws::String>&& value) { m_sqlsHasBeenSet = true; m_sqls = std::move(value); }

    /**
     * <p>The SQL statement text to run.</p>
     */
    inline PipeTargetRedshiftDataParameters& WithSqls(const Aws::Vector<Aws::String>& value) { SetSqls(value); return *this;}

    /**
     * <p>The SQL statement text to run.</p>
     */
    inline PipeTargetRedshiftDataParameters& WithSqls(Aws::Vector<Aws::String>&& value) { SetSqls(std::move(value)); return *this;}

    /**
     * <p>The SQL statement text to run.</p>
     */
    inline PipeTargetRedshiftDataParameters& AddSqls(const Aws::String& value) { m_sqlsHasBeenSet = true; m_sqls.push_back(value); return *this; }

    /**
     * <p>The SQL statement text to run.</p>
     */
    inline PipeTargetRedshiftDataParameters& AddSqls(Aws::String&& value) { m_sqlsHasBeenSet = true; m_sqls.push_back(std::move(value)); return *this; }

    /**
     * <p>The SQL statement text to run.</p>
     */
    inline PipeTargetRedshiftDataParameters& AddSqls(const char* value) { m_sqlsHasBeenSet = true; m_sqls.push_back(value); return *this; }


    /**
     * <p>The name of the SQL statement. You can name the SQL statement when you create
     * it to identify the query.</p>
     */
    inline const Aws::String& GetStatementName() const{ return m_statementName; }

    /**
     * <p>The name of the SQL statement. You can name the SQL statement when you create
     * it to identify the query.</p>
     */
    inline bool StatementNameHasBeenSet() const { return m_statementNameHasBeenSet; }

    /**
     * <p>The name of the SQL statement. You can name the SQL statement when you create
     * it to identify the query.</p>
     */
    inline void SetStatementName(const Aws::String& value) { m_statementNameHasBeenSet = true; m_statementName = value; }

    /**
     * <p>The name of the SQL statement. You can name the SQL statement when you create
     * it to identify the query.</p>
     */
    inline void SetStatementName(Aws::String&& value) { m_statementNameHasBeenSet = true; m_statementName = std::move(value); }

    /**
     * <p>The name of the SQL statement. You can name the SQL statement when you create
     * it to identify the query.</p>
     */
    inline void SetStatementName(const char* value) { m_statementNameHasBeenSet = true; m_statementName.assign(value); }

    /**
     * <p>The name of the SQL statement. You can name the SQL statement when you create
     * it to identify the query.</p>
     */
    inline PipeTargetRedshiftDataParameters& WithStatementName(const Aws::String& value) { SetStatementName(value); return *this;}

    /**
     * <p>The name of the SQL statement. You can name the SQL statement when you create
     * it to identify the query.</p>
     */
    inline PipeTargetRedshiftDataParameters& WithStatementName(Aws::String&& value) { SetStatementName(std::move(value)); return *this;}

    /**
     * <p>The name of the SQL statement. You can name the SQL statement when you create
     * it to identify the query.</p>
     */
    inline PipeTargetRedshiftDataParameters& WithStatementName(const char* value) { SetStatementName(value); return *this;}


    /**
     * <p>Indicates whether to send an event back to EventBridge after the SQL
     * statement runs.</p>
     */
    inline bool GetWithEvent() const{ return m_withEvent; }

    /**
     * <p>Indicates whether to send an event back to EventBridge after the SQL
     * statement runs.</p>
     */
    inline bool WithEventHasBeenSet() const { return m_withEventHasBeenSet; }

    /**
     * <p>Indicates whether to send an event back to EventBridge after the SQL
     * statement runs.</p>
     */
    inline void SetWithEvent(bool value) { m_withEventHasBeenSet = true; m_withEvent = value; }

    /**
     * <p>Indicates whether to send an event back to EventBridge after the SQL
     * statement runs.</p>
     */
    inline PipeTargetRedshiftDataParameters& WithWithEvent(bool value) { SetWithEvent(value); return *this;}

  private:

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet = false;

    Aws::String m_secretManagerArn;
    bool m_secretManagerArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_sqls;
    bool m_sqlsHasBeenSet = false;

    Aws::String m_statementName;
    bool m_statementNameHasBeenSet = false;

    bool m_withEvent;
    bool m_withEventHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
