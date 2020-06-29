/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/LaunchTemplateSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
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

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchTemplateSpecification::Jsonize() const
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

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
