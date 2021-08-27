/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/FindingSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

FindingSource::FindingSource() : 
    m_detailHasBeenSet(false),
    m_type(FindingSourceType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

FindingSource::FindingSource(JsonView jsonValue) : 
    m_detailHasBeenSet(false),
    m_type(FindingSourceType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

FindingSource& FindingSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("detail"))
  {
    m_detail = jsonValue.GetObject("detail");

    m_detailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = FindingSourceTypeMapper::GetFindingSourceTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingSource::Jsonize() const
{
  JsonValue payload;

  if(m_detailHasBeenSet)
  {
   payload.WithObject("detail", m_detail.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", FindingSourceTypeMapper::GetNameForFindingSourceType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
