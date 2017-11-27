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

#include <aws/mediaconvert/model/StaticKeyProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

StaticKeyProvider::StaticKeyProvider() : 
    m_keyFormatHasBeenSet(false),
    m_keyFormatVersionsHasBeenSet(false),
    m_staticKeyValueHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

StaticKeyProvider::StaticKeyProvider(const JsonValue& jsonValue) : 
    m_keyFormatHasBeenSet(false),
    m_keyFormatVersionsHasBeenSet(false),
    m_staticKeyValueHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

StaticKeyProvider& StaticKeyProvider::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("keyFormat"))
  {
    m_keyFormat = jsonValue.GetString("keyFormat");

    m_keyFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyFormatVersions"))
  {
    m_keyFormatVersions = jsonValue.GetString("keyFormatVersions");

    m_keyFormatVersionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("staticKeyValue"))
  {
    m_staticKeyValue = jsonValue.GetString("staticKeyValue");

    m_staticKeyValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue StaticKeyProvider::Jsonize() const
{
  JsonValue payload;

  if(m_keyFormatHasBeenSet)
  {
   payload.WithString("keyFormat", m_keyFormat);

  }

  if(m_keyFormatVersionsHasBeenSet)
  {
   payload.WithString("keyFormatVersions", m_keyFormatVersions);

  }

  if(m_staticKeyValueHasBeenSet)
  {
   payload.WithString("staticKeyValue", m_staticKeyValue);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
