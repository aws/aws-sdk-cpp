/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeSecurityResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CodeSecurityResource::CodeSecurityResource(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeSecurityResource& CodeSecurityResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");
    m_projectIdHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeSecurityResource::Jsonize() const
{
  JsonValue payload;

  if(m_projectIdHasBeenSet)
  {
   payload.WithString("projectId", m_projectId);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
