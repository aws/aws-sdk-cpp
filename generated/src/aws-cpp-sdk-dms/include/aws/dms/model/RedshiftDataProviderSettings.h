/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that defines an Amazon Redshift data
   * provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RedshiftDataProviderSettings">AWS
   * API Reference</a></p>
   */
  class RedshiftDataProviderSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API RedshiftDataProviderSettings() = default;
    AWS_DATABASEMIGRATIONSERVICE_API RedshiftDataProviderSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API RedshiftDataProviderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon Redshift server.</p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    RedshiftDataProviderSettings& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port value for the Amazon Redshift data provider.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline RedshiftDataProviderSettings& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database name on the Amazon Redshift data provider.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    RedshiftDataProviderSettings& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path for the Amazon S3 bucket that the application uses for accessing the
     * user-defined schema.</p>
     */
    inline const Aws::String& GetS3Path() const { return m_s3Path; }
    inline bool S3PathHasBeenSet() const { return m_s3PathHasBeenSet; }
    template<typename S3PathT = Aws::String>
    void SetS3Path(S3PathT&& value) { m_s3PathHasBeenSet = true; m_s3Path = std::forward<S3PathT>(value); }
    template<typename S3PathT = Aws::String>
    RedshiftDataProviderSettings& WithS3Path(S3PathT&& value) { SetS3Path(std::forward<S3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the role the application uses to access its Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3AccessRoleArn() const { return m_s3AccessRoleArn; }
    inline bool S3AccessRoleArnHasBeenSet() const { return m_s3AccessRoleArnHasBeenSet; }
    template<typename S3AccessRoleArnT = Aws::String>
    void SetS3AccessRoleArn(S3AccessRoleArnT&& value) { m_s3AccessRoleArnHasBeenSet = true; m_s3AccessRoleArn = std::forward<S3AccessRoleArnT>(value); }
    template<typename S3AccessRoleArnT = Aws::String>
    RedshiftDataProviderSettings& WithS3AccessRoleArn(S3AccessRoleArnT&& value) { SetS3AccessRoleArn(std::forward<S3AccessRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_s3Path;
    bool m_s3PathHasBeenSet = false;

    Aws::String m_s3AccessRoleArn;
    bool m_s3AccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
