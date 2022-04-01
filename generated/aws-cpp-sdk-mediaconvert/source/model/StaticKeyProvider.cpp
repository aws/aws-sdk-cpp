/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

StaticKeyProvider::StaticKeyProvider(JsonView jsonValue) : 
    m_keyFormatHasBeenSet(false),
    m_keyFormatVersionsHasBeenSet(false),
    m_staticKeyValueHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

StaticKeyProvider& StaticKeyProvider::operator =(JsonView jsonValue)
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
