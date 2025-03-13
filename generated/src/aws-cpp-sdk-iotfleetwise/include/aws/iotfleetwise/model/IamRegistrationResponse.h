/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/RegistrationStatus.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Information about registering an Identity and Access Management (IAM)
   * resource so Amazon Web Services IoT FleetWise edge agent software can transfer
   * your vehicle data to Amazon Timestream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/IamRegistrationResponse">AWS
   * API Reference</a></p>
   */
  class IamRegistrationResponse
  {
  public:
    AWS_IOTFLEETWISE_API IamRegistrationResponse() = default;
    AWS_IOTFLEETWISE_API IamRegistrationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API IamRegistrationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to register.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    IamRegistrationResponse& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of registering your IAM resource. The status can be one of
     * <code>REGISTRATION_SUCCESS</code>, <code>REGISTRATION_PENDING</code>,
     * <code>REGISTRATION_FAILURE</code>.</p>
     */
    inline RegistrationStatus GetRegistrationStatus() const { return m_registrationStatus; }
    inline bool RegistrationStatusHasBeenSet() const { return m_registrationStatusHasBeenSet; }
    inline void SetRegistrationStatus(RegistrationStatus value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = value; }
    inline IamRegistrationResponse& WithRegistrationStatus(RegistrationStatus value) { SetRegistrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message associated with a registration error.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    IamRegistrationResponse& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    RegistrationStatus m_registrationStatus{RegistrationStatus::NOT_SET};
    bool m_registrationStatusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
