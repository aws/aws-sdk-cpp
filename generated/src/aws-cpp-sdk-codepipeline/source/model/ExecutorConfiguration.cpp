/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ExecutorConfiguration.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodePipeline {
namespace Model {

ExecutorConfiguration::ExecutorConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ExecutorConfiguration& ExecutorConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "lambdaExecutorConfiguration") {
                m_lambdaExecutorConfiguration = LambdaExecutorConfiguration(decoder);
                m_lambdaExecutorConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "jobWorkerExecutorConfiguration") {
                m_jobWorkerExecutorConfiguration = JobWorkerExecutorConfiguration(decoder);
                m_jobWorkerExecutorConfigurationHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ExecutorConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "lambdaExecutorConfiguration") {
              m_lambdaExecutorConfiguration = LambdaExecutorConfiguration(decoder);
              m_lambdaExecutorConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "jobWorkerExecutorConfiguration") {
              m_jobWorkerExecutorConfiguration = JobWorkerExecutorConfiguration(decoder);
              m_jobWorkerExecutorConfigurationHasBeenSet = true;
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

void ExecutorConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_lambdaExecutorConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_jobWorkerExecutorConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_lambdaExecutorConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lambdaExecutorConfiguration"));
    m_lambdaExecutorConfiguration.CborEncode(encoder);
  }

  if (m_jobWorkerExecutorConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("jobWorkerExecutorConfiguration"));
    m_jobWorkerExecutorConfiguration.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws