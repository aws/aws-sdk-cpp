/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControlRequest.h>
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

/**
 */
class ValidatePublisherRequest : public AgentRegistryControlRequest {
 public:
  AWS_AGENTREGISTRYCONTROL_API ValidatePublisherRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ValidatePublisher"; }

  AWS_AGENTREGISTRYCONTROL_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetPublisherArn() const { return m_publisherArn; }
  inline bool PublisherArnHasBeenSet() const { return m_publisherArnHasBeenSet; }
  template <typename PublisherArnT = Aws::String>
  void SetPublisherArn(PublisherArnT&& value) {
    m_publisherArnHasBeenSet = true;
    m_publisherArn = std::forward<PublisherArnT>(value);
  }
  template <typename PublisherArnT = Aws::String>
  ValidatePublisherRequest& WithPublisherArn(PublisherArnT&& value) {
    SetPublisherArn(std::forward<PublisherArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_publisherArn;
  bool m_publisherArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
