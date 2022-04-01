/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/InputDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

InputDataConfig::InputDataConfig() : 
    m_s3UriHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

InputDataConfig::InputDataConfig(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

InputDataConfig& InputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
