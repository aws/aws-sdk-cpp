/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/PrivateConnectionProvisioningStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/PrivateConnectionProvisioningFailureCause.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Appflow
{
namespace Model
{

  /**
   * <p> Specifies the private connection provisioning state. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/PrivateConnectionProvisioningState">AWS
   * API Reference</a></p>
   */
  class PrivateConnectionProvisioningState
  {
  public:
    AWS_APPFLOW_API PrivateConnectionProvisioningState() = default;
    AWS_APPFLOW_API PrivateConnectionProvisioningState(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API PrivateConnectionProvisioningState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the private connection provisioning status. </p>
     */
    inline PrivateConnectionProvisioningStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PrivateConnectionProvisioningStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PrivateConnectionProvisioningState& WithStatus(PrivateConnectionProvisioningStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the private connection provisioning failure reason. </p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    PrivateConnectionProvisioningState& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the private connection provisioning failure cause. </p>
     */
    inline PrivateConnectionProvisioningFailureCause GetFailureCause() const { return m_failureCause; }
    inline bool FailureCauseHasBeenSet() const { return m_failureCauseHasBeenSet; }
    inline void SetFailureCause(PrivateConnectionProvisioningFailureCause value) { m_failureCauseHasBeenSet = true; m_failureCause = value; }
    inline PrivateConnectionProvisioningState& WithFailureCause(PrivateConnectionProvisioningFailureCause value) { SetFailureCause(value); return *this;}
    ///@}
  private:

    PrivateConnectionProvisioningStatus m_status{PrivateConnectionProvisioningStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    PrivateConnectionProvisioningFailureCause m_failureCause{PrivateConnectionProvisioningFailureCause::NOT_SET};
    bool m_failureCauseHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
