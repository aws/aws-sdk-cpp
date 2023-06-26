/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/PoAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

PoAttributes::PoAttributes() : 
    m_encodingHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_memberFileExtensionsHasBeenSet(false)
{
}

PoAttributes::PoAttributes(JsonView jsonValue) : 
    m_encodingHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_memberFileExtensionsHasBeenSet(false)
{
  *this = jsonValue;
}

PoAttributes& PoAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encoding"))
  {
    m_encoding = jsonValue.GetString("encoding");

    m_encodingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = jsonValue.GetString("format");

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memberFileExtensions"))
  {
    Aws::Utils::Array<JsonView> memberFileExtensionsJsonList = jsonValue.GetArray("memberFileExtensions");
    for(unsigned memberFileExtensionsIndex = 0; memberFileExtensionsIndex < memberFileExtensionsJsonList.GetLength(); ++memberFileExtensionsIndex)
    {
      m_memberFileExtensions.push_back(memberFileExtensionsJsonList[memberFileExtensionsIndex].AsString());
    }
    m_memberFileExtensionsHasBeenSet = true;
  }

  return *this;
}

JsonValue PoAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_encodingHasBeenSet)
  {
   payload.WithString("encoding", m_encoding);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", m_format);

  }

  if(m_memberFileExtensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> memberFileExtensionsJsonList(m_memberFileExtensions.size());
   for(unsigned memberFileExtensionsIndex = 0; memberFileExtensionsIndex < memberFileExtensionsJsonList.GetLength(); ++memberFileExtensionsIndex)
   {
     memberFileExtensionsJsonList[memberFileExtensionsIndex].AsString(m_memberFileExtensions[memberFileExtensionsIndex]);
   }
   payload.WithArray("memberFileExtensions", std::move(memberFileExtensionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
