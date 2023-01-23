/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/QueryParameterMatch.h>
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

QueryParameterMatch::QueryParameterMatch() : 
    m_exactHasBeenSet(false)
{
}

QueryParameterMatch::QueryParameterMatch(JsonView jsonValue) : 
    m_exactHasBeenSet(false)
{
  *this = jsonValue;
}

QueryParameterMatch& QueryParameterMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exact"))
  {
    m_exact = jsonValue.GetString("exact");

    m_exactHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryParameterMatch::Jsonize() const
{
  JsonValue payload;

  if(m_exactHasBeenSet)
  {
   payload.WithString("exact", m_exact);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
