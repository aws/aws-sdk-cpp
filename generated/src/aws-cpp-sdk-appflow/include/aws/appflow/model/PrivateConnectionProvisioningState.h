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
    AWS_APPFLOW_API PrivateConnectionProvisioningState();
    AWS_APPFLOW_API PrivateConnectionProvisioningState(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API PrivateConnectionProvisioningState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the private connection provisioning status. </p>
     */
    inline const PrivateConnectionProvisioningStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Specifies the private connection provisioning status. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Specifies the private connection provisioning status. </p>
     */
    inline void SetStatus(const PrivateConnectionProvisioningStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Specifies the private connection provisioning status. </p>
     */
    inline void SetStatus(PrivateConnectionProvisioningStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Specifies the private connection provisioning status. </p>
     */
    inline PrivateConnectionProvisioningState& WithStatus(const PrivateConnectionProvisioningStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Specifies the private connection provisioning status. </p>
     */
    inline PrivateConnectionProvisioningState& WithStatus(PrivateConnectionProvisioningStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> Specifies the private connection provisioning failure reason. </p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p> Specifies the private connection provisioning failure reason. </p>
     */
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }

    /**
     * <p> Specifies the private connection provisioning failure reason. </p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }

    /**
     * <p> Specifies the private connection provisioning failure reason. </p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }

    /**
     * <p> Specifies the private connection provisioning failure reason. </p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }

    /**
     * <p> Specifies the private connection provisioning failure reason. </p>
     */
    inline PrivateConnectionProvisioningState& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p> Specifies the private connection provisioning failure reason. </p>
     */
    inline PrivateConnectionProvisioningState& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p> Specifies the private connection provisioning failure reason. </p>
     */
    inline PrivateConnectionProvisioningState& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}


    /**
     * <p> Specifies the private connection provisioning failure cause. </p>
     */
    inline const PrivateConnectionProvisioningFailureCause& GetFailureCause() const{ return m_failureCause; }

    /**
     * <p> Specifies the private connection provisioning failure cause. </p>
     */
    inline bool FailureCauseHasBeenSet() const { return m_failureCauseHasBeenSet; }

    /**
     * <p> Specifies the private connection provisioning failure cause. </p>
     */
    inline void SetFailureCause(const PrivateConnectionProvisioningFailureCause& value) { m_failureCauseHasBeenSet = true; m_failureCause = value; }

    /**
     * <p> Specifies the private connection provisioning failure cause. </p>
     */
    inline void SetFailureCause(PrivateConnectionProvisioningFailureCause&& value) { m_failureCauseHasBeenSet = true; m_failureCause = std::move(value); }

    /**
     * <p> Specifies the private connection provisioning failure cause. </p>
     */
    inline PrivateConnectionProvisioningState& WithFailureCause(const PrivateConnectionProvisioningFailureCause& value) { SetFailureCause(value); return *this;}

    /**
     * <p> Specifies the private connection provisioning failure cause. </p>
     */
    inline PrivateConnectionProvisioningState& WithFailureCause(PrivateConnectionProvisioningFailureCause&& value) { SetFailureCause(std::move(value)); return *this;}

  private:

    PrivateConnectionProvisioningStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    PrivateConnectionProvisioningFailureCause m_failureCause;
    bool m_failureCauseHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
