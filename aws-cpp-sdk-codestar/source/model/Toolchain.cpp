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

#include <aws/codestar/model/Toolchain.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStar
{
namespace Model
{

Toolchain::Toolchain() : 
    m_sourceHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_stackParametersHasBeenSet(false)
{
}

Toolchain::Toolchain(JsonView jsonValue) : 
    m_sourceHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_stackParametersHasBeenSet(false)
{
  *this = jsonValue;
}

Toolchain& Toolchain::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stackParameters"))
  {
    Aws::Map<Aws::String, JsonView> stackParametersJsonMap = jsonValue.GetObject("stackParameters").GetAllObjects();
    for(auto& stackParametersItem : stackParametersJsonMap)
    {
      m_stackParameters[stackParametersItem.first] = stackParametersItem.second.AsString();
    }
    m_stackParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue Toolchain::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_stackParametersHasBeenSet)
  {
   JsonValue stackParametersJsonMap;
   for(auto& stackParametersItem : m_stackParameters)
   {
     stackParametersJsonMap.WithString(stackParametersItem.first, stackParametersItem.second);
   }
   payload.WithObject("stackParameters", std::move(stackParametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CodeStar
} // namespace Aws
