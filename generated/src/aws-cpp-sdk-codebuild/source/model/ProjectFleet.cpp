/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ProjectFleet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

ProjectFleet::ProjectFleet() : 
    m_fleetArnHasBeenSet(false)
{
}

ProjectFleet::ProjectFleet(JsonView jsonValue) : 
    m_fleetArnHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectFleet& ProjectFleet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fleetArn"))
  {
    m_fleetArn = jsonValue.GetString("fleetArn");

    m_fleetArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectFleet::Jsonize() const
{
  JsonValue payload;

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("fleetArn", m_fleetArn);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
