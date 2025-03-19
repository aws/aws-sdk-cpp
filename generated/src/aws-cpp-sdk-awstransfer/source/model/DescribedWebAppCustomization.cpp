/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedWebAppCustomization.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

DescribedWebAppCustomization::DescribedWebAppCustomization(JsonView jsonValue)
{
  *this = jsonValue;
}

DescribedWebAppCustomization& DescribedWebAppCustomization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WebAppId"))
  {
    m_webAppId = jsonValue.GetString("WebAppId");
    m_webAppIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogoFile"))
  {
    m_logoFile = HashingUtils::Base64Decode(jsonValue.GetString("LogoFile"));
    m_logoFileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FaviconFile"))
  {
    m_faviconFile = HashingUtils::Base64Decode(jsonValue.GetString("FaviconFile"));
    m_faviconFileHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribedWebAppCustomization::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_webAppIdHasBeenSet)
  {
   payload.WithString("WebAppId", m_webAppId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_logoFileHasBeenSet)
  {
   payload.WithString("LogoFile", HashingUtils::Base64Encode(m_logoFile));
  }

  if(m_faviconFileHasBeenSet)
  {
   payload.WithString("FaviconFile", HashingUtils::Base64Encode(m_faviconFile));
  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
