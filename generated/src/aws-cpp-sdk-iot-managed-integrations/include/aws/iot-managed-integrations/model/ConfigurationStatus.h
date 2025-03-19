/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/ConfigurationError.h>
#include <aws/iot-managed-integrations/model/ConfigurationState.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Provides the status of the default encryption configuration for an Amazon Web
   * Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ConfigurationStatus">AWS
   * API Reference</a></p>
   */
  class ConfigurationStatus
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ConfigurationStatus() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API ConfigurationStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API ConfigurationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error details describing a failed default encryption configuration
     * update.</p>
     */
    inline const ConfigurationError& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ConfigurationError>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ConfigurationError>
    ConfigurationStatus& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status state describing the default encryption configuration update.</p>
     */
    inline ConfigurationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ConfigurationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ConfigurationStatus& WithState(ConfigurationState value) { SetState(value); return *this;}
    ///@}
  private:

    ConfigurationError m_error;
    bool m_errorHasBeenSet = false;

    ConfigurationState m_state{ConfigurationState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
