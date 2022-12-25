/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class StartDBInstanceAutomatedBackupsReplicationRequest : public RDSRequest
  {
  public:
    AWS_RDS_API StartDBInstanceAutomatedBackupsReplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDBInstanceAutomatedBackupsReplication"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance for the replicated
     * automated backups, for example,
     * <code>arn:aws:rds:us-west-2:123456789012:db:mydatabase</code>.</p>
     */
    inline const Aws::String& GetSourceDBInstanceArn() const{ return m_sourceDBInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance for the replicated
     * automated backups, for example,
     * <code>arn:aws:rds:us-west-2:123456789012:db:mydatabase</code>.</p>
     */
    inline bool SourceDBInstanceArnHasBeenSet() const { return m_sourceDBInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance for the replicated
     * automated backups, for example,
     * <code>arn:aws:rds:us-west-2:123456789012:db:mydatabase</code>.</p>
     */
    inline void SetSourceDBInstanceArn(const Aws::String& value) { m_sourceDBInstanceArnHasBeenSet = true; m_sourceDBInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance for the replicated
     * automated backups, for example,
     * <code>arn:aws:rds:us-west-2:123456789012:db:mydatabase</code>.</p>
     */
    inline void SetSourceDBInstanceArn(Aws::String&& value) { m_sourceDBInstanceArnHasBeenSet = true; m_sourceDBInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance for the replicated
     * automated backups, for example,
     * <code>arn:aws:rds:us-west-2:123456789012:db:mydatabase</code>.</p>
     */
    inline void SetSourceDBInstanceArn(const char* value) { m_sourceDBInstanceArnHasBeenSet = true; m_sourceDBInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance for the replicated
     * automated backups, for example,
     * <code>arn:aws:rds:us-west-2:123456789012:db:mydatabase</code>.</p>
     */
    inline StartDBInstanceAutomatedBackupsReplicationRequest& WithSourceDBInstanceArn(const Aws::String& value) { SetSourceDBInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance for the replicated
     * automated backups, for example,
     * <code>arn:aws:rds:us-west-2:123456789012:db:mydatabase</code>.</p>
     */
    inline StartDBInstanceAutomatedBackupsReplicationRequest& WithSourceDBInstanceArn(Aws::String&& value) { SetSourceDBInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance for the replicated
     * automated backups, for example,
     * <code>arn:aws:rds:us-west-2:123456789012:db:mydatabase</code>.</p>
     */
    inline StartDBInstanceAutomatedBackupsReplicationRequest& WithSourceDBInstanceArn(const char* value) { SetSourceDBInstanceArn(value); return *this;}


    /**
     * <p>The retention period for the replicated automated backups.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>The retention period for the replicated automated backups.</p>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>The retention period for the replicated automated backups.</p>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>The retention period for the replicated automated backups.</p>
     */
    inline StartDBInstanceAutomatedBackupsReplicationRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of the replicated
     * automated backups. The KMS key ID is the Amazon Resource Name (ARN) for the KMS
     * encryption key in the destination Amazon Web Services Region, for example,
     * <code>arn:aws:kms:us-east-1:123456789012:key/AKIAIOSFODNN7EXAMPLE</code>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of the replicated
     * automated backups. The KMS key ID is the Amazon Resource Name (ARN) for the KMS
     * encryption key in the destination Amazon Web Services Region, for example,
     * <code>arn:aws:kms:us-east-1:123456789012:key/AKIAIOSFODNN7EXAMPLE</code>.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of the replicated
     * automated backups. The KMS key ID is the Amazon Resource Name (ARN) for the KMS
     * encryption key in the destination Amazon Web Services Region, for example,
     * <code>arn:aws:kms:us-east-1:123456789012:key/AKIAIOSFODNN7EXAMPLE</code>.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of the replicated
     * automated backups. The KMS key ID is the Amazon Resource Name (ARN) for the KMS
     * encryption key in the destination Amazon Web Services Region, for example,
     * <code>arn:aws:kms:us-east-1:123456789012:key/AKIAIOSFODNN7EXAMPLE</code>.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of the replicated
     * automated backups. The KMS key ID is the Amazon Resource Name (ARN) for the KMS
     * encryption key in the destination Amazon Web Services Region, for example,
     * <code>arn:aws:kms:us-east-1:123456789012:key/AKIAIOSFODNN7EXAMPLE</code>.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of the replicated
     * automated backups. The KMS key ID is the Amazon Resource Name (ARN) for the KMS
     * encryption key in the destination Amazon Web Services Region, for example,
     * <code>arn:aws:kms:us-east-1:123456789012:key/AKIAIOSFODNN7EXAMPLE</code>.</p>
     */
    inline StartDBInstanceAutomatedBackupsReplicationRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of the replicated
     * automated backups. The KMS key ID is the Amazon Resource Name (ARN) for the KMS
     * encryption key in the destination Amazon Web Services Region, for example,
     * <code>arn:aws:kms:us-east-1:123456789012:key/AKIAIOSFODNN7EXAMPLE</code>.</p>
     */
    inline StartDBInstanceAutomatedBackupsReplicationRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of the replicated
     * automated backups. The KMS key ID is the Amazon Resource Name (ARN) for the KMS
     * encryption key in the destination Amazon Web Services Region, for example,
     * <code>arn:aws:kms:us-east-1:123456789012:key/AKIAIOSFODNN7EXAMPLE</code>.</p>
     */
    inline StartDBInstanceAutomatedBackupsReplicationRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>In an Amazon Web Services GovCloud (US) Region, an URL that contains a
     * Signature Version 4 signed request for the
     * <code>StartDBInstanceAutomatedBackupsReplication</code> operation to call in the
     * Amazon Web Services Region of the source DB instance. The presigned URL must be
     * a valid request for the <code>StartDBInstanceAutomatedBackupsReplication</code>
     * API operation that can run in the Amazon Web Services Region that contains the
     * source DB instance.</p> <p>This setting applies only to Amazon Web Services
     * GovCloud (US) Regions. It's ignored in other Amazon Web Services Regions.</p>
     * <p>To learn how to generate a Signature Version 4 signed request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     * 
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }

    /**
     * <p>In an Amazon Web Services GovCloud (US) Region, an URL that contains a
     * Signature Version 4 signed request for the
     * <code>StartDBInstanceAutomatedBackupsReplication</code> operation to call in the
     * Amazon Web Services Region of the source DB instance. The presigned URL must be
     * a valid request for the <code>StartDBInstanceAutomatedBackupsReplication</code>
     * API operation that can run in the Amazon Web Services Region that contains the
     * source DB instance.</p> <p>This setting applies only to Amazon Web Services
     * GovCloud (US) Regions. It's ignored in other Amazon Web Services Regions.</p>
     * <p>To learn how to generate a Signature Version 4 signed request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     * 
     */
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }

    /**
     * <p>In an Amazon Web Services GovCloud (US) Region, an URL that contains a
     * Signature Version 4 signed request for the
     * <code>StartDBInstanceAutomatedBackupsReplication</code> operation to call in the
     * Amazon Web Services Region of the source DB instance. The presigned URL must be
     * a valid request for the <code>StartDBInstanceAutomatedBackupsReplication</code>
     * API operation that can run in the Amazon Web Services Region that contains the
     * source DB instance.</p> <p>This setting applies only to Amazon Web Services
     * GovCloud (US) Regions. It's ignored in other Amazon Web Services Regions.</p>
     * <p>To learn how to generate a Signature Version 4 signed request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     * 
     */
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }

    /**
     * <p>In an Amazon Web Services GovCloud (US) Region, an URL that contains a
     * Signature Version 4 signed request for the
     * <code>StartDBInstanceAutomatedBackupsReplication</code> operation to call in the
     * Amazon Web Services Region of the source DB instance. The presigned URL must be
     * a valid request for the <code>StartDBInstanceAutomatedBackupsReplication</code>
     * API operation that can run in the Amazon Web Services Region that contains the
     * source DB instance.</p> <p>This setting applies only to Amazon Web Services
     * GovCloud (US) Regions. It's ignored in other Amazon Web Services Regions.</p>
     * <p>To learn how to generate a Signature Version 4 signed request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     * 
     */
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::move(value); }

    /**
     * <p>In an Amazon Web Services GovCloud (US) Region, an URL that contains a
     * Signature Version 4 signed request for the
     * <code>StartDBInstanceAutomatedBackupsReplication</code> operation to call in the
     * Amazon Web Services Region of the source DB instance. The presigned URL must be
     * a valid request for the <code>StartDBInstanceAutomatedBackupsReplication</code>
     * API operation that can run in the Amazon Web Services Region that contains the
     * source DB instance.</p> <p>This setting applies only to Amazon Web Services
     * GovCloud (US) Regions. It's ignored in other Amazon Web Services Regions.</p>
     * <p>To learn how to generate a Signature Version 4 signed request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     * 
     */
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }

    /**
     * <p>In an Amazon Web Services GovCloud (US) Region, an URL that contains a
     * Signature Version 4 signed request for the
     * <code>StartDBInstanceAutomatedBackupsReplication</code> operation to call in the
     * Amazon Web Services Region of the source DB instance. The presigned URL must be
     * a valid request for the <code>StartDBInstanceAutomatedBackupsReplication</code>
     * API operation that can run in the Amazon Web Services Region that contains the
     * source DB instance.</p> <p>This setting applies only to Amazon Web Services
     * GovCloud (US) Regions. It's ignored in other Amazon Web Services Regions.</p>
     * <p>To learn how to generate a Signature Version 4 signed request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     * 
     */
    inline StartDBInstanceAutomatedBackupsReplicationRequest& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}

    /**
     * <p>In an Amazon Web Services GovCloud (US) Region, an URL that contains a
     * Signature Version 4 signed request for the
     * <code>StartDBInstanceAutomatedBackupsReplication</code> operation to call in the
     * Amazon Web Services Region of the source DB instance. The presigned URL must be
     * a valid request for the <code>StartDBInstanceAutomatedBackupsReplication</code>
     * API operation that can run in the Amazon Web Services Region that contains the
     * source DB instance.</p> <p>This setting applies only to Amazon Web Services
     * GovCloud (US) Regions. It's ignored in other Amazon Web Services Regions.</p>
     * <p>To learn how to generate a Signature Version 4 signed request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     * 
     */
    inline StartDBInstanceAutomatedBackupsReplicationRequest& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}

    /**
     * <p>In an Amazon Web Services GovCloud (US) Region, an URL that contains a
     * Signature Version 4 signed request for the
     * <code>StartDBInstanceAutomatedBackupsReplication</code> operation to call in the
     * Amazon Web Services Region of the source DB instance. The presigned URL must be
     * a valid request for the <code>StartDBInstanceAutomatedBackupsReplication</code>
     * API operation that can run in the Amazon Web Services Region that contains the
     * source DB instance.</p> <p>This setting applies only to Amazon Web Services
     * GovCloud (US) Regions. It's ignored in other Amazon Web Services Regions.</p>
     * <p>To learn how to generate a Signature Version 4 signed request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     * 
     */
    inline StartDBInstanceAutomatedBackupsReplicationRequest& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}


    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline StartDBInstanceAutomatedBackupsReplicationRequest& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline StartDBInstanceAutomatedBackupsReplicationRequest& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline StartDBInstanceAutomatedBackupsReplicationRequest& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}

  private:

    Aws::String m_sourceDBInstanceArn;
    bool m_sourceDBInstanceArnHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
