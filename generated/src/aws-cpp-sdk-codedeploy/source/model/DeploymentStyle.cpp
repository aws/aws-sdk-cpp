/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentStyle.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeDeploy {
namespace Model {

DeploymentStyle::DeploymentStyle(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

DeploymentStyle& DeploymentStyle::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "deploymentType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_deploymentType = DeploymentTypeMapper::GetDeploymentTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_deploymentTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "deploymentOption") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_deploymentOption = DeploymentOptionMapper::GetDeploymentOptionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_deploymentOptionHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DeploymentStyle", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "deploymentType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_deploymentType = DeploymentTypeMapper::GetDeploymentTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_deploymentTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "deploymentOption") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_deploymentOption = DeploymentOptionMapper::GetDeploymentOptionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_deploymentOptionHasBeenSet = true;
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

void DeploymentStyle::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_deploymentTypeHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentOptionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_deploymentTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DeploymentTypeMapper::GetNameForDeploymentType(m_deploymentType).c_str()));
  }

  if (m_deploymentOptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentOption"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DeploymentOptionMapper::GetNameForDeploymentOption(m_deploymentOption).c_str()));
  }
}

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws