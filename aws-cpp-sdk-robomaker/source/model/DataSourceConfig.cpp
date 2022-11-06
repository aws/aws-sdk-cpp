/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DataSourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

DataSourceConfig::DataSourceConfig() : 
    m_nameHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3KeysHasBeenSet(false),
    m_type(DataSourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_destinationHasBeenSet(false)
{
}

DataSourceConfig::DataSourceConfig(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3KeysHasBeenSet(false),
    m_type(DataSourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_destinationHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceConfig& DataSourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("s3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Keys"))
  {
    Aws::Utils::Array<JsonView> s3KeysJsonList = jsonValue.GetArray("s3Keys");
    for(unsigned s3KeysIndex = 0; s3KeysIndex < s3KeysJsonList.GetLength(); ++s3KeysIndex)
    {
      m_s3Keys.push_back(s3KeysJsonList[s3KeysIndex].AsString());
    }
    m_s3KeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = DataSourceTypeMapper::GetDataSourceTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");

    m_destinationHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("s3Bucket", m_s3Bucket);

  }

  if(m_s3KeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3KeysJsonList(m_s3Keys.size());
   for(unsigned s3KeysIndex = 0; s3KeysIndex < s3KeysJsonList.GetLength(); ++s3KeysIndex)
   {
     s3KeysJsonList[s3KeysIndex].AsString(m_s3Keys[s3KeysIndex]);
   }
   payload.WithArray("s3Keys", std::move(s3KeysJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DataSourceTypeMapper::GetNameForDataSourceType(m_type));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
