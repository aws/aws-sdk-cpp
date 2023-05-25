/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/HttpPathMatch.h>
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

HttpPathMatch::HttpPathMatch() : 
    m_exactHasBeenSet(false),
    m_regexHasBeenSet(false)
{
}

HttpPathMatch::HttpPathMatch(JsonView jsonValue) : 
    m_exactHasBeenSet(false),
    m_regexHasBeenSet(false)
{
  *this = jsonValue;
}

HttpPathMatch& HttpPathMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exact"))
  {
    m_exact = jsonValue.GetString("exact");

    m_exactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regex"))
  {
    m_regex = jsonValue.GetString("regex");

    m_regexHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpPathMatch::Jsonize() const
{
  JsonValue payload;

  if(m_exactHasBeenSet)
  {
   payload.WithString("exact", m_exact);

  }

  if(m_regexHasBeenSet)
  {
   payload.WithString("regex", m_regex);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
