/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/CrossRegionCopyAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

CrossRegionCopyAction::CrossRegionCopyAction() : 
    m_targetHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_retainRuleHasBeenSet(false)
{
}

CrossRegionCopyAction::CrossRegionCopyAction(JsonView jsonValue) : 
    m_targetHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_retainRuleHasBeenSet(false)
{
  *this = jsonValue;
}

CrossRegionCopyAction& CrossRegionCopyAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetainRule"))
  {
    m_retainRule = jsonValue.GetObject("RetainRule");

    m_retainRuleHasBeenSet = true;
  }

  return *this;
}

JsonValue CrossRegionCopyAction::Jsonize() const
{
  JsonValue payload;

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_retainRuleHasBeenSet)
  {
   payload.WithObject("RetainRule", m_retainRule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
