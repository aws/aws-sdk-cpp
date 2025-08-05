/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningLogicStatement.h>
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

AutomatedReasoningLogicStatement::AutomatedReasoningLogicStatement(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningLogicStatement& AutomatedReasoningLogicStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logic"))
  {
    m_logic = jsonValue.GetString("logic");
    m_logicHasBeenSet = true;
  }
  if(jsonValue.ValueExists("naturalLanguage"))
  {
    m_naturalLanguage = jsonValue.GetString("naturalLanguage");
    m_naturalLanguageHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningLogicStatement::Jsonize() const
{
  JsonValue payload;

  if(m_logicHasBeenSet)
  {
   payload.WithString("logic", m_logic);

  }

  if(m_naturalLanguageHasBeenSet)
  {
   payload.WithString("naturalLanguage", m_naturalLanguage);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
