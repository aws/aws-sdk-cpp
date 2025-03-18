/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/WebACLHasIncompatibleConfigurationViolation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

WebACLHasIncompatibleConfigurationViolation::WebACLHasIncompatibleConfigurationViolation(JsonView jsonValue)
{
  *this = jsonValue;
}

WebACLHasIncompatibleConfigurationViolation& WebACLHasIncompatibleConfigurationViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WebACLArn"))
  {
    m_webACLArn = jsonValue.GetString("WebACLArn");
    m_webACLArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue WebACLHasIncompatibleConfigurationViolation::Jsonize() const
{
  JsonValue payload;

  if(m_webACLArnHasBeenSet)
  {
   payload.WithString("WebACLArn", m_webACLArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
