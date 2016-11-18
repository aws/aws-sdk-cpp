/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/model/DomainConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

DomainConfiguration::DomainConfiguration() : 
    m_workflowExecutionRetentionPeriodInDaysHasBeenSet(false)
{
}

DomainConfiguration::DomainConfiguration(const JsonValue& jsonValue) : 
    m_workflowExecutionRetentionPeriodInDaysHasBeenSet(false)
{
  *this = jsonValue;
}

DomainConfiguration& DomainConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("workflowExecutionRetentionPeriodInDays"))
  {
    m_workflowExecutionRetentionPeriodInDays = jsonValue.GetString("workflowExecutionRetentionPeriodInDays");

    m_workflowExecutionRetentionPeriodInDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_workflowExecutionRetentionPeriodInDaysHasBeenSet)
  {
   payload.WithString("workflowExecutionRetentionPeriodInDays", m_workflowExecutionRetentionPeriodInDays);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws