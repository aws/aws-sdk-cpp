/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ZonalShiftConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

ZonalShiftConfigRequest::ZonalShiftConfigRequest() : 
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

ZonalShiftConfigRequest::ZonalShiftConfigRequest(JsonView jsonValue)
  : ZonalShiftConfigRequest()
{
  *this = jsonValue;
}

ZonalShiftConfigRequest& ZonalShiftConfigRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue ZonalShiftConfigRequest::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
