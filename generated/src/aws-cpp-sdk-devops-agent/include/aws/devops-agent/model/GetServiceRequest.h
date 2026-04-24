/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Input for retrieving a specific service association.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GetServiceInput">AWS
 * API Reference</a></p>
 */
class GetServiceRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API GetServiceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetService"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the given service.</p>
   */
  inline const Aws::String& GetServiceId() const { return m_serviceId; }
  inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
  template <typename ServiceIdT = Aws::String>
  void SetServiceId(ServiceIdT&& value) {
    m_serviceIdHasBeenSet = true;
    m_serviceId = std::forward<ServiceIdT>(value);
  }
  template <typename ServiceIdT = Aws::String>
  GetServiceRequest& WithServiceId(ServiceIdT&& value) {
    SetServiceId(std::forward<ServiceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceId;
  bool m_serviceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
