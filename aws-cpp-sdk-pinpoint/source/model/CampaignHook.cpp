/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CampaignHook.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

CampaignHook::CampaignHook() : 
    m_lambdaFunctionNameHasBeenSet(false),
    m_mode(Mode::NOT_SET),
    m_modeHasBeenSet(false),
    m_webUrlHasBeenSet(false)
{
}

CampaignHook::CampaignHook(JsonView jsonValue) : 
    m_lambdaFunctionNameHasBeenSet(false),
    m_mode(Mode::NOT_SET),
    m_modeHasBeenSet(false),
    m_webUrlHasBeenSet(false)
{
  *this = jsonValue;
}

CampaignHook& CampaignHook::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LambdaFunctionName"))
  {
    m_lambdaFunctionName = jsonValue.GetString("LambdaFunctionName");

    m_lambdaFunctionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = ModeMapper::GetModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WebUrl"))
  {
    m_webUrl = jsonValue.GetString("WebUrl");

    m_webUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue CampaignHook::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaFunctionNameHasBeenSet)
  {
   payload.WithString("LambdaFunctionName", m_lambdaFunctionName);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", ModeMapper::GetNameForMode(m_mode));
  }

  if(m_webUrlHasBeenSet)
  {
   payload.WithString("WebUrl", m_webUrl);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
