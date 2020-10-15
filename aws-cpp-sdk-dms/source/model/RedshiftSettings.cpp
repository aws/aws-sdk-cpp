/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/RedshiftSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

RedshiftSettings::RedshiftSettings() : 
    m_acceptAnyDate(false),
    m_acceptAnyDateHasBeenSet(false),
    m_afterConnectScriptHasBeenSet(false),
    m_bucketFolderHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_caseSensitiveNames(false),
    m_caseSensitiveNamesHasBeenSet(false),
    m_compUpdate(false),
    m_compUpdateHasBeenSet(false),
    m_connectionTimeout(0),
    m_connectionTimeoutHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_dateFormatHasBeenSet(false),
    m_emptyAsNull(false),
    m_emptyAsNullHasBeenSet(false),
    m_encryptionMode(EncryptionModeValue::NOT_SET),
    m_encryptionModeHasBeenSet(false),
    m_explicitIds(false),
    m_explicitIdsHasBeenSet(false),
    m_fileTransferUploadStreams(0),
    m_fileTransferUploadStreamsHasBeenSet(false),
    m_loadTimeout(0),
    m_loadTimeoutHasBeenSet(false),
    m_maxFileSize(0),
    m_maxFileSizeHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_removeQuotes(false),
    m_removeQuotesHasBeenSet(false),
    m_replaceInvalidCharsHasBeenSet(false),
    m_replaceCharsHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_serviceAccessRoleArnHasBeenSet(false),
    m_serverSideEncryptionKmsKeyIdHasBeenSet(false),
    m_timeFormatHasBeenSet(false),
    m_trimBlanks(false),
    m_trimBlanksHasBeenSet(false),
    m_truncateColumns(false),
    m_truncateColumnsHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_writeBufferSize(0),
    m_writeBufferSizeHasBeenSet(false)
{
}

RedshiftSettings::RedshiftSettings(JsonView jsonValue) : 
    m_acceptAnyDate(false),
    m_acceptAnyDateHasBeenSet(false),
    m_afterConnectScriptHasBeenSet(false),
    m_bucketFolderHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_caseSensitiveNames(false),
    m_caseSensitiveNamesHasBeenSet(false),
    m_compUpdate(false),
    m_compUpdateHasBeenSet(false),
    m_connectionTimeout(0),
    m_connectionTimeoutHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_dateFormatHasBeenSet(false),
    m_emptyAsNull(false),
    m_emptyAsNullHasBeenSet(false),
    m_encryptionMode(EncryptionModeValue::NOT_SET),
    m_encryptionModeHasBeenSet(false),
    m_explicitIds(false),
    m_explicitIdsHasBeenSet(false),
    m_fileTransferUploadStreams(0),
    m_fileTransferUploadStreamsHasBeenSet(false),
    m_loadTimeout(0),
    m_loadTimeoutHasBeenSet(false),
    m_maxFileSize(0),
    m_maxFileSizeHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_removeQuotes(false),
    m_removeQuotesHasBeenSet(false),
    m_replaceInvalidCharsHasBeenSet(false),
    m_replaceCharsHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_serviceAccessRoleArnHasBeenSet(false),
    m_serverSideEncryptionKmsKeyIdHasBeenSet(false),
    m_timeFormatHasBeenSet(false),
    m_trimBlanks(false),
    m_trimBlanksHasBeenSet(false),
    m_truncateColumns(false),
    m_truncateColumnsHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_writeBufferSize(0),
    m_writeBufferSizeHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftSettings& RedshiftSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AcceptAnyDate"))
  {
    m_acceptAnyDate = jsonValue.GetBool("AcceptAnyDate");

    m_acceptAnyDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AfterConnectScript"))
  {
    m_afterConnectScript = jsonValue.GetString("AfterConnectScript");

    m_afterConnectScriptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketFolder"))
  {
    m_bucketFolder = jsonValue.GetString("BucketFolder");

    m_bucketFolderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaseSensitiveNames"))
  {
    m_caseSensitiveNames = jsonValue.GetBool("CaseSensitiveNames");

    m_caseSensitiveNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompUpdate"))
  {
    m_compUpdate = jsonValue.GetBool("CompUpdate");

    m_compUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionTimeout"))
  {
    m_connectionTimeout = jsonValue.GetInteger("ConnectionTimeout");

    m_connectionTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateFormat"))
  {
    m_dateFormat = jsonValue.GetString("DateFormat");

    m_dateFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmptyAsNull"))
  {
    m_emptyAsNull = jsonValue.GetBool("EmptyAsNull");

    m_emptyAsNullHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionMode"))
  {
    m_encryptionMode = EncryptionModeValueMapper::GetEncryptionModeValueForName(jsonValue.GetString("EncryptionMode"));

    m_encryptionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExplicitIds"))
  {
    m_explicitIds = jsonValue.GetBool("ExplicitIds");

    m_explicitIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileTransferUploadStreams"))
  {
    m_fileTransferUploadStreams = jsonValue.GetInteger("FileTransferUploadStreams");

    m_fileTransferUploadStreamsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoadTimeout"))
  {
    m_loadTimeout = jsonValue.GetInteger("LoadTimeout");

    m_loadTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxFileSize"))
  {
    m_maxFileSize = jsonValue.GetInteger("MaxFileSize");

    m_maxFileSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Password"))
  {
    m_password = jsonValue.GetString("Password");

    m_passwordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoveQuotes"))
  {
    m_removeQuotes = jsonValue.GetBool("RemoveQuotes");

    m_removeQuotesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplaceInvalidChars"))
  {
    m_replaceInvalidChars = jsonValue.GetString("ReplaceInvalidChars");

    m_replaceInvalidCharsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplaceChars"))
  {
    m_replaceChars = jsonValue.GetString("ReplaceChars");

    m_replaceCharsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerName"))
  {
    m_serverName = jsonValue.GetString("ServerName");

    m_serverNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceAccessRoleArn"))
  {
    m_serviceAccessRoleArn = jsonValue.GetString("ServiceAccessRoleArn");

    m_serviceAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerSideEncryptionKmsKeyId"))
  {
    m_serverSideEncryptionKmsKeyId = jsonValue.GetString("ServerSideEncryptionKmsKeyId");

    m_serverSideEncryptionKmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeFormat"))
  {
    m_timeFormat = jsonValue.GetString("TimeFormat");

    m_timeFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrimBlanks"))
  {
    m_trimBlanks = jsonValue.GetBool("TrimBlanks");

    m_trimBlanksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TruncateColumns"))
  {
    m_truncateColumns = jsonValue.GetBool("TruncateColumns");

    m_truncateColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WriteBufferSize"))
  {
    m_writeBufferSize = jsonValue.GetInteger("WriteBufferSize");

    m_writeBufferSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftSettings::Jsonize() const
{
  JsonValue payload;

  if(m_acceptAnyDateHasBeenSet)
  {
   payload.WithBool("AcceptAnyDate", m_acceptAnyDate);

  }

  if(m_afterConnectScriptHasBeenSet)
  {
   payload.WithString("AfterConnectScript", m_afterConnectScript);

  }

  if(m_bucketFolderHasBeenSet)
  {
   payload.WithString("BucketFolder", m_bucketFolder);

  }

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_caseSensitiveNamesHasBeenSet)
  {
   payload.WithBool("CaseSensitiveNames", m_caseSensitiveNames);

  }

  if(m_compUpdateHasBeenSet)
  {
   payload.WithBool("CompUpdate", m_compUpdate);

  }

  if(m_connectionTimeoutHasBeenSet)
  {
   payload.WithInteger("ConnectionTimeout", m_connectionTimeout);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_dateFormatHasBeenSet)
  {
   payload.WithString("DateFormat", m_dateFormat);

  }

  if(m_emptyAsNullHasBeenSet)
  {
   payload.WithBool("EmptyAsNull", m_emptyAsNull);

  }

  if(m_encryptionModeHasBeenSet)
  {
   payload.WithString("EncryptionMode", EncryptionModeValueMapper::GetNameForEncryptionModeValue(m_encryptionMode));
  }

  if(m_explicitIdsHasBeenSet)
  {
   payload.WithBool("ExplicitIds", m_explicitIds);

  }

  if(m_fileTransferUploadStreamsHasBeenSet)
  {
   payload.WithInteger("FileTransferUploadStreams", m_fileTransferUploadStreams);

  }

  if(m_loadTimeoutHasBeenSet)
  {
   payload.WithInteger("LoadTimeout", m_loadTimeout);

  }

  if(m_maxFileSizeHasBeenSet)
  {
   payload.WithInteger("MaxFileSize", m_maxFileSize);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_removeQuotesHasBeenSet)
  {
   payload.WithBool("RemoveQuotes", m_removeQuotes);

  }

  if(m_replaceInvalidCharsHasBeenSet)
  {
   payload.WithString("ReplaceInvalidChars", m_replaceInvalidChars);

  }

  if(m_replaceCharsHasBeenSet)
  {
   payload.WithString("ReplaceChars", m_replaceChars);

  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_serviceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ServiceAccessRoleArn", m_serviceAccessRoleArn);

  }

  if(m_serverSideEncryptionKmsKeyIdHasBeenSet)
  {
   payload.WithString("ServerSideEncryptionKmsKeyId", m_serverSideEncryptionKmsKeyId);

  }

  if(m_timeFormatHasBeenSet)
  {
   payload.WithString("TimeFormat", m_timeFormat);

  }

  if(m_trimBlanksHasBeenSet)
  {
   payload.WithBool("TrimBlanks", m_trimBlanks);

  }

  if(m_truncateColumnsHasBeenSet)
  {
   payload.WithBool("TruncateColumns", m_truncateColumns);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_writeBufferSizeHasBeenSet)
  {
   payload.WithInteger("WriteBufferSize", m_writeBufferSize);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
