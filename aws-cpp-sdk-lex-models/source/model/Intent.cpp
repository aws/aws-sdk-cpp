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
#include <aws/lex-models/model/Intent.h>
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

Intent::Intent() : 
    m_intentNameHasBeenSet(false),
    m_intentVersionHasBeenSet(false)
{
}

Intent::Intent(const JsonValue& jsonValue) : 
    m_intentNameHasBeenSet(false),
    m_intentVersionHasBeenSet(false)
{
  *this = jsonValue;
}

Intent& Intent::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("intentName"))
  {
    m_intentName = jsonValue.GetString("intentName");

    m_intentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intentVersion"))
  {
    m_intentVersion = jsonValue.GetString("intentVersion");

    m_intentVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue Intent::Jsonize() const
{
  JsonValue payload;

  if(m_intentNameHasBeenSet)
  {
   payload.WithString("intentName", m_intentName);

  }

  if(m_intentVersionHasBeenSet)
  {
   payload.WithString("intentVersion", m_intentVersion);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws