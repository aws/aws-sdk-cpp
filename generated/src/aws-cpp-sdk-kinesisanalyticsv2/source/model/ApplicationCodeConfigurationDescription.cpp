/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationCodeConfigurationDescription.h>
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

ApplicationCodeConfigurationDescription::ApplicationCodeConfigurationDescription() : 
    m_codeContentType(CodeContentType::NOT_SET),
    m_codeContentTypeHasBeenSet(false),
    m_codeContentDescriptionHasBeenSet(false)
{
}

ApplicationCodeConfigurationDescription::ApplicationCodeConfigurationDescription(JsonView jsonValue) : 
    m_codeContentType(CodeContentType::NOT_SET),
    m_codeContentTypeHasBeenSet(false),
    m_codeContentDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationCodeConfigurationDescription& ApplicationCodeConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CodeContentType"))
  {
    m_codeContentType = CodeContentTypeMapper::GetCodeContentTypeForName(jsonValue.GetString("CodeContentType"));

    m_codeContentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeContentDescription"))
  {
    m_codeContentDescription = jsonValue.GetObject("CodeContentDescription");

    m_codeContentDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationCodeConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_codeContentTypeHasBeenSet)
  {
   payload.WithString("CodeContentType", CodeContentTypeMapper::GetNameForCodeContentType(m_codeContentType));
  }

  if(m_codeContentDescriptionHasBeenSet)
  {
   payload.WithObject("CodeContentDescription", m_codeContentDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
