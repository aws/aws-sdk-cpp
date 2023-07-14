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
  class AWS_APPFLOW_API RedshiftConnectorProfileProperties
  {
  public:
    RedshiftConnectorProfileProperties();
    RedshiftConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    RedshiftConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The JDBC URL of the Amazon Redshift cluster. </p>
     */
    inline const Aws::String& GetDatabaseUrl() const{ return m_databaseUrl; }

    /**
     * <p> The JDBC URL of the Amazon Redshift cluster. </p>
     */
    inline bool DatabaseUrlHasBeenSet() const { return m_databaseUrlHasBeenSet; }

    /**
     * <p> The JDBC URL of the Amazon Redshift cluster. </p>
     */
    inline void SetDatabaseUrl(const Aws::String& value) { m_databaseUrlHasBeenSet = true; m_databaseUrl = value; }

    /**
     * <p> The JDBC URL of the Amazon Redshift cluster. </p>
     */
    inline void SetDatabaseUrl(Aws::String&& value) { m_databaseUrlHasBeenSet = true; m_databaseUrl = std::move(value); }

    /**
     * <p> The JDBC URL of the Amazon Redshift cluster. </p>
     */
    inline void SetDatabaseUrl(const char* value) { m_databaseUrlHasBeenSet = true; m_databaseUrl.assign(value); }

    /**
     * <p> The JDBC URL of the Amazon Redshift cluster. </p>
     */
    inline RedshiftConnectorProfileProperties& WithDatabaseUrl(const Aws::String& value) { SetDatabaseUrl(value); return *this;}

    /**
     * <p> The JDBC URL of the Amazon Redshift cluster. </p>
     */
    inline RedshiftConnectorProfileProperties& WithDatabaseUrl(Aws::String&& value) { SetDatabaseUrl(std::move(value)); return *this;}

    /**
     * <p> The JDBC URL of the Amazon Redshift cluster. </p>
     */
    inline RedshiftConnectorProfileProperties& WithDatabaseUrl(const char* value) { SetDatabaseUrl(value); return *this;}


    /**
     * <p> A name for the associated Amazon S3 bucket. </p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p> A name for the associated Amazon S3 bucket. </p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p> A name for the associated Amazon S3 bucket. </p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p> A name for the associated Amazon S3 bucket. </p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p> A name for the associated Amazon S3 bucket. </p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p> A name for the associated Amazon S3 bucket. </p>
     */
    inline RedshiftConnectorProfileProperties& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p> A name for the associated Amazon S3 bucket. </p>
     */
    inline RedshiftConnectorProfileProperties& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p> A name for the associated Amazon S3 bucket. </p>
     */
    inline RedshiftConnectorProfileProperties& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline const Aws::String& GetBucketPrefix() const{ return m_bucketPrefix; }

    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }

    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline void SetBucketPrefix(const Aws::String& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = value; }

    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline void SetBucketPrefix(Aws::String&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::move(value); }

    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline void SetBucketPrefix(const char* value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix.assign(value); }

    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline RedshiftConnectorProfileProperties& WithBucketPrefix(const Aws::String& value) { SetBucketPrefix(value); return *this;}

    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline RedshiftConnectorProfileProperties& WithBucketPrefix(Aws::String&& value) { SetBucketPrefix(std::move(value)); return *this;}

    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline RedshiftConnectorProfileProperties& WithBucketPrefix(const char* value) { SetBucketPrefix(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline RedshiftConnectorProfileProperties& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline RedshiftConnectorProfileProperties& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline RedshiftConnectorProfileProperties& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_databaseUrl;
    bool m_databaseUrlHasBeenSet;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    Aws::String m_bucketPrefix;
    bool m_bucketPrefixHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
