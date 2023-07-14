/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/LambdaLinuxProcessParams.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

LambdaLinuxProcessParams::LambdaLinuxProcessParams() : 
    m_isolationMode(LambdaIsolationMode::NOT_SET),
    m_isolationModeHasBeenSet(false),
    m_containerParamsHasBeenSet(false)
{
}

LambdaLinuxProcessParams::LambdaLinuxProcessParams(JsonView jsonValue) : 
    m_isolationMode(LambdaIsolationMode::NOT_SET),
    m_isolationModeHasBeenSet(false),
    m_containerParamsHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaLinuxProcessParams& LambdaLinuxProcessParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isolationMode"))
  {
    m_isolationMode = LambdaIsolationModeMapper::GetLambdaIsolationModeForName(jsonValue.GetString("isolationMode"));

    m_isolationModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerParams"))
  {
    m_containerParams = jsonValue.GetObject("containerParams");

    m_containerParamsHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaLinuxProcessParams::Jsonize() const
{
  JsonValue payload;

  if(m_isolationModeHasBeenSet)
  {
   payload.WithString("isolationMode", LambdaIsolationModeMapper::GetNameForLambdaIsolationMode(m_isolationMode));
  }

  if(m_containerParamsHasBeenSet)
  {
   payload.WithObject("containerParams", m_containerParams.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
