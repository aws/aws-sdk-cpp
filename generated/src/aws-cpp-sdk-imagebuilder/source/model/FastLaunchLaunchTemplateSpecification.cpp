/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/FastLaunchLaunchTemplateSpecification.h>
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

FastLaunchLaunchTemplateSpecification::FastLaunchLaunchTemplateSpecification() : 
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_launchTemplateVersionHasBeenSet(false)
{
}

FastLaunchLaunchTemplateSpecification::FastLaunchLaunchTemplateSpecification(JsonView jsonValue) : 
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_launchTemplateVersionHasBeenSet(false)
{
  *this = jsonValue;
}

FastLaunchLaunchTemplateSpecification& FastLaunchLaunchTemplateSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("launchTemplateId"))
  {
    m_launchTemplateId = jsonValue.GetString("launchTemplateId");

    m_launchTemplateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchTemplateName"))
  {
    m_launchTemplateName = jsonValue.GetString("launchTemplateName");

    m_launchTemplateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchTemplateVersion"))
  {
    m_launchTemplateVersion = jsonValue.GetString("launchTemplateVersion");

    m_launchTemplateVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue FastLaunchLaunchTemplateSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_launchTemplateIdHasBeenSet)
  {
   payload.WithString("launchTemplateId", m_launchTemplateId);

  }

  if(m_launchTemplateNameHasBeenSet)
  {
   payload.WithString("launchTemplateName", m_launchTemplateName);

  }

  if(m_launchTemplateVersionHasBeenSet)
  {
   payload.WithString("launchTemplateVersion", m_launchTemplateVersion);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
