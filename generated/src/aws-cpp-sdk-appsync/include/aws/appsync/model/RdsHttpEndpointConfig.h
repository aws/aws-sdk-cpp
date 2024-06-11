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


    ///@{
    /**
     * <p>Amazon Web Services Region for Amazon RDS HTTP endpoint.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }
    inline RdsHttpEndpointConfig& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}
    inline RdsHttpEndpointConfig& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}
    inline RdsHttpEndpointConfig& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon RDS cluster Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetDbClusterIdentifier() const{ return m_dbClusterIdentifier; }
    inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }
    inline void SetDbClusterIdentifier(const Aws::String& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = value; }
    inline void SetDbClusterIdentifier(Aws::String&& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = std::move(value); }
    inline void SetDbClusterIdentifier(const char* value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier.assign(value); }
    inline RdsHttpEndpointConfig& WithDbClusterIdentifier(const Aws::String& value) { SetDbClusterIdentifier(value); return *this;}
    inline RdsHttpEndpointConfig& WithDbClusterIdentifier(Aws::String&& value) { SetDbClusterIdentifier(std::move(value)); return *this;}
    inline RdsHttpEndpointConfig& WithDbClusterIdentifier(const char* value) { SetDbClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logical database name.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline RdsHttpEndpointConfig& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline RdsHttpEndpointConfig& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline RdsHttpEndpointConfig& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logical schema name.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }
    inline RdsHttpEndpointConfig& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}
    inline RdsHttpEndpointConfig& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}
    inline RdsHttpEndpointConfig& WithSchema(const char* value) { SetSchema(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services secret store Amazon Resource Name (ARN) for database
     * credentials.</p>
     */
    inline const Aws::String& GetAwsSecretStoreArn() const{ return m_awsSecretStoreArn; }
    inline bool AwsSecretStoreArnHasBeenSet() const { return m_awsSecretStoreArnHasBeenSet; }
    inline void SetAwsSecretStoreArn(const Aws::String& value) { m_awsSecretStoreArnHasBeenSet = true; m_awsSecretStoreArn = value; }
    inline void SetAwsSecretStoreArn(Aws::String&& value) { m_awsSecretStoreArnHasBeenSet = true; m_awsSecretStoreArn = std::move(value); }
    inline void SetAwsSecretStoreArn(const char* value) { m_awsSecretStoreArnHasBeenSet = true; m_awsSecretStoreArn.assign(value); }
    inline RdsHttpEndpointConfig& WithAwsSecretStoreArn(const Aws::String& value) { SetAwsSecretStoreArn(value); return *this;}
    inline RdsHttpEndpointConfig& WithAwsSecretStoreArn(Aws::String&& value) { SetAwsSecretStoreArn(std::move(value)); return *this;}
    inline RdsHttpEndpointConfig& WithAwsSecretStoreArn(const char* value) { SetAwsSecretStoreArn(value); return *this;}
    ///@}
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
