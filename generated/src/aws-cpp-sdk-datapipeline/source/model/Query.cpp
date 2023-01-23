/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/Query.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

Query::Query() : 
    m_selectorsHasBeenSet(false)
{
}

Query::Query(JsonView jsonValue) : 
    m_selectorsHasBeenSet(false)
{
  *this = jsonValue;
}

Query& Query::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("selectors"))
  {
    Aws::Utils::Array<JsonView> selectorsJsonList = jsonValue.GetArray("selectors");
    for(unsigned selectorsIndex = 0; selectorsIndex < selectorsJsonList.GetLength(); ++selectorsIndex)
    {
      m_selectors.push_back(selectorsJsonList[selectorsIndex].AsObject());
    }
    m_selectorsHasBeenSet = true;
  }

  return *this;
}

JsonValue Query::Jsonize() const
{
  JsonValue payload;

  if(m_selectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectorsJsonList(m_selectors.size());
   for(unsigned selectorsIndex = 0; selectorsIndex < selectorsJsonList.GetLength(); ++selectorsIndex)
   {
     selectorsJsonList[selectorsIndex].AsObject(m_selectors[selectorsIndex].Jsonize());
   }
   payload.WithArray("selectors", std::move(selectorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
