/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/ComputeAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

ComputeAttributes::ComputeAttributes() : 
    m_hostIdHasBeenSet(false)
{
}

ComputeAttributes::ComputeAttributes(JsonView jsonValue) : 
    m_hostIdHasBeenSet(false)
{
  *this = jsonValue;
}

ComputeAttributes& ComputeAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HostId"))
  {
    m_hostId = jsonValue.GetString("HostId");

    m_hostIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputeAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_hostIdHasBeenSet)
  {
   payload.WithString("HostId", m_hostId);

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
