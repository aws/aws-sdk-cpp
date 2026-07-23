/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/UpdateFleetRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateFleetRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_imageNameHasBeenSet) {
    mapSize++;
  }
  if (m_imageArnHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_instanceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_computeCapacityHasBeenSet) {
    mapSize++;
  }
  if (m_vpcConfigHasBeenSet) {
    mapSize++;
  }
  if (m_maxUserDurationInSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_disconnectTimeoutInSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_displayNameHasBeenSet) {
    mapSize++;
  }
  if (m_enableDefaultInternetAccessHasBeenSet) {
    mapSize++;
  }
  if (m_domainJoinInfoHasBeenSet) {
    mapSize++;
  }
  if (m_idleDisconnectTimeoutInSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_attributesToDeleteHasBeenSet) {
    mapSize++;
  }
  if (m_iamRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_streamViewHasBeenSet) {
    mapSize++;
  }
  if (m_platformHasBeenSet) {
    mapSize++;
  }
  if (m_maxConcurrentSessionsHasBeenSet) {
    mapSize++;
  }
  if (m_usbDeviceFilterStringsHasBeenSet) {
    mapSize++;
  }
  if (m_sessionScriptS3LocationHasBeenSet) {
    mapSize++;
  }
  if (m_maxSessionsPerInstanceHasBeenSet) {
    mapSize++;
  }
  if (m_rootVolumeConfigHasBeenSet) {
    mapSize++;
  }
  if (m_disableIMDSV1HasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_imageNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_imageName.c_str()));
  }

  if (m_imageArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ImageArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_imageArn.c_str()));
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_instanceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InstanceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_instanceType.c_str()));
  }

  if (m_computeCapacityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComputeCapacity"));
    m_computeCapacity.CborEncode(encoder);
  }

  if (m_vpcConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VpcConfig"));
    m_vpcConfig.CborEncode(encoder);
  }

  if (m_maxUserDurationInSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxUserDurationInSeconds"));
    (m_maxUserDurationInSeconds >= 0) ? encoder.WriteUInt(m_maxUserDurationInSeconds) : encoder.WriteNegInt(m_maxUserDurationInSeconds);
  }

  if (m_disconnectTimeoutInSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DisconnectTimeoutInSeconds"));
    (m_disconnectTimeoutInSeconds >= 0) ? encoder.WriteUInt(m_disconnectTimeoutInSeconds)
                                        : encoder.WriteNegInt(m_disconnectTimeoutInSeconds);
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_displayNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DisplayName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_displayName.c_str()));
  }

  if (m_enableDefaultInternetAccessHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EnableDefaultInternetAccess"));
    encoder.WriteBool(m_enableDefaultInternetAccess);
  }

  if (m_domainJoinInfoHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DomainJoinInfo"));
    m_domainJoinInfo.CborEncode(encoder);
  }

  if (m_idleDisconnectTimeoutInSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdleDisconnectTimeoutInSeconds"));
    (m_idleDisconnectTimeoutInSeconds >= 0) ? encoder.WriteUInt(m_idleDisconnectTimeoutInSeconds)
                                            : encoder.WriteNegInt(m_idleDisconnectTimeoutInSeconds);
  }

  if (m_attributesToDeleteHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AttributesToDelete"));
    encoder.WriteArrayStart(m_attributesToDelete.size());
    for (const auto& item_0 : m_attributesToDelete) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(FleetAttributeMapper::GetNameForFleetAttribute(item_0).c_str()));
    }
  }

  if (m_iamRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IamRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_iamRoleArn.c_str()));
  }

  if (m_streamViewHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StreamView"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(StreamViewMapper::GetNameForStreamView(m_streamView).c_str()));
  }

  if (m_platformHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Platform"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PlatformTypeMapper::GetNameForPlatformType(m_platform).c_str()));
  }

  if (m_maxConcurrentSessionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxConcurrentSessions"));
    (m_maxConcurrentSessions >= 0) ? encoder.WriteUInt(m_maxConcurrentSessions) : encoder.WriteNegInt(m_maxConcurrentSessions);
  }

  if (m_usbDeviceFilterStringsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UsbDeviceFilterStrings"));
    encoder.WriteArrayStart(m_usbDeviceFilterStrings.size());
    for (const auto& item_0 : m_usbDeviceFilterStrings) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_sessionScriptS3LocationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SessionScriptS3Location"));
    m_sessionScriptS3Location.CborEncode(encoder);
  }

  if (m_maxSessionsPerInstanceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxSessionsPerInstance"));
    (m_maxSessionsPerInstance >= 0) ? encoder.WriteUInt(m_maxSessionsPerInstance) : encoder.WriteNegInt(m_maxSessionsPerInstance);
  }

  if (m_rootVolumeConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RootVolumeConfig"));
    m_rootVolumeConfig.CborEncode(encoder);
  }

  if (m_disableIMDSV1HasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DisableIMDSV1"));
    encoder.WriteBool(m_disableIMDSV1);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateFleetRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
