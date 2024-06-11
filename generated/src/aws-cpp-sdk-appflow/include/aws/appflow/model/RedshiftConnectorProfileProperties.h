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
    AWS_APPFLOW_API RedshiftConnectorProfileProperties();
    AWS_APPFLOW_API RedshiftConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API RedshiftConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The JDBC URL of the Amazon Redshift cluster. </p>
     */
    inline const Aws::String& GetDatabaseUrl() const{ return m_databaseUrl; }
    inline bool DatabaseUrlHasBeenSet() const { return m_databaseUrlHasBeenSet; }
    inline void SetDatabaseUrl(const Aws::String& value) { m_databaseUrlHasBeenSet = true; m_databaseUrl = value; }
    inline void SetDatabaseUrl(Aws::String&& value) { m_databaseUrlHasBeenSet = true; m_databaseUrl = std::move(value); }
    inline void SetDatabaseUrl(const char* value) { m_databaseUrlHasBeenSet = true; m_databaseUrl.assign(value); }
    inline RedshiftConnectorProfileProperties& WithDatabaseUrl(const Aws::String& value) { SetDatabaseUrl(value); return *this;}
    inline RedshiftConnectorProfileProperties& WithDatabaseUrl(Aws::String&& value) { SetDatabaseUrl(std::move(value)); return *this;}
    inline RedshiftConnectorProfileProperties& WithDatabaseUrl(const char* value) { SetDatabaseUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A name for the associated Amazon S3 bucket. </p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }
    inline RedshiftConnectorProfileProperties& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}
    inline RedshiftConnectorProfileProperties& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}
    inline RedshiftConnectorProfileProperties& WithBucketName(const char* value) { SetBucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline const Aws::String& GetBucketPrefix() const{ return m_bucketPrefix; }
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }
    inline void SetBucketPrefix(const Aws::String& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = value; }
    inline void SetBucketPrefix(Aws::String&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::move(value); }
    inline void SetBucketPrefix(const char* value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix.assign(value); }
    inline RedshiftConnectorProfileProperties& WithBucketPrefix(const Aws::String& value) { SetBucketPrefix(value); return *this;}
    inline RedshiftConnectorProfileProperties& WithBucketPrefix(Aws::String&& value) { SetBucketPrefix(std::move(value)); return *this;}
    inline RedshiftConnectorProfileProperties& WithBucketPrefix(const char* value) { SetBucketPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of IAM role that grants Amazon Redshift
     * read-only access to Amazon S3. For more information, and for the polices that
     * you attach to this role, see <a
     * href="https://docs.aws.amazon.com/appflow/latest/userguide/security_iam_service-role-policies.html#redshift-access-s3">Allow
     * Amazon Redshift to access your Amazon AppFlow data in Amazon S3</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline RedshiftConnectorProfileProperties& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline RedshiftConnectorProfileProperties& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline RedshiftConnectorProfileProperties& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that permits Amazon AppFlow to
     * access your Amazon Redshift database through the Data API. For more information,
     * and for the polices that you attach to this role, see <a
     * href="https://docs.aws.amazon.com/appflow/latest/userguide/security_iam_service-role-policies.html#access-redshift">Allow
     * Amazon AppFlow to access Amazon Redshift databases with the Data API</a>.</p>
     */
    inline const Aws::String& GetDataApiRoleArn() const{ return m_dataApiRoleArn; }
    inline bool DataApiRoleArnHasBeenSet() const { return m_dataApiRoleArnHasBeenSet; }
    inline void SetDataApiRoleArn(const Aws::String& value) { m_dataApiRoleArnHasBeenSet = true; m_dataApiRoleArn = value; }
    inline void SetDataApiRoleArn(Aws::String&& value) { m_dataApiRoleArnHasBeenSet = true; m_dataApiRoleArn = std::move(value); }
    inline void SetDataApiRoleArn(const char* value) { m_dataApiRoleArnHasBeenSet = true; m_dataApiRoleArn.assign(value); }
    inline RedshiftConnectorProfileProperties& WithDataApiRoleArn(const Aws::String& value) { SetDataApiRoleArn(value); return *this;}
    inline RedshiftConnectorProfileProperties& WithDataApiRoleArn(Aws::String&& value) { SetDataApiRoleArn(std::move(value)); return *this;}
    inline RedshiftConnectorProfileProperties& WithDataApiRoleArn(const char* value) { SetDataApiRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the connector profile defines a connection to an Amazon
     * Redshift Serverless data warehouse.</p>
     */
    inline bool GetIsRedshiftServerless() const{ return m_isRedshiftServerless; }
    inline bool IsRedshiftServerlessHasBeenSet() const { return m_isRedshiftServerlessHasBeenSet; }
    inline void SetIsRedshiftServerless(bool value) { m_isRedshiftServerlessHasBeenSet = true; m_isRedshiftServerless = value; }
    inline RedshiftConnectorProfileProperties& WithIsRedshiftServerless(bool value) { SetIsRedshiftServerless(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID that's assigned to an Amazon Redshift cluster.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline RedshiftConnectorProfileProperties& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline RedshiftConnectorProfileProperties& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline RedshiftConnectorProfileProperties& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Amazon Redshift workgroup.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }
    inline RedshiftConnectorProfileProperties& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}
    inline RedshiftConnectorProfileProperties& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}
    inline RedshiftConnectorProfileProperties& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Amazon Redshift database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline RedshiftConnectorProfileProperties& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline RedshiftConnectorProfileProperties& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline RedshiftConnectorProfileProperties& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
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

    bool m_isRedshiftServerless;
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
