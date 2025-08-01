/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ConfigurationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The encryption configuration details that include the status information of
   * the Amazon Web Services Key Management Service (KMS) key and the KMS access
   * role.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class ConfigurationDetails
  {
  public:
    AWS_IOT_API ConfigurationDetails() = default;
    AWS_IOT_API ConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The health status of KMS key and KMS access role. If either KMS key or KMS
     * access role is <code>UNHEALTHY</code>, the return value will be
     * <code>UNHEALTHY</code>. To use a customer-managed KMS key, the value of
     * <code>configurationStatus</code> must be <code>HEALTHY</code>. </p>
     */
    inline ConfigurationStatus GetConfigurationStatus() const { return m_configurationStatus; }
    inline bool ConfigurationStatusHasBeenSet() const { return m_configurationStatusHasBeenSet; }
    inline void SetConfigurationStatus(ConfigurationStatus value) { m_configurationStatusHasBeenSet = true; m_configurationStatus = value; }
    inline ConfigurationDetails& WithConfigurationStatus(ConfigurationStatus value) { SetConfigurationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code that indicates either the KMS key or the KMS access role is
     * <code>UNHEALTHY</code>. Valid values: <code>KMS_KEY_VALIDATION_ERROR</code> and
     * <code>ROLE_VALIDATION_ERROR</code>. </p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    ConfigurationDetails& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed error message that corresponds to the
     * <code>errorCode</code>.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    ConfigurationDetails& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    ConfigurationStatus m_configurationStatus{ConfigurationStatus::NOT_SET};
    bool m_configurationStatusHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
