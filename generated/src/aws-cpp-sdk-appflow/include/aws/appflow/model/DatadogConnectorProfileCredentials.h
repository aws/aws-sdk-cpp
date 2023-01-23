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
    AWS_APPFLOW_API DatadogConnectorProfileCredentials();
    AWS_APPFLOW_API DatadogConnectorProfileCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API DatadogConnectorProfileCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline const Aws::String& GetApiKey() const{ return m_apiKey; }

    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }

    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline void SetApiKey(const Aws::String& value) { m_apiKeyHasBeenSet = true; m_apiKey = value; }

    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline void SetApiKey(Aws::String&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::move(value); }

    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline void SetApiKey(const char* value) { m_apiKeyHasBeenSet = true; m_apiKey.assign(value); }

    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline DatadogConnectorProfileCredentials& WithApiKey(const Aws::String& value) { SetApiKey(value); return *this;}

    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline DatadogConnectorProfileCredentials& WithApiKey(Aws::String&& value) { SetApiKey(std::move(value)); return *this;}

    /**
     * <p> A unique alphanumeric identifier used to authenticate a user, developer, or
     * calling program to your API. </p>
     */
    inline DatadogConnectorProfileCredentials& WithApiKey(const char* value) { SetApiKey(value); return *this;}


    /**
     * <p> Application keys, in conjunction with your API key, give you full access to
     * Datadog’s programmatic API. Application keys are associated with the user
     * account that created them. The application key is used to log all requests made
     * to the API. </p>
     */
    inline const Aws::String& GetApplicationKey() const{ return m_applicationKey; }

    /**
     * <p> Application keys, in conjunction with your API key, give you full access to
     * Datadog’s programmatic API. Application keys are associated with the user
     * account that created them. The application key is used to log all requests made
     * to the API. </p>
     */
    inline bool ApplicationKeyHasBeenSet() const { return m_applicationKeyHasBeenSet; }

    /**
     * <p> Application keys, in conjunction with your API key, give you full access to
     * Datadog’s programmatic API. Application keys are associated with the user
     * account that created them. The application key is used to log all requests made
     * to the API. </p>
     */
    inline void SetApplicationKey(const Aws::String& value) { m_applicationKeyHasBeenSet = true; m_applicationKey = value; }

    /**
     * <p> Application keys, in conjunction with your API key, give you full access to
     * Datadog’s programmatic API. Application keys are associated with the user
     * account that created them. The application key is used to log all requests made
     * to the API. </p>
     */
    inline void SetApplicationKey(Aws::String&& value) { m_applicationKeyHasBeenSet = true; m_applicationKey = std::move(value); }

    /**
     * <p> Application keys, in conjunction with your API key, give you full access to
     * Datadog’s programmatic API. Application keys are associated with the user
     * account that created them. The application key is used to log all requests made
     * to the API. </p>
     */
    inline void SetApplicationKey(const char* value) { m_applicationKeyHasBeenSet = true; m_applicationKey.assign(value); }

    /**
     * <p> Application keys, in conjunction with your API key, give you full access to
     * Datadog’s programmatic API. Application keys are associated with the user
     * account that created them. The application key is used to log all requests made
     * to the API. </p>
     */
    inline DatadogConnectorProfileCredentials& WithApplicationKey(const Aws::String& value) { SetApplicationKey(value); return *this;}

    /**
     * <p> Application keys, in conjunction with your API key, give you full access to
     * Datadog’s programmatic API. Application keys are associated with the user
     * account that created them. The application key is used to log all requests made
     * to the API. </p>
     */
    inline DatadogConnectorProfileCredentials& WithApplicationKey(Aws::String&& value) { SetApplicationKey(std::move(value)); return *this;}

    /**
     * <p> Application keys, in conjunction with your API key, give you full access to
     * Datadog’s programmatic API. Application keys are associated with the user
     * account that created them. The application key is used to log all requests made
     * to the API. </p>
     */
    inline DatadogConnectorProfileCredentials& WithApplicationKey(const char* value) { SetApplicationKey(value); return *this;}

  private:

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet = false;

    Aws::String m_applicationKey;
    bool m_applicationKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
