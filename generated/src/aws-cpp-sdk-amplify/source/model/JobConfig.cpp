/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/JobConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

JobConfig::JobConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

JobConfig& JobConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("buildComputeType"))
  {
    m_buildComputeType = BuildComputeTypeMapper::GetBuildComputeTypeForName(jsonValue.GetString("buildComputeType"));
    m_buildComputeTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue JobConfig::Jsonize() const
{
  JsonValue payload;

  if(m_buildComputeTypeHasBeenSet)
  {
   payload.WithString("buildComputeType", BuildComputeTypeMapper::GetNameForBuildComputeType(m_buildComputeType));
  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
