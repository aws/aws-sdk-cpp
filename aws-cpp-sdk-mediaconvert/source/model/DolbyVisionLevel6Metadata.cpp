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

#include <aws/mediaconvert/model/DolbyVisionLevel6Metadata.h>
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

DolbyVisionLevel6Metadata::DolbyVisionLevel6Metadata() : 
    m_maxCll(0),
    m_maxCllHasBeenSet(false),
    m_maxFall(0),
    m_maxFallHasBeenSet(false)
{
}

DolbyVisionLevel6Metadata::DolbyVisionLevel6Metadata(JsonView jsonValue) : 
    m_maxCll(0),
    m_maxCllHasBeenSet(false),
    m_maxFall(0),
    m_maxFallHasBeenSet(false)
{
  *this = jsonValue;
}

DolbyVisionLevel6Metadata& DolbyVisionLevel6Metadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxCll"))
  {
    m_maxCll = jsonValue.GetInteger("maxCll");

    m_maxCllHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxFall"))
  {
    m_maxFall = jsonValue.GetInteger("maxFall");

    m_maxFallHasBeenSet = true;
  }

  return *this;
}

JsonValue DolbyVisionLevel6Metadata::Jsonize() const
{
  JsonValue payload;

  if(m_maxCllHasBeenSet)
  {
   payload.WithInteger("maxCll", m_maxCll);

  }

  if(m_maxFallHasBeenSet)
  {
   payload.WithInteger("maxFall", m_maxFall);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
