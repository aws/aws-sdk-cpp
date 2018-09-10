﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/glue/model/StorageDescriptor.h>
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

StorageDescriptor::StorageDescriptor() : 
    m_columnsHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_inputFormatHasBeenSet(false),
    m_outputFormatHasBeenSet(false),
    m_compressed(false),
    m_compressedHasBeenSet(false),
    m_numberOfBuckets(0),
    m_numberOfBucketsHasBeenSet(false),
    m_serdeInfoHasBeenSet(false),
    m_bucketColumnsHasBeenSet(false),
    m_sortColumnsHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_skewedInfoHasBeenSet(false),
    m_storedAsSubDirectories(false),
    m_storedAsSubDirectoriesHasBeenSet(false)
{
}

StorageDescriptor::StorageDescriptor(JsonView jsonValue) : 
    m_columnsHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_inputFormatHasBeenSet(false),
    m_outputFormatHasBeenSet(false),
    m_compressed(false),
    m_compressedHasBeenSet(false),
    m_numberOfBuckets(0),
    m_numberOfBucketsHasBeenSet(false),
    m_serdeInfoHasBeenSet(false),
    m_bucketColumnsHasBeenSet(false),
    m_sortColumnsHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_skewedInfoHasBeenSet(false),
    m_storedAsSubDirectories(false),
    m_storedAsSubDirectoriesHasBeenSet(false)
{
  *this = jsonValue;
}

StorageDescriptor& StorageDescriptor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Columns"))
  {
    Array<JsonView> columnsJsonList = jsonValue.GetArray("Columns");
    for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
    {
      m_columns.push_back(columnsJsonList[columnsIndex].AsObject());
    }
    m_columnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputFormat"))
  {
    m_inputFormat = jsonValue.GetString("InputFormat");

    m_inputFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputFormat"))
  {
    m_outputFormat = jsonValue.GetString("OutputFormat");

    m_outputFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Compressed"))
  {
    m_compressed = jsonValue.GetBool("Compressed");

    m_compressedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfBuckets"))
  {
    m_numberOfBuckets = jsonValue.GetInteger("NumberOfBuckets");

    m_numberOfBucketsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SerdeInfo"))
  {
    m_serdeInfo = jsonValue.GetObject("SerdeInfo");

    m_serdeInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketColumns"))
  {
    Array<JsonView> bucketColumnsJsonList = jsonValue.GetArray("BucketColumns");
    for(unsigned bucketColumnsIndex = 0; bucketColumnsIndex < bucketColumnsJsonList.GetLength(); ++bucketColumnsIndex)
    {
      m_bucketColumns.push_back(bucketColumnsJsonList[bucketColumnsIndex].AsString());
    }
    m_bucketColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SortColumns"))
  {
    Array<JsonView> sortColumnsJsonList = jsonValue.GetArray("SortColumns");
    for(unsigned sortColumnsIndex = 0; sortColumnsIndex < sortColumnsJsonList.GetLength(); ++sortColumnsIndex)
    {
      m_sortColumns.push_back(sortColumnsJsonList[sortColumnsIndex].AsObject());
    }
    m_sortColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SkewedInfo"))
  {
    m_skewedInfo = jsonValue.GetObject("SkewedInfo");

    m_skewedInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StoredAsSubDirectories"))
  {
    m_storedAsSubDirectories = jsonValue.GetBool("StoredAsSubDirectories");

    m_storedAsSubDirectoriesHasBeenSet = true;
  }

  return *this;
}

JsonValue StorageDescriptor::Jsonize() const
{
  JsonValue payload;

  if(m_columnsHasBeenSet)
  {
   Array<JsonValue> columnsJsonList(m_columns.size());
   for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
   {
     columnsJsonList[columnsIndex].AsObject(m_columns[columnsIndex].Jsonize());
   }
   payload.WithArray("Columns", std::move(columnsJsonList));

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  if(m_inputFormatHasBeenSet)
  {
   payload.WithString("InputFormat", m_inputFormat);

  }

  if(m_outputFormatHasBeenSet)
  {
   payload.WithString("OutputFormat", m_outputFormat);

  }

  if(m_compressedHasBeenSet)
  {
   payload.WithBool("Compressed", m_compressed);

  }

  if(m_numberOfBucketsHasBeenSet)
  {
   payload.WithInteger("NumberOfBuckets", m_numberOfBuckets);

  }

  if(m_serdeInfoHasBeenSet)
  {
   payload.WithObject("SerdeInfo", m_serdeInfo.Jsonize());

  }

  if(m_bucketColumnsHasBeenSet)
  {
   Array<JsonValue> bucketColumnsJsonList(m_bucketColumns.size());
   for(unsigned bucketColumnsIndex = 0; bucketColumnsIndex < bucketColumnsJsonList.GetLength(); ++bucketColumnsIndex)
   {
     bucketColumnsJsonList[bucketColumnsIndex].AsString(m_bucketColumns[bucketColumnsIndex]);
   }
   payload.WithArray("BucketColumns", std::move(bucketColumnsJsonList));

  }

  if(m_sortColumnsHasBeenSet)
  {
   Array<JsonValue> sortColumnsJsonList(m_sortColumns.size());
   for(unsigned sortColumnsIndex = 0; sortColumnsIndex < sortColumnsJsonList.GetLength(); ++sortColumnsIndex)
   {
     sortColumnsJsonList[sortColumnsIndex].AsObject(m_sortColumns[sortColumnsIndex].Jsonize());
   }
   payload.WithArray("SortColumns", std::move(sortColumnsJsonList));

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_skewedInfoHasBeenSet)
  {
   payload.WithObject("SkewedInfo", m_skewedInfo.Jsonize());

  }

  if(m_storedAsSubDirectoriesHasBeenSet)
  {
   payload.WithBool("StoredAsSubDirectories", m_storedAsSubDirectories);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
