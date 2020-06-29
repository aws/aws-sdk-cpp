/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/FollowUpPrompt.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

FollowUpPrompt::FollowUpPrompt() : 
    m_promptHasBeenSet(false),
    m_rejectionStatementHasBeenSet(false)
{
}

FollowUpPrompt::FollowUpPrompt(JsonView jsonValue) : 
    m_promptHasBeenSet(false),
    m_rejectionStatementHasBeenSet(false)
{
  *this = jsonValue;
}

FollowUpPrompt& FollowUpPrompt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("prompt"))
  {
    m_prompt = jsonValue.GetObject("prompt");

    m_promptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rejectionStatement"))
  {
    m_rejectionStatement = jsonValue.GetObject("rejectionStatement");

    m_rejectionStatementHasBeenSet = true;
  }

  return *this;
}

JsonValue FollowUpPrompt::Jsonize() const
{
  JsonValue payload;

  if(m_promptHasBeenSet)
  {
   payload.WithObject("prompt", m_prompt.Jsonize());

  }

  if(m_rejectionStatementHasBeenSet)
  {
   payload.WithObject("rejectionStatement", m_rejectionStatement.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
