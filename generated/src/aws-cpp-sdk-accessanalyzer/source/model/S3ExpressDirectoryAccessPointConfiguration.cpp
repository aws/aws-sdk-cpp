/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/S3ExpressDirectoryAccessPointConfiguration.h>
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

S3ExpressDirectoryAccessPointConfiguration::S3ExpressDirectoryAccessPointConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

S3ExpressDirectoryAccessPointConfiguration& S3ExpressDirectoryAccessPointConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessPointPolicy"))
  {
    m_accessPointPolicy = jsonValue.GetString("accessPointPolicy");
    m_accessPointPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkOrigin"))
  {
    m_networkOrigin = jsonValue.GetObject("networkOrigin");
    m_networkOriginHasBeenSet = true;
  }
  return *this;
}

JsonValue S3ExpressDirectoryAccessPointConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_accessPointPolicyHasBeenSet)
  {
   payload.WithString("accessPointPolicy", m_accessPointPolicy);

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
