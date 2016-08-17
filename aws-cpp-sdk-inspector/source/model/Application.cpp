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
#include <aws/inspector/model/Application.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

Application::Application() : 
    m_applicationArnHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_resourceGroupArnHasBeenSet(false)
{
}

Application::Application(const JsonValue& jsonValue) : 
    m_applicationArnHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_resourceGroupArnHasBeenSet(false)
{
  *this = jsonValue;
}

Application& Application::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("applicationArn"))
  {
    m_applicationArn = jsonValue.GetString("applicationArn");

    m_applicationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationName"))
  {
    m_applicationName = jsonValue.GetString("applicationName");

    m_applicationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceGroupArn"))
  {
    m_resourceGroupArn = jsonValue.GetString("resourceGroupArn");

    m_resourceGroupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Application::Jsonize() const
{
  JsonValue payload;

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("applicationArn", m_applicationArn);

  }

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("applicationName", m_applicationName);

  }

  if(m_resourceGroupArnHasBeenSet)
  {
   payload.WithString("resourceGroupArn", m_resourceGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws