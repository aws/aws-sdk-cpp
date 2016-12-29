/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/directconnect/model/Loa.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

Loa::Loa() : 
    m_loaContentHasBeenSet(false),
    m_loaContentType(LoaContentType::NOT_SET),
    m_loaContentTypeHasBeenSet(false)
{
}

Loa::Loa(const JsonValue& jsonValue) : 
    m_loaContentHasBeenSet(false),
    m_loaContentType(LoaContentType::NOT_SET),
    m_loaContentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Loa& Loa::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("loaContent"))
  {
    m_loaContent = HashingUtils::Base64Decode(jsonValue.GetString("loaContent"));
    m_loaContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("loaContentType"))
  {
    m_loaContentType = LoaContentTypeMapper::GetLoaContentTypeForName(jsonValue.GetString("loaContentType"));

    m_loaContentTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Loa::Jsonize() const
{
  JsonValue payload;

  if(m_loaContentHasBeenSet)
  {
   payload.WithString("loaContent", HashingUtils::Base64Encode(m_loaContent));
  }

  if(m_loaContentTypeHasBeenSet)
  {
   payload.WithString("loaContentType", LoaContentTypeMapper::GetNameForLoaContentType(m_loaContentType));
  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws