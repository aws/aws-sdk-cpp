/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/ParametricS3MonitoringConfiguration.h>
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

ParametricS3MonitoringConfiguration::ParametricS3MonitoringConfiguration() : 
    m_logUriHasBeenSet(false)
{
}

ParametricS3MonitoringConfiguration::ParametricS3MonitoringConfiguration(JsonView jsonValue) : 
    m_logUriHasBeenSet(false)
{
  *this = jsonValue;
}

ParametricS3MonitoringConfiguration& ParametricS3MonitoringConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logUri"))
  {
    m_logUri = jsonValue.GetString("logUri");

    m_logUriHasBeenSet = true;
  }

  return *this;
}

JsonValue ParametricS3MonitoringConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_logUriHasBeenSet)
  {
   payload.WithString("logUri", m_logUri);

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
