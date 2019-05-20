/*
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

#include <aws/mediapackage-vod/model/SpekeKeyProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

SpekeKeyProvider::SpekeKeyProvider() : 
    m_roleArnHasBeenSet(false),
    m_systemIdsHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

SpekeKeyProvider::SpekeKeyProvider(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_systemIdsHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

SpekeKeyProvider& SpekeKeyProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("systemIds"))
  {
    Array<JsonView> systemIdsJsonList = jsonValue.GetArray("systemIds");
    for(unsigned systemIdsIndex = 0; systemIdsIndex < systemIdsJsonList.GetLength(); ++systemIdsIndex)
    {
      m_systemIds.push_back(systemIdsJsonList[systemIdsIndex].AsString());
    }
    m_systemIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue SpekeKeyProvider::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_systemIdsHasBeenSet)
  {
   Array<JsonValue> systemIdsJsonList(m_systemIds.size());
   for(unsigned systemIdsIndex = 0; systemIdsIndex < systemIdsJsonList.GetLength(); ++systemIdsIndex)
   {
     systemIdsJsonList[systemIdsIndex].AsString(m_systemIds[systemIdsIndex]);
   }
   payload.WithArray("systemIds", std::move(systemIdsJsonList));

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
