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
 * <p>Input for authorizing vended log delivery for a resource.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/AllowVendedLogDeliveryForResourceInput">AWS
 * API Reference</a></p>
 */
class AllowVendedLogDeliveryForResourceRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API AllowVendedLogDeliveryForResourceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AllowVendedLogDeliveryForResource"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the resource being authorized for vended log delivery.</p>
   */
  inline const Aws::String& GetResourceArnBeingAuthorized() const { return m_resourceArnBeingAuthorized; }
  inline bool ResourceArnBeingAuthorizedHasBeenSet() const { return m_resourceArnBeingAuthorizedHasBeenSet; }
  template <typename ResourceArnBeingAuthorizedT = Aws::String>
  void SetResourceArnBeingAuthorized(ResourceArnBeingAuthorizedT&& value) {
    m_resourceArnBeingAuthorizedHasBeenSet = true;
    m_resourceArnBeingAuthorized = std::forward<ResourceArnBeingAuthorizedT>(value);
  }
  template <typename ResourceArnBeingAuthorizedT = Aws::String>
  AllowVendedLogDeliveryForResourceRequest& WithResourceArnBeingAuthorized(ResourceArnBeingAuthorizedT&& value) {
    SetResourceArnBeingAuthorized(std::forward<ResourceArnBeingAuthorizedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the delivery source for vended log delivery.</p>
   */
  inline const Aws::String& GetDeliverySourceArn() const { return m_deliverySourceArn; }
  inline bool DeliverySourceArnHasBeenSet() const { return m_deliverySourceArnHasBeenSet; }
  template <typename DeliverySourceArnT = Aws::String>
  void SetDeliverySourceArn(DeliverySourceArnT&& value) {
    m_deliverySourceArnHasBeenSet = true;
    m_deliverySourceArn = std::forward<DeliverySourceArnT>(value);
  }
  template <typename DeliverySourceArnT = Aws::String>
  AllowVendedLogDeliveryForResourceRequest& WithDeliverySourceArn(DeliverySourceArnT&& value) {
    SetDeliverySourceArn(std::forward<DeliverySourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of log to be delivered.</p>
   */
  inline const Aws::String& GetLogType() const { return m_logType; }
  inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }
  template <typename LogTypeT = Aws::String>
  void SetLogType(LogTypeT&& value) {
    m_logTypeHasBeenSet = true;
    m_logType = std::forward<LogTypeT>(value);
  }
  template <typename LogTypeT = Aws::String>
  AllowVendedLogDeliveryForResourceRequest& WithLogType(LogTypeT&& value) {
    SetLogType(std::forward<LogTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArnBeingAuthorized;

  Aws::String m_deliverySourceArn;

  Aws::String m_logType;
  bool m_resourceArnBeingAuthorizedHasBeenSet = false;
  bool m_deliverySourceArnHasBeenSet = false;
  bool m_logTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
