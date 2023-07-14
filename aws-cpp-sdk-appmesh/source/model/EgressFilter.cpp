/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/EgressFilter.h>
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

EgressFilter::EgressFilter() : 
    m_type(EgressFilterType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

EgressFilter::EgressFilter(JsonView jsonValue) : 
    m_type(EgressFilterType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

EgressFilter& EgressFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = EgressFilterTypeMapper::GetEgressFilterTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue EgressFilter::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", EgressFilterTypeMapper::GetNameForEgressFilterType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
