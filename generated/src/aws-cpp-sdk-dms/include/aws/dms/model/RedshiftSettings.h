/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/EncryptionModeValue.h>
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
   * <p>Provides information that defines an Amazon Redshift endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RedshiftSettings">AWS
   * API Reference</a></p>
   */
  class RedshiftSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API RedshiftSettings() = default;
    AWS_DATABASEMIGRATIONSERVICE_API RedshiftSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API RedshiftSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A value that indicates to allow any date format, including invalid formats
     * such as 00/00/00 00:00:00, to be loaded without generating an error. You can
     * choose <code>true</code> or <code>false</code> (the default).</p> <p>This
     * parameter applies only to TIMESTAMP and DATE columns. Always use ACCEPTANYDATE
     * with the DATEFORMAT parameter. If the date format for the data doesn't match the
     * DATEFORMAT specification, Amazon Redshift inserts a NULL value into that field.
     * </p>
     */
    inline bool GetAcceptAnyDate() const { return m_acceptAnyDate; }
    inline bool AcceptAnyDateHasBeenSet() const { return m_acceptAnyDateHasBeenSet; }
    inline void SetAcceptAnyDate(bool value) { m_acceptAnyDateHasBeenSet = true; m_acceptAnyDate = value; }
    inline RedshiftSettings& WithAcceptAnyDate(bool value) { SetAcceptAnyDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Code to run after connecting. This parameter should contain the code itself,
     * not the name of a file containing the code.</p>
     */
    inline const Aws::String& GetAfterConnectScript() const { return m_afterConnectScript; }
    inline bool AfterConnectScriptHasBeenSet() const { return m_afterConnectScriptHasBeenSet; }
    template<typename AfterConnectScriptT = Aws::String>
    void SetAfterConnectScript(AfterConnectScriptT&& value) { m_afterConnectScriptHasBeenSet = true; m_afterConnectScript = std::forward<AfterConnectScriptT>(value); }
    template<typename AfterConnectScriptT = Aws::String>
    RedshiftSettings& WithAfterConnectScript(AfterConnectScriptT&& value) { SetAfterConnectScript(std::forward<AfterConnectScriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An S3 folder where the comma-separated-value (.csv) files are stored before
     * being uploaded to the target Redshift cluster. </p> <p>For full load mode, DMS
     * converts source records into .csv files and loads them to the
     * <i>BucketFolder/TableID</i> path. DMS uses the Redshift <code>COPY</code>
     * command to upload the .csv files to the target table. The files are deleted once
     * the <code>COPY</code> operation has finished. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_COPY.html">COPY</a> in
     * the <i>Amazon Redshift Database Developer Guide</i>.</p> <p>For
     * change-data-capture (CDC) mode, DMS creates a <i>NetChanges</i> table, and loads
     * the .csv files to this <i>BucketFolder/NetChangesTableID</i> path.</p>
     */
    inline const Aws::String& GetBucketFolder() const { return m_bucketFolder; }
    inline bool BucketFolderHasBeenSet() const { return m_bucketFolderHasBeenSet; }
    template<typename BucketFolderT = Aws::String>
    void SetBucketFolder(BucketFolderT&& value) { m_bucketFolderHasBeenSet = true; m_bucketFolder = std::forward<BucketFolderT>(value); }
    template<typename BucketFolderT = Aws::String>
    RedshiftSettings& WithBucketFolder(BucketFolderT&& value) { SetBucketFolder(std::forward<BucketFolderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the intermediate S3 bucket used to store .csv files before
     * uploading data to Redshift.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    RedshiftSettings& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If Amazon Redshift is configured to support case sensitive schema names, set
     * <code>CaseSensitiveNames</code> to <code>true</code>. The default is
     * <code>false</code>.</p>
     */
    inline bool GetCaseSensitiveNames() const { return m_caseSensitiveNames; }
    inline bool CaseSensitiveNamesHasBeenSet() const { return m_caseSensitiveNamesHasBeenSet; }
    inline void SetCaseSensitiveNames(bool value) { m_caseSensitiveNamesHasBeenSet = true; m_caseSensitiveNames = value; }
    inline RedshiftSettings& WithCaseSensitiveNames(bool value) { SetCaseSensitiveNames(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you set <code>CompUpdate</code> to <code>true</code> Amazon Redshift
     * applies automatic compression if the table is empty. This applies even if the
     * table columns already have encodings other than <code>RAW</code>. If you set
     * <code>CompUpdate</code> to <code>false</code>, automatic compression is disabled
     * and existing column encodings aren't changed. The default is
     * <code>true</code>.</p>
     */
    inline bool GetCompUpdate() const { return m_compUpdate; }
    inline bool CompUpdateHasBeenSet() const { return m_compUpdateHasBeenSet; }
    inline void SetCompUpdate(bool value) { m_compUpdateHasBeenSet = true; m_compUpdate = value; }
    inline RedshiftSettings& WithCompUpdate(bool value) { SetCompUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that sets the amount of time to wait (in milliseconds) before timing
     * out, beginning from when you initially establish a connection.</p>
     */
    inline int GetConnectionTimeout() const { return m_connectionTimeout; }
    inline bool ConnectionTimeoutHasBeenSet() const { return m_connectionTimeoutHasBeenSet; }
    inline void SetConnectionTimeout(int value) { m_connectionTimeoutHasBeenSet = true; m_connectionTimeout = value; }
    inline RedshiftSettings& WithConnectionTimeout(int value) { SetConnectionTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Redshift data warehouse (service) that you are working
     * with.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    RedshiftSettings& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date format that you are using. Valid values are <code>auto</code>
     * (case-sensitive), your date format string enclosed in quotes, or NULL. If this
     * parameter is left unset (NULL), it defaults to a format of 'YYYY-MM-DD'. Using
     * <code>auto</code> recognizes most strings, even some that aren't supported when
     * you use a date format string. </p> <p>If your date and time values use formats
     * different from each other, set this to <code>auto</code>. </p>
     */
    inline const Aws::String& GetDateFormat() const { return m_dateFormat; }
    inline bool DateFormatHasBeenSet() const { return m_dateFormatHasBeenSet; }
    template<typename DateFormatT = Aws::String>
    void SetDateFormat(DateFormatT&& value) { m_dateFormatHasBeenSet = true; m_dateFormat = std::forward<DateFormatT>(value); }
    template<typename DateFormatT = Aws::String>
    RedshiftSettings& WithDateFormat(DateFormatT&& value) { SetDateFormat(std::forward<DateFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies whether DMS should migrate empty CHAR and VARCHAR
     * fields as NULL. A value of <code>true</code> sets empty CHAR and VARCHAR fields
     * to null. The default is <code>false</code>.</p>
     */
    inline bool GetEmptyAsNull() const { return m_emptyAsNull; }
    inline bool EmptyAsNullHasBeenSet() const { return m_emptyAsNullHasBeenSet; }
    inline void SetEmptyAsNull(bool value) { m_emptyAsNullHasBeenSet = true; m_emptyAsNull = value; }
    inline RedshiftSettings& WithEmptyAsNull(bool value) { SetEmptyAsNull(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of server-side encryption that you want to use for your data. This
     * encryption type is part of the endpoint settings or the extra connections
     * attributes for Amazon S3. You can choose either <code>SSE_S3</code> (the
     * default) or <code>SSE_KMS</code>. </p>  <p>For the
     * <code>ModifyEndpoint</code> operation, you can change the existing value of the
     * <code>EncryptionMode</code> parameter from <code>SSE_KMS</code> to
     * <code>SSE_S3</code>. But you can’t change the existing value from
     * <code>SSE_S3</code> to <code>SSE_KMS</code>.</p>  <p>To use
     * <code>SSE_S3</code>, create an Identity and Access Management (IAM) role with a
     * policy that allows <code>"arn:aws:s3:::*"</code> to use the following actions:
     * <code>"s3:PutObject", "s3:ListBucket"</code> </p>
     */
    inline EncryptionModeValue GetEncryptionMode() const { return m_encryptionMode; }
    inline bool EncryptionModeHasBeenSet() const { return m_encryptionModeHasBeenSet; }
    inline void SetEncryptionMode(EncryptionModeValue value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = value; }
    inline RedshiftSettings& WithEncryptionMode(EncryptionModeValue value) { SetEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This setting is only valid for a full-load migration task. Set
     * <code>ExplicitIds</code> to <code>true</code> to have tables with
     * <code>IDENTITY</code> columns override their auto-generated values with explicit
     * values loaded from the source data files used to populate the tables. The
     * default is <code>false</code>.</p>
     */
    inline bool GetExplicitIds() const { return m_explicitIds; }
    inline bool ExplicitIdsHasBeenSet() const { return m_explicitIdsHasBeenSet; }
    inline void SetExplicitIds(bool value) { m_explicitIdsHasBeenSet = true; m_explicitIds = value; }
    inline RedshiftSettings& WithExplicitIds(bool value) { SetExplicitIds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of threads used to upload a single file. This parameter accepts a
     * value from 1 through 64. It defaults to 10.</p> <p>The number of parallel
     * streams used to upload a single .csv file to an S3 bucket using S3 Multipart
     * Upload. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html">Multipart
     * upload overview</a>. </p> <p> <code>FileTransferUploadStreams</code> accepts a
     * value from 1 through 64. It defaults to 10.</p>
     */
    inline int GetFileTransferUploadStreams() const { return m_fileTransferUploadStreams; }
    inline bool FileTransferUploadStreamsHasBeenSet() const { return m_fileTransferUploadStreamsHasBeenSet; }
    inline void SetFileTransferUploadStreams(int value) { m_fileTransferUploadStreamsHasBeenSet = true; m_fileTransferUploadStreams = value; }
    inline RedshiftSettings& WithFileTransferUploadStreams(int value) { SetFileTransferUploadStreams(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time to wait (in milliseconds) before timing out of operations
     * performed by DMS on a Redshift cluster, such as Redshift COPY, INSERT, DELETE,
     * and UPDATE.</p>
     */
    inline int GetLoadTimeout() const { return m_loadTimeout; }
    inline bool LoadTimeoutHasBeenSet() const { return m_loadTimeoutHasBeenSet; }
    inline void SetLoadTimeout(int value) { m_loadTimeoutHasBeenSet = true; m_loadTimeout = value; }
    inline RedshiftSettings& WithLoadTimeout(int value) { SetLoadTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size (in KB) of any .csv file used to load data on an S3 bucket
     * and transfer data to Amazon Redshift. It defaults to 1048576KB (1 GB).</p>
     */
    inline int GetMaxFileSize() const { return m_maxFileSize; }
    inline bool MaxFileSizeHasBeenSet() const { return m_maxFileSizeHasBeenSet; }
    inline void SetMaxFileSize(int value) { m_maxFileSizeHasBeenSet = true; m_maxFileSize = value; }
    inline RedshiftSettings& WithMaxFileSize(int value) { SetMaxFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the user named in the <code>username</code> property.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    RedshiftSettings& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number for Amazon Redshift. The default value is 5439.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline RedshiftSettings& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies to remove surrounding quotation marks from strings in
     * the incoming data. All characters within the quotation marks, including
     * delimiters, are retained. Choose <code>true</code> to remove quotation marks.
     * The default is <code>false</code>.</p>
     */
    inline bool GetRemoveQuotes() const { return m_removeQuotes; }
    inline bool RemoveQuotesHasBeenSet() const { return m_removeQuotesHasBeenSet; }
    inline void SetRemoveQuotes(bool value) { m_removeQuotesHasBeenSet = true; m_removeQuotes = value; }
    inline RedshiftSettings& WithRemoveQuotes(bool value) { SetRemoveQuotes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of characters that you want to replace. Use with
     * <code>ReplaceChars</code>.</p>
     */
    inline const Aws::String& GetReplaceInvalidChars() const { return m_replaceInvalidChars; }
    inline bool ReplaceInvalidCharsHasBeenSet() const { return m_replaceInvalidCharsHasBeenSet; }
    template<typename ReplaceInvalidCharsT = Aws::String>
    void SetReplaceInvalidChars(ReplaceInvalidCharsT&& value) { m_replaceInvalidCharsHasBeenSet = true; m_replaceInvalidChars = std::forward<ReplaceInvalidCharsT>(value); }
    template<typename ReplaceInvalidCharsT = Aws::String>
    RedshiftSettings& WithReplaceInvalidChars(ReplaceInvalidCharsT&& value) { SetReplaceInvalidChars(std::forward<ReplaceInvalidCharsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies to replaces the invalid characters specified in
     * <code>ReplaceInvalidChars</code>, substituting the specified characters instead.
     * The default is <code>"?"</code>.</p>
     */
    inline const Aws::String& GetReplaceChars() const { return m_replaceChars; }
    inline bool ReplaceCharsHasBeenSet() const { return m_replaceCharsHasBeenSet; }
    template<typename ReplaceCharsT = Aws::String>
    void SetReplaceChars(ReplaceCharsT&& value) { m_replaceCharsHasBeenSet = true; m_replaceChars = std::forward<ReplaceCharsT>(value); }
    template<typename ReplaceCharsT = Aws::String>
    RedshiftSettings& WithReplaceChars(ReplaceCharsT&& value) { SetReplaceChars(std::forward<ReplaceCharsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Redshift cluster you are using.</p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    RedshiftSettings& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has access to the Amazon
     * Redshift service. The role must allow the <code>iam:PassRole</code> action.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const { return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    template<typename ServiceAccessRoleArnT = Aws::String>
    void SetServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::forward<ServiceAccessRoleArnT>(value); }
    template<typename ServiceAccessRoleArnT = Aws::String>
    RedshiftSettings& WithServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { SetServiceAccessRoleArn(std::forward<ServiceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key ID. If you are using <code>SSE_KMS</code> for the
     * <code>EncryptionMode</code>, provide this key ID. The key that you use needs an
     * attached policy that enables IAM user permissions and allows use of the key.</p>
     */
    inline const Aws::String& GetServerSideEncryptionKmsKeyId() const { return m_serverSideEncryptionKmsKeyId; }
    inline bool ServerSideEncryptionKmsKeyIdHasBeenSet() const { return m_serverSideEncryptionKmsKeyIdHasBeenSet; }
    template<typename ServerSideEncryptionKmsKeyIdT = Aws::String>
    void SetServerSideEncryptionKmsKeyId(ServerSideEncryptionKmsKeyIdT&& value) { m_serverSideEncryptionKmsKeyIdHasBeenSet = true; m_serverSideEncryptionKmsKeyId = std::forward<ServerSideEncryptionKmsKeyIdT>(value); }
    template<typename ServerSideEncryptionKmsKeyIdT = Aws::String>
    RedshiftSettings& WithServerSideEncryptionKmsKeyId(ServerSideEncryptionKmsKeyIdT&& value) { SetServerSideEncryptionKmsKeyId(std::forward<ServerSideEncryptionKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time format that you want to use. Valid values are <code>auto</code>
     * (case-sensitive), <code>'timeformat_string'</code>, <code>'epochsecs'</code>, or
     * <code>'epochmillisecs'</code>. It defaults to 10. Using <code>auto</code>
     * recognizes most strings, even some that aren't supported when you use a time
     * format string. </p> <p>If your date and time values use formats different from
     * each other, set this parameter to <code>auto</code>. </p>
     */
    inline const Aws::String& GetTimeFormat() const { return m_timeFormat; }
    inline bool TimeFormatHasBeenSet() const { return m_timeFormatHasBeenSet; }
    template<typename TimeFormatT = Aws::String>
    void SetTimeFormat(TimeFormatT&& value) { m_timeFormatHasBeenSet = true; m_timeFormat = std::forward<TimeFormatT>(value); }
    template<typename TimeFormatT = Aws::String>
    RedshiftSettings& WithTimeFormat(TimeFormatT&& value) { SetTimeFormat(std::forward<TimeFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies to remove the trailing white space characters from a
     * VARCHAR string. This parameter applies only to columns with a VARCHAR data type.
     * Choose <code>true</code> to remove unneeded white space. The default is
     * <code>false</code>.</p>
     */
    inline bool GetTrimBlanks() const { return m_trimBlanks; }
    inline bool TrimBlanksHasBeenSet() const { return m_trimBlanksHasBeenSet; }
    inline void SetTrimBlanks(bool value) { m_trimBlanksHasBeenSet = true; m_trimBlanks = value; }
    inline RedshiftSettings& WithTrimBlanks(bool value) { SetTrimBlanks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies to truncate data in columns to the appropriate number
     * of characters, so that the data fits in the column. This parameter applies only
     * to columns with a VARCHAR or CHAR data type, and rows with a size of 4 MB or
     * less. Choose <code>true</code> to truncate data. The default is
     * <code>false</code>.</p>
     */
    inline bool GetTruncateColumns() const { return m_truncateColumns; }
    inline bool TruncateColumnsHasBeenSet() const { return m_truncateColumnsHasBeenSet; }
    inline void SetTruncateColumns(bool value) { m_truncateColumnsHasBeenSet = true; m_truncateColumns = value; }
    inline RedshiftSettings& WithTruncateColumns(bool value) { SetTruncateColumns(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Redshift user name for a registered user.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    RedshiftSettings& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size (in KB) of the in-memory file write buffer used when generating .csv
     * files on the local disk at the DMS replication instance. The default value is
     * 1000 (buffer size is 1000KB).</p>
     */
    inline int GetWriteBufferSize() const { return m_writeBufferSize; }
    inline bool WriteBufferSizeHasBeenSet() const { return m_writeBufferSizeHasBeenSet; }
    inline void SetWriteBufferSize(int value) { m_writeBufferSizeHasBeenSet = true; m_writeBufferSize = value; }
    inline RedshiftSettings& WithWriteBufferSize(int value) { SetWriteBufferSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that specifies DMS as the
     * trusted entity and grants the required permissions to access the value in
     * <code>SecretsManagerSecret</code>. The role must allow the
     * <code>iam:PassRole</code> action. <code>SecretsManagerSecret</code> has the
     * value of the Amazon Web Services Secrets Manager secret that allows access to
     * the Amazon Redshift endpoint.</p>  <p>You can specify one of two sets of
     * values for these permissions. You can specify the values for this setting and
     * <code>SecretsManagerSecretId</code>. Or you can specify clear-text values for
     * <code>UserName</code>, <code>Password</code>, <code>ServerName</code>, and
     * <code>Port</code>. You can't specify both. For more information on creating this
     * <code>SecretsManagerSecret</code> and the
     * <code>SecretsManagerAccessRoleArn</code> and <code>SecretsManagerSecretId</code>
     * required to access it, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#security-iam-secretsmanager">Using
     * secrets to access Database Migration Service resources</a> in the <i>Database
     * Migration Service User Guide</i>.</p> 
     */
    inline const Aws::String& GetSecretsManagerAccessRoleArn() const { return m_secretsManagerAccessRoleArn; }
    inline bool SecretsManagerAccessRoleArnHasBeenSet() const { return m_secretsManagerAccessRoleArnHasBeenSet; }
    template<typename SecretsManagerAccessRoleArnT = Aws::String>
    void SetSecretsManagerAccessRoleArn(SecretsManagerAccessRoleArnT&& value) { m_secretsManagerAccessRoleArnHasBeenSet = true; m_secretsManagerAccessRoleArn = std::forward<SecretsManagerAccessRoleArnT>(value); }
    template<typename SecretsManagerAccessRoleArnT = Aws::String>
    RedshiftSettings& WithSecretsManagerAccessRoleArn(SecretsManagerAccessRoleArnT&& value) { SetSecretsManagerAccessRoleArn(std::forward<SecretsManagerAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full ARN, partial ARN, or friendly name of the
     * <code>SecretsManagerSecret</code> that contains the Amazon Redshift endpoint
     * connection details.</p>
     */
    inline const Aws::String& GetSecretsManagerSecretId() const { return m_secretsManagerSecretId; }
    inline bool SecretsManagerSecretIdHasBeenSet() const { return m_secretsManagerSecretIdHasBeenSet; }
    template<typename SecretsManagerSecretIdT = Aws::String>
    void SetSecretsManagerSecretId(SecretsManagerSecretIdT&& value) { m_secretsManagerSecretIdHasBeenSet = true; m_secretsManagerSecretId = std::forward<SecretsManagerSecretIdT>(value); }
    template<typename SecretsManagerSecretIdT = Aws::String>
    RedshiftSettings& WithSecretsManagerSecretId(SecretsManagerSecretIdT&& value) { SetSecretsManagerSecretId(std::forward<SecretsManagerSecretIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, lets Redshift migrate the boolean type as boolean. By default,
     * Redshift migrates booleans as <code>varchar(1)</code>. You must set this setting
     * on both the source and target endpoints for it to take effect.</p>
     */
    inline bool GetMapBooleanAsBoolean() const { return m_mapBooleanAsBoolean; }
    inline bool MapBooleanAsBooleanHasBeenSet() const { return m_mapBooleanAsBooleanHasBeenSet; }
    inline void SetMapBooleanAsBoolean(bool value) { m_mapBooleanAsBooleanHasBeenSet = true; m_mapBooleanAsBoolean = value; }
    inline RedshiftSettings& WithMapBooleanAsBoolean(bool value) { SetMapBooleanAsBoolean(value); return *this;}
    ///@}
  private:

    bool m_acceptAnyDate{false};
    bool m_acceptAnyDateHasBeenSet = false;

    Aws::String m_afterConnectScript;
    bool m_afterConnectScriptHasBeenSet = false;

    Aws::String m_bucketFolder;
    bool m_bucketFolderHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    bool m_caseSensitiveNames{false};
    bool m_caseSensitiveNamesHasBeenSet = false;

    bool m_compUpdate{false};
    bool m_compUpdateHasBeenSet = false;

    int m_connectionTimeout{0};
    bool m_connectionTimeoutHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_dateFormat;
    bool m_dateFormatHasBeenSet = false;

    bool m_emptyAsNull{false};
    bool m_emptyAsNullHasBeenSet = false;

    EncryptionModeValue m_encryptionMode{EncryptionModeValue::NOT_SET};
    bool m_encryptionModeHasBeenSet = false;

    bool m_explicitIds{false};
    bool m_explicitIdsHasBeenSet = false;

    int m_fileTransferUploadStreams{0};
    bool m_fileTransferUploadStreamsHasBeenSet = false;

    int m_loadTimeout{0};
    bool m_loadTimeoutHasBeenSet = false;

    int m_maxFileSize{0};
    bool m_maxFileSizeHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    bool m_removeQuotes{false};
    bool m_removeQuotesHasBeenSet = false;

    Aws::String m_replaceInvalidChars;
    bool m_replaceInvalidCharsHasBeenSet = false;

    Aws::String m_replaceChars;
    bool m_replaceCharsHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    Aws::String m_serverSideEncryptionKmsKeyId;
    bool m_serverSideEncryptionKmsKeyIdHasBeenSet = false;

    Aws::String m_timeFormat;
    bool m_timeFormatHasBeenSet = false;

    bool m_trimBlanks{false};
    bool m_trimBlanksHasBeenSet = false;

    bool m_truncateColumns{false};
    bool m_truncateColumnsHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    int m_writeBufferSize{0};
    bool m_writeBufferSizeHasBeenSet = false;

    Aws::String m_secretsManagerAccessRoleArn;
    bool m_secretsManagerAccessRoleArnHasBeenSet = false;

    Aws::String m_secretsManagerSecretId;
    bool m_secretsManagerSecretIdHasBeenSet = false;

    bool m_mapBooleanAsBoolean{false};
    bool m_mapBooleanAsBooleanHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
