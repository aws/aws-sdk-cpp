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

#include <aws/mediaconvert/model/NielsenConfiguration.h>
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

NielsenConfiguration::NielsenConfiguration() : 
    m_breakoutCode(0),
    m_breakoutCodeHasBeenSet(false),
    m_distributorIdHasBeenSet(false)
{
}

NielsenConfiguration::NielsenConfiguration(const JsonValue& jsonValue) : 
    m_breakoutCode(0),
    m_breakoutCodeHasBeenSet(false),
    m_distributorIdHasBeenSet(false)
{
  *this = jsonValue;
}

NielsenConfiguration& NielsenConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("breakoutCode"))
  {
    m_breakoutCode = jsonValue.GetInteger("breakoutCode");

    m_breakoutCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("distributorId"))
  {
    m_distributorId = jsonValue.GetString("distributorId");

    m_distributorIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NielsenConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_breakoutCodeHasBeenSet)
  {
   payload.WithInteger("breakoutCode", m_breakoutCode);

  }

  if(m_distributorIdHasBeenSet)
  {
   payload.WithString("distributorId", m_distributorId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
