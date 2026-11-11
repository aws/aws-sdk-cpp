/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/Options.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DataSync {
namespace Model {

Options::Options(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Options& Options::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "VerifyMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_verifyMode =
                      VerifyModeMapper::GetVerifyModeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_verifyModeHasBeenSet = true;
              }

              else if (initialKeyStr == "OverwriteMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_overwriteMode = OverwriteModeMapper::GetOverwriteModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_overwriteModeHasBeenSet = true;
              }

              else if (initialKeyStr == "Atime") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_atime = AtimeMapper::GetAtimeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_atimeHasBeenSet = true;
              }

              else if (initialKeyStr == "Mtime") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_mtime = MtimeMapper::GetMtimeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_mtimeHasBeenSet = true;
              }

              else if (initialKeyStr == "Uid") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_uid = UidMapper::GetUidForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_uidHasBeenSet = true;
              }

              else if (initialKeyStr == "Gid") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_gid = GidMapper::GetGidForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_gidHasBeenSet = true;
              }

              else if (initialKeyStr == "PreserveDeletedFiles") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_preserveDeletedFiles = PreserveDeletedFilesMapper::GetPreserveDeletedFilesForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_preserveDeletedFilesHasBeenSet = true;
              }

              else if (initialKeyStr == "PreserveDevices") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_preserveDevices = PreserveDevicesMapper::GetPreserveDevicesForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_preserveDevicesHasBeenSet = true;
              }

              else if (initialKeyStr == "PosixPermissions") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_posixPermissions = PosixPermissionsMapper::GetPosixPermissionsForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_posixPermissionsHasBeenSet = true;
              }

              else if (initialKeyStr == "BytesPerSecond") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_bytesPerSecond = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_bytesPerSecond = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_bytesPerSecondHasBeenSet = true;
              }

              else if (initialKeyStr == "TaskQueueing") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_taskQueueing = TaskQueueingMapper::GetTaskQueueingForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_taskQueueingHasBeenSet = true;
              }

              else if (initialKeyStr == "LogLevel") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_logLevel =
                      LogLevelMapper::GetLogLevelForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_logLevelHasBeenSet = true;
              }

              else if (initialKeyStr == "TransferMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_transferMode = TransferModeMapper::GetTransferModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_transferModeHasBeenSet = true;
              }

              else if (initialKeyStr == "SecurityDescriptorCopyFlags") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_securityDescriptorCopyFlags = SmbSecurityDescriptorCopyFlagsMapper::GetSmbSecurityDescriptorCopyFlagsForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_securityDescriptorCopyFlagsHasBeenSet = true;
              }

              else if (initialKeyStr == "ObjectTags") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_objectTags =
                      ObjectTagsMapper::GetObjectTagsForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_objectTagsHasBeenSet = true;
              }

              else if (initialKeyStr == "ObjectMetadata") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_objectMetadata = ObjectMetadataMapper::GetObjectMetadataForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_objectMetadataHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Options", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "VerifyMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_verifyMode =
                    VerifyModeMapper::GetVerifyModeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_verifyModeHasBeenSet = true;
            }

            else if (initialKeyStr == "OverwriteMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_overwriteMode = OverwriteModeMapper::GetOverwriteModeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_overwriteModeHasBeenSet = true;
            }

            else if (initialKeyStr == "Atime") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_atime = AtimeMapper::GetAtimeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_atimeHasBeenSet = true;
            }

            else if (initialKeyStr == "Mtime") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_mtime = MtimeMapper::GetMtimeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_mtimeHasBeenSet = true;
            }

            else if (initialKeyStr == "Uid") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_uid = UidMapper::GetUidForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_uidHasBeenSet = true;
            }

            else if (initialKeyStr == "Gid") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_gid = GidMapper::GetGidForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_gidHasBeenSet = true;
            }

            else if (initialKeyStr == "PreserveDeletedFiles") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_preserveDeletedFiles = PreserveDeletedFilesMapper::GetPreserveDeletedFilesForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_preserveDeletedFilesHasBeenSet = true;
            }

            else if (initialKeyStr == "PreserveDevices") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_preserveDevices = PreserveDevicesMapper::GetPreserveDevicesForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_preserveDevicesHasBeenSet = true;
            }

            else if (initialKeyStr == "PosixPermissions") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_posixPermissions = PosixPermissionsMapper::GetPosixPermissionsForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_posixPermissionsHasBeenSet = true;
            }

            else if (initialKeyStr == "BytesPerSecond") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_bytesPerSecond = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_bytesPerSecond = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_bytesPerSecondHasBeenSet = true;
            }

            else if (initialKeyStr == "TaskQueueing") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_taskQueueing = TaskQueueingMapper::GetTaskQueueingForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_taskQueueingHasBeenSet = true;
            }

            else if (initialKeyStr == "LogLevel") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_logLevel =
                    LogLevelMapper::GetLogLevelForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_logLevelHasBeenSet = true;
            }

            else if (initialKeyStr == "TransferMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_transferMode = TransferModeMapper::GetTransferModeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_transferModeHasBeenSet = true;
            }

            else if (initialKeyStr == "SecurityDescriptorCopyFlags") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_securityDescriptorCopyFlags = SmbSecurityDescriptorCopyFlagsMapper::GetSmbSecurityDescriptorCopyFlagsForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_securityDescriptorCopyFlagsHasBeenSet = true;
            }

            else if (initialKeyStr == "ObjectTags") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_objectTags =
                    ObjectTagsMapper::GetObjectTagsForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_objectTagsHasBeenSet = true;
            }

            else if (initialKeyStr == "ObjectMetadata") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_objectMetadata = ObjectMetadataMapper::GetObjectMetadataForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_objectMetadataHasBeenSet = true;
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

