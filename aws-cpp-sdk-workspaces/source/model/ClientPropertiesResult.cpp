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

#include <aws/workspaces/model/ClientPropertiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

ClientPropertiesResult::ClientPropertiesResult() : 
    m_resourceIdHasBeenSet(false),
    m_clientPropertiesHasBeenSet(false)
{
}

ClientPropertiesResult::ClientPropertiesResult(JsonView jsonValue) : 
    m_resourceIdHasBeenSet(false),
    m_clientPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

ClientPropertiesResult& ClientPropertiesResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientProperties"))
  {
    m_clientProperties = jsonValue.GetObject("ClientProperties");

    m_clientPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue ClientPropertiesResult::Jsonize() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_clientPropertiesHasBeenSet)
  {
   payload.WithObject("ClientProperties", m_clientProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
