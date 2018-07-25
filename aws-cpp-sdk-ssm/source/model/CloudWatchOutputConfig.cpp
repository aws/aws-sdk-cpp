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

#include <aws/ssm/model/CloudWatchOutputConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

CloudWatchOutputConfig::CloudWatchOutputConfig() : 
    m_cloudWatchLogGroupNameHasBeenSet(false),
    m_cloudWatchOutputEnabled(false),
    m_cloudWatchOutputEnabledHasBeenSet(false)
{
}

CloudWatchOutputConfig::CloudWatchOutputConfig(JsonView jsonValue) : 
    m_cloudWatchLogGroupNameHasBeenSet(false),
    m_cloudWatchOutputEnabled(false),
    m_cloudWatchOutputEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchOutputConfig& CloudWatchOutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchLogGroupName"))
  {
    m_cloudWatchLogGroupName = jsonValue.GetString("CloudWatchLogGroupName");

    m_cloudWatchLogGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchOutputEnabled"))
  {
    m_cloudWatchOutputEnabled = jsonValue.GetBool("CloudWatchOutputEnabled");

    m_cloudWatchOutputEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchOutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogGroupNameHasBeenSet)
  {
   payload.WithString("CloudWatchLogGroupName", m_cloudWatchLogGroupName);

  }

  if(m_cloudWatchOutputEnabledHasBeenSet)
  {
   payload.WithBool("CloudWatchOutputEnabled", m_cloudWatchOutputEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
