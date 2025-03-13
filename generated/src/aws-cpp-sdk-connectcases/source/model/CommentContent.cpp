/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CommentContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

CommentContent::CommentContent(JsonView jsonValue)
{
  *this = jsonValue;
}

CommentContent& CommentContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("body"))
  {
    m_body = jsonValue.GetString("body");
    m_bodyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentType"))
  {
    m_contentType = CommentBodyTextTypeMapper::GetCommentBodyTextTypeForName(jsonValue.GetString("contentType"));
    m_contentTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue CommentContent::Jsonize() const
{
  JsonValue payload;

  if(m_bodyHasBeenSet)
  {
   payload.WithString("body", m_body);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", CommentBodyTextTypeMapper::GetNameForCommentBodyTextType(m_contentType));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
