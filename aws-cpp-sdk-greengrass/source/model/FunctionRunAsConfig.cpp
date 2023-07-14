/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/FunctionRunAsConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

FunctionRunAsConfig::FunctionRunAsConfig() : 
    m_gid(0),
    m_gidHasBeenSet(false),
    m_uid(0),
    m_uidHasBeenSet(false)
{
}

FunctionRunAsConfig::FunctionRunAsConfig(JsonView jsonValue) : 
    m_gid(0),
    m_gidHasBeenSet(false),
    m_uid(0),
    m_uidHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionRunAsConfig& FunctionRunAsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Gid"))
  {
    m_gid = jsonValue.GetInteger("Gid");

    m_gidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Uid"))
  {
    m_uid = jsonValue.GetInteger("Uid");

    m_uidHasBeenSet = true;
  }

  return *this;
}

JsonValue FunctionRunAsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_gidHasBeenSet)
  {
   payload.WithInteger("Gid", m_gid);

  }

  if(m_uidHasBeenSet)
  {
   payload.WithInteger("Uid", m_uid);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
