/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/ReportOverrides.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DataSync {
namespace Model {

ReportOverrides::ReportOverrides(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ReportOverrides& ReportOverrides::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  if (decoder != nullptr) {
    auto initialMapType = decoder->PeekType();
    if (initialMapType.has_value() && (initialMapType.value() == CborType::MapStart || initialMapType.value() == CborType::IndefMapStart)) {
      if (initialMapType.value() == CborType::MapStart) {
        auto mapSize = decoder->PopNextMapStart();
        if (mapSize.has_value()) {
          for (size_t i = 0; i < mapSize.value(); ++i) {
            auto initialKey = decoder->PopNextTextVal();
            if (initialKey.has_value()) {
              Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);

              if (initialKeyStr == "Transferred") {
                m_transferred = ReportOverride(decoder);
                m_transferredHasBeenSet = true;
              }

              else if (initialKeyStr == "Verified") {
                m_verified = ReportOverride(decoder);
                m_verifiedHasBeenSet = true;
              }

              else if (initialKeyStr == "Deleted") {
                m_deleted = ReportOverride(decoder);
                m_deletedHasBeenSet = true;
              }

              else if (initialKeyStr == "Skipped") {
                m_skipped = ReportOverride(decoder);
                m_skippedHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ReportOverrides", "Invalid data received for %s", initialKeyStr.c_str());
                break;
              }
            }
          }
        }
      } else  // IndefMapStart
      {
        decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
          auto outerMapNextType = decoder->PeekType();
          if (!outerMapNextType.has_value() || outerMapNextType.value() == CborType::Break) {
            if (outerMapNextType.has_value()) {
              decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
          }

          auto initialKey = decoder->PopNextTextVal();
          if (initialKey.has_value()) {
            Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);

            if (initialKeyStr == "Transferred") {
              m_transferred = ReportOverride(decoder);
              m_transferredHasBeenSet = true;
            }

            else if (initialKeyStr == "Verified") {
              m_verified = ReportOverride(decoder);
              m_verifiedHasBeenSet = true;
            }

            else if (initialKeyStr == "Deleted") {
              m_deleted = ReportOverride(decoder);
              m_deletedHasBeenSet = true;
            }

            else if (initialKeyStr == "Skipped") {
              m_skipped = ReportOverride(decoder);
              m_skippedHasBeenSet = true;
            } else {
              // Unknown key, skip the value
              decoder->ConsumeNextWholeDataItem();
            }
          }
        }
      }
    }
  }

  return *this;
}

void ReportOverrides::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_transferredHasBeenSet) {
    mapSize++;
  }
  if (m_verifiedHasBeenSet) {
    mapSize++;
  }
  if (m_deletedHasBeenSet) {
    mapSize++;
  }
  if (m_skippedHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_transferredHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Transferred"));
    m_transferred.CborEncode(encoder);
  }

  if (m_verifiedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Verified"));
    m_verified.CborEncode(encoder);
  }

  if (m_deletedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Deleted"));
    m_deleted.CborEncode(encoder);
  }

  if (m_skippedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Skipped"));
    m_skipped.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws