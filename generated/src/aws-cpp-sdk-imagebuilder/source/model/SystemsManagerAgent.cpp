/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/SystemsManagerAgent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

SystemsManagerAgent::SystemsManagerAgent() : 
    m_uninstallAfterBuild(false),
    m_uninstallAfterBuildHasBeenSet(false)
{
}

SystemsManagerAgent::SystemsManagerAgent(JsonView jsonValue) : 
    m_uninstallAfterBuild(false),
    m_uninstallAfterBuildHasBeenSet(false)
{
  *this = jsonValue;
}

SystemsManagerAgent& SystemsManagerAgent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("uninstallAfterBuild"))
  {
    m_uninstallAfterBuild = jsonValue.GetBool("uninstallAfterBuild");

    m_uninstallAfterBuildHasBeenSet = true;
  }

  return *this;
}

JsonValue SystemsManagerAgent::Jsonize() const
{
  JsonValue payload;

  if(m_uninstallAfterBuildHasBeenSet)
  {
   payload.WithBool("uninstallAfterBuild", m_uninstallAfterBuild);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
