﻿/*
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
