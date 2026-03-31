/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/KinesisResource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Supported stream delivery resource types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/StreamDeliveryResource">AWS
 * API Reference</a></p>
 */
class StreamDeliveryResource {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API StreamDeliveryResource() = default;
  AWS_BEDROCKAGENTCORECONTROL_API StreamDeliveryResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API StreamDeliveryResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Kinesis Data Stream configuration.</p>
   */
  inline const KinesisResource& GetKinesis() const { return m_kinesis; }
  inline bool KinesisHasBeenSet() const { return m_kinesisHasBeenSet; }
  template <typename KinesisT = KinesisResource>
  void SetKinesis(KinesisT&& value) {
    m_kinesisHasBeenSet = true;
    m_kinesis = std::forward<KinesisT>(value);
  }
  template <typename KinesisT = KinesisResource>
  StreamDeliveryResource& WithKinesis(KinesisT&& value) {
    SetKinesis(std::forward<KinesisT>(value));
    return *this;
  }
  ///@}
 private:
  KinesisResource m_kinesis;
  bool m_kinesisHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
