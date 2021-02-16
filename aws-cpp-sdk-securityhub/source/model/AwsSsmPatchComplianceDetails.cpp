/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsSsmPatchComplianceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsSsmPatchComplianceDetails::AwsSsmPatchComplianceDetails() : 
    m_patchHasBeenSet(false)
{
}

AwsSsmPatchComplianceDetails::AwsSsmPatchComplianceDetails(JsonView jsonValue) : 
    m_patchHasBeenSet(false)
{
  *this = jsonValue;
}

AwsSsmPatchComplianceDetails& AwsSsmPatchComplianceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Patch"))
  {
    m_patch = jsonValue.GetObject("Patch");

    m_patchHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsSsmPatchComplianceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_patchHasBeenSet)
  {
   payload.WithObject("Patch", m_patch.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
