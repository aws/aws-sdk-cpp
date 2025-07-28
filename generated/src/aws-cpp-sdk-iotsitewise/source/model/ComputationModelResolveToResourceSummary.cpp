/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ComputationModelResolveToResourceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

ComputationModelResolveToResourceSummary::ComputationModelResolveToResourceSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputationModelResolveToResourceSummary& ComputationModelResolveToResourceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resolveTo"))
  {
    m_resolveTo = jsonValue.GetObject("resolveTo");
    m_resolveToHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputationModelResolveToResourceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_resolveToHasBeenSet)
  {
   payload.WithObject("resolveTo", m_resolveTo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
