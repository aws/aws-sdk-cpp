/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

CampaignHook::CampaignHook(const JsonValue& jsonValue) : 
    m_lambdaFunctionNameHasBeenSet(false),
    m_mode(Mode::NOT_SET),
    m_modeHasBeenSet(false),
    m_webUrlHasBeenSet(false)
{
  *this = jsonValue;
}

CampaignHook& CampaignHook::operator =(const JsonValue& jsonValue)
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
