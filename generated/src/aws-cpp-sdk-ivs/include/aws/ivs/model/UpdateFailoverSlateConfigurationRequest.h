/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/ivs/IVS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace IVS {
namespace Model {

/**
 */
class UpdateFailoverSlateConfigurationRequest : public IVSRequest {
 public:
  AWS_IVS_API UpdateFailoverSlateConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateFailoverSlateConfiguration"; }

  AWS_IVS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>ARN of the failover slate configuration to be updated.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateFailoverSlateConfigurationRequest& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Failover-slate-configuration name. The value does not need to be unique.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateFailoverSlateConfigurationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of seconds of ingest interruption before the failover slate activates.
   * Minimum: <code>3</code>. Maximum: <code>5</code>. Default: <code>3</code>.</p>
   */
  inline int GetActivationThresholdSeconds() const { return m_activationThresholdSeconds; }
  inline bool ActivationThresholdSecondsHasBeenSet() const { return m_activationThresholdSecondsHasBeenSet; }
  inline void SetActivationThresholdSeconds(int value) {
    m_activationThresholdSecondsHasBeenSet = true;
    m_activationThresholdSeconds = value;
  }
  inline UpdateFailoverSlateConfigurationRequest& WithActivationThresholdSeconds(int value) {
    SetActivationThresholdSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Minimum number of seconds that the failover slate displays after activation.
   * Minimum: <code>3</code>. Maximum: <code>10</code>. Default: <code>3</code>.</p>
   */
  inline int GetMinSlateDisplaySeconds() const { return m_minSlateDisplaySeconds; }
  inline bool MinSlateDisplaySecondsHasBeenSet() const { return m_minSlateDisplaySecondsHasBeenSet; }
  inline void SetMinSlateDisplaySeconds(int value) {
    m_minSlateDisplaySecondsHasBeenSet = true;
    m_minSlateDisplaySeconds = value;
  }
  inline UpdateFailoverSlateConfigurationRequest& WithMinSlateDisplaySeconds(int value) {
    SetMinSlateDisplaySeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of seconds that the failover slate displays. Minimum:
   * <code>60</code>. Maximum: <code>180</code>. Default: <code>60</code>.</p>
   */
  inline int GetMaxSlateDisplaySeconds() const { return m_maxSlateDisplaySeconds; }
  inline bool MaxSlateDisplaySecondsHasBeenSet() const { return m_maxSlateDisplaySecondsHasBeenSet; }
  inline void SetMaxSlateDisplaySeconds(int value) {
    m_maxSlateDisplaySecondsHasBeenSet = true;
    m_maxSlateDisplaySeconds = value;
  }
  inline UpdateFailoverSlateConfigurationRequest& WithMaxSlateDisplaySeconds(int value) {
    SetMaxSlateDisplaySeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_name;

  int m_activationThresholdSeconds{0};

  int m_minSlateDisplaySeconds{0};

  int m_maxSlateDisplaySeconds{0};
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_activationThresholdSecondsHasBeenSet = false;
  bool m_minSlateDisplaySecondsHasBeenSet = false;
  bool m_maxSlateDisplaySecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
