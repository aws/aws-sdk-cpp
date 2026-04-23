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

#include <aws/servicediscovery/model/HttpProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

HttpProperties::HttpProperties() : 
    m_httpNameHasBeenSet(false)
{
}

HttpProperties::HttpProperties(JsonView jsonValue) : 
    m_httpNameHasBeenSet(false)
{
  *this = jsonValue;
}

HttpProperties& HttpProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HttpName"))
  {
    m_httpName = jsonValue.GetString("HttpName");

    m_httpNameHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpProperties::Jsonize() const
{
  JsonValue payload;

  if(m_httpNameHasBeenSet)
  {
   payload.WithString("HttpName", m_httpName);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
