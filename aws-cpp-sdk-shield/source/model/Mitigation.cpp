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

#include <aws/shield/model/Mitigation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

Mitigation::Mitigation() : 
    m_mitigationNameHasBeenSet(false)
{
}

Mitigation::Mitigation(const JsonValue& jsonValue) : 
    m_mitigationNameHasBeenSet(false)
{
  *this = jsonValue;
}

Mitigation& Mitigation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("MitigationName"))
  {
    m_mitigationName = jsonValue.GetString("MitigationName");

    m_mitigationNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Mitigation::Jsonize() const
{
  JsonValue payload;

  if(m_mitigationNameHasBeenSet)
  {
   payload.WithString("MitigationName", m_mitigationName);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws