﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RerankQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

RerankQuery::RerankQuery() : 
    m_textQueryHasBeenSet(false),
    m_type(RerankQueryContentType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

RerankQuery::RerankQuery(JsonView jsonValue)
  : RerankQuery()
{
  *this = jsonValue;
}

RerankQuery& RerankQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("textQuery"))
  {
    m_textQuery = jsonValue.GetObject("textQuery");

    m_textQueryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = RerankQueryContentTypeMapper::GetRerankQueryContentTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue RerankQuery::Jsonize() const
{
  JsonValue payload;

  if(m_textQueryHasBeenSet)
  {
   payload.WithObject("textQuery", m_textQuery.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RerankQueryContentTypeMapper::GetNameForRerankQueryContentType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
