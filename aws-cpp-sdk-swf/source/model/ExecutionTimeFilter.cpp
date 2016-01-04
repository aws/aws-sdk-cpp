/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/model/ExecutionTimeFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExecutionTimeFilter::ExecutionTimeFilter() : 
    m_oldestDate(0.0),
    m_oldestDateHasBeenSet(false),
    m_latestDate(0.0),
    m_latestDateHasBeenSet(false)
{
}

ExecutionTimeFilter::ExecutionTimeFilter(const JsonValue& jsonValue) : 
    m_oldestDate(0.0),
    m_oldestDateHasBeenSet(false),
    m_latestDate(0.0),
    m_latestDateHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionTimeFilter& ExecutionTimeFilter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("oldestDate"))
  {
    m_oldestDate = jsonValue.GetDouble("oldestDate");

    m_oldestDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestDate"))
  {
    m_latestDate = jsonValue.GetDouble("latestDate");

    m_latestDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionTimeFilter::Jsonize() const
{
  JsonValue payload;

  if(m_oldestDateHasBeenSet)
  {
   payload.WithDouble("oldestDate", m_oldestDate);

  }

  if(m_latestDateHasBeenSet)
  {
   payload.WithDouble("latestDate", m_latestDate);

  }

  return std::move(payload);
}