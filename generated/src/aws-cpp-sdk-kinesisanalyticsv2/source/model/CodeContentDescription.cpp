/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/CodeContentDescription.h>
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

CodeContentDescription::CodeContentDescription() : 
    m_textContentHasBeenSet(false),
    m_codeMD5HasBeenSet(false),
    m_codeSize(0),
    m_codeSizeHasBeenSet(false),
    m_s3ApplicationCodeLocationDescriptionHasBeenSet(false)
{
}

CodeContentDescription::CodeContentDescription(JsonView jsonValue) : 
    m_textContentHasBeenSet(false),
    m_codeMD5HasBeenSet(false),
    m_codeSize(0),
    m_codeSizeHasBeenSet(false),
    m_s3ApplicationCodeLocationDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

CodeContentDescription& CodeContentDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TextContent"))
  {
    m_textContent = jsonValue.GetString("TextContent");

    m_textContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeMD5"))
  {
    m_codeMD5 = jsonValue.GetString("CodeMD5");

    m_codeMD5HasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeSize"))
  {
    m_codeSize = jsonValue.GetInt64("CodeSize");

    m_codeSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3ApplicationCodeLocationDescription"))
  {
    m_s3ApplicationCodeLocationDescription = jsonValue.GetObject("S3ApplicationCodeLocationDescription");

    m_s3ApplicationCodeLocationDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeContentDescription::Jsonize() const
{
  JsonValue payload;

  if(m_textContentHasBeenSet)
  {
   payload.WithString("TextContent", m_textContent);

  }

  if(m_codeMD5HasBeenSet)
  {
   payload.WithString("CodeMD5", m_codeMD5);

  }

  if(m_codeSizeHasBeenSet)
  {
   payload.WithInt64("CodeSize", m_codeSize);

  }

  if(m_s3ApplicationCodeLocationDescriptionHasBeenSet)
  {
   payload.WithObject("S3ApplicationCodeLocationDescription", m_s3ApplicationCodeLocationDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
