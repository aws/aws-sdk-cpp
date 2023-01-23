/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/AuthParameter.h>
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
   * <p>Configuration information required for custom authentication.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CustomAuthConfig">AWS
   * API Reference</a></p>
   */
  class CustomAuthConfig
  {
  public:
    AWS_APPFLOW_API CustomAuthConfig();
    AWS_APPFLOW_API CustomAuthConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API CustomAuthConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The authentication type that the custom connector uses.</p>
     */
    inline const Aws::String& GetCustomAuthenticationType() const{ return m_customAuthenticationType; }

    /**
     * <p>The authentication type that the custom connector uses.</p>
     */
    inline bool CustomAuthenticationTypeHasBeenSet() const { return m_customAuthenticationTypeHasBeenSet; }

    /**
     * <p>The authentication type that the custom connector uses.</p>
     */
    inline void SetCustomAuthenticationType(const Aws::String& value) { m_customAuthenticationTypeHasBeenSet = true; m_customAuthenticationType = value; }

    /**
     * <p>The authentication type that the custom connector uses.</p>
     */
    inline void SetCustomAuthenticationType(Aws::String&& value) { m_customAuthenticationTypeHasBeenSet = true; m_customAuthenticationType = std::move(value); }

    /**
     * <p>The authentication type that the custom connector uses.</p>
     */
    inline void SetCustomAuthenticationType(const char* value) { m_customAuthenticationTypeHasBeenSet = true; m_customAuthenticationType.assign(value); }

    /**
     * <p>The authentication type that the custom connector uses.</p>
     */
    inline CustomAuthConfig& WithCustomAuthenticationType(const Aws::String& value) { SetCustomAuthenticationType(value); return *this;}

    /**
     * <p>The authentication type that the custom connector uses.</p>
     */
    inline CustomAuthConfig& WithCustomAuthenticationType(Aws::String&& value) { SetCustomAuthenticationType(std::move(value)); return *this;}

    /**
     * <p>The authentication type that the custom connector uses.</p>
     */
    inline CustomAuthConfig& WithCustomAuthenticationType(const char* value) { SetCustomAuthenticationType(value); return *this;}


    /**
     * <p>Information about authentication parameters required for authentication.</p>
     */
    inline const Aws::Vector<AuthParameter>& GetAuthParameters() const{ return m_authParameters; }

    /**
     * <p>Information about authentication parameters required for authentication.</p>
     */
    inline bool AuthParametersHasBeenSet() const { return m_authParametersHasBeenSet; }

    /**
     * <p>Information about authentication parameters required for authentication.</p>
     */
    inline void SetAuthParameters(const Aws::Vector<AuthParameter>& value) { m_authParametersHasBeenSet = true; m_authParameters = value; }

    /**
     * <p>Information about authentication parameters required for authentication.</p>
     */
    inline void SetAuthParameters(Aws::Vector<AuthParameter>&& value) { m_authParametersHasBeenSet = true; m_authParameters = std::move(value); }

    /**
     * <p>Information about authentication parameters required for authentication.</p>
     */
    inline CustomAuthConfig& WithAuthParameters(const Aws::Vector<AuthParameter>& value) { SetAuthParameters(value); return *this;}

    /**
     * <p>Information about authentication parameters required for authentication.</p>
     */
    inline CustomAuthConfig& WithAuthParameters(Aws::Vector<AuthParameter>&& value) { SetAuthParameters(std::move(value)); return *this;}

    /**
     * <p>Information about authentication parameters required for authentication.</p>
     */
    inline CustomAuthConfig& AddAuthParameters(const AuthParameter& value) { m_authParametersHasBeenSet = true; m_authParameters.push_back(value); return *this; }

    /**
     * <p>Information about authentication parameters required for authentication.</p>
     */
    inline CustomAuthConfig& AddAuthParameters(AuthParameter&& value) { m_authParametersHasBeenSet = true; m_authParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_customAuthenticationType;
    bool m_customAuthenticationTypeHasBeenSet = false;

    Aws::Vector<AuthParameter> m_authParameters;
    bool m_authParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
