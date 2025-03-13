/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/ContinuousExportStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/discovery/model/DataSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p>A list of continuous export descriptions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ContinuousExportDescription">AWS
   * API Reference</a></p>
   */
  class ContinuousExportDescription
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API ContinuousExportDescription() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API ContinuousExportDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API ContinuousExportDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline const Aws::String& GetExportId() const { return m_exportId; }
    inline bool ExportIdHasBeenSet() const { return m_exportIdHasBeenSet; }
    template<typename ExportIdT = Aws::String>
    void SetExportId(ExportIdT&& value) { m_exportIdHasBeenSet = true; m_exportId = std::forward<ExportIdT>(value); }
    template<typename ExportIdT = Aws::String>
    ContinuousExportDescription& WithExportId(ExportIdT&& value) { SetExportId(std::forward<ExportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the status of the export. Can be one of the following values:</p>
     * <ul> <li> <p>START_IN_PROGRESS - setting up resources to start continuous
     * export.</p> </li> <li> <p>START_FAILED - an error occurred setting up continuous
     * export. To recover, call start-continuous-export again.</p> </li> <li> <p>ACTIVE
     * - data is being exported to the customer bucket.</p> </li> <li> <p>ERROR - an
     * error occurred during export. To fix the issue, call stop-continuous-export and
     * start-continuous-export.</p> </li> <li> <p>STOP_IN_PROGRESS - stopping the
     * export.</p> </li> <li> <p>STOP_FAILED - an error occurred stopping the export.
     * To recover, call stop-continuous-export again.</p> </li> <li> <p>INACTIVE - the
     * continuous export has been stopped. Data is no longer being exported to the
     * customer bucket.</p> </li> </ul>
     */
    inline ContinuousExportStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ContinuousExportStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ContinuousExportDescription& WithStatus(ContinuousExportStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about any errors that have occurred. This data type can
     * have the following values:</p> <ul> <li> <p>ACCESS_DENIED - You don’t have
     * permission to start Data Exploration in Amazon Athena. Contact your Amazon Web
     * Services administrator for help. For more information, see <a
     * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/setting-up.html">Setting
     * Up Amazon Web Services Application Discovery Service</a> in the Application
     * Discovery Service User Guide.</p> </li> <li> <p>DELIVERY_STREAM_LIMIT_FAILURE -
     * You reached the limit for Amazon Kinesis Data Firehose delivery streams. Reduce
     * the number of streams or request a limit increase and try again. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/streams/latest/dev/service-sizes-and-limits.html">Kinesis
     * Data Streams Limits</a> in the Amazon Kinesis Data Streams Developer Guide.</p>
     * </li> <li> <p>FIREHOSE_ROLE_MISSING - The Data Exploration feature is in an
     * error state because your user is missing the Amazon Web
     * ServicesApplicationDiscoveryServiceFirehose role. Turn on Data Exploration in
     * Amazon Athena and try again. For more information, see <a
     * href="https://docs.aws.amazon.com/application-discovery/latest/userguide/security-iam-awsmanpol.html#security-iam-awsmanpol-create-firehose-role">Creating
     * the Amazon Web ServicesApplicationDiscoveryServiceFirehose Role</a> in the
     * Application Discovery Service User Guide.</p> </li> <li>
     * <p>FIREHOSE_STREAM_DOES_NOT_EXIST - The Data Exploration feature is in an error
     * state because your user is missing one or more of the Kinesis data delivery
     * streams.</p> </li> <li> <p>INTERNAL_FAILURE - The Data Exploration feature is in
     * an error state because of an internal failure. Try again later. If this problem
     * persists, contact Amazon Web Services Support.</p> </li> <li>
     * <p>LAKE_FORMATION_ACCESS_DENIED - You don't have sufficient lake formation
     * permissions to start continuous export. For more information, see <a
     * href="http://docs.aws.amazon.com/lake-formation/latest/dg/upgrade-glue-lake-formation.html">
     * Upgrading Amazon Web Services Glue Data Permissions to the Amazon Web Services
     * Lake Formation Model </a> in the Amazon Web Services <i>Lake Formation Developer
     * Guide</i>. </p> <p>You can use one of the following two ways to resolve this
     * issue.</p> <ol> <li> <p>If you don’t want to use the Lake Formation permission
     * model, you can change the default Data Catalog settings to use only Amazon Web
     * Services Identity and Access Management (IAM) access control for new databases.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/getting-started-setup.html#setup-change-cat-settings">Change
     * Data Catalog Settings</a> in the <i>Lake Formation Developer Guide</i>.</p>
     * </li> <li> <p>You can give the service-linked IAM roles
     * AWSServiceRoleForApplicationDiscoveryServiceContinuousExport and
     * AWSApplicationDiscoveryServiceFirehose the required Lake Formation permissions.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/granting-database-permissions.html">
     * Granting Database Permissions</a> in the <i>Lake Formation Developer Guide</i>.
     * </p> <ol> <li> <p>AWSServiceRoleForApplicationDiscoveryServiceContinuousExport -
     * Grant database creator permissions, which gives the role database creation
     * ability and implicit permissions for any created tables. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/implicit-permissions.html">
     * Implicit Lake Formation Permissions </a> in the <i>Lake Formation Developer
     * Guide</i>.</p> </li> <li> <p>AWSApplicationDiscoveryServiceFirehose - Grant
     * describe permissions for all tables in the database.</p> </li> </ol> </li> </ol>
     * </li> <li> <p>S3_BUCKET_LIMIT_FAILURE - You reached the limit for Amazon S3
     * buckets. Reduce the number of S3 buckets or request a limit increase and try
     * again. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/BucketRestrictions.html">Bucket
     * Restrictions and Limitations</a> in the Amazon Simple Storage Service Developer
     * Guide.</p> </li> <li> <p>S3_NOT_SIGNED_UP - Your account is not signed up for
     * the Amazon S3 service. You must sign up before you can use Amazon S3. You can
     * sign up at the following URL: <a
     * href="https://aws.amazon.com/s3">https://aws.amazon.com/s3</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetStatusDetail() const { return m_statusDetail; }
    inline bool StatusDetailHasBeenSet() const { return m_statusDetailHasBeenSet; }
    template<typename StatusDetailT = Aws::String>
    void SetStatusDetail(StatusDetailT&& value) { m_statusDetailHasBeenSet = true; m_statusDetail = std::forward<StatusDetailT>(value); }
    template<typename StatusDetailT = Aws::String>
    ContinuousExportDescription& WithStatusDetail(StatusDetailT&& value) { SetStatusDetail(std::forward<StatusDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    ContinuousExportDescription& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp representing when the continuous export was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ContinuousExportDescription& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that represents when this continuous export was stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const { return m_stopTime; }
    inline bool StopTimeHasBeenSet() const { return m_stopTimeHasBeenSet; }
    template<typename StopTimeT = Aws::Utils::DateTime>
    void SetStopTime(StopTimeT&& value) { m_stopTimeHasBeenSet = true; m_stopTime = std::forward<StopTimeT>(value); }
    template<typename StopTimeT = Aws::Utils::DateTime>
    ContinuousExportDescription& WithStopTime(StopTimeT&& value) { SetStopTime(std::forward<StopTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data collector used to gather this data (currently only offered
     * for AGENT).</p>
     */
    inline DataSource GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(DataSource value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline ContinuousExportDescription& WithDataSource(DataSource value) { SetDataSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSchemaStorageConfig() const { return m_schemaStorageConfig; }
    inline bool SchemaStorageConfigHasBeenSet() const { return m_schemaStorageConfigHasBeenSet; }
    template<typename SchemaStorageConfigT = Aws::Map<Aws::String, Aws::String>>
    void SetSchemaStorageConfig(SchemaStorageConfigT&& value) { m_schemaStorageConfigHasBeenSet = true; m_schemaStorageConfig = std::forward<SchemaStorageConfigT>(value); }
    template<typename SchemaStorageConfigT = Aws::Map<Aws::String, Aws::String>>
    ContinuousExportDescription& WithSchemaStorageConfig(SchemaStorageConfigT&& value) { SetSchemaStorageConfig(std::forward<SchemaStorageConfigT>(value)); return *this;}
    template<typename SchemaStorageConfigKeyT = Aws::String, typename SchemaStorageConfigValueT = Aws::String>
    ContinuousExportDescription& AddSchemaStorageConfig(SchemaStorageConfigKeyT&& key, SchemaStorageConfigValueT&& value) {
      m_schemaStorageConfigHasBeenSet = true; m_schemaStorageConfig.emplace(std::forward<SchemaStorageConfigKeyT>(key), std::forward<SchemaStorageConfigValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_exportId;
    bool m_exportIdHasBeenSet = false;

    ContinuousExportStatus m_status{ContinuousExportStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDetail;
    bool m_statusDetailHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_stopTime{};
    bool m_stopTimeHasBeenSet = false;

    DataSource m_dataSource{DataSource::NOT_SET};
    bool m_dataSourceHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_schemaStorageConfig;
    bool m_schemaStorageConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
