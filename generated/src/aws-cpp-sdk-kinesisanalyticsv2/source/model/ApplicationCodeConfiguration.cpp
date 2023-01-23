/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationCodeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

ApplicationCodeConfiguration::ApplicationCodeConfiguration() : 
    m_codeContentHasBeenSet(false),
    m_codeContentType(CodeContentType::NOT_SET),
    m_codeContentTypeHasBeenSet(false)
{
}

ApplicationCodeConfiguration::ApplicationCodeConfiguration(JsonView jsonValue) : 
    m_codeContentHasBeenSet(false),
    m_codeContentType(CodeContentType::NOT_SET),
    m_codeContentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationCodeConfiguration& ApplicationCodeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CodeContent"))
  {
    m_codeContent = jsonValue.GetObject("CodeContent");

    m_codeContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeContentType"))
  {
    m_codeContentType = CodeContentTypeMapper::GetCodeContentTypeForName(jsonValue.GetString("CodeContentType"));

    m_codeContentTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationCodeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_codeContentHasBeenSet)
  {
   payload.WithObject("CodeContent", m_codeContent.Jsonize());

  }

  if(m_codeContentTypeHasBeenSet)
  {
   payload.WithString("CodeContentType", CodeContentTypeMapper::GetNameForCodeContentType(m_codeContentType));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
