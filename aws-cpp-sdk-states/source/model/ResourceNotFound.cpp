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

#include <aws/states/model/ResourceNotFound.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

ResourceNotFound::ResourceNotFound() : 
    m_messageHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
}

ResourceNotFound::ResourceNotFound(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceNotFound& ResourceNotFound::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceName"))
  {
    m_resourceName = jsonValue.GetString("resourceName");

    m_resourceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceNotFound::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
