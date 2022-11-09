/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/Index.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

Index::Index() : 
    m_arnHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_type(IndexType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Index::Index(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_type(IndexType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Index& Index::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = IndexTypeMapper::GetIndexTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Index::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", IndexTypeMapper::GetNameForIndexType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
