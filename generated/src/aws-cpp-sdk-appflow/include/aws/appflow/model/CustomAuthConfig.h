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
    AWS_APPFLOW_API CustomAuthConfig() = default;
    AWS_APPFLOW_API CustomAuthConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API CustomAuthConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authentication type that the custom connector uses.</p>
     */
    inline const Aws::String& GetCustomAuthenticationType() const { return m_customAuthenticationType; }
    inline bool CustomAuthenticationTypeHasBeenSet() const { return m_customAuthenticationTypeHasBeenSet; }
    template<typename CustomAuthenticationTypeT = Aws::String>
    void SetCustomAuthenticationType(CustomAuthenticationTypeT&& value) { m_customAuthenticationTypeHasBeenSet = true; m_customAuthenticationType = std::forward<CustomAuthenticationTypeT>(value); }
    template<typename CustomAuthenticationTypeT = Aws::String>
    CustomAuthConfig& WithCustomAuthenticationType(CustomAuthenticationTypeT&& value) { SetCustomAuthenticationType(std::forward<CustomAuthenticationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about authentication parameters required for authentication.</p>
     */
    inline const Aws::Vector<AuthParameter>& GetAuthParameters() const { return m_authParameters; }
    inline bool AuthParametersHasBeenSet() const { return m_authParametersHasBeenSet; }
    template<typename AuthParametersT = Aws::Vector<AuthParameter>>
    void SetAuthParameters(AuthParametersT&& value) { m_authParametersHasBeenSet = true; m_authParameters = std::forward<AuthParametersT>(value); }
    template<typename AuthParametersT = Aws::Vector<AuthParameter>>
    CustomAuthConfig& WithAuthParameters(AuthParametersT&& value) { SetAuthParameters(std::forward<AuthParametersT>(value)); return *this;}
    template<typename AuthParametersT = AuthParameter>
    CustomAuthConfig& AddAuthParameters(AuthParametersT&& value) { m_authParametersHasBeenSet = true; m_authParameters.emplace_back(std::forward<AuthParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_customAuthenticationType;
    bool m_customAuthenticationTypeHasBeenSet = false;

    Aws::Vector<AuthParameter> m_authParameters;
    bool m_authParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
