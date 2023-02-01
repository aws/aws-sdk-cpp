/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/CodeHook.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

CodeHook::CodeHook() : 
    m_uriHasBeenSet(false),
    m_messageVersionHasBeenSet(false)
{
}

CodeHook::CodeHook(JsonView jsonValue) : 
    m_uriHasBeenSet(false),
    m_messageVersionHasBeenSet(false)
{
  *this = jsonValue;
}

CodeHook& CodeHook::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("uri"))
  {
    m_uri = jsonValue.GetString("uri");

    m_uriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("messageVersion"))
  {
    m_messageVersion = jsonValue.GetString("messageVersion");

    m_messageVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeHook::Jsonize() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("uri", m_uri);

  }

  if(m_messageVersionHasBeenSet)
  {
   payload.WithString("messageVersion", m_messageVersion);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
