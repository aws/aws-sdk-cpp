/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RuleAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

RuleAction::RuleAction() : 
    m_blockHasBeenSet(false),
    m_allowHasBeenSet(false),
    m_countHasBeenSet(false),
    m_captchaHasBeenSet(false),
    m_challengeHasBeenSet(false)
{
}

RuleAction::RuleAction(JsonView jsonValue) : 
    m_blockHasBeenSet(false),
    m_allowHasBeenSet(false),
    m_countHasBeenSet(false),
    m_captchaHasBeenSet(false),
    m_challengeHasBeenSet(false)
{
  *this = jsonValue;
}

RuleAction& RuleAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Block"))
  {
    m_block = jsonValue.GetObject("Block");

    m_blockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Allow"))
  {
    m_allow = jsonValue.GetObject("Allow");

    m_allowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetObject("Count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Captcha"))
  {
    m_captcha = jsonValue.GetObject("Captcha");

    m_captchaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Challenge"))
  {
    m_challenge = jsonValue.GetObject("Challenge");

    m_challengeHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleAction::Jsonize() const
{
  JsonValue payload;

  if(m_blockHasBeenSet)
  {
   payload.WithObject("Block", m_block.Jsonize());

  }

  if(m_allowHasBeenSet)
  {
   payload.WithObject("Allow", m_allow.Jsonize());

  }

  if(m_countHasBeenSet)
  {
   payload.WithObject("Count", m_count.Jsonize());

  }

  if(m_captchaHasBeenSet)
  {
   payload.WithObject("Captcha", m_captcha.Jsonize());

  }

  if(m_challengeHasBeenSet)
  {
   payload.WithObject("Challenge", m_challenge.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
