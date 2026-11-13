/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentTarget.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeDeploy {
namespace Model {

DeploymentTarget::DeploymentTarget(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

DeploymentTarget& DeploymentTarget::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "deploymentTargetType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_deploymentTargetType = DeploymentTargetTypeMapper::GetDeploymentTargetTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_deploymentTargetTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "instanceTarget") {
                m_instanceTarget = InstanceTarget(decoder);
                m_instanceTargetHasBeenSet = true;
              }

              else if (initialKeyStr == "lambdaTarget") {
                m_lambdaTarget = LambdaTarget(decoder);
                m_lambdaTargetHasBeenSet = true;
              }

              else if (initialKeyStr == "ecsTarget") {
                m_ecsTarget = ECSTarget(decoder);
                m_ecsTargetHasBeenSet = true;
              }

              else if (initialKeyStr == "cloudFormationTarget") {
                m_cloudFormationTarget = CloudFormationTarget(decoder);
                m_cloudFormationTargetHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DeploymentTarget", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "deploymentTargetType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_deploymentTargetType = DeploymentTargetTypeMapper::GetDeploymentTargetTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_deploymentTargetTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "instanceTarget") {
              m_instanceTarget = InstanceTarget(decoder);
              m_instanceTargetHasBeenSet = true;
            }

            else if (initialKeyStr == "lambdaTarget") {
              m_lambdaTarget = LambdaTarget(decoder);
              m_lambdaTargetHasBeenSet = true;
            }

            else if (initialKeyStr == "ecsTarget") {
              m_ecsTarget = ECSTarget(decoder);
              m_ecsTargetHasBeenSet = true;
            }

            else if (initialKeyStr == "cloudFormationTarget") {
              m_cloudFormationTarget = CloudFormationTarget(decoder);
              m_cloudFormationTargetHasBeenSet = true;
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

void DeploymentTarget::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_deploymentTargetTypeHasBeenSet) {
    mapSize++;
  }
  if (m_instanceTargetHasBeenSet) {
    mapSize++;
  }
  if (m_lambdaTargetHasBeenSet) {
    mapSize++;
  }
  if (m_ecsTargetHasBeenSet) {
    mapSize++;
  }
  if (m_cloudFormationTargetHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_deploymentTargetTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("deploymentTargetType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(DeploymentTargetTypeMapper::GetNameForDeploymentTargetType(m_deploymentTargetType).c_str()));
  }

  if (m_instanceTargetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("instanceTarget"));
    m_instanceTarget.CborEncode(encoder);
  }

  if (m_lambdaTargetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lambdaTarget"));
    m_lambdaTarget.CborEncode(encoder);
  }

  if (m_ecsTargetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ecsTarget"));
    m_ecsTarget.CborEncode(encoder);
  }

  if (m_cloudFormationTargetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("cloudFormationTarget"));
    m_cloudFormationTarget.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws