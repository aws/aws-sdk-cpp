/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
