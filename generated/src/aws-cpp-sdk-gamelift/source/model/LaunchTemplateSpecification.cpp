/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/LaunchTemplateSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

LaunchTemplateSpecification::LaunchTemplateSpecification() : 
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

LaunchTemplateSpecification::LaunchTemplateSpecification(JsonView jsonValue) : 
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchTemplateSpecification& LaunchTemplateSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LaunchTemplateId"))
  {
    m_launchTemplateId = jsonValue.GetString("LaunchTemplateId");

    m_launchTemplateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchTemplateName"))
  {
    m_launchTemplateName = jsonValue.GetString("LaunchTemplateName");

    m_launchTemplateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchTemplateSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_launchTemplateIdHasBeenSet)
  {
   payload.WithString("LaunchTemplateId", m_launchTemplateId);

  }

  if(m_launchTemplateNameHasBeenSet)
  {
   payload.WithString("LaunchTemplateName", m_launchTemplateName);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
