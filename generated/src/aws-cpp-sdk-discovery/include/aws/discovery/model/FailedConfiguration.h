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
    AWS_APPLICATIONDISCOVERYSERVICE_API FailedConfiguration();
    AWS_APPLICATIONDISCOVERYSERVICE_API FailedConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API FailedConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique identifier of the configuration the failed to delete. </p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }

    /**
     * <p> The unique identifier of the configuration the failed to delete. </p>
     */
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }

    /**
     * <p> The unique identifier of the configuration the failed to delete. </p>
     */
    inline void SetConfigurationId(const Aws::String& value) { m_configurationIdHasBeenSet = true; m_configurationId = value; }

    /**
     * <p> The unique identifier of the configuration the failed to delete. </p>
     */
    inline void SetConfigurationId(Aws::String&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::move(value); }

    /**
     * <p> The unique identifier of the configuration the failed to delete. </p>
     */
    inline void SetConfigurationId(const char* value) { m_configurationIdHasBeenSet = true; m_configurationId.assign(value); }

    /**
     * <p> The unique identifier of the configuration the failed to delete. </p>
     */
    inline FailedConfiguration& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * <p> The unique identifier of the configuration the failed to delete. </p>
     */
    inline FailedConfiguration& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the configuration the failed to delete. </p>
     */
    inline FailedConfiguration& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}


    /**
     * <p> The integer error code associated with the error message. </p>
     */
    inline int GetErrorStatusCode() const{ return m_errorStatusCode; }

    /**
     * <p> The integer error code associated with the error message. </p>
     */
    inline bool ErrorStatusCodeHasBeenSet() const { return m_errorStatusCodeHasBeenSet; }

    /**
     * <p> The integer error code associated with the error message. </p>
     */
    inline void SetErrorStatusCode(int value) { m_errorStatusCodeHasBeenSet = true; m_errorStatusCode = value; }

    /**
     * <p> The integer error code associated with the error message. </p>
     */
    inline FailedConfiguration& WithErrorStatusCode(int value) { SetErrorStatusCode(value); return *this;}


    /**
     * <p> A descriptive message indicating why the associated configuration failed to
     * delete. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p> A descriptive message indicating why the associated configuration failed to
     * delete. </p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p> A descriptive message indicating why the associated configuration failed to
     * delete. </p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p> A descriptive message indicating why the associated configuration failed to
     * delete. </p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p> A descriptive message indicating why the associated configuration failed to
     * delete. </p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p> A descriptive message indicating why the associated configuration failed to
     * delete. </p>
     */
    inline FailedConfiguration& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p> A descriptive message indicating why the associated configuration failed to
     * delete. </p>
     */
    inline FailedConfiguration& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p> A descriptive message indicating why the associated configuration failed to
     * delete. </p>
     */
    inline FailedConfiguration& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet = false;

    int m_errorStatusCode;
    bool m_errorStatusCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
