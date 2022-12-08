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
    AWS_IOTFLEETWISE_API IamRegistrationResponse();
    AWS_IOTFLEETWISE_API IamRegistrationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API IamRegistrationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to register.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to register.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to register.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to register.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to register.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to register.</p>
     */
    inline IamRegistrationResponse& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to register.</p>
     */
    inline IamRegistrationResponse& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to register.</p>
     */
    inline IamRegistrationResponse& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The status of registering your IAM resource. The status can be one of
     * <code>REGISTRATION_SUCCESS</code>, <code>REGISTRATION_PENDING</code>,
     * <code>REGISTRATION_FAILURE</code>.</p>
     */
    inline const RegistrationStatus& GetRegistrationStatus() const{ return m_registrationStatus; }

    /**
     * <p>The status of registering your IAM resource. The status can be one of
     * <code>REGISTRATION_SUCCESS</code>, <code>REGISTRATION_PENDING</code>,
     * <code>REGISTRATION_FAILURE</code>.</p>
     */
    inline bool RegistrationStatusHasBeenSet() const { return m_registrationStatusHasBeenSet; }

    /**
     * <p>The status of registering your IAM resource. The status can be one of
     * <code>REGISTRATION_SUCCESS</code>, <code>REGISTRATION_PENDING</code>,
     * <code>REGISTRATION_FAILURE</code>.</p>
     */
    inline void SetRegistrationStatus(const RegistrationStatus& value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = value; }

    /**
     * <p>The status of registering your IAM resource. The status can be one of
     * <code>REGISTRATION_SUCCESS</code>, <code>REGISTRATION_PENDING</code>,
     * <code>REGISTRATION_FAILURE</code>.</p>
     */
    inline void SetRegistrationStatus(RegistrationStatus&& value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = std::move(value); }

    /**
     * <p>The status of registering your IAM resource. The status can be one of
     * <code>REGISTRATION_SUCCESS</code>, <code>REGISTRATION_PENDING</code>,
     * <code>REGISTRATION_FAILURE</code>.</p>
     */
    inline IamRegistrationResponse& WithRegistrationStatus(const RegistrationStatus& value) { SetRegistrationStatus(value); return *this;}

    /**
     * <p>The status of registering your IAM resource. The status can be one of
     * <code>REGISTRATION_SUCCESS</code>, <code>REGISTRATION_PENDING</code>,
     * <code>REGISTRATION_FAILURE</code>.</p>
     */
    inline IamRegistrationResponse& WithRegistrationStatus(RegistrationStatus&& value) { SetRegistrationStatus(std::move(value)); return *this;}


    /**
     * <p>A message associated with a registration error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>A message associated with a registration error.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>A message associated with a registration error.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>A message associated with a registration error.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>A message associated with a registration error.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>A message associated with a registration error.</p>
     */
    inline IamRegistrationResponse& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>A message associated with a registration error.</p>
     */
    inline IamRegistrationResponse& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>A message associated with a registration error.</p>
     */
    inline IamRegistrationResponse& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    RegistrationStatus m_registrationStatus;
    bool m_registrationStatusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
