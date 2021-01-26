/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
