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

#include <aws/groundstation/model/DecodeConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

DecodeConfig::DecodeConfig() : 
    m_unvalidatedJSONHasBeenSet(false)
{
}

DecodeConfig::DecodeConfig(JsonView jsonValue) : 
    m_unvalidatedJSONHasBeenSet(false)
{
  *this = jsonValue;
}

DecodeConfig& DecodeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unvalidatedJSON"))
  {
    m_unvalidatedJSON = jsonValue.GetString("unvalidatedJSON");

    m_unvalidatedJSONHasBeenSet = true;
  }

  return *this;
}

JsonValue DecodeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_unvalidatedJSONHasBeenSet)
  {
   payload.WithString("unvalidatedJSON", m_unvalidatedJSON);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
