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
