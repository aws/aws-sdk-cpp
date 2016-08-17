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
#include <aws/elasticmapreduce/model/InstanceGroupTimeline.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

InstanceGroupTimeline::InstanceGroupTimeline() : 
    m_creationDateTimeHasBeenSet(false),
    m_readyDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
}

InstanceGroupTimeline::InstanceGroupTimeline(const JsonValue& jsonValue) : 
    m_creationDateTimeHasBeenSet(false),
    m_readyDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceGroupTimeline& InstanceGroupTimeline::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("CreationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("CreationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadyDateTime"))
  {
    m_readyDateTime = jsonValue.GetDouble("ReadyDateTime");

    m_readyDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndDateTime"))
  {
    m_endDateTime = jsonValue.GetDouble("EndDateTime");

    m_endDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceGroupTimeline::Jsonize() const
{
  JsonValue payload;

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("CreationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_readyDateTimeHasBeenSet)
  {
   payload.WithDouble("ReadyDateTime", m_readyDateTime.SecondsWithMSPrecision());
  }

  if(m_endDateTimeHasBeenSet)
  {
   payload.WithDouble("EndDateTime", m_endDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws