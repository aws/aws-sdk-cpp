/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appflow/model/OAuth2Properties.h>
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
   * <p>The profile properties required by the custom connector.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CustomConnectorProfileProperties">AWS
   * API Reference</a></p>
   */
  class CustomConnectorProfileProperties
  {
  public:
    AWS_APPFLOW_API CustomConnectorProfileProperties() = default;
    AWS_APPFLOW_API CustomConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API CustomConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A map of properties that are required to create a profile for the custom
     * connector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProfileProperties() const { return m_profileProperties; }
    inline bool ProfilePropertiesHasBeenSet() const { return m_profilePropertiesHasBeenSet; }
    template<typename ProfilePropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetProfileProperties(ProfilePropertiesT&& value) { m_profilePropertiesHasBeenSet = true; m_profileProperties = std::forward<ProfilePropertiesT>(value); }
    template<typename ProfilePropertiesT = Aws::Map<Aws::String, Aws::String>>
    CustomConnectorProfileProperties& WithProfileProperties(ProfilePropertiesT&& value) { SetProfileProperties(std::forward<ProfilePropertiesT>(value)); return *this;}
    template<typename ProfilePropertiesKeyT = Aws::String, typename ProfilePropertiesValueT = Aws::String>
    CustomConnectorProfileProperties& AddProfileProperties(ProfilePropertiesKeyT&& key, ProfilePropertiesValueT&& value) {
      m_profilePropertiesHasBeenSet = true; m_profileProperties.emplace(std::forward<ProfilePropertiesKeyT>(key), std::forward<ProfilePropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const OAuth2Properties& GetOAuth2Properties() const { return m_oAuth2Properties; }
    inline bool OAuth2PropertiesHasBeenSet() const { return m_oAuth2PropertiesHasBeenSet; }
    template<typename OAuth2PropertiesT = OAuth2Properties>
    void SetOAuth2Properties(OAuth2PropertiesT&& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties = std::forward<OAuth2PropertiesT>(value); }
    template<typename OAuth2PropertiesT = OAuth2Properties>
    CustomConnectorProfileProperties& WithOAuth2Properties(OAuth2PropertiesT&& value) { SetOAuth2Properties(std::forward<OAuth2PropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_profileProperties;
    bool m_profilePropertiesHasBeenSet = false;

    OAuth2Properties m_oAuth2Properties;
    bool m_oAuth2PropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
