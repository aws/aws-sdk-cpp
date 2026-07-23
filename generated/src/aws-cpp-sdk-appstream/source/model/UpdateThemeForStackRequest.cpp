/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/UpdateThemeForStackRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateThemeForStackRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_stackNameHasBeenSet) {
    mapSize++;
  }
  if (m_footerLinksHasBeenSet) {
    mapSize++;
  }
  if (m_titleTextHasBeenSet) {
    mapSize++;
  }
  if (m_themeStylingHasBeenSet) {
    mapSize++;
  }
  if (m_organizationLogoS3LocationHasBeenSet) {
    mapSize++;
  }
  if (m_faviconS3LocationHasBeenSet) {
    mapSize++;
  }
  if (m_stateHasBeenSet) {
    mapSize++;
  }
  if (m_attributesToDeleteHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_stackNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StackName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_stackName.c_str()));
  }

  if (m_footerLinksHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FooterLinks"));
    encoder.WriteArrayStart(m_footerLinks.size());
    for (const auto& item_0 : m_footerLinks) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_titleTextHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TitleText"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_titleText.c_str()));
  }

  if (m_themeStylingHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ThemeStyling"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ThemeStylingMapper::GetNameForThemeStyling(m_themeStyling).c_str()));
  }

  if (m_organizationLogoS3LocationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OrganizationLogoS3Location"));
    m_organizationLogoS3Location.CborEncode(encoder);
  }

  if (m_faviconS3LocationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FaviconS3Location"));
    m_faviconS3Location.CborEncode(encoder);
  }

  if (m_stateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("State"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ThemeStateMapper::GetNameForThemeState(m_state).c_str()));
  }

  if (m_attributesToDeleteHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AttributesToDelete"));
    encoder.WriteArrayStart(m_attributesToDelete.size());
    for (const auto& item_0 : m_attributesToDelete) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(ThemeAttributeMapper::GetNameForThemeAttribute(item_0).c_str()));
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateThemeForStackRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
