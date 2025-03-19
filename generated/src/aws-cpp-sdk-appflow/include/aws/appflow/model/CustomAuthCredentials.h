/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>The custom credentials required for custom authentication.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CustomAuthCredentials">AWS
   * API Reference</a></p>
   */
  class CustomAuthCredentials
  {
  public:
    AWS_APPFLOW_API CustomAuthCredentials() = default;
    AWS_APPFLOW_API CustomAuthCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API CustomAuthCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom authentication type that the connector uses.</p>
     */
    inline const Aws::String& GetCustomAuthenticationType() const { return m_customAuthenticationType; }
    inline bool CustomAuthenticationTypeHasBeenSet() const { return m_customAuthenticationTypeHasBeenSet; }
    template<typename CustomAuthenticationTypeT = Aws::String>
    void SetCustomAuthenticationType(CustomAuthenticationTypeT&& value) { m_customAuthenticationTypeHasBeenSet = true; m_customAuthenticationType = std::forward<CustomAuthenticationTypeT>(value); }
    template<typename CustomAuthenticationTypeT = Aws::String>
    CustomAuthCredentials& WithCustomAuthenticationType(CustomAuthenticationTypeT&& value) { SetCustomAuthenticationType(std::forward<CustomAuthenticationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that holds custom authentication credentials.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCredentialsMap() const { return m_credentialsMap; }
    inline bool CredentialsMapHasBeenSet() const { return m_credentialsMapHasBeenSet; }
    template<typename CredentialsMapT = Aws::Map<Aws::String, Aws::String>>
    void SetCredentialsMap(CredentialsMapT&& value) { m_credentialsMapHasBeenSet = true; m_credentialsMap = std::forward<CredentialsMapT>(value); }
    template<typename CredentialsMapT = Aws::Map<Aws::String, Aws::String>>
    CustomAuthCredentials& WithCredentialsMap(CredentialsMapT&& value) { SetCredentialsMap(std::forward<CredentialsMapT>(value)); return *this;}
    template<typename CredentialsMapKeyT = Aws::String, typename CredentialsMapValueT = Aws::String>
    CustomAuthCredentials& AddCredentialsMap(CredentialsMapKeyT&& key, CredentialsMapValueT&& value) {
      m_credentialsMapHasBeenSet = true; m_credentialsMap.emplace(std::forward<CredentialsMapKeyT>(key), std::forward<CredentialsMapValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_customAuthenticationType;
    bool m_customAuthenticationTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_credentialsMap;
    bool m_credentialsMapHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
