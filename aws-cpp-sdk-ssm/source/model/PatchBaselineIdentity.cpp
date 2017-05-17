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

#include <aws/ssm/model/PatchBaselineIdentity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

PatchBaselineIdentity::PatchBaselineIdentity() : 
    m_baselineIdHasBeenSet(false),
    m_baselineNameHasBeenSet(false),
    m_baselineDescriptionHasBeenSet(false),
    m_defaultBaseline(false),
    m_defaultBaselineHasBeenSet(false)
{
}

PatchBaselineIdentity::PatchBaselineIdentity(const JsonValue& jsonValue) : 
    m_baselineIdHasBeenSet(false),
    m_baselineNameHasBeenSet(false),
    m_baselineDescriptionHasBeenSet(false),
    m_defaultBaseline(false),
    m_defaultBaselineHasBeenSet(false)
{
  *this = jsonValue;
}

PatchBaselineIdentity& PatchBaselineIdentity::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("BaselineId"))
  {
    m_baselineId = jsonValue.GetString("BaselineId");

    m_baselineIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaselineName"))
  {
    m_baselineName = jsonValue.GetString("BaselineName");

    m_baselineNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaselineDescription"))
  {
    m_baselineDescription = jsonValue.GetString("BaselineDescription");

    m_baselineDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultBaseline"))
  {
    m_defaultBaseline = jsonValue.GetBool("DefaultBaseline");

    m_defaultBaselineHasBeenSet = true;
  }

  return *this;
}

JsonValue PatchBaselineIdentity::Jsonize() const
{
  JsonValue payload;

  if(m_baselineIdHasBeenSet)
  {
   payload.WithString("BaselineId", m_baselineId);

  }

  if(m_baselineNameHasBeenSet)
  {
   payload.WithString("BaselineName", m_baselineName);

  }

  if(m_baselineDescriptionHasBeenSet)
  {
   payload.WithString("BaselineDescription", m_baselineDescription);

  }

  if(m_defaultBaselineHasBeenSet)
  {
   payload.WithBool("DefaultBaseline", m_defaultBaseline);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws