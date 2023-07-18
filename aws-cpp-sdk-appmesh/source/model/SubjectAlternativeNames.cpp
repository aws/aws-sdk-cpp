/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/SubjectAlternativeNames.h>
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

SubjectAlternativeNames::SubjectAlternativeNames() : 
    m_matchHasBeenSet(false)
{
}

SubjectAlternativeNames::SubjectAlternativeNames(JsonView jsonValue) : 
    m_matchHasBeenSet(false)
{
  *this = jsonValue;
}

SubjectAlternativeNames& SubjectAlternativeNames::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("match"))
  {
    m_match = jsonValue.GetObject("match");

    m_matchHasBeenSet = true;
  }

  return *this;
}

JsonValue SubjectAlternativeNames::Jsonize() const
{
  JsonValue payload;

  if(m_matchHasBeenSet)
  {
   payload.WithObject("match", m_match.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
