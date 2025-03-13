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
    AWS_APPSYNC_API RdsHttpEndpointConfig() = default;
    AWS_APPSYNC_API RdsHttpEndpointConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API RdsHttpEndpointConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Web Services Region for Amazon RDS HTTP endpoint.</p>
     */
    inline const Aws::String& GetAwsRegion() const { return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    template<typename AwsRegionT = Aws::String>
    void SetAwsRegion(AwsRegionT&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::forward<AwsRegionT>(value); }
    template<typename AwsRegionT = Aws::String>
    RdsHttpEndpointConfig& WithAwsRegion(AwsRegionT&& value) { SetAwsRegion(std::forward<AwsRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon RDS cluster Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetDbClusterIdentifier() const { return m_dbClusterIdentifier; }
    inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }
    template<typename DbClusterIdentifierT = Aws::String>
    void SetDbClusterIdentifier(DbClusterIdentifierT&& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = std::forward<DbClusterIdentifierT>(value); }
    template<typename DbClusterIdentifierT = Aws::String>
    RdsHttpEndpointConfig& WithDbClusterIdentifier(DbClusterIdentifierT&& value) { SetDbClusterIdentifier(std::forward<DbClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logical database name.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    RdsHttpEndpointConfig& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logical schema name.</p>
     */
    inline const Aws::String& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::String>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::String>
    RdsHttpEndpointConfig& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services secret store Amazon Resource Name (ARN) for database
     * credentials.</p>
     */
    inline const Aws::String& GetAwsSecretStoreArn() const { return m_awsSecretStoreArn; }
    inline bool AwsSecretStoreArnHasBeenSet() const { return m_awsSecretStoreArnHasBeenSet; }
    template<typename AwsSecretStoreArnT = Aws::String>
    void SetAwsSecretStoreArn(AwsSecretStoreArnT&& value) { m_awsSecretStoreArnHasBeenSet = true; m_awsSecretStoreArn = std::forward<AwsSecretStoreArnT>(value); }
    template<typename AwsSecretStoreArnT = Aws::String>
    RdsHttpEndpointConfig& WithAwsSecretStoreArn(AwsSecretStoreArnT&& value) { SetAwsSecretStoreArn(std::forward<AwsSecretStoreArnT>(value)); return *this;}
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
