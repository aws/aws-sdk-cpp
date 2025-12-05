/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactMediaProcessingFailureMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class StartContactMediaProcessingRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API StartContactMediaProcessingRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartContactMediaProcessing"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Amazon Connect instance. You can <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
   * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  StartContactMediaProcessingRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the contact.</p>
   */
  inline const Aws::String& GetContactId() const { return m_contactId; }
  inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
  template <typename ContactIdT = Aws::String>
  void SetContactId(ContactIdT&& value) {
    m_contactIdHasBeenSet = true;
    m_contactId = std::forward<ContactIdT>(value);
  }
  template <typename ContactIdT = Aws::String>
  StartContactMediaProcessingRequest& WithContactId(ContactIdT&& value) {
    SetContactId(std::forward<ContactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the Lambda processor. You can find the
   * Amazon Resource Name of the lambda in the lambda console. </p>
   */
  inline const Aws::String& GetProcessorArn() const { return m_processorArn; }
  inline bool ProcessorArnHasBeenSet() const { return m_processorArnHasBeenSet; }
  template <typename ProcessorArnT = Aws::String>
  void SetProcessorArn(ProcessorArnT&& value) {
    m_processorArnHasBeenSet = true;
    m_processorArn = std::forward<ProcessorArnT>(value);
  }
  template <typename ProcessorArnT = Aws::String>
  StartContactMediaProcessingRequest& WithProcessorArn(ProcessorArnT&& value) {
    SetProcessorArn(std::forward<ProcessorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The desired behavior for failed message processing. </p>
   */
  inline ContactMediaProcessingFailureMode GetFailureMode() const { return m_failureMode; }
  inline bool FailureModeHasBeenSet() const { return m_failureModeHasBeenSet; }
  inline void SetFailureMode(ContactMediaProcessingFailureMode value) {
    m_failureModeHasBeenSet = true;
    m_failureMode = value;
  }
  inline StartContactMediaProcessingRequest& WithFailureMode(ContactMediaProcessingFailureMode value) {
    SetFailureMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_contactId;

  Aws::String m_processorArn;

  ContactMediaProcessingFailureMode m_failureMode{ContactMediaProcessingFailureMode::NOT_SET};
  bool m_instanceIdHasBeenSet = false;
  bool m_contactIdHasBeenSet = false;
  bool m_processorArnHasBeenSet = false;
  bool m_failureModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
