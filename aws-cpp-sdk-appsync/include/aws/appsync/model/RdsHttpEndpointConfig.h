/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>The Amazon Relational Database Service (Amazon RDS) HTTP endpoint
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/RdsHttpEndpointConfig">AWS
   * API Reference</a></p>
   */
  class RdsHttpEndpointConfig
  {
  public:
    AWS_APPSYNC_API RdsHttpEndpointConfig();
    AWS_APPSYNC_API RdsHttpEndpointConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API RdsHttpEndpointConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Web Services Region for Amazon RDS HTTP endpoint.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>Amazon Web Services Region for Amazon RDS HTTP endpoint.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>Amazon Web Services Region for Amazon RDS HTTP endpoint.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>Amazon Web Services Region for Amazon RDS HTTP endpoint.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>Amazon Web Services Region for Amazon RDS HTTP endpoint.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>Amazon Web Services Region for Amazon RDS HTTP endpoint.</p>
     */
    inline RdsHttpEndpointConfig& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>Amazon Web Services Region for Amazon RDS HTTP endpoint.</p>
     */
    inline RdsHttpEndpointConfig& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>Amazon Web Services Region for Amazon RDS HTTP endpoint.</p>
     */
    inline RdsHttpEndpointConfig& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    /**
     * <p>Amazon RDS cluster Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetDbClusterIdentifier() const{ return m_dbClusterIdentifier; }

    /**
     * <p>Amazon RDS cluster Amazon Resource Name (ARN).</p>
     */
    inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }

    /**
     * <p>Amazon RDS cluster Amazon Resource Name (ARN).</p>
     */
    inline void SetDbClusterIdentifier(const Aws::String& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = value; }

    /**
     * <p>Amazon RDS cluster Amazon Resource Name (ARN).</p>
     */
    inline void SetDbClusterIdentifier(Aws::String&& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = std::move(value); }

    /**
     * <p>Amazon RDS cluster Amazon Resource Name (ARN).</p>
     */
    inline void SetDbClusterIdentifier(const char* value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier.assign(value); }

    /**
     * <p>Amazon RDS cluster Amazon Resource Name (ARN).</p>
     */
    inline RdsHttpEndpointConfig& WithDbClusterIdentifier(const Aws::String& value) { SetDbClusterIdentifier(value); return *this;}

    /**
     * <p>Amazon RDS cluster Amazon Resource Name (ARN).</p>
     */
    inline RdsHttpEndpointConfig& WithDbClusterIdentifier(Aws::String&& value) { SetDbClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>Amazon RDS cluster Amazon Resource Name (ARN).</p>
     */
    inline RdsHttpEndpointConfig& WithDbClusterIdentifier(const char* value) { SetDbClusterIdentifier(value); return *this;}


    /**
     * <p>Logical database name.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>Logical database name.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>Logical database name.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>Logical database name.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>Logical database name.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>Logical database name.</p>
     */
    inline RdsHttpEndpointConfig& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>Logical database name.</p>
     */
    inline RdsHttpEndpointConfig& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>Logical database name.</p>
     */
    inline RdsHttpEndpointConfig& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Logical schema name.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>Logical schema name.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>Logical schema name.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>Logical schema name.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>Logical schema name.</p>
     */
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }

    /**
     * <p>Logical schema name.</p>
     */
    inline RdsHttpEndpointConfig& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>Logical schema name.</p>
     */
    inline RdsHttpEndpointConfig& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>Logical schema name.</p>
     */
    inline RdsHttpEndpointConfig& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>Amazon Web Services secret store Amazon Resource Name (ARN) for database
     * credentials.</p>
     */
    inline const Aws::String& GetAwsSecretStoreArn() const{ return m_awsSecretStoreArn; }

    /**
     * <p>Amazon Web Services secret store Amazon Resource Name (ARN) for database
     * credentials.</p>
     */
    inline bool AwsSecretStoreArnHasBeenSet() const { return m_awsSecretStoreArnHasBeenSet; }

    /**
     * <p>Amazon Web Services secret store Amazon Resource Name (ARN) for database
     * credentials.</p>
     */
    inline void SetAwsSecretStoreArn(const Aws::String& value) { m_awsSecretStoreArnHasBeenSet = true; m_awsSecretStoreArn = value; }

    /**
     * <p>Amazon Web Services secret store Amazon Resource Name (ARN) for database
     * credentials.</p>
     */
    inline void SetAwsSecretStoreArn(Aws::String&& value) { m_awsSecretStoreArnHasBeenSet = true; m_awsSecretStoreArn = std::move(value); }

    /**
     * <p>Amazon Web Services secret store Amazon Resource Name (ARN) for database
     * credentials.</p>
     */
    inline void SetAwsSecretStoreArn(const char* value) { m_awsSecretStoreArnHasBeenSet = true; m_awsSecretStoreArn.assign(value); }

    /**
     * <p>Amazon Web Services secret store Amazon Resource Name (ARN) for database
     * credentials.</p>
     */
    inline RdsHttpEndpointConfig& WithAwsSecretStoreArn(const Aws::String& value) { SetAwsSecretStoreArn(value); return *this;}

    /**
     * <p>Amazon Web Services secret store Amazon Resource Name (ARN) for database
     * credentials.</p>
     */
    inline RdsHttpEndpointConfig& WithAwsSecretStoreArn(Aws::String&& value) { SetAwsSecretStoreArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Web Services secret store Amazon Resource Name (ARN) for database
     * credentials.</p>
     */
    inline RdsHttpEndpointConfig& WithAwsSecretStoreArn(const char* value) { SetAwsSecretStoreArn(value); return *this;}

  private:

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_dbClusterIdentifier;
    bool m_dbClusterIdentifierHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_awsSecretStoreArn;
    bool m_awsSecretStoreArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
