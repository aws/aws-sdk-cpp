/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/MultitrackInputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

MultitrackInputConfiguration::MultitrackInputConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

MultitrackInputConfiguration& MultitrackInputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maximumResolution"))
  {
    m_maximumResolution = MultitrackMaximumResolutionMapper::GetMultitrackMaximumResolutionForName(jsonValue.GetString("maximumResolution"));
    m_maximumResolutionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policy"))
  {
    m_policy = MultitrackPolicyMapper::GetMultitrackPolicyForName(jsonValue.GetString("policy"));
    m_policyHasBeenSet = true;
  }
  return *this;
}

JsonValue MultitrackInputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_maximumResolutionHasBeenSet)
  {
   payload.WithString("maximumResolution", MultitrackMaximumResolutionMapper::GetNameForMultitrackMaximumResolution(m_maximumResolution));
  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("policy", MultitrackPolicyMapper::GetNameForMultitrackPolicy(m_policy));
  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
