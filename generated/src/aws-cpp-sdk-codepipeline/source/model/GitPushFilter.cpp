/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/GitPushFilter.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodePipeline {
namespace Model {

GitPushFilter::GitPushFilter(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

GitPushFilter& GitPushFilter::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "tags") {
                m_tags = GitTagFilterCriteria(decoder);
                m_tagsHasBeenSet = true;
              }

              else if (initialKeyStr == "branches") {
                m_branches = GitBranchFilterCriteria(decoder);
                m_branchesHasBeenSet = true;
              }

              else if (initialKeyStr == "filePaths") {
                m_filePaths = GitFilePathFilterCriteria(decoder);
                m_filePathsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("GitPushFilter", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "tags") {
              m_tags = GitTagFilterCriteria(decoder);
              m_tagsHasBeenSet = true;
            }

            else if (initialKeyStr == "branches") {
              m_branches = GitBranchFilterCriteria(decoder);
              m_branchesHasBeenSet = true;
            }

            else if (initialKeyStr == "filePaths") {
              m_filePaths = GitFilePathFilterCriteria(decoder);
              m_filePathsHasBeenSet = true;
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

void GitPushFilter::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_branchesHasBeenSet) {
    mapSize++;
  }
  if (m_filePathsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    m_tags.CborEncode(encoder);
  }

  if (m_branchesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("branches"));
    m_branches.CborEncode(encoder);
  }

  if (m_filePathsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("filePaths"));
    m_filePaths.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws