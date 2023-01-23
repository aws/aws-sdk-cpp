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
    AWS_APPFLOW_API CustomConnectorProfileProperties();
    AWS_APPFLOW_API CustomConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API CustomConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A map of properties that are required to create a profile for the custom
     * connector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProfileProperties() const{ return m_profileProperties; }

    /**
     * <p>A map of properties that are required to create a profile for the custom
     * connector.</p>
     */
    inline bool ProfilePropertiesHasBeenSet() const { return m_profilePropertiesHasBeenSet; }

    /**
     * <p>A map of properties that are required to create a profile for the custom
     * connector.</p>
     */
    inline void SetProfileProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_profilePropertiesHasBeenSet = true; m_profileProperties = value; }

    /**
     * <p>A map of properties that are required to create a profile for the custom
     * connector.</p>
     */
    inline void SetProfileProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_profilePropertiesHasBeenSet = true; m_profileProperties = std::move(value); }

    /**
     * <p>A map of properties that are required to create a profile for the custom
     * connector.</p>
     */
    inline CustomConnectorProfileProperties& WithProfileProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetProfileProperties(value); return *this;}

    /**
     * <p>A map of properties that are required to create a profile for the custom
     * connector.</p>
     */
    inline CustomConnectorProfileProperties& WithProfileProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetProfileProperties(std::move(value)); return *this;}

    /**
     * <p>A map of properties that are required to create a profile for the custom
     * connector.</p>
     */
    inline CustomConnectorProfileProperties& AddProfileProperties(const Aws::String& key, const Aws::String& value) { m_profilePropertiesHasBeenSet = true; m_profileProperties.emplace(key, value); return *this; }

    /**
     * <p>A map of properties that are required to create a profile for the custom
     * connector.</p>
     */
    inline CustomConnectorProfileProperties& AddProfileProperties(Aws::String&& key, const Aws::String& value) { m_profilePropertiesHasBeenSet = true; m_profileProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of properties that are required to create a profile for the custom
     * connector.</p>
     */
    inline CustomConnectorProfileProperties& AddProfileProperties(const Aws::String& key, Aws::String&& value) { m_profilePropertiesHasBeenSet = true; m_profileProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of properties that are required to create a profile for the custom
     * connector.</p>
     */
    inline CustomConnectorProfileProperties& AddProfileProperties(Aws::String&& key, Aws::String&& value) { m_profilePropertiesHasBeenSet = true; m_profileProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of properties that are required to create a profile for the custom
     * connector.</p>
     */
    inline CustomConnectorProfileProperties& AddProfileProperties(const char* key, Aws::String&& value) { m_profilePropertiesHasBeenSet = true; m_profileProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of properties that are required to create a profile for the custom
     * connector.</p>
     */
    inline CustomConnectorProfileProperties& AddProfileProperties(Aws::String&& key, const char* value) { m_profilePropertiesHasBeenSet = true; m_profileProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of properties that are required to create a profile for the custom
     * connector.</p>
     */
    inline CustomConnectorProfileProperties& AddProfileProperties(const char* key, const char* value) { m_profilePropertiesHasBeenSet = true; m_profileProperties.emplace(key, value); return *this; }


    
    inline const OAuth2Properties& GetOAuth2Properties() const{ return m_oAuth2Properties; }

    
    inline bool OAuth2PropertiesHasBeenSet() const { return m_oAuth2PropertiesHasBeenSet; }

    
    inline void SetOAuth2Properties(const OAuth2Properties& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties = value; }

    
    inline void SetOAuth2Properties(OAuth2Properties&& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties = std::move(value); }

    
    inline CustomConnectorProfileProperties& WithOAuth2Properties(const OAuth2Properties& value) { SetOAuth2Properties(value); return *this;}

    
    inline CustomConnectorProfileProperties& WithOAuth2Properties(OAuth2Properties&& value) { SetOAuth2Properties(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_profileProperties;
    bool m_profilePropertiesHasBeenSet = false;

    OAuth2Properties m_oAuth2Properties;
    bool m_oAuth2PropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
