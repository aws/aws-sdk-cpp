/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/CreateProjectRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateProjectRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_sourceHasBeenSet) {
    mapSize++;
  }
  if (m_secondarySourcesHasBeenSet) {
    mapSize++;
  }
  if (m_sourceVersionHasBeenSet) {
    mapSize++;
  }
  if (m_secondarySourceVersionsHasBeenSet) {
    mapSize++;
  }
  if (m_artifactsHasBeenSet) {
    mapSize++;
  }
  if (m_secondaryArtifactsHasBeenSet) {
    mapSize++;
  }
  if (m_cacheHasBeenSet) {
    mapSize++;
  }
  if (m_environmentHasBeenSet) {
    mapSize++;
  }
  if (m_serviceRoleHasBeenSet) {
    mapSize++;
  }
  if (m_timeoutInMinutesHasBeenSet) {
    mapSize++;
  }
  if (m_queuedTimeoutInMinutesHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionKeyHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_vpcConfigHasBeenSet) {
    mapSize++;
  }
  if (m_badgeEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_logsConfigHasBeenSet) {
    mapSize++;
  }
  if (m_fileSystemLocationsHasBeenSet) {
    mapSize++;
  }
  if (m_buildBatchConfigHasBeenSet) {
    mapSize++;
  }
  if (m_concurrentBuildLimitHasBeenSet) {
    mapSize++;
  }
  if (m_autoRetryLimitHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_sourceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("source"));
    m_source.CborEncode(encoder);
  }

  if (m_secondarySourcesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("secondarySources"));
    encoder.WriteArrayStart(m_secondarySources.size());
    for (const auto& item_0 : m_secondarySources) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_sourceVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sourceVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceVersion.c_str()));
  }

  if (m_secondarySourceVersionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("secondarySourceVersions"));
    encoder.WriteArrayStart(m_secondarySourceVersions.size());
    for (const auto& item_0 : m_secondarySourceVersions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_artifactsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("artifacts"));
    m_artifacts.CborEncode(encoder);
  }

  if (m_secondaryArtifactsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("secondaryArtifacts"));
    encoder.WriteArrayStart(m_secondaryArtifacts.size());
    for (const auto& item_0 : m_secondaryArtifacts) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_cacheHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("cache"));
    m_cache.CborEncode(encoder);
  }

  if (m_environmentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("environment"));
    m_environment.CborEncode(encoder);
  }

  if (m_serviceRoleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("serviceRole"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_serviceRole.c_str()));
  }

  if (m_timeoutInMinutesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("timeoutInMinutes"));
    (m_timeoutInMinutes >= 0) ? encoder.WriteUInt(m_timeoutInMinutes) : encoder.WriteNegInt(m_timeoutInMinutes);
  }

  if (m_queuedTimeoutInMinutesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("queuedTimeoutInMinutes"));
    (m_queuedTimeoutInMinutes >= 0) ? encoder.WriteUInt(m_queuedTimeoutInMinutes) : encoder.WriteNegInt(m_queuedTimeoutInMinutes);
  }

  if (m_encryptionKeyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("encryptionKey"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_encryptionKey.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_vpcConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("vpcConfig"));
    m_vpcConfig.CborEncode(encoder);
  }

  if (m_badgeEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("badgeEnabled"));
    encoder.WriteBool(m_badgeEnabled);
  }

  if (m_logsConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("logsConfig"));
    m_logsConfig.CborEncode(encoder);
  }

  if (m_fileSystemLocationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("fileSystemLocations"));
    encoder.WriteArrayStart(m_fileSystemLocations.size());
    for (const auto& item_0 : m_fileSystemLocations) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_buildBatchConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("buildBatchConfig"));
    m_buildBatchConfig.CborEncode(encoder);
  }

  if (m_concurrentBuildLimitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("concurrentBuildLimit"));
    (m_concurrentBuildLimit >= 0) ? encoder.WriteUInt(m_concurrentBuildLimit) : encoder.WriteNegInt(m_concurrentBuildLimit);
  }

  if (m_autoRetryLimitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("autoRetryLimit"));
    (m_autoRetryLimit >= 0) ? encoder.WriteUInt(m_autoRetryLimit) : encoder.WriteNegInt(m_autoRetryLimit);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateProjectRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
