/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/ContainerLogRotationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

ContainerLogRotationConfiguration::ContainerLogRotationConfiguration() : 
    m_rotationSizeHasBeenSet(false),
    m_maxFilesToKeep(0),
    m_maxFilesToKeepHasBeenSet(false)
{
}

ContainerLogRotationConfiguration::ContainerLogRotationConfiguration(JsonView jsonValue) : 
    m_rotationSizeHasBeenSet(false),
    m_maxFilesToKeep(0),
    m_maxFilesToKeepHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerLogRotationConfiguration& ContainerLogRotationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rotationSize"))
  {
    m_rotationSize = jsonValue.GetString("rotationSize");

    m_rotationSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxFilesToKeep"))
  {
    m_maxFilesToKeep = jsonValue.GetInteger("maxFilesToKeep");

    m_maxFilesToKeepHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerLogRotationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_rotationSizeHasBeenSet)
  {
   payload.WithString("rotationSize", m_rotationSize);

  }

  if(m_maxFilesToKeepHasBeenSet)
  {
   payload.WithInteger("maxFilesToKeep", m_maxFilesToKeep);

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
