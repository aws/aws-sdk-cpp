/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/RuntimeHintValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

RuntimeHintValue::RuntimeHintValue() : 
    m_phraseHasBeenSet(false)
{
}

RuntimeHintValue::RuntimeHintValue(JsonView jsonValue) : 
    m_phraseHasBeenSet(false)
{
  *this = jsonValue;
}

RuntimeHintValue& RuntimeHintValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("phrase"))
  {
    m_phrase = jsonValue.GetString("phrase");

    m_phraseHasBeenSet = true;
  }

  return *this;
}

JsonValue RuntimeHintValue::Jsonize() const
{
  JsonValue payload;

  if(m_phraseHasBeenSet)
  {
   payload.WithString("phrase", m_phrase);

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
