/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/SyntaxToken.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

SyntaxToken::SyntaxToken() : 
    m_tokenId(0),
    m_tokenIdHasBeenSet(false),
    m_textHasBeenSet(false),
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_partOfSpeechHasBeenSet(false)
{
}

SyntaxToken::SyntaxToken(JsonView jsonValue) : 
    m_tokenId(0),
    m_tokenIdHasBeenSet(false),
    m_textHasBeenSet(false),
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_partOfSpeechHasBeenSet(false)
{
  *this = jsonValue;
}

SyntaxToken& SyntaxToken::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TokenId"))
  {
    m_tokenId = jsonValue.GetInteger("TokenId");

    m_tokenIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BeginOffset"))
  {
    m_beginOffset = jsonValue.GetInteger("BeginOffset");

    m_beginOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndOffset"))
  {
    m_endOffset = jsonValue.GetInteger("EndOffset");

    m_endOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartOfSpeech"))
  {
    m_partOfSpeech = jsonValue.GetObject("PartOfSpeech");

    m_partOfSpeechHasBeenSet = true;
  }

  return *this;
}

JsonValue SyntaxToken::Jsonize() const
{
  JsonValue payload;

  if(m_tokenIdHasBeenSet)
  {
   payload.WithInteger("TokenId", m_tokenId);

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_beginOffsetHasBeenSet)
  {
   payload.WithInteger("BeginOffset", m_beginOffset);

  }

  if(m_endOffsetHasBeenSet)
  {
   payload.WithInteger("EndOffset", m_endOffset);

  }

  if(m_partOfSpeechHasBeenSet)
  {
   payload.WithObject("PartOfSpeech", m_partOfSpeech.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
