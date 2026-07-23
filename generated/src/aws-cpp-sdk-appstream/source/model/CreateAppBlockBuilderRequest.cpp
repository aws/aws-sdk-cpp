/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateAppBlockBuilderRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateAppBlockBuilderRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_displayNameHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_platformHasBeenSet) {
    mapSize++;
  }
  if (m_instanceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_vpcConfigHasBeenSet) {
    mapSize++;
  }
  if (m_enableDefaultInternetAccessHasBeenSet) {
    mapSize++;
  }
  if (m_iamRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_accessEndpointsHasBeenSet) {
    mapSize++;
  }
  if (m_disableIMDSV1HasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_displayNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DisplayName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_displayName.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteMapStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }

  if (m_platformHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Platform"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(AppBlockBuilderPlatformTypeMapper::GetNameForAppBlockBuilderPlatformType(m_platform).c_str()));
  }

  if (m_instanceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InstanceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_instanceType.c_str()));
  }

  if (m_vpcConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VpcConfig"));
    m_vpcConfig.CborEncode(encoder);
  }

  if (m_enableDefaultInternetAccessHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EnableDefaultInternetAccess"));
    encoder.WriteBool(m_enableDefaultInternetAccess);
  }

  if (m_iamRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IamRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_iamRoleArn.c_str()));
  }

  if (m_accessEndpointsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AccessEndpoints"));
    encoder.WriteArrayStart(m_accessEndpoints.size());
    for (const auto& item_0 : m_accessEndpoints) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_disableIMDSV1HasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DisableIMDSV1"));
    encoder.WriteBool(m_disableIMDSV1);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateAppBlockBuilderRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
