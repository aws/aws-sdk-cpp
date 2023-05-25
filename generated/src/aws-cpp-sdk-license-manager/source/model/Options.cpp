/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/Options.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

Options::Options() : 
    m_activationOverrideBehavior(ActivationOverrideBehavior::NOT_SET),
    m_activationOverrideBehaviorHasBeenSet(false)
{
}

Options::Options(JsonView jsonValue) : 
    m_activationOverrideBehavior(ActivationOverrideBehavior::NOT_SET),
    m_activationOverrideBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

Options& Options::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActivationOverrideBehavior"))
  {
    m_activationOverrideBehavior = ActivationOverrideBehaviorMapper::GetActivationOverrideBehaviorForName(jsonValue.GetString("ActivationOverrideBehavior"));

    m_activationOverrideBehaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue Options::Jsonize() const
{
  JsonValue payload;

  if(m_activationOverrideBehaviorHasBeenSet)
  {
   payload.WithString("ActivationOverrideBehavior", ActivationOverrideBehaviorMapper::GetNameForActivationOverrideBehavior(m_activationOverrideBehavior));
  }

  return payload;
}

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
