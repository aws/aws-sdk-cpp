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

#include <aws/sesv2/model/ReputationOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

ReputationOptions::ReputationOptions() : 
    m_reputationMetricsEnabled(false),
    m_reputationMetricsEnabledHasBeenSet(false),
    m_lastFreshStartHasBeenSet(false)
{
}

ReputationOptions::ReputationOptions(JsonView jsonValue) : 
    m_reputationMetricsEnabled(false),
    m_reputationMetricsEnabledHasBeenSet(false),
    m_lastFreshStartHasBeenSet(false)
{
  *this = jsonValue;
}

ReputationOptions& ReputationOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReputationMetricsEnabled"))
  {
    m_reputationMetricsEnabled = jsonValue.GetBool("ReputationMetricsEnabled");

    m_reputationMetricsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastFreshStart"))
  {
    m_lastFreshStart = jsonValue.GetDouble("LastFreshStart");

    m_lastFreshStartHasBeenSet = true;
  }

  return *this;
}

JsonValue ReputationOptions::Jsonize() const
{
  JsonValue payload;

  if(m_reputationMetricsEnabledHasBeenSet)
  {
   payload.WithBool("ReputationMetricsEnabled", m_reputationMetricsEnabled);

  }

  if(m_lastFreshStartHasBeenSet)
  {
   payload.WithDouble("LastFreshStart", m_lastFreshStart.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
