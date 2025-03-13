/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector-specific profile properties when using Amazon Redshift.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/RedshiftConnectorProfileProperties">AWS
   * API Reference</a></p>
   */
  class RedshiftConnectorProfileProperties
  {
  public:
    AWS_APPFLOW_API RedshiftConnectorProfileProperties() = default;
    AWS_APPFLOW_API RedshiftConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API RedshiftConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The JDBC URL of the Amazon Redshift cluster. </p>
     */
    inline const Aws::String& GetDatabaseUrl() const { return m_databaseUrl; }
    inline bool DatabaseUrlHasBeenSet() const { return m_databaseUrlHasBeenSet; }
    template<typename DatabaseUrlT = Aws::String>
    void SetDatabaseUrl(DatabaseUrlT&& value) { m_databaseUrlHasBeenSet = true; m_databaseUrl = std::forward<DatabaseUrlT>(value); }
    template<typename DatabaseUrlT = Aws::String>
    RedshiftConnectorProfileProperties& WithDatabaseUrl(DatabaseUrlT&& value) { SetDatabaseUrl(std::forward<DatabaseUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A name for the associated Amazon S3 bucket. </p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    RedshiftConnectorProfileProperties& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline const Aws::String& GetBucketPrefix() const { return m_bucketPrefix; }
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }
    template<typename BucketPrefixT = Aws::String>
    void SetBucketPrefix(BucketPrefixT&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::forward<BucketPrefixT>(value); }
    template<typename BucketPrefixT = Aws::String>
    RedshiftConnectorProfileProperties& WithBucketPrefix(BucketPrefixT&& value) { SetBucketPrefix(std::forward<BucketPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of IAM role that grants Amazon Redshift
     * read-only access to Amazon S3. For more information, and for the polices that
     * you attach to this role, see <a
     * href="https://docs.aws.amazon.com/appflow/latest/userguide/security_iam_service-role-policies.html#redshift-access-s3">Allow
     * Amazon Redshift to access your Amazon AppFlow data in Amazon S3</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    RedshiftConnectorProfileProperties& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that permits Amazon AppFlow to
     * access your Amazon Redshift database through the Data API. For more information,
     * and for the polices that you attach to this role, see <a
     * href="https://docs.aws.amazon.com/appflow/latest/userguide/security_iam_service-role-policies.html#access-redshift">Allow
     * Amazon AppFlow to access Amazon Redshift databases with the Data API</a>.</p>
     */
    inline const Aws::String& GetDataApiRoleArn() const { return m_dataApiRoleArn; }
    inline bool DataApiRoleArnHasBeenSet() const { return m_dataApiRoleArnHasBeenSet; }
    template<typename DataApiRoleArnT = Aws::String>
    void SetDataApiRoleArn(DataApiRoleArnT&& value) { m_dataApiRoleArnHasBeenSet = true; m_dataApiRoleArn = std::forward<DataApiRoleArnT>(value); }
    template<typename DataApiRoleArnT = Aws::String>
    RedshiftConnectorProfileProperties& WithDataApiRoleArn(DataApiRoleArnT&& value) { SetDataApiRoleArn(std::forward<DataApiRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the connector profile defines a connection to an Amazon
     * Redshift Serverless data warehouse.</p>
     */
    inline bool GetIsRedshiftServerless() const { return m_isRedshiftServerless; }
    inline bool IsRedshiftServerlessHasBeenSet() const { return m_isRedshiftServerlessHasBeenSet; }
    inline void SetIsRedshiftServerless(bool value) { m_isRedshiftServerlessHasBeenSet = true; m_isRedshiftServerless = value; }
    inline RedshiftConnectorProfileProperties& WithIsRedshiftServerless(bool value) { SetIsRedshiftServerless(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID that's assigned to an Amazon Redshift cluster.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    RedshiftConnectorProfileProperties& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Amazon Redshift workgroup.</p>
     */
    inline const Aws::String& GetWorkgroupName() const { return m_workgroupName; }
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }
    template<typename WorkgroupNameT = Aws::String>
    void SetWorkgroupName(WorkgroupNameT&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::forward<WorkgroupNameT>(value); }
    template<typename WorkgroupNameT = Aws::String>
    RedshiftConnectorProfileProperties& WithWorkgroupName(WorkgroupNameT&& value) { SetWorkgroupName(std::forward<WorkgroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Amazon Redshift database.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    RedshiftConnectorProfileProperties& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_databaseUrl;
    bool m_databaseUrlHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_bucketPrefix;
    bool m_bucketPrefixHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_dataApiRoleArn;
    bool m_dataApiRoleArnHasBeenSet = false;

    bool m_isRedshiftServerless{false};
    bool m_isRedshiftServerlessHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
