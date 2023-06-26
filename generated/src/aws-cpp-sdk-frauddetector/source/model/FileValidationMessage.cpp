/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/FileValidationMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

FileValidationMessage::FileValidationMessage() : 
    m_titleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

FileValidationMessage::FileValidationMessage(JsonView jsonValue) : 
    m_titleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

FileValidationMessage& FileValidationMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue FileValidationMessage::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
