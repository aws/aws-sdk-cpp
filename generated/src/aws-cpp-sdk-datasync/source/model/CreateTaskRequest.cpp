/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/CreateTaskRequest.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateTaskRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_sourceLocationArnHasBeenSet) {
    mapSize++;
  }
  if (m_destinationLocationArnHasBeenSet) {
    mapSize++;
  }
  if (m_cloudWatchLogGroupArnHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_optionsHasBeenSet) {
    mapSize++;
  }
  if (m_excludesHasBeenSet) {
    mapSize++;
  }
  if (m_scheduleHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_includesHasBeenSet) {
    mapSize++;
  }
  if (m_manifestConfigHasBeenSet) {
    mapSize++;
  }
  if (m_taskReportConfigHasBeenSet) {
    mapSize++;
  }
  if (m_taskModeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_sourceLocationArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceLocationArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceLocationArn.c_str()));
  }

  if (m_destinationLocationArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DestinationLocationArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_destinationLocationArn.c_str()));
  }

  if (m_cloudWatchLogGroupArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CloudWatchLogGroupArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_cloudWatchLogGroupArn.c_str()));
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_optionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Options"));
    m_options.CborEncode(encoder);
  }

  if (m_excludesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Excludes"));
    encoder.WriteArrayStart(m_excludes.size());
    for (const auto& item_0 : m_excludes) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_scheduleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Schedule"));
    m_schedule.CborEncode(encoder);
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_includesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Includes"));
    encoder.WriteArrayStart(m_includes.size());
    for (const auto& item_0 : m_includes) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_manifestConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ManifestConfig"));
    m_manifestConfig.CborEncode(encoder);
  }

  if (m_taskReportConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TaskReportConfig"));
    m_taskReportConfig.CborEncode(encoder);
  }

  if (m_taskModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TaskMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TaskModeMapper::GetNameForTaskMode(m_taskMode).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateTaskRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
