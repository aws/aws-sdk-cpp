/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/SecurityProfileTargetMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

SecurityProfileTargetMapping::SecurityProfileTargetMapping() : 
    m_securityProfileIdentifierHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

SecurityProfileTargetMapping::SecurityProfileTargetMapping(JsonView jsonValue) : 
    m_securityProfileIdentifierHasBeenSet(false),
    m_targetHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityProfileTargetMapping& SecurityProfileTargetMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("securityProfileIdentifier"))
  {
    m_securityProfileIdentifier = jsonValue.GetObject("securityProfileIdentifier");

    m_securityProfileIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetObject("target");

    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityProfileTargetMapping::Jsonize() const
{
  JsonValue payload;

  if(m_securityProfileIdentifierHasBeenSet)
  {
   payload.WithObject("securityProfileIdentifier", m_securityProfileIdentifier.Jsonize());

  }

  if(m_targetHasBeenSet)
  {
   payload.WithObject("target", m_target.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
