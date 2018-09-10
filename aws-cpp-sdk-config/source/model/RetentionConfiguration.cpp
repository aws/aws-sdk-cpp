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

#include <aws/config/model/RetentionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

RetentionConfiguration::RetentionConfiguration() : 
    m_nameHasBeenSet(false),
    m_retentionPeriodInDays(0),
    m_retentionPeriodInDaysHasBeenSet(false)
{
}

RetentionConfiguration::RetentionConfiguration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_retentionPeriodInDays(0),
    m_retentionPeriodInDaysHasBeenSet(false)
{
  *this = jsonValue;
}

RetentionConfiguration& RetentionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetentionPeriodInDays"))
  {
    m_retentionPeriodInDays = jsonValue.GetInteger("RetentionPeriodInDays");

    m_retentionPeriodInDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue RetentionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_retentionPeriodInDaysHasBeenSet)
  {
   payload.WithInteger("RetentionPeriodInDays", m_retentionPeriodInDays);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
