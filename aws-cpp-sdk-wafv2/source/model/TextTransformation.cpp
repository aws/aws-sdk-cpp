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

#include <aws/wafv2/model/TextTransformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

TextTransformation::TextTransformation() : 
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_type(TextTransformationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

TextTransformation::TextTransformation(JsonView jsonValue) : 
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_type(TextTransformationType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

TextTransformation& TextTransformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = TextTransformationTypeMapper::GetTextTransformationTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue TextTransformation::Jsonize() const
{
  JsonValue payload;

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TextTransformationTypeMapper::GetNameForTextTransformationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
