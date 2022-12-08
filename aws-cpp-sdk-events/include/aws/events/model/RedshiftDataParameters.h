/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>These are custom parameters to be used when the target is a Amazon Redshift
   * cluster to invoke the Amazon Redshift Data API ExecuteStatement based on
   * EventBridge events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/RedshiftDataParameters">AWS
   * API Reference</a></p>
   */
  class RedshiftDataParameters
  {
  public:
    AWS_CLOUDWATCHEVENTS_API RedshiftDataParameters();
    AWS_CLOUDWATCHEVENTS_API RedshiftDataParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API RedshiftDataParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using Amazon Web Services Secrets Manager.</p>
     */
    inline const Aws::String& GetSecretManagerArn() const{ return m_secretManagerArn; }

    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using Amazon Web Services Secrets Manager.</p>
     */
    inline bool SecretManagerArnHasBeenSet() const { return m_secretManagerArnHasBeenSet; }

    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using Amazon Web Services Secrets Manager.</p>
     */
    inline void SetSecretManagerArn(const Aws::String& value) { m_secretManagerArnHasBeenSet = true; m_secretManagerArn = value; }

    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using Amazon Web Services Secrets Manager.</p>
     */
    inline void SetSecretManagerArn(Aws::String&& value) { m_secretManagerArnHasBeenSet = true; m_secretManagerArn = std::move(value); }

    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using Amazon Web Services Secrets Manager.</p>
     */
    inline void SetSecretManagerArn(const char* value) { m_secretManagerArnHasBeenSet = true; m_secretManagerArn.assign(value); }

    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using Amazon Web Services Secrets Manager.</p>
     */
    inline RedshiftDataParameters& WithSecretManagerArn(const Aws::String& value) { SetSecretManagerArn(value); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using Amazon Web Services Secrets Manager.</p>
     */
    inline RedshiftDataParameters& WithSecretManagerArn(Aws::String&& value) { SetSecretManagerArn(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using Amazon Web Services Secrets Manager.</p>
     */
    inline RedshiftDataParameters& WithSecretManagerArn(const char* value) { SetSecretManagerArn(value); return *this;}


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
    inline RedshiftDataParameters& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the database. Required when authenticating using temporary
     * credentials.</p>
     */
    inline RedshiftDataParameters& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The name of the database. Required when authenticating using temporary
     * credentials.</p>
     */
    inline RedshiftDataParameters& WithDatabase(const char* value) { SetDatabase(value); return *this;}


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
    inline RedshiftDataParameters& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}

    /**
     * <p>The database user name. Required when authenticating using temporary
     * credentials.</p>
     */
    inline RedshiftDataParameters& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}

    /**
     * <p>The database user name. Required when authenticating using temporary
     * credentials.</p>
     */
    inline RedshiftDataParameters& WithDbUser(const char* value) { SetDbUser(value); return *this;}


    /**
     * <p>The SQL statement text to run.</p>
     */
    inline const Aws::String& GetSql() const{ return m_sql; }

    /**
     * <p>The SQL statement text to run.</p>
     */
    inline bool SqlHasBeenSet() const { return m_sqlHasBeenSet; }

    /**
     * <p>The SQL statement text to run.</p>
     */
    inline void SetSql(const Aws::String& value) { m_sqlHasBeenSet = true; m_sql = value; }

    /**
     * <p>The SQL statement text to run.</p>
     */
    inline void SetSql(Aws::String&& value) { m_sqlHasBeenSet = true; m_sql = std::move(value); }

    /**
     * <p>The SQL statement text to run.</p>
     */
    inline void SetSql(const char* value) { m_sqlHasBeenSet = true; m_sql.assign(value); }

    /**
     * <p>The SQL statement text to run.</p>
     */
    inline RedshiftDataParameters& WithSql(const Aws::String& value) { SetSql(value); return *this;}

    /**
     * <p>The SQL statement text to run.</p>
     */
    inline RedshiftDataParameters& WithSql(Aws::String&& value) { SetSql(std::move(value)); return *this;}

    /**
     * <p>The SQL statement text to run.</p>
     */
    inline RedshiftDataParameters& WithSql(const char* value) { SetSql(value); return *this;}


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
    inline RedshiftDataParameters& WithStatementName(const Aws::String& value) { SetStatementName(value); return *this;}

    /**
     * <p>The name of the SQL statement. You can name the SQL statement when you create
     * it to identify the query.</p>
     */
    inline RedshiftDataParameters& WithStatementName(Aws::String&& value) { SetStatementName(std::move(value)); return *this;}

    /**
     * <p>The name of the SQL statement. You can name the SQL statement when you create
     * it to identify the query.</p>
     */
    inline RedshiftDataParameters& WithStatementName(const char* value) { SetStatementName(value); return *this;}


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
    inline RedshiftDataParameters& WithWithEvent(bool value) { SetWithEvent(value); return *this;}

  private:

    Aws::String m_secretManagerArn;
    bool m_secretManagerArnHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet = false;

    Aws::String m_sql;
    bool m_sqlHasBeenSet = false;

    Aws::String m_statementName;
    bool m_statementNameHasBeenSet = false;

    bool m_withEvent;
    bool m_withEventHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
