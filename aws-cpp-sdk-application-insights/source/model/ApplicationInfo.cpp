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

#include <aws/application-insights/model/ApplicationInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

ApplicationInfo::ApplicationInfo() : 
    m_resourceGroupNameHasBeenSet(false),
    m_lifeCycleHasBeenSet(false),
    m_remarksHasBeenSet(false)
{
}

ApplicationInfo::ApplicationInfo(JsonView jsonValue) : 
    m_resourceGroupNameHasBeenSet(false),
    m_lifeCycleHasBeenSet(false),
    m_remarksHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationInfo& ApplicationInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceGroupName"))
  {
    m_resourceGroupName = jsonValue.GetString("ResourceGroupName");

    m_resourceGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LifeCycle"))
  {
    m_lifeCycle = jsonValue.GetString("LifeCycle");

    m_lifeCycleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Remarks"))
  {
    m_remarks = jsonValue.GetString("Remarks");

    m_remarksHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationInfo::Jsonize() const
{
  JsonValue payload;

  if(m_resourceGroupNameHasBeenSet)
  {
   payload.WithString("ResourceGroupName", m_resourceGroupName);

  }

  if(m_lifeCycleHasBeenSet)
  {
   payload.WithString("LifeCycle", m_lifeCycle);

  }

  if(m_remarksHasBeenSet)
  {
   payload.WithString("Remarks", m_remarks);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
