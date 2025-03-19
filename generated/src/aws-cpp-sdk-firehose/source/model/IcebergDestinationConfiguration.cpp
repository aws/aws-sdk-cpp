/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/IcebergDestinationConfiguration.h>
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

IcebergDestinationConfiguration::IcebergDestinationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

IcebergDestinationConfiguration& IcebergDestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationTableConfigurationList"))
  {
    Aws::Utils::Array<JsonView> destinationTableConfigurationListJsonList = jsonValue.GetArray("DestinationTableConfigurationList");
    for(unsigned destinationTableConfigurationListIndex = 0; destinationTableConfigurationListIndex < destinationTableConfigurationListJsonList.GetLength(); ++destinationTableConfigurationListIndex)
    {
      m_destinationTableConfigurationList.push_back(destinationTableConfigurationListJsonList[destinationTableConfigurationListIndex].AsObject());
    }
    m_destinationTableConfigurationListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SchemaEvolutionConfiguration"))
  {
    m_schemaEvolutionConfiguration = jsonValue.GetObject("SchemaEvolutionConfiguration");
    m_schemaEvolutionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TableCreationConfiguration"))
  {
    m_tableCreationConfiguration = jsonValue.GetObject("TableCreationConfiguration");
    m_tableCreationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BufferingHints"))
  {
    m_bufferingHints = jsonValue.GetObject("BufferingHints");
    m_bufferingHintsHasBeenSet = true;
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
  if(jsonValue.ValueExists("S3BackupMode"))
  {
    m_s3BackupMode = IcebergS3BackupModeMapper::GetIcebergS3BackupModeForName(jsonValue.GetString("S3BackupMode"));
    m_s3BackupModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetryOptions"))
  {
    m_retryOptions = jsonValue.GetObject("RetryOptions");
    m_retryOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");
    m_roleARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppendOnly"))
  {
    m_appendOnly = jsonValue.GetBool("AppendOnly");
    m_appendOnlyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CatalogConfiguration"))
  {
    m_catalogConfiguration = jsonValue.GetObject("CatalogConfiguration");
    m_catalogConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3Configuration"))
  {
    m_s3Configuration = jsonValue.GetObject("S3Configuration");
    m_s3ConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergDestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_destinationTableConfigurationListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationTableConfigurationListJsonList(m_destinationTableConfigurationList.size());
   for(unsigned destinationTableConfigurationListIndex = 0; destinationTableConfigurationListIndex < destinationTableConfigurationListJsonList.GetLength(); ++destinationTableConfigurationListIndex)
   {
     destinationTableConfigurationListJsonList[destinationTableConfigurationListIndex].AsObject(m_destinationTableConfigurationList[destinationTableConfigurationListIndex].Jsonize());
   }
   payload.WithArray("DestinationTableConfigurationList", std::move(destinationTableConfigurationListJsonList));

  }

  if(m_schemaEvolutionConfigurationHasBeenSet)
  {
   payload.WithObject("SchemaEvolutionConfiguration", m_schemaEvolutionConfiguration.Jsonize());

  }

  if(m_tableCreationConfigurationHasBeenSet)
  {
   payload.WithObject("TableCreationConfiguration", m_tableCreationConfiguration.Jsonize());

  }

  if(m_bufferingHintsHasBeenSet)
  {
   payload.WithObject("BufferingHints", m_bufferingHints.Jsonize());

  }

  if(m_cloudWatchLoggingOptionsHasBeenSet)
  {
   payload.WithObject("CloudWatchLoggingOptions", m_cloudWatchLoggingOptions.Jsonize());

  }

  if(m_processingConfigurationHasBeenSet)
  {
   payload.WithObject("ProcessingConfiguration", m_processingConfiguration.Jsonize());

  }

  if(m_s3BackupModeHasBeenSet)
  {
   payload.WithString("S3BackupMode", IcebergS3BackupModeMapper::GetNameForIcebergS3BackupMode(m_s3BackupMode));
  }

  if(m_retryOptionsHasBeenSet)
  {
   payload.WithObject("RetryOptions", m_retryOptions.Jsonize());

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_appendOnlyHasBeenSet)
  {
   payload.WithBool("AppendOnly", m_appendOnly);

  }

  if(m_catalogConfigurationHasBeenSet)
  {
   payload.WithObject("CatalogConfiguration", m_catalogConfiguration.Jsonize());

  }

  if(m_s3ConfigurationHasBeenSet)
  {
   payload.WithObject("S3Configuration", m_s3Configuration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
