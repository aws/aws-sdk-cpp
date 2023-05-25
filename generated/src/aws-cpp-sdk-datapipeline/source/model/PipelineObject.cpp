/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/PipelineObject.h>
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

PipelineObject::PipelineObject() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_fieldsHasBeenSet(false)
{
}

PipelineObject::PipelineObject(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_fieldsHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineObject& PipelineObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fields"))
  {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("fields");
    for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
    {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineObject::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_fieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
   for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
   {
     fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
   }
   payload.WithArray("fields", std::move(fieldsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
