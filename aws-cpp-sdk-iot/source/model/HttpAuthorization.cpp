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

#include <aws/iot/model/HttpAuthorization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

HttpAuthorization::HttpAuthorization() : 
    m_sigv4HasBeenSet(false)
{
}

HttpAuthorization::HttpAuthorization(JsonView jsonValue) : 
    m_sigv4HasBeenSet(false)
{
  *this = jsonValue;
}

HttpAuthorization& HttpAuthorization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sigv4"))
  {
    m_sigv4 = jsonValue.GetObject("sigv4");

    m_sigv4HasBeenSet = true;
  }

  return *this;
}

JsonValue HttpAuthorization::Jsonize() const
{
  JsonValue payload;

  if(m_sigv4HasBeenSet)
  {
   payload.WithObject("sigv4", m_sigv4.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
