/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/CreateContainerGroupDefinitionRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateContainerGroupDefinitionRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_containerGroupTypeHasBeenSet) {
    mapSize++;
  }
  if (m_totalMemoryLimitMebibytesHasBeenSet) {
    mapSize++;
  }
  if (m_totalVcpuLimitHasBeenSet) {
    mapSize++;
  }
  if (m_gameServerContainerDefinitionHasBeenSet) {
    mapSize++;
  }
  if (m_supportContainerDefinitionsHasBeenSet) {
    mapSize++;
  }
  if (m_operatingSystemHasBeenSet) {
    mapSize++;
  }
  if (m_versionDescriptionHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_containerGroupTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ContainerGroupType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ContainerGroupTypeMapper::GetNameForContainerGroupType(m_containerGroupType).c_str()));
  }

  if (m_totalMemoryLimitMebibytesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TotalMemoryLimitMebibytes"));
    (m_totalMemoryLimitMebibytes >= 0) ? encoder.WriteUInt(m_totalMemoryLimitMebibytes) : encoder.WriteNegInt(m_totalMemoryLimitMebibytes);
  }

  if (m_totalVcpuLimitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TotalVcpuLimit"));
    encoder.WriteFloat(m_totalVcpuLimit);
  }

  if (m_gameServerContainerDefinitionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameServerContainerDefinition"));
    m_gameServerContainerDefinition.CborEncode(encoder);
  }

  if (m_supportContainerDefinitionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SupportContainerDefinitions"));
    encoder.WriteArrayStart(m_supportContainerDefinitions.size());
    for (const auto& item_0 : m_supportContainerDefinitions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_operatingSystemHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OperatingSystem"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ContainerOperatingSystemMapper::GetNameForContainerOperatingSystem(m_operatingSystem).c_str()));
  }

  if (m_versionDescriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VersionDescription"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_versionDescription.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateContainerGroupDefinitionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
