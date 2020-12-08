/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/S3MonitoringConfiguration.h>
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

S3MonitoringConfiguration::S3MonitoringConfiguration() : 
    m_logUriHasBeenSet(false)
{
}

S3MonitoringConfiguration::S3MonitoringConfiguration(JsonView jsonValue) : 
    m_logUriHasBeenSet(false)
{
  *this = jsonValue;
}

S3MonitoringConfiguration& S3MonitoringConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logUri"))
  {
    m_logUri = jsonValue.GetString("logUri");

    m_logUriHasBeenSet = true;
  }

  return *this;
}

JsonValue S3MonitoringConfiguration::Jsonize() const
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
