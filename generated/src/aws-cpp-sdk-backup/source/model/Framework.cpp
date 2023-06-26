/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/Framework.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

Framework::Framework() : 
    m_frameworkNameHasBeenSet(false),
    m_frameworkArnHasBeenSet(false),
    m_frameworkDescriptionHasBeenSet(false),
    m_numberOfControls(0),
    m_numberOfControlsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_deploymentStatusHasBeenSet(false)
{
}

Framework::Framework(JsonView jsonValue) : 
    m_frameworkNameHasBeenSet(false),
    m_frameworkArnHasBeenSet(false),
    m_frameworkDescriptionHasBeenSet(false),
    m_numberOfControls(0),
    m_numberOfControlsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_deploymentStatusHasBeenSet(false)
{
  *this = jsonValue;
}

Framework& Framework::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FrameworkName"))
  {
    m_frameworkName = jsonValue.GetString("FrameworkName");

    m_frameworkNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FrameworkArn"))
  {
    m_frameworkArn = jsonValue.GetString("FrameworkArn");

    m_frameworkArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FrameworkDescription"))
  {
    m_frameworkDescription = jsonValue.GetString("FrameworkDescription");

    m_frameworkDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfControls"))
  {
    m_numberOfControls = jsonValue.GetInteger("NumberOfControls");

    m_numberOfControlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentStatus"))
  {
    m_deploymentStatus = jsonValue.GetString("DeploymentStatus");

    m_deploymentStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue Framework::Jsonize() const
{
  JsonValue payload;

  if(m_frameworkNameHasBeenSet)
  {
   payload.WithString("FrameworkName", m_frameworkName);

  }

  if(m_frameworkArnHasBeenSet)
  {
   payload.WithString("FrameworkArn", m_frameworkArn);

  }

  if(m_frameworkDescriptionHasBeenSet)
  {
   payload.WithString("FrameworkDescription", m_frameworkDescription);

  }

  if(m_numberOfControlsHasBeenSet)
  {
   payload.WithInteger("NumberOfControls", m_numberOfControls);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_deploymentStatusHasBeenSet)
  {
   payload.WithString("DeploymentStatus", m_deploymentStatus);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
