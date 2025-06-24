/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/aiops/model/CrossAccountConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AIOps
{
namespace Model
{

CrossAccountConfiguration::CrossAccountConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CrossAccountConfiguration& CrossAccountConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceRoleArn"))
  {
    m_sourceRoleArn = jsonValue.GetString("sourceRoleArn");
    m_sourceRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CrossAccountConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sourceRoleArnHasBeenSet)
  {
   payload.WithString("sourceRoleArn", m_sourceRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace AIOps
} // namespace Aws
