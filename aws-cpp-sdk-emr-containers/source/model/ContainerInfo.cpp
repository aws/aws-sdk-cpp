/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/ContainerInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

ContainerInfo::ContainerInfo() : 
    m_eksInfoHasBeenSet(false)
{
}

ContainerInfo::ContainerInfo(JsonView jsonValue) : 
    m_eksInfoHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerInfo& ContainerInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eksInfo"))
  {
    m_eksInfo = jsonValue.GetObject("eksInfo");

    m_eksInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerInfo::Jsonize() const
{
  JsonValue payload;

  if(m_eksInfoHasBeenSet)
  {
   payload.WithObject("eksInfo", m_eksInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
