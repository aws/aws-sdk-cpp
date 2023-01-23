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
    AWS_KENDRA_API ConnectionConfiguration();
    AWS_KENDRA_API ConnectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ConnectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the host for the database. Can be either a string
     * (host.subdomain.domain.tld) or an IPv4 or IPv6 address.</p>
     */
    inline const Aws::String& GetDatabaseHost() const{ return m_databaseHost; }

    /**
     * <p>The name of the host for the database. Can be either a string
     * (host.subdomain.domain.tld) or an IPv4 or IPv6 address.</p>
     */
    inline bool DatabaseHostHasBeenSet() const { return m_databaseHostHasBeenSet; }

    /**
     * <p>The name of the host for the database. Can be either a string
     * (host.subdomain.domain.tld) or an IPv4 or IPv6 address.</p>
     */
    inline void SetDatabaseHost(const Aws::String& value) { m_databaseHostHasBeenSet = true; m_databaseHost = value; }

    /**
     * <p>The name of the host for the database. Can be either a string
     * (host.subdomain.domain.tld) or an IPv4 or IPv6 address.</p>
     */
    inline void SetDatabaseHost(Aws::String&& value) { m_databaseHostHasBeenSet = true; m_databaseHost = std::move(value); }

    /**
     * <p>The name of the host for the database. Can be either a string
     * (host.subdomain.domain.tld) or an IPv4 or IPv6 address.</p>
     */
    inline void SetDatabaseHost(const char* value) { m_databaseHostHasBeenSet = true; m_databaseHost.assign(value); }

    /**
     * <p>The name of the host for the database. Can be either a string
     * (host.subdomain.domain.tld) or an IPv4 or IPv6 address.</p>
     */
    inline ConnectionConfiguration& WithDatabaseHost(const Aws::String& value) { SetDatabaseHost(value); return *this;}

    /**
     * <p>The name of the host for the database. Can be either a string
     * (host.subdomain.domain.tld) or an IPv4 or IPv6 address.</p>
     */
    inline ConnectionConfiguration& WithDatabaseHost(Aws::String&& value) { SetDatabaseHost(std::move(value)); return *this;}

    /**
     * <p>The name of the host for the database. Can be either a string
     * (host.subdomain.domain.tld) or an IPv4 or IPv6 address.</p>
     */
    inline ConnectionConfiguration& WithDatabaseHost(const char* value) { SetDatabaseHost(value); return *this;}


    /**
     * <p>The port that the database uses for connections.</p>
     */
    inline int GetDatabasePort() const{ return m_databasePort; }

    /**
     * <p>The port that the database uses for connections.</p>
     */
    inline bool DatabasePortHasBeenSet() const { return m_databasePortHasBeenSet; }

    /**
     * <p>The port that the database uses for connections.</p>
     */
    inline void SetDatabasePort(int value) { m_databasePortHasBeenSet = true; m_databasePort = value; }

    /**
     * <p>The port that the database uses for connections.</p>
     */
    inline ConnectionConfiguration& WithDatabasePort(int value) { SetDatabasePort(value); return *this;}


    /**
     * <p>The name of the database containing the document data.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database containing the document data.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database containing the document data.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database containing the document data.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database containing the document data.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database containing the document data.</p>
     */
    inline ConnectionConfiguration& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database containing the document data.</p>
     */
    inline ConnectionConfiguration& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database containing the document data.</p>
     */
    inline ConnectionConfiguration& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table that contains the document data.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table that contains the document data.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table that contains the document data.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table that contains the document data.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table that contains the document data.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table that contains the document data.</p>
     */
    inline ConnectionConfiguration& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table that contains the document data.</p>
     */
    inline ConnectionConfiguration& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table that contains the document data.</p>
     */
    inline ConnectionConfiguration& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of credentials stored in Secrets Manager. The
     * credentials should be a user/password pair. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-database.html">Using
     * a Database Data Source</a>. For more information about Secrets Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is Secrets Manager</a> in the <i> Secrets Manager </i> user guide.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of credentials stored in Secrets Manager. The
     * credentials should be a user/password pair. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-database.html">Using
     * a Database Data Source</a>. For more information about Secrets Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is Secrets Manager</a> in the <i> Secrets Manager </i> user guide.</p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of credentials stored in Secrets Manager. The
     * credentials should be a user/password pair. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-database.html">Using
     * a Database Data Source</a>. For more information about Secrets Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is Secrets Manager</a> in the <i> Secrets Manager </i> user guide.</p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of credentials stored in Secrets Manager. The
     * credentials should be a user/password pair. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-database.html">Using
     * a Database Data Source</a>. For more information about Secrets Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is Secrets Manager</a> in the <i> Secrets Manager </i> user guide.</p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of credentials stored in Secrets Manager. The
     * credentials should be a user/password pair. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-database.html">Using
     * a Database Data Source</a>. For more information about Secrets Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is Secrets Manager</a> in the <i> Secrets Manager </i> user guide.</p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of credentials stored in Secrets Manager. The
     * credentials should be a user/password pair. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-database.html">Using
     * a Database Data Source</a>. For more information about Secrets Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is Secrets Manager</a> in the <i> Secrets Manager </i> user guide.</p>
     */
    inline ConnectionConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of credentials stored in Secrets Manager. The
     * credentials should be a user/password pair. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-database.html">Using
     * a Database Data Source</a>. For more information about Secrets Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is Secrets Manager</a> in the <i> Secrets Manager </i> user guide.</p>
     */
    inline ConnectionConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of credentials stored in Secrets Manager. The
     * credentials should be a user/password pair. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-database.html">Using
     * a Database Data Source</a>. For more information about Secrets Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is Secrets Manager</a> in the <i> Secrets Manager </i> user guide.</p>
     */
    inline ConnectionConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}

  private:

    Aws::String m_databaseHost;
    bool m_databaseHostHasBeenSet = false;

    int m_databasePort;
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
