/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

FollowUpPrompt::FollowUpPrompt(const JsonValue& jsonValue) : 
    m_promptHasBeenSet(false),
    m_rejectionStatementHasBeenSet(false)
{
  *this = jsonValue;
}

FollowUpPrompt& FollowUpPrompt::operator =(const JsonValue& jsonValue)
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