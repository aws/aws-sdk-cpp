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

#include <aws/personalize/model/TunedHPOParams.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

TunedHPOParams::TunedHPOParams() : 
    m_algorithmHyperParametersHasBeenSet(false)
{
}

TunedHPOParams::TunedHPOParams(JsonView jsonValue) : 
    m_algorithmHyperParametersHasBeenSet(false)
{
  *this = jsonValue;
}

TunedHPOParams& TunedHPOParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("algorithmHyperParameters"))
  {
    Aws::Map<Aws::String, JsonView> algorithmHyperParametersJsonMap = jsonValue.GetObject("algorithmHyperParameters").GetAllObjects();
    for(auto& algorithmHyperParametersItem : algorithmHyperParametersJsonMap)
    {
      m_algorithmHyperParameters[algorithmHyperParametersItem.first] = algorithmHyperParametersItem.second.AsString();
    }
    m_algorithmHyperParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue TunedHPOParams::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmHyperParametersHasBeenSet)
  {
   JsonValue algorithmHyperParametersJsonMap;
   for(auto& algorithmHyperParametersItem : m_algorithmHyperParameters)
   {
     algorithmHyperParametersJsonMap.WithString(algorithmHyperParametersItem.first, algorithmHyperParametersItem.second);
   }
   payload.WithObject("algorithmHyperParameters", std::move(algorithmHyperParametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