void Options::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_verifyModeHasBeenSet) {
    mapSize++;
  }
  if (m_overwriteModeHasBeenSet) {
    mapSize++;
  }
  if (m_atimeHasBeenSet) {
    mapSize++;
  }
  if (m_mtimeHasBeenSet) {
    mapSize++;
  }
  if (m_uidHasBeenSet) {
    mapSize++;
  }
  if (m_gidHasBeenSet) {
    mapSize++;
  }
  if (m_preserveDeletedFilesHasBeenSet) {
    mapSize++;
  }
  if (m_preserveDevicesHasBeenSet) {
    mapSize++;
  }
  if (m_posixPermissionsHasBeenSet) {
    mapSize++;
  }
  if (m_bytesPerSecondHasBeenSet) {
    mapSize++;
  }
  if (m_taskQueueingHasBeenSet) {
    mapSize++;
  }
  if (m_logLevelHasBeenSet) {
    mapSize++;
  }
  if (m_transferModeHasBeenSet) {
    mapSize++;
  }
  if (m_securityDescriptorCopyFlagsHasBeenSet) {
    mapSize++;
  }
  if (m_objectTagsHasBeenSet) {
    mapSize++;
  }
  if (m_objectMetadataHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_verifyModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VerifyMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(VerifyModeMapper::GetNameForVerifyMode(m_verifyMode).c_str()));
  }

  if (m_overwriteModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OverwriteMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(OverwriteModeMapper::GetNameForOverwriteMode(m_overwriteMode).c_str()));
  }

  if (m_atimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Atime"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AtimeMapper::GetNameForAtime(m_atime).c_str()));
  }

  if (m_mtimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Mtime"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(MtimeMapper::GetNameForMtime(m_mtime).c_str()));
  }

  if (m_uidHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Uid"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(UidMapper::GetNameForUid(m_uid).c_str()));
  }

  if (m_gidHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Gid"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(GidMapper::GetNameForGid(m_gid).c_str()));
  }

  if (m_preserveDeletedFilesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PreserveDeletedFiles"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(PreserveDeletedFilesMapper::GetNameForPreserveDeletedFiles(m_preserveDeletedFiles).c_str()));
  }

  if (m_preserveDevicesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PreserveDevices"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PreserveDevicesMapper::GetNameForPreserveDevices(m_preserveDevices).c_str()));
  }

  if (m_posixPermissionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PosixPermissions"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PosixPermissionsMapper::GetNameForPosixPermissions(m_posixPermissions).c_str()));
  }

  if (m_bytesPerSecondHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BytesPerSecond"));
    (m_bytesPerSecond >= 0) ? encoder.WriteUInt(m_bytesPerSecond) : encoder.WriteNegInt(m_bytesPerSecond);
  }

  if (m_taskQueueingHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TaskQueueing"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TaskQueueingMapper::GetNameForTaskQueueing(m_taskQueueing).c_str()));
  }

  if (m_logLevelHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LogLevel"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LogLevelMapper::GetNameForLogLevel(m_logLevel).c_str()));
  }

  if (m_transferModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TransferMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TransferModeMapper::GetNameForTransferMode(m_transferMode).c_str()));
  }

  if (m_securityDescriptorCopyFlagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SecurityDescriptorCopyFlags"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        SmbSecurityDescriptorCopyFlagsMapper::GetNameForSmbSecurityDescriptorCopyFlags(m_securityDescriptorCopyFlags).c_str()));
  }

  if (m_objectTagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ObjectTags"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ObjectTagsMapper::GetNameForObjectTags(m_objectTags).c_str()));
  }

  if (m_objectMetadataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ObjectMetadata"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ObjectMetadataMapper::GetNameForObjectMetadata(m_objectMetadata).c_str()));
  }
}

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws