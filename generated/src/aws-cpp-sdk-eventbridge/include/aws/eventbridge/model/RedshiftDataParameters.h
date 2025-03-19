/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>These are custom parameters to be used when the target is a Amazon Redshift
   * cluster to invoke the Amazon Redshift Data API ExecuteStatement based on
   * EventBridge events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/RedshiftDataParameters">AWS
   * API Reference</a></p>
   */
  class RedshiftDataParameters
  {
  public:
    AWS_EVENTBRIDGE_API RedshiftDataParameters() = default;
    AWS_EVENTBRIDGE_API RedshiftDataParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API RedshiftDataParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name or ARN of the secret that enables access to the database. Required
     * when authenticating using Amazon Web Services Secrets Manager.</p>
     */
    inline const Aws::String& GetSecretManagerArn() const { return m_secretManagerArn; }
    inline bool SecretManagerArnHasBeenSet() const { return m_secretManagerArnHasBeenSet; }
    template<typename SecretManagerArnT = Aws::String>
    void SetSecretManagerArn(SecretManagerArnT&& value) { m_secretManagerArnHasBeenSet = true; m_secretManagerArn = std::forward<SecretManagerArnT>(value); }
    template<typename SecretManagerArnT = Aws::String>
    RedshiftDataParameters& WithSecretManagerArn(SecretManagerArnT&& value) { SetSecretManagerArn(std::forward<SecretManagerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database. Required when authenticating using temporary
     * credentials.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    RedshiftDataParameters& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database user name. Required when authenticating using temporary
     * credentials.</p>
     */
    inline const Aws::String& GetDbUser() const { return m_dbUser; }
    inline bool DbUserHasBeenSet() const { return m_dbUserHasBeenSet; }
    template<typename DbUserT = Aws::String>
    void SetDbUser(DbUserT&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::forward<DbUserT>(value); }
    template<typename DbUserT = Aws::String>
    RedshiftDataParameters& WithDbUser(DbUserT&& value) { SetDbUser(std::forward<DbUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL statement text to run.</p>
     */
    inline const Aws::String& GetSql() const { return m_sql; }
    inline bool SqlHasBeenSet() const { return m_sqlHasBeenSet; }
    template<typename SqlT = Aws::String>
    void SetSql(SqlT&& value) { m_sqlHasBeenSet = true; m_sql = std::forward<SqlT>(value); }
    template<typename SqlT = Aws::String>
    RedshiftDataParameters& WithSql(SqlT&& value) { SetSql(std::forward<SqlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SQL statement. You can name the SQL statement when you create
     * it to identify the query.</p>
     */
    inline const Aws::String& GetStatementName() const { return m_statementName; }
    inline bool StatementNameHasBeenSet() const { return m_statementNameHasBeenSet; }
    template<typename StatementNameT = Aws::String>
    void SetStatementName(StatementNameT&& value) { m_statementNameHasBeenSet = true; m_statementName = std::forward<StatementNameT>(value); }
    template<typename StatementNameT = Aws::String>
    RedshiftDataParameters& WithStatementName(StatementNameT&& value) { SetStatementName(std::forward<StatementNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to send an event back to EventBridge after the SQL
     * statement runs.</p>
     */
    inline bool GetWithEvent() const { return m_withEvent; }
    inline bool WithEventHasBeenSet() const { return m_withEventHasBeenSet; }
    inline void SetWithEvent(bool value) { m_withEventHasBeenSet = true; m_withEvent = value; }
    inline RedshiftDataParameters& WithWithEvent(bool value) { SetWithEvent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more SQL statements to run. The SQL statements are run as a single
     * transaction. They run serially in the order of the array. Subsequent SQL
     * statements don't start until the previous statement in the array completes. If
     * any SQL statement fails, then because they are run as one transaction, all work
     * is rolled back.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSqls() const { return m_sqls; }
    inline bool SqlsHasBeenSet() const { return m_sqlsHasBeenSet; }
    template<typename SqlsT = Aws::Vector<Aws::String>>
    void SetSqls(SqlsT&& value) { m_sqlsHasBeenSet = true; m_sqls = std::forward<SqlsT>(value); }
    template<typename SqlsT = Aws::Vector<Aws::String>>
    RedshiftDataParameters& WithSqls(SqlsT&& value) { SetSqls(std::forward<SqlsT>(value)); return *this;}
    template<typename SqlsT = Aws::String>
    RedshiftDataParameters& AddSqls(SqlsT&& value) { m_sqlsHasBeenSet = true; m_sqls.emplace_back(std::forward<SqlsT>(value)); return *this; }
    ///@}
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

    bool m_withEvent{false};
    bool m_withEventHasBeenSet = false;

    Aws::Vector<Aws::String> m_sqls;
    bool m_sqlsHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
