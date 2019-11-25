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

#include <aws/kinesisanalyticsv2/model/FlinkRunConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

FlinkRunConfiguration::FlinkRunConfiguration() : 
    m_allowNonRestoredState(false),
    m_allowNonRestoredStateHasBeenSet(false)
{
}

FlinkRunConfiguration::FlinkRunConfiguration(JsonView jsonValue) : 
    m_allowNonRestoredState(false),
    m_allowNonRestoredStateHasBeenSet(false)
{
  *this = jsonValue;
}

FlinkRunConfiguration& FlinkRunConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowNonRestoredState"))
  {
    m_allowNonRestoredState = jsonValue.GetBool("AllowNonRestoredState");

    m_allowNonRestoredStateHasBeenSet = true;
  }

  return *this;
}

JsonValue FlinkRunConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_allowNonRestoredStateHasBeenSet)
  {
   payload.WithBool("AllowNonRestoredState", m_allowNonRestoredState);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
