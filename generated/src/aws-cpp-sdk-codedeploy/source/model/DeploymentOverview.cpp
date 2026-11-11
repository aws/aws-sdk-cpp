/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentOverview.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeDeploy {
namespace Model {

DeploymentOverview::DeploymentOverview(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

DeploymentOverview& DeploymentOverview::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Pending") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_pending = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_pending = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_pendingHasBeenSet = true;
              }

              else if (initialKeyStr == "InProgress") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_inProgress = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_inProgress = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_inProgressHasBeenSet = true;
              }

              else if (initialKeyStr == "Succeeded") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_succeeded = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_succeeded = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_succeededHasBeenSet = true;
              }

              else if (initialKeyStr == "Failed") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_failed = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_failed = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_failedHasBeenSet = true;
              }

              else if (initialKeyStr == "Skipped") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_skipped = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_skipped = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_skippedHasBeenSet = true;
              }

              else if (initialKeyStr == "Ready") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_ready = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_ready = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_readyHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DeploymentOverview", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Pending") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_pending = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_pending = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_pendingHasBeenSet = true;
            }

            else if (initialKeyStr == "InProgress") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_inProgress = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_inProgress = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_inProgressHasBeenSet = true;
            }

            else if (initialKeyStr == "Succeeded") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_succeeded = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_succeeded = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_succeededHasBeenSet = true;
            }

            else if (initialKeyStr == "Failed") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_failed = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_failed = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_failedHasBeenSet = true;
            }

            else if (initialKeyStr == "Skipped") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_skipped = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_skipped = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_skippedHasBeenSet = true;
            }

            else if (initialKeyStr == "Ready") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_ready = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_ready = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_readyHasBeenSet = true;
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

void DeploymentOverview::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_pendingHasBeenSet) {
    mapSize++;
  }
  if (m_inProgressHasBeenSet) {
    mapSize++;
  }
  if (m_succeededHasBeenSet) {
    mapSize++;
  }
  if (m_failedHasBeenSet) {
    mapSize++;
  }
  if (m_skippedHasBeenSet) {
    mapSize++;
  }
  if (m_readyHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_pendingHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Pending"));
    (m_pending >= 0) ? encoder.WriteUInt(m_pending) : encoder.WriteNegInt(m_pending);
  }

  if (m_inProgressHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InProgress"));
    (m_inProgress >= 0) ? encoder.WriteUInt(m_inProgress) : encoder.WriteNegInt(m_inProgress);
  }

  if (m_succeededHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Succeeded"));
    (m_succeeded >= 0) ? encoder.WriteUInt(m_succeeded) : encoder.WriteNegInt(m_succeeded);
  }

  if (m_failedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Failed"));
    (m_failed >= 0) ? encoder.WriteUInt(m_failed) : encoder.WriteNegInt(m_failed);
  }

  if (m_skippedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Skipped"));
    (m_skipped >= 0) ? encoder.WriteUInt(m_skipped) : encoder.WriteNegInt(m_skipped);
  }

  if (m_readyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Ready"));
    (m_ready >= 0) ? encoder.WriteUInt(m_ready) : encoder.WriteNegInt(m_ready);
  }
}

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws