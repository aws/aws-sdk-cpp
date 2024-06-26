﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/SnowflakeDestinationDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

SnowflakeDestinationDescription::SnowflakeDestinationDescription() : 
    m_accountUrlHasBeenSet(false),
    m_userHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_snowflakeRoleConfigurationHasBeenSet(false),
    m_dataLoadingOption(SnowflakeDataLoadingOption::NOT_SET),
    m_dataLoadingOptionHasBeenSet(false),
    m_metaDataColumnNameHasBeenSet(false),
    m_contentColumnNameHasBeenSet(false),
    m_snowflakeVpcConfigurationHasBeenSet(false),
    m_cloudWatchLoggingOptionsHasBeenSet(false),
    m_processingConfigurationHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_retryOptionsHasBeenSet(false),
    m_s3BackupMode(SnowflakeS3BackupMode::NOT_SET),
    m_s3BackupModeHasBeenSet(false),
    m_s3DestinationDescriptionHasBeenSet(false),
    m_secretsManagerConfigurationHasBeenSet(false)
{
}

SnowflakeDestinationDescription::SnowflakeDestinationDescription(JsonView jsonValue)
  : SnowflakeDestinationDescription()
{
  *this = jsonValue;
}

SnowflakeDestinationDescription& SnowflakeDestinationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountUrl"))
  {
    m_accountUrl = jsonValue.GetString("AccountUrl");

    m_accountUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("User"))
  {
    m_user = jsonValue.GetString("User");

    m_userHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetString("Schema");

    m_schemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetString("Table");

    m_tableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnowflakeRoleConfiguration"))
  {
    m_snowflakeRoleConfiguration = jsonValue.GetObject("SnowflakeRoleConfiguration");

    m_snowflakeRoleConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataLoadingOption"))
  {
    m_dataLoadingOption = SnowflakeDataLoadingOptionMapper::GetSnowflakeDataLoadingOptionForName(jsonValue.GetString("DataLoadingOption"));

    m_dataLoadingOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetaDataColumnName"))
  {
    m_metaDataColumnName = jsonValue.GetString("MetaDataColumnName");

    m_metaDataColumnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentColumnName"))
  {
    m_contentColumnName = jsonValue.GetString("ContentColumnName");

    m_contentColumnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnowflakeVpcConfiguration"))
  {
    m_snowflakeVpcConfiguration = jsonValue.GetObject("SnowflakeVpcConfiguration");

    m_snowflakeVpcConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchLoggingOptions"))
  {
    m_cloudWatchLoggingOptions = jsonValue.GetObject("CloudWatchLoggingOptions");

    m_cloudWatchLoggingOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingConfiguration"))
  {
    m_processingConfiguration = jsonValue.GetObject("ProcessingConfiguration");

    m_processingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");

    m_roleARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetryOptions"))
  {
    m_retryOptions = jsonValue.GetObject("RetryOptions");

    m_retryOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BackupMode"))
  {
    m_s3BackupMode = SnowflakeS3BackupModeMapper::GetSnowflakeS3BackupModeForName(jsonValue.GetString("S3BackupMode"));

    m_s3BackupModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3DestinationDescription"))
  {
    m_s3DestinationDescription = jsonValue.GetObject("S3DestinationDescription");

    m_s3DestinationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretsManagerConfiguration"))
  {
    m_secretsManagerConfiguration = jsonValue.GetObject("SecretsManagerConfiguration");

    m_secretsManagerConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue SnowflakeDestinationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_accountUrlHasBeenSet)
  {
   payload.WithString("AccountUrl", m_accountUrl);

  }

  if(m_userHasBeenSet)
  {
   payload.WithString("User", m_user);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("Schema", m_schema);

  }

  if(m_tableHasBeenSet)
  {
   payload.WithString("Table", m_table);

  }

  if(m_snowflakeRoleConfigurationHasBeenSet)
  {
   payload.WithObject("SnowflakeRoleConfiguration", m_snowflakeRoleConfiguration.Jsonize());

  }

  if(m_dataLoadingOptionHasBeenSet)
  {
   payload.WithString("DataLoadingOption", SnowflakeDataLoadingOptionMapper::GetNameForSnowflakeDataLoadingOption(m_dataLoadingOption));
  }

  if(m_metaDataColumnNameHasBeenSet)
  {
   payload.WithString("MetaDataColumnName", m_metaDataColumnName);

  }

  if(m_contentColumnNameHasBeenSet)
  {
   payload.WithString("ContentColumnName", m_contentColumnName);

  }

  if(m_snowflakeVpcConfigurationHasBeenSet)
  {
   payload.WithObject("SnowflakeVpcConfiguration", m_snowflakeVpcConfiguration.Jsonize());

  }

  if(m_cloudWatchLoggingOptionsHasBeenSet)
  {
   payload.WithObject("CloudWatchLoggingOptions", m_cloudWatchLoggingOptions.Jsonize());

  }

  if(m_processingConfigurationHasBeenSet)
  {
   payload.WithObject("ProcessingConfiguration", m_processingConfiguration.Jsonize());

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_retryOptionsHasBeenSet)
  {
   payload.WithObject("RetryOptions", m_retryOptions.Jsonize());

  }

  if(m_s3BackupModeHasBeenSet)
  {
   payload.WithString("S3BackupMode", SnowflakeS3BackupModeMapper::GetNameForSnowflakeS3BackupMode(m_s3BackupMode));
  }

  if(m_s3DestinationDescriptionHasBeenSet)
  {
   payload.WithObject("S3DestinationDescription", m_s3DestinationDescription.Jsonize());

  }

  if(m_secretsManagerConfigurationHasBeenSet)
  {
   payload.WithObject("SecretsManagerConfiguration", m_secretsManagerConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
