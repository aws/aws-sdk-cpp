/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ShrinkPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

ShrinkPolicy::ShrinkPolicy() : 
    m_decommissionTimeout(0),
    m_decommissionTimeoutHasBeenSet(false),
    m_instanceResizePolicyHasBeenSet(false)
{
}

ShrinkPolicy::ShrinkPolicy(JsonView jsonValue) : 
    m_decommissionTimeout(0),
    m_decommissionTimeoutHasBeenSet(false),
    m_instanceResizePolicyHasBeenSet(false)
{
  *this = jsonValue;
}

ShrinkPolicy& ShrinkPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DecommissionTimeout"))
  {
    m_decommissionTimeout = jsonValue.GetInteger("DecommissionTimeout");

    m_decommissionTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceResizePolicy"))
  {
    m_instanceResizePolicy = jsonValue.GetObject("InstanceResizePolicy");

    m_instanceResizePolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue ShrinkPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_decommissionTimeoutHasBeenSet)
  {
   payload.WithInteger("DecommissionTimeout", m_decommissionTimeout);

  }

  if(m_instanceResizePolicyHasBeenSet)
  {
   payload.WithObject("InstanceResizePolicy", m_instanceResizePolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
