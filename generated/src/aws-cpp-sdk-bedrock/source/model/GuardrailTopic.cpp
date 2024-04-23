/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailTopic.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

GuardrailTopic::GuardrailTopic() : 
    m_nameHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_examplesHasBeenSet(false),
    m_type(GuardrailTopicType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

GuardrailTopic::GuardrailTopic(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_examplesHasBeenSet(false),
    m_type(GuardrailTopicType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

GuardrailTopic& GuardrailTopic::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetString("definition");

    m_definitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("examples"))
  {
    Aws::Utils::Array<JsonView> examplesJsonList = jsonValue.GetArray("examples");
    for(unsigned examplesIndex = 0; examplesIndex < examplesJsonList.GetLength(); ++examplesIndex)
    {
      m_examples.push_back(examplesJsonList[examplesIndex].AsString());
    }
    m_examplesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = GuardrailTopicTypeMapper::GetGuardrailTopicTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue GuardrailTopic::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithString("definition", m_definition);

  }

  if(m_examplesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> examplesJsonList(m_examples.size());
   for(unsigned examplesIndex = 0; examplesIndex < examplesJsonList.GetLength(); ++examplesIndex)
   {
     examplesJsonList[examplesIndex].AsString(m_examples[examplesIndex]);
   }
   payload.WithArray("examples", std::move(examplesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GuardrailTopicTypeMapper::GetNameForGuardrailTopicType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
