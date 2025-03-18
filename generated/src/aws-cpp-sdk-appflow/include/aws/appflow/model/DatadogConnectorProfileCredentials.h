/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector-specific credentials required by Datadog. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DatadogConnectorProfileCredentials">AWS
   * API Reference</a></p>
   */
  class DatadogConnectorProfileCredentials
  {
  public:
    AWS_APPFLOW_API DatadogConnectorProfileCredentials() = default;
    AWS_APPFLOW_API DatadogConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API DatadogConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline const Aws::String& GetApiKey() const { return m_apiKey; }
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }
    template<typename ApiKeyT = Aws::String>
    void SetApiKey(ApiKeyT&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::forward<ApiKeyT>(value); }
    template<typename ApiKeyT = Aws::String>
    DatadogConnectorProfileCredentials& WithApiKey(ApiKeyT&& value) { SetApiKey(std::forward<ApiKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Application keys, in conjunction with your API key, give you full access to
     * Datadog’s programmatic API. Application keys are associated with the user
     * account that created them. The application key is used to log all requests made
     * to the API. </p>
     */
    inline const Aws::String& GetApplicationKey() const { return m_applicationKey; }
    inline bool ApplicationKeyHasBeenSet() const { return m_applicationKeyHasBeenSet; }
    template<typename ApplicationKeyT = Aws::String>
    void SetApplicationKey(ApplicationKeyT&& value) { m_applicationKeyHasBeenSet = true; m_applicationKey = std::forward<ApplicationKeyT>(value); }
    template<typename ApplicationKeyT = Aws::String>
    DatadogConnectorProfileCredentials& WithApplicationKey(ApplicationKeyT&& value) { SetApplicationKey(std::forward<ApplicationKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet = false;

    Aws::String m_applicationKey;
    bool m_applicationKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
