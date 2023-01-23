/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/S3AccessPointConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

S3AccessPointConfiguration::S3AccessPointConfiguration() : 
    m_accessPointPolicyHasBeenSet(false),
    m_publicAccessBlockHasBeenSet(false),
    m_networkOriginHasBeenSet(false)
{
}

S3AccessPointConfiguration::S3AccessPointConfiguration(JsonView jsonValue) : 
    m_accessPointPolicyHasBeenSet(false),
    m_publicAccessBlockHasBeenSet(false),
    m_networkOriginHasBeenSet(false)
{
  *this = jsonValue;
}

S3AccessPointConfiguration& S3AccessPointConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessPointPolicy"))
  {
    m_accessPointPolicy = jsonValue.GetString("accessPointPolicy");

    m_accessPointPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publicAccessBlock"))
  {
    m_publicAccessBlock = jsonValue.GetObject("publicAccessBlock");

    m_publicAccessBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkOrigin"))
  {
    m_networkOrigin = jsonValue.GetObject("networkOrigin");

    m_networkOriginHasBeenSet = true;
  }

  return *this;
}

JsonValue S3AccessPointConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_accessPointPolicyHasBeenSet)
  {
   payload.WithString("accessPointPolicy", m_accessPointPolicy);

  }

  if(m_publicAccessBlockHasBeenSet)
  {
   payload.WithObject("publicAccessBlock", m_publicAccessBlock.Jsonize());

  }

  if(m_networkOriginHasBeenSet)
  {
   payload.WithObject("networkOrigin", m_networkOrigin.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
