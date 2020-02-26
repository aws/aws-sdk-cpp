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

#include <aws/transcribe/model/ContentRedaction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

ContentRedaction::ContentRedaction() : 
    m_redactionType(RedactionType::NOT_SET),
    m_redactionTypeHasBeenSet(false),
    m_redactionOutput(RedactionOutput::NOT_SET),
    m_redactionOutputHasBeenSet(false)
{
}

ContentRedaction::ContentRedaction(JsonView jsonValue) : 
    m_redactionType(RedactionType::NOT_SET),
    m_redactionTypeHasBeenSet(false),
    m_redactionOutput(RedactionOutput::NOT_SET),
    m_redactionOutputHasBeenSet(false)
{
  *this = jsonValue;
}

ContentRedaction& ContentRedaction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RedactionType"))
  {
    m_redactionType = RedactionTypeMapper::GetRedactionTypeForName(jsonValue.GetString("RedactionType"));

    m_redactionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedactionOutput"))
  {
    m_redactionOutput = RedactionOutputMapper::GetRedactionOutputForName(jsonValue.GetString("RedactionOutput"));

    m_redactionOutputHasBeenSet = true;
  }

  return *this;
}

JsonValue ContentRedaction::Jsonize() const
{
  JsonValue payload;

  if(m_redactionTypeHasBeenSet)
  {
   payload.WithString("RedactionType", RedactionTypeMapper::GetNameForRedactionType(m_redactionType));
  }

  if(m_redactionOutputHasBeenSet)
  {
   payload.WithString("RedactionOutput", RedactionOutputMapper::GetNameForRedactionOutput(m_redactionOutput));
  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
