/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/CuratedQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

CuratedQuery::CuratedQuery(JsonView jsonValue)
{
  *this = jsonValue;
}

CuratedQuery& CuratedQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("naturalLanguage"))
  {
    m_naturalLanguage = jsonValue.GetString("naturalLanguage");
    m_naturalLanguageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sql"))
  {
    m_sql = jsonValue.GetString("sql");
    m_sqlHasBeenSet = true;
  }
  return *this;
}

JsonValue CuratedQuery::Jsonize() const
{
  JsonValue payload;

  if(m_naturalLanguageHasBeenSet)
  {
   payload.WithString("naturalLanguage", m_naturalLanguage);

  }

  if(m_sqlHasBeenSet)
  {
   payload.WithString("sql", m_sql);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
