/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/S3CsvSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

S3CsvSource::S3CsvSource() : 
    m_nameHasBeenSet(false),
    m_pathsHasBeenSet(false),
    m_compressionType(CompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_exclusionsHasBeenSet(false),
    m_groupSizeHasBeenSet(false),
    m_groupFilesHasBeenSet(false),
    m_recurse(false),
    m_recurseHasBeenSet(false),
    m_maxBand(0),
    m_maxBandHasBeenSet(false),
    m_maxFilesInBand(0),
    m_maxFilesInBandHasBeenSet(false),
    m_additionalOptionsHasBeenSet(false),
    m_separator(Separator::NOT_SET),
    m_separatorHasBeenSet(false),
    m_escaperHasBeenSet(false),
    m_quoteChar(QuoteChar::NOT_SET),
    m_quoteCharHasBeenSet(false),
    m_multiline(false),
    m_multilineHasBeenSet(false),
    m_withHeader(false),
    m_withHeaderHasBeenSet(false),
    m_writeHeader(false),
    m_writeHeaderHasBeenSet(false),
    m_skipFirst(false),
    m_skipFirstHasBeenSet(false),
    m_optimizePerformance(false),
    m_optimizePerformanceHasBeenSet(false),
    m_outputSchemasHasBeenSet(false)
{
}

S3CsvSource::S3CsvSource(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_pathsHasBeenSet(false),
    m_compressionType(CompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_exclusionsHasBeenSet(false),
    m_groupSizeHasBeenSet(false),
    m_groupFilesHasBeenSet(false),
    m_recurse(false),
    m_recurseHasBeenSet(false),
    m_maxBand(0),
    m_maxBandHasBeenSet(false),
    m_maxFilesInBand(0),
    m_maxFilesInBandHasBeenSet(false),
    m_additionalOptionsHasBeenSet(false),
    m_separator(Separator::NOT_SET),
    m_separatorHasBeenSet(false),
    m_escaperHasBeenSet(false),
    m_quoteChar(QuoteChar::NOT_SET),
    m_quoteCharHasBeenSet(false),
    m_multiline(false),
    m_multilineHasBeenSet(false),
    m_withHeader(false),
    m_withHeaderHasBeenSet(false),
    m_writeHeader(false),
    m_writeHeaderHasBeenSet(false),
    m_skipFirst(false),
    m_skipFirstHasBeenSet(false),
    m_optimizePerformance(false),
    m_optimizePerformanceHasBeenSet(false),
    m_outputSchemasHasBeenSet(false)
{
  *this = jsonValue;
}

S3CsvSource& S3CsvSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Paths"))
  {
    Aws::Utils::Array<JsonView> pathsJsonList = jsonValue.GetArray("Paths");
    for(unsigned pathsIndex = 0; pathsIndex < pathsJsonList.GetLength(); ++pathsIndex)
    {
      m_paths.push_back(pathsJsonList[pathsIndex].AsString());
    }
    m_pathsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompressionType"))
  {
    m_compressionType = CompressionTypeMapper::GetCompressionTypeForName(jsonValue.GetString("CompressionType"));

    m_compressionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Exclusions"))
  {
    Aws::Utils::Array<JsonView> exclusionsJsonList = jsonValue.GetArray("Exclusions");
    for(unsigned exclusionsIndex = 0; exclusionsIndex < exclusionsJsonList.GetLength(); ++exclusionsIndex)
    {
      m_exclusions.push_back(exclusionsJsonList[exclusionsIndex].AsString());
    }
    m_exclusionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupSize"))
  {
    m_groupSize = jsonValue.GetString("GroupSize");

    m_groupSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupFiles"))
  {
    m_groupFiles = jsonValue.GetString("GroupFiles");

    m_groupFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Recurse"))
  {
    m_recurse = jsonValue.GetBool("Recurse");

    m_recurseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxBand"))
  {
    m_maxBand = jsonValue.GetInteger("MaxBand");

    m_maxBandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxFilesInBand"))
  {
    m_maxFilesInBand = jsonValue.GetInteger("MaxFilesInBand");

    m_maxFilesInBandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalOptions"))
  {
    m_additionalOptions = jsonValue.GetObject("AdditionalOptions");

    m_additionalOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Separator"))
  {
    m_separator = SeparatorMapper::GetSeparatorForName(jsonValue.GetString("Separator"));

    m_separatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Escaper"))
  {
    m_escaper = jsonValue.GetString("Escaper");

    m_escaperHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuoteChar"))
  {
    m_quoteChar = QuoteCharMapper::GetQuoteCharForName(jsonValue.GetString("QuoteChar"));

    m_quoteCharHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Multiline"))
  {
    m_multiline = jsonValue.GetBool("Multiline");

    m_multilineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WithHeader"))
  {
    m_withHeader = jsonValue.GetBool("WithHeader");

    m_withHeaderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WriteHeader"))
  {
    m_writeHeader = jsonValue.GetBool("WriteHeader");

    m_writeHeaderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SkipFirst"))
  {
    m_skipFirst = jsonValue.GetBool("SkipFirst");

    m_skipFirstHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OptimizePerformance"))
  {
    m_optimizePerformance = jsonValue.GetBool("OptimizePerformance");

    m_optimizePerformanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputSchemas"))
  {
    Aws::Utils::Array<JsonView> outputSchemasJsonList = jsonValue.GetArray("OutputSchemas");
    for(unsigned outputSchemasIndex = 0; outputSchemasIndex < outputSchemasJsonList.GetLength(); ++outputSchemasIndex)
    {
      m_outputSchemas.push_back(outputSchemasJsonList[outputSchemasIndex].AsObject());
    }
    m_outputSchemasHasBeenSet = true;
  }

  return *this;
}

JsonValue S3CsvSource::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_pathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pathsJsonList(m_paths.size());
   for(unsigned pathsIndex = 0; pathsIndex < pathsJsonList.GetLength(); ++pathsIndex)
   {
     pathsJsonList[pathsIndex].AsString(m_paths[pathsIndex]);
   }
   payload.WithArray("Paths", std::move(pathsJsonList));

  }

  if(m_compressionTypeHasBeenSet)
  {
   payload.WithString("CompressionType", CompressionTypeMapper::GetNameForCompressionType(m_compressionType));
  }

  if(m_exclusionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exclusionsJsonList(m_exclusions.size());
   for(unsigned exclusionsIndex = 0; exclusionsIndex < exclusionsJsonList.GetLength(); ++exclusionsIndex)
   {
     exclusionsJsonList[exclusionsIndex].AsString(m_exclusions[exclusionsIndex]);
   }
   payload.WithArray("Exclusions", std::move(exclusionsJsonList));

  }

  if(m_groupSizeHasBeenSet)
  {
   payload.WithString("GroupSize", m_groupSize);

  }

  if(m_groupFilesHasBeenSet)
  {
   payload.WithString("GroupFiles", m_groupFiles);

  }

  if(m_recurseHasBeenSet)
  {
   payload.WithBool("Recurse", m_recurse);

  }

  if(m_maxBandHasBeenSet)
  {
   payload.WithInteger("MaxBand", m_maxBand);

  }

  if(m_maxFilesInBandHasBeenSet)
  {
   payload.WithInteger("MaxFilesInBand", m_maxFilesInBand);

  }

  if(m_additionalOptionsHasBeenSet)
  {
   payload.WithObject("AdditionalOptions", m_additionalOptions.Jsonize());

  }

  if(m_separatorHasBeenSet)
  {
   payload.WithString("Separator", SeparatorMapper::GetNameForSeparator(m_separator));
  }

  if(m_escaperHasBeenSet)
  {
   payload.WithString("Escaper", m_escaper);

  }

  if(m_quoteCharHasBeenSet)
  {
   payload.WithString("QuoteChar", QuoteCharMapper::GetNameForQuoteChar(m_quoteChar));
  }

  if(m_multilineHasBeenSet)
  {
   payload.WithBool("Multiline", m_multiline);

  }

  if(m_withHeaderHasBeenSet)
  {
   payload.WithBool("WithHeader", m_withHeader);

  }

  if(m_writeHeaderHasBeenSet)
  {
   payload.WithBool("WriteHeader", m_writeHeader);

  }

  if(m_skipFirstHasBeenSet)
  {
   payload.WithBool("SkipFirst", m_skipFirst);

  }

  if(m_optimizePerformanceHasBeenSet)
  {
   payload.WithBool("OptimizePerformance", m_optimizePerformance);

  }

  if(m_outputSchemasHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputSchemasJsonList(m_outputSchemas.size());
   for(unsigned outputSchemasIndex = 0; outputSchemasIndex < outputSchemasJsonList.GetLength(); ++outputSchemasIndex)
   {
     outputSchemasJsonList[outputSchemasIndex].AsObject(m_outputSchemas[outputSchemasIndex].Jsonize());
   }
   payload.WithArray("OutputSchemas", std::move(outputSchemasJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
