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

#include <aws/iot/model/OTAUpdateFile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

OTAUpdateFile::OTAUpdateFile() : 
    m_fileNameHasBeenSet(false),
    m_fileVersionHasBeenSet(false),
    m_fileSourceHasBeenSet(false),
    m_codeSigningHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

OTAUpdateFile::OTAUpdateFile(const JsonValue& jsonValue) : 
    m_fileNameHasBeenSet(false),
    m_fileVersionHasBeenSet(false),
    m_fileSourceHasBeenSet(false),
    m_codeSigningHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

OTAUpdateFile& OTAUpdateFile::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("fileName"))
  {
    m_fileName = jsonValue.GetString("fileName");

    m_fileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileVersion"))
  {
    m_fileVersion = jsonValue.GetString("fileVersion");

    m_fileVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileSource"))
  {
    m_fileSource = jsonValue.GetObject("fileSource");

    m_fileSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codeSigning"))
  {
    m_codeSigning = jsonValue.GetObject("codeSigning");

    m_codeSigningHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonValue> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  return *this;
}

JsonValue OTAUpdateFile::Jsonize() const
{
  JsonValue payload;

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("fileName", m_fileName);

  }

  if(m_fileVersionHasBeenSet)
  {
   payload.WithString("fileVersion", m_fileVersion);

  }

  if(m_fileSourceHasBeenSet)
  {
   payload.WithObject("fileSource", m_fileSource.Jsonize());

  }

  if(m_codeSigningHasBeenSet)
  {
   payload.WithObject("codeSigning", m_codeSigning.Jsonize());

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
