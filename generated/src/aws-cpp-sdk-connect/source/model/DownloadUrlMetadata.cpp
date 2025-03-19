/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DownloadUrlMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

DownloadUrlMetadata::DownloadUrlMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

DownloadUrlMetadata& DownloadUrlMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UrlExpiry"))
  {
    m_urlExpiry = jsonValue.GetString("UrlExpiry");
    m_urlExpiryHasBeenSet = true;
  }
  return *this;
}

JsonValue DownloadUrlMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_urlExpiryHasBeenSet)
  {
   payload.WithString("UrlExpiry", m_urlExpiry);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
