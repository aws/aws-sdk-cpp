/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DataSource.h>
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

DataSource::DataSource() : 
    m_nameHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3KeysHasBeenSet(false)
{
}

DataSource::DataSource(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_s3KeysHasBeenSet(false)
{
  *this = jsonValue;
}

DataSource& DataSource::operator =(JsonView jsonValue)
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
    Array<JsonView> s3KeysJsonList = jsonValue.GetArray("s3Keys");
    for(unsigned s3KeysIndex = 0; s3KeysIndex < s3KeysJsonList.GetLength(); ++s3KeysIndex)
    {
      m_s3Keys.push_back(s3KeysJsonList[s3KeysIndex].AsObject());
    }
    m_s3KeysHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSource::Jsonize() const
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
   Array<JsonValue> s3KeysJsonList(m_s3Keys.size());
   for(unsigned s3KeysIndex = 0; s3KeysIndex < s3KeysJsonList.GetLength(); ++s3KeysIndex)
   {
     s3KeysJsonList[s3KeysIndex].AsObject(m_s3Keys[s3KeysIndex].Jsonize());
   }
   payload.WithArray("s3Keys", std::move(s3KeysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
