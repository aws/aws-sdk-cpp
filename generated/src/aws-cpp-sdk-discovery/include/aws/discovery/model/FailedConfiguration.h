/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p> A configuration ID paired with an error message. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/FailedConfiguration">AWS
   * API Reference</a></p>
   */
  class FailedConfiguration
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API FailedConfiguration() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API FailedConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API FailedConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the configuration the failed to delete. </p>
     */
    inline const Aws::String& GetConfigurationId() const { return m_configurationId; }
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }
    template<typename ConfigurationIdT = Aws::String>
    void SetConfigurationId(ConfigurationIdT&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::forward<ConfigurationIdT>(value); }
    template<typename ConfigurationIdT = Aws::String>
    FailedConfiguration& WithConfigurationId(ConfigurationIdT&& value) { SetConfigurationId(std::forward<ConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The integer error code associated with the error message. </p>
     */
    inline int GetErrorStatusCode() const { return m_errorStatusCode; }
    inline bool ErrorStatusCodeHasBeenSet() const { return m_errorStatusCodeHasBeenSet; }
    inline void SetErrorStatusCode(int value) { m_errorStatusCodeHasBeenSet = true; m_errorStatusCode = value; }
    inline FailedConfiguration& WithErrorStatusCode(int value) { SetErrorStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A descriptive message indicating why the associated configuration failed to
     * delete. </p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    FailedConfiguration& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet = false;

    int m_errorStatusCode{0};
    bool m_errorStatusCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
