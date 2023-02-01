/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/Output.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

Output::Output() : 
    m_compressionFormat(CompressionFormat::NOT_SET),
    m_compressionFormatHasBeenSet(false),
    m_format(OutputFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_partitionColumnsHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_overwrite(false),
    m_overwriteHasBeenSet(false),
    m_formatOptionsHasBeenSet(false),
    m_maxOutputFiles(0),
    m_maxOutputFilesHasBeenSet(false)
{
}

Output::Output(JsonView jsonValue) : 
    m_compressionFormat(CompressionFormat::NOT_SET),
    m_compressionFormatHasBeenSet(false),
    m_format(OutputFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_partitionColumnsHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_overwrite(false),
    m_overwriteHasBeenSet(false),
    m_formatOptionsHasBeenSet(false),
    m_maxOutputFiles(0),
    m_maxOutputFilesHasBeenSet(false)
{
  *this = jsonValue;
}

Output& Output::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CompressionFormat"))
  {
    m_compressionFormat = CompressionFormatMapper::GetCompressionFormatForName(jsonValue.GetString("CompressionFormat"));

    m_compressionFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = OutputFormatMapper::GetOutputFormatForName(jsonValue.GetString("Format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartitionColumns"))
  {
    Aws::Utils::Array<JsonView> partitionColumnsJsonList = jsonValue.GetArray("PartitionColumns");
    for(unsigned partitionColumnsIndex = 0; partitionColumnsIndex < partitionColumnsJsonList.GetLength(); ++partitionColumnsIndex)
    {
      m_partitionColumns.push_back(partitionColumnsJsonList[partitionColumnsIndex].AsString());
    }
    m_partitionColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetObject("Location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Overwrite"))
  {
    m_overwrite = jsonValue.GetBool("Overwrite");

    m_overwriteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FormatOptions"))
  {
    m_formatOptions = jsonValue.GetObject("FormatOptions");

    m_formatOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxOutputFiles"))
  {
    m_maxOutputFiles = jsonValue.GetInteger("MaxOutputFiles");

    m_maxOutputFilesHasBeenSet = true;
  }

  return *this;
}

JsonValue Output::Jsonize() const
{
  JsonValue payload;

  if(m_compressionFormatHasBeenSet)
  {
   payload.WithString("CompressionFormat", CompressionFormatMapper::GetNameForCompressionFormat(m_compressionFormat));
  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", OutputFormatMapper::GetNameForOutputFormat(m_format));
  }

  if(m_partitionColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionColumnsJsonList(m_partitionColumns.size());
   for(unsigned partitionColumnsIndex = 0; partitionColumnsIndex < partitionColumnsJsonList.GetLength(); ++partitionColumnsIndex)
   {
     partitionColumnsJsonList[partitionColumnsIndex].AsString(m_partitionColumns[partitionColumnsIndex]);
   }
   payload.WithArray("PartitionColumns", std::move(partitionColumnsJsonList));

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("Location", m_location.Jsonize());

  }

  if(m_overwriteHasBeenSet)
  {
   payload.WithBool("Overwrite", m_overwrite);

  }

  if(m_formatOptionsHasBeenSet)
  {
   payload.WithObject("FormatOptions", m_formatOptions.Jsonize());

  }

  if(m_maxOutputFilesHasBeenSet)
  {
   payload.WithInteger("MaxOutputFiles", m_maxOutputFiles);

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
