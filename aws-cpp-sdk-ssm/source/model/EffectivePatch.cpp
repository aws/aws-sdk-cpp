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

#include <aws/ssm/model/EffectivePatch.h>
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

EffectivePatch::EffectivePatch() : 
    m_patchHasBeenSet(false),
    m_patchStatusHasBeenSet(false)
{
}

EffectivePatch::EffectivePatch(const JsonValue& jsonValue) : 
    m_patchHasBeenSet(false),
    m_patchStatusHasBeenSet(false)
{
  *this = jsonValue;
}

EffectivePatch& EffectivePatch::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Patch"))
  {
    m_patch = jsonValue.GetObject("Patch");

    m_patchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PatchStatus"))
  {
    m_patchStatus = jsonValue.GetObject("PatchStatus");

    m_patchStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue EffectivePatch::Jsonize() const
{
  JsonValue payload;

  if(m_patchHasBeenSet)
  {
   payload.WithObject("Patch", m_patch.Jsonize());

  }

  if(m_patchStatusHasBeenSet)
  {
   payload.WithObject("PatchStatus", m_patchStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws