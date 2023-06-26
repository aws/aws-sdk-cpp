/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/SourceKeyword.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

SourceKeyword::SourceKeyword() : 
    m_keywordInputType(KeywordInputType::NOT_SET),
    m_keywordInputTypeHasBeenSet(false),
    m_keywordValueHasBeenSet(false)
{
}

SourceKeyword::SourceKeyword(JsonView jsonValue) : 
    m_keywordInputType(KeywordInputType::NOT_SET),
    m_keywordInputTypeHasBeenSet(false),
    m_keywordValueHasBeenSet(false)
{
  *this = jsonValue;
}

SourceKeyword& SourceKeyword::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("keywordInputType"))
  {
    m_keywordInputType = KeywordInputTypeMapper::GetKeywordInputTypeForName(jsonValue.GetString("keywordInputType"));

    m_keywordInputTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keywordValue"))
  {
    m_keywordValue = jsonValue.GetString("keywordValue");

    m_keywordValueHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceKeyword::Jsonize() const
{
  JsonValue payload;

  if(m_keywordInputTypeHasBeenSet)
  {
   payload.WithString("keywordInputType", KeywordInputTypeMapper::GetNameForKeywordInputType(m_keywordInputType));
  }

  if(m_keywordValueHasBeenSet)
  {
   payload.WithString("keywordValue", m_keywordValue);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
