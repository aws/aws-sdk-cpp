/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/HttpQueryParameter.h>
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

HttpQueryParameter::HttpQueryParameter() : 
    m_matchHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

HttpQueryParameter::HttpQueryParameter(JsonView jsonValue) : 
    m_matchHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

HttpQueryParameter& HttpQueryParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("match"))
  {
    m_match = jsonValue.GetObject("match");

    m_matchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpQueryParameter::Jsonize() const
{
  JsonValue payload;

  if(m_matchHasBeenSet)
  {
   payload.WithObject("match", m_match.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
