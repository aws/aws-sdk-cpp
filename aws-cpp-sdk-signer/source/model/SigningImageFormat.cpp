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

#include <aws/signer/model/SigningImageFormat.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace signer
{
namespace Model
{

SigningImageFormat::SigningImageFormat() : 
    m_supportedFormatsHasBeenSet(false),
    m_defaultFormat(ImageFormat::NOT_SET),
    m_defaultFormatHasBeenSet(false)
{
}

SigningImageFormat::SigningImageFormat(JsonView jsonValue) : 
    m_supportedFormatsHasBeenSet(false),
    m_defaultFormat(ImageFormat::NOT_SET),
    m_defaultFormatHasBeenSet(false)
{
  *this = jsonValue;
}

SigningImageFormat& SigningImageFormat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("supportedFormats"))
  {
    Array<JsonView> supportedFormatsJsonList = jsonValue.GetArray("supportedFormats");
    for(unsigned supportedFormatsIndex = 0; supportedFormatsIndex < supportedFormatsJsonList.GetLength(); ++supportedFormatsIndex)
    {
      m_supportedFormats.push_back(ImageFormatMapper::GetImageFormatForName(supportedFormatsJsonList[supportedFormatsIndex].AsString()));
    }
    m_supportedFormatsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultFormat"))
  {
    m_defaultFormat = ImageFormatMapper::GetImageFormatForName(jsonValue.GetString("defaultFormat"));

    m_defaultFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue SigningImageFormat::Jsonize() const
{
  JsonValue payload;

  if(m_supportedFormatsHasBeenSet)
  {
   Array<JsonValue> supportedFormatsJsonList(m_supportedFormats.size());
   for(unsigned supportedFormatsIndex = 0; supportedFormatsIndex < supportedFormatsJsonList.GetLength(); ++supportedFormatsIndex)
   {
     supportedFormatsJsonList[supportedFormatsIndex].AsString(ImageFormatMapper::GetNameForImageFormat(m_supportedFormats[supportedFormatsIndex]));
   }
   payload.WithArray("supportedFormats", std::move(supportedFormatsJsonList));

  }

  if(m_defaultFormatHasBeenSet)
  {
   payload.WithString("defaultFormat", ImageFormatMapper::GetNameForImageFormat(m_defaultFormat));
  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
