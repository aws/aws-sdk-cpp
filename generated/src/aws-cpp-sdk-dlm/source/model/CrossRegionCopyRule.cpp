/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/CrossRegionCopyRule.h>
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

CrossRegionCopyRule::CrossRegionCopyRule() : 
    m_targetRegionHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_cmkArnHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false),
    m_retainRuleHasBeenSet(false),
    m_deprecateRuleHasBeenSet(false)
{
}

CrossRegionCopyRule::CrossRegionCopyRule(JsonView jsonValue) : 
    m_targetRegionHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_cmkArnHasBeenSet(false),
    m_copyTags(false),
    m_copyTagsHasBeenSet(false),
    m_retainRuleHasBeenSet(false),
    m_deprecateRuleHasBeenSet(false)
{
  *this = jsonValue;
}

CrossRegionCopyRule& CrossRegionCopyRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetRegion"))
  {
    m_targetRegion = jsonValue.GetString("TargetRegion");

    m_targetRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Encrypted"))
  {
    m_encrypted = jsonValue.GetBool("Encrypted");

    m_encryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CmkArn"))
  {
    m_cmkArn = jsonValue.GetString("CmkArn");

    m_cmkArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopyTags"))
  {
    m_copyTags = jsonValue.GetBool("CopyTags");

    m_copyTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetainRule"))
  {
    m_retainRule = jsonValue.GetObject("RetainRule");

    m_retainRuleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeprecateRule"))
  {
    m_deprecateRule = jsonValue.GetObject("DeprecateRule");

    m_deprecateRuleHasBeenSet = true;
  }

  return *this;
}

JsonValue CrossRegionCopyRule::Jsonize() const
{
  JsonValue payload;

  if(m_targetRegionHasBeenSet)
  {
   payload.WithString("TargetRegion", m_targetRegion);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("Encrypted", m_encrypted);

  }

  if(m_cmkArnHasBeenSet)
  {
   payload.WithString("CmkArn", m_cmkArn);

  }

  if(m_copyTagsHasBeenSet)
  {
   payload.WithBool("CopyTags", m_copyTags);

  }

  if(m_retainRuleHasBeenSet)
  {
   payload.WithObject("RetainRule", m_retainRule.Jsonize());

  }

  if(m_deprecateRuleHasBeenSet)
  {
   payload.WithObject("DeprecateRule", m_deprecateRule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
