/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_fileType(0),
    m_fileTypeHasBeenSet(false),
    m_fileVersionHasBeenSet(false),
    m_fileLocationHasBeenSet(false),
    m_codeSigningHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

OTAUpdateFile::OTAUpdateFile(JsonView jsonValue) : 
    m_fileNameHasBeenSet(false),
    m_fileType(0),
    m_fileTypeHasBeenSet(false),
    m_fileVersionHasBeenSet(false),
    m_fileLocationHasBeenSet(false),
    m_codeSigningHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

OTAUpdateFile& OTAUpdateFile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileName"))
  {
    m_fileName = jsonValue.GetString("fileName");

    m_fileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileType"))
  {
    m_fileType = jsonValue.GetInteger("fileType");

    m_fileTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileVersion"))
  {
    m_fileVersion = jsonValue.GetString("fileVersion");

    m_fileVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileLocation"))
  {
    m_fileLocation = jsonValue.GetObject("fileLocation");

    m_fileLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codeSigning"))
  {
    m_codeSigning = jsonValue.GetObject("codeSigning");

    m_codeSigningHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
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

  if(m_fileTypeHasBeenSet)
  {
   payload.WithInteger("fileType", m_fileType);

  }

  if(m_fileVersionHasBeenSet)
  {
   payload.WithString("fileVersion", m_fileVersion);

  }

  if(m_fileLocationHasBeenSet)
  {
   payload.WithObject("fileLocation", m_fileLocation.Jsonize());

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
