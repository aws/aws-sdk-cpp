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

#include <aws/wafv2/model/AndStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/Statement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

AndStatement::AndStatement() : 
    m_statementsHasBeenSet(false)
{
}

AndStatement::AndStatement(JsonView jsonValue) : 
    m_statementsHasBeenSet(false)
{
  *this = jsonValue;
}

AndStatement& AndStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Statements"))
  {
    Array<JsonView> statementsJsonList = jsonValue.GetArray("Statements");
    for(unsigned statementsIndex = 0; statementsIndex < statementsJsonList.GetLength(); ++statementsIndex)
    {
      m_statements.push_back(statementsJsonList[statementsIndex].AsObject());
    }
    m_statementsHasBeenSet = true;
  }

  return *this;
}

JsonValue AndStatement::Jsonize() const
{
  JsonValue payload;

  if(m_statementsHasBeenSet)
  {
   Array<JsonValue> statementsJsonList(m_statements.size());
   for(unsigned statementsIndex = 0; statementsIndex < statementsJsonList.GetLength(); ++statementsIndex)
   {
     statementsJsonList[statementsIndex].AsObject(m_statements[statementsIndex].Jsonize());
   }
   payload.WithArray("Statements", std::move(statementsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
