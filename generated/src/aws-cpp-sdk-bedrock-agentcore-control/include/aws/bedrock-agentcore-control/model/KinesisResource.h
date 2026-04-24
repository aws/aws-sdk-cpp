/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ContentConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Configuration for Kinesis Data Stream delivery.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/KinesisResource">AWS
 * API Reference</a></p>
 */
class KinesisResource {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API KinesisResource() = default;
  AWS_BEDROCKAGENTCORECONTROL_API KinesisResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API KinesisResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ARN of the Kinesis Data Stream.</p>
   */
  inline const Aws::String& GetDataStreamArn() const { return m_dataStreamArn; }
  inline bool DataStreamArnHasBeenSet() const { return m_dataStreamArnHasBeenSet; }
  template <typename DataStreamArnT = Aws::String>
  void SetDataStreamArn(DataStreamArnT&& value) {
    m_dataStreamArnHasBeenSet = true;
    m_dataStreamArn = std::forward<DataStreamArnT>(value);
  }
  template <typename DataStreamArnT = Aws::String>
  KinesisResource& WithDataStreamArn(DataStreamArnT&& value) {
    SetDataStreamArn(std::forward<DataStreamArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Content configurations for stream delivery.</p>
   */
  inline const Aws::Vector<ContentConfiguration>& GetContentConfigurations() const { return m_contentConfigurations; }
  inline bool ContentConfigurationsHasBeenSet() const { return m_contentConfigurationsHasBeenSet; }
  template <typename ContentConfigurationsT = Aws::Vector<ContentConfiguration>>
  void SetContentConfigurations(ContentConfigurationsT&& value) {
    m_contentConfigurationsHasBeenSet = true;
    m_contentConfigurations = std::forward<ContentConfigurationsT>(value);
  }
  template <typename ContentConfigurationsT = Aws::Vector<ContentConfiguration>>
  KinesisResource& WithContentConfigurations(ContentConfigurationsT&& value) {
    SetContentConfigurations(std::forward<ContentConfigurationsT>(value));
    return *this;
  }
  template <typename ContentConfigurationsT = ContentConfiguration>
  KinesisResource& AddContentConfigurations(ContentConfigurationsT&& value) {
    m_contentConfigurationsHasBeenSet = true;
    m_contentConfigurations.emplace_back(std::forward<ContentConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dataStreamArn;

  Aws::Vector<ContentConfiguration> m_contentConfigurations;
  bool m_dataStreamArnHasBeenSet = false;
  bool m_contentConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
