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

#include <aws/ssm/model/PatchGroupPatchBaselineMapping.h>
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

PatchGroupPatchBaselineMapping::PatchGroupPatchBaselineMapping() : 
    m_patchGroupHasBeenSet(false),
    m_baselineIdentityHasBeenSet(false)
{
}

PatchGroupPatchBaselineMapping::PatchGroupPatchBaselineMapping(const JsonValue& jsonValue) : 
    m_patchGroupHasBeenSet(false),
    m_baselineIdentityHasBeenSet(false)
{
  *this = jsonValue;
}

PatchGroupPatchBaselineMapping& PatchGroupPatchBaselineMapping::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PatchGroup"))
  {
    m_patchGroup = jsonValue.GetString("PatchGroup");

    m_patchGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaselineIdentity"))
  {
    m_baselineIdentity = jsonValue.GetObject("BaselineIdentity");

    m_baselineIdentityHasBeenSet = true;
  }

  return *this;
}

JsonValue PatchGroupPatchBaselineMapping::Jsonize() const
{
  JsonValue payload;

  if(m_patchGroupHasBeenSet)
  {
   payload.WithString("PatchGroup", m_patchGroup);

  }

  if(m_baselineIdentityHasBeenSet)
  {
   payload.WithObject("BaselineIdentity", m_baselineIdentity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws