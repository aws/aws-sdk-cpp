/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/UrlRedirectionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {

UrlRedirectionConfig::UrlRedirectionConfig(JsonView jsonValue) { *this = jsonValue; }

UrlRedirectionConfig& UrlRedirectionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AllowedUrls")) {
    Aws::Utils::Array<JsonView> allowedUrlsJsonList = jsonValue.GetArray("AllowedUrls");
    for (unsigned allowedUrlsIndex = 0; allowedUrlsIndex < allowedUrlsJsonList.GetLength(); ++allowedUrlsIndex) {
      m_allowedUrls.push_back(allowedUrlsJsonList[allowedUrlsIndex].AsString());
    }
    m_allowedUrlsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeniedUrls")) {
    Aws::Utils::Array<JsonView> deniedUrlsJsonList = jsonValue.GetArray("DeniedUrls");
    for (unsigned deniedUrlsIndex = 0; deniedUrlsIndex < deniedUrlsJsonList.GetLength(); ++deniedUrlsIndex) {
      m_deniedUrls.push_back(deniedUrlsJsonList[deniedUrlsIndex].AsString());
    }
    m_deniedUrlsHasBeenSet = true;
  }
  return *this;
}

JsonValue UrlRedirectionConfig::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  if (m_allowedUrlsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedUrlsJsonList(m_allowedUrls.size());
    for (unsigned allowedUrlsIndex = 0; allowedUrlsIndex < allowedUrlsJsonList.GetLength(); ++allowedUrlsIndex) {
      allowedUrlsJsonList[allowedUrlsIndex].AsString(m_allowedUrls[allowedUrlsIndex]);
    }
    payload.WithArray("AllowedUrls", std::move(allowedUrlsJsonList));
  }

  if (m_deniedUrlsHasBeenSet) {
    Aws::Utils::Array<JsonValue> deniedUrlsJsonList(m_deniedUrls.size());
    for (unsigned deniedUrlsIndex = 0; deniedUrlsIndex < deniedUrlsJsonList.GetLength(); ++deniedUrlsIndex) {
      deniedUrlsJsonList[deniedUrlsIndex].AsString(m_deniedUrls[deniedUrlsIndex]);
    }
    payload.WithArray("DeniedUrls", std::move(deniedUrlsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
