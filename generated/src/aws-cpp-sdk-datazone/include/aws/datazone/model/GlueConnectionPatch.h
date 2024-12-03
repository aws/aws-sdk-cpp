/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AuthenticationConfigurationPatch.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The Amazon Web Services Glue connection patch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GlueConnectionPatch">AWS
   * API Reference</a></p>
   */
  class GlueConnectionPatch
  {
  public:
    AWS_DATAZONE_API GlueConnectionPatch();
    AWS_DATAZONE_API GlueConnectionPatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GlueConnectionPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authentication configuration of the Amazon Web Services Glue connection
     * patch.</p>
     */
    inline const AuthenticationConfigurationPatch& GetAuthenticationConfiguration() const{ return m_authenticationConfiguration; }
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
    inline void SetAuthenticationConfiguration(const AuthenticationConfigurationPatch& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = value; }
    inline void SetAuthenticationConfiguration(AuthenticationConfigurationPatch&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::move(value); }
    inline GlueConnectionPatch& WithAuthenticationConfiguration(const AuthenticationConfigurationPatch& value) { SetAuthenticationConfiguration(value); return *this;}
    inline GlueConnectionPatch& WithAuthenticationConfiguration(AuthenticationConfigurationPatch&& value) { SetAuthenticationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the Amazon Web Services Glue connection patch.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConnectionProperties() const{ return m_connectionProperties; }
    inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }
    inline void SetConnectionProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = value; }
    inline void SetConnectionProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::move(value); }
    inline GlueConnectionPatch& WithConnectionProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetConnectionProperties(value); return *this;}
    inline GlueConnectionPatch& WithConnectionProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetConnectionProperties(std::move(value)); return *this;}
    inline GlueConnectionPatch& AddConnectionProperties(const Aws::String& key, const Aws::String& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, value); return *this; }
    inline GlueConnectionPatch& AddConnectionProperties(Aws::String&& key, const Aws::String& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnectionPatch& AddConnectionProperties(const Aws::String& key, Aws::String&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnectionPatch& AddConnectionProperties(Aws::String&& key, Aws::String&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline GlueConnectionPatch& AddConnectionProperties(const char* key, Aws::String&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, std::move(value)); return *this; }
    inline GlueConnectionPatch& AddConnectionProperties(Aws::String&& key, const char* value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), value); return *this; }
    inline GlueConnectionPatch& AddConnectionProperties(const char* key, const char* value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the Amazon Web Services Glue connection patch.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline GlueConnectionPatch& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GlueConnectionPatch& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GlueConnectionPatch& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    AuthenticationConfigurationPatch m_authenticationConfiguration;
    bool m_authenticationConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_connectionProperties;
    bool m_connectionPropertiesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
