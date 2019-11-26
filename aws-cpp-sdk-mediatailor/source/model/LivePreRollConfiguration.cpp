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

#include <aws/mediatailor/model/LivePreRollConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

LivePreRollConfiguration::LivePreRollConfiguration() : 
    m_adDecisionServerUrlHasBeenSet(false),
    m_maxDurationSeconds(0),
    m_maxDurationSecondsHasBeenSet(false)
{
}

LivePreRollConfiguration::LivePreRollConfiguration(JsonView jsonValue) : 
    m_adDecisionServerUrlHasBeenSet(false),
    m_maxDurationSeconds(0),
    m_maxDurationSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

LivePreRollConfiguration& LivePreRollConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdDecisionServerUrl"))
  {
    m_adDecisionServerUrl = jsonValue.GetString("AdDecisionServerUrl");

    m_adDecisionServerUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxDurationSeconds"))
  {
    m_maxDurationSeconds = jsonValue.GetInteger("MaxDurationSeconds");

    m_maxDurationSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue LivePreRollConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_adDecisionServerUrlHasBeenSet)
  {
   payload.WithString("AdDecisionServerUrl", m_adDecisionServerUrl);

  }

  if(m_maxDurationSecondsHasBeenSet)
  {
   payload.WithInteger("MaxDurationSeconds", m_maxDurationSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
