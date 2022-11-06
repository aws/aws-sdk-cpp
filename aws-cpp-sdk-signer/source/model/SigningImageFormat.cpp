/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> supportedFormatsJsonList = jsonValue.GetArray("supportedFormats");
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
   Aws::Utils::Array<JsonValue> supportedFormatsJsonList(m_supportedFormats.size());
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
