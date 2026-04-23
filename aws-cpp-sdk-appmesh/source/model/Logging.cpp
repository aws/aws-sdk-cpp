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

#include <aws/appmesh/model/Logging.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

Logging::Logging() : 
    m_accessLogHasBeenSet(false)
{
}

Logging::Logging(JsonView jsonValue) : 
    m_accessLogHasBeenSet(false)
{
  *this = jsonValue;
}

Logging& Logging::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessLog"))
  {
    m_accessLog = jsonValue.GetObject("accessLog");

    m_accessLogHasBeenSet = true;
  }

  return *this;
}

JsonValue Logging::Jsonize() const
{
  JsonValue payload;

  if(m_accessLogHasBeenSet)
  {
   payload.WithObject("accessLog", m_accessLog.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
