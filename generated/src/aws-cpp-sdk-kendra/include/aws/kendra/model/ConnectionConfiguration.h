/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information that's required to connect to a
   * database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ConnectionConfiguration">AWS
   * API Reference</a></p>
   */
  class ConnectionConfiguration
  {
  public:
    AWS_KENDRA_API ConnectionConfiguration() = default;
    AWS_KENDRA_API ConnectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ConnectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the host for the database. Can be either a string
     * (host.subdomain.domain.tld) or an IPv4 or IPv6 address.</p>
     */
    inline const Aws::String& GetDatabaseHost() const { return m_databaseHost; }
    inline bool DatabaseHostHasBeenSet() const { return m_databaseHostHasBeenSet; }
    template<typename DatabaseHostT = Aws::String>
    void SetDatabaseHost(DatabaseHostT&& value) { m_databaseHostHasBeenSet = true; m_databaseHost = std::forward<DatabaseHostT>(value); }
    template<typename DatabaseHostT = Aws::String>
    ConnectionConfiguration& WithDatabaseHost(DatabaseHostT&& value) { SetDatabaseHost(std::forward<DatabaseHostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port that the database uses for connections.</p>
     */
    inline int GetDatabasePort() const { return m_databasePort; }
    inline bool DatabasePortHasBeenSet() const { return m_databasePortHasBeenSet; }
    inline void SetDatabasePort(int value) { m_databasePortHasBeenSet = true; m_databasePort = value; }
    inline ConnectionConfiguration& WithDatabasePort(int value) { SetDatabasePort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database containing the document data.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    ConnectionConfiguration& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table that contains the document data.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    ConnectionConfiguration& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that stores the
     * credentials. The credentials should be a user-password pair. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-database.html">Using
     * a Database Data Source</a>. For more information about Secrets Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is Secrets Manager</a> in the <i>Secrets Manager</i> user guide.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    ConnectionConfiguration& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_databaseHost;
    bool m_databaseHostHasBeenSet = false;

    int m_databasePort{0};
    bool m_databasePortHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
