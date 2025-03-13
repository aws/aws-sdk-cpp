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
    AWS_DATAZONE_API GlueConnectionPatch() = default;
    AWS_DATAZONE_API GlueConnectionPatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GlueConnectionPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authentication configuration of the Amazon Web Services Glue connection
     * patch.</p>
     */
    inline const AuthenticationConfigurationPatch& GetAuthenticationConfiguration() const { return m_authenticationConfiguration; }
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
    template<typename AuthenticationConfigurationT = AuthenticationConfigurationPatch>
    void SetAuthenticationConfiguration(AuthenticationConfigurationT&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::forward<AuthenticationConfigurationT>(value); }
    template<typename AuthenticationConfigurationT = AuthenticationConfigurationPatch>
    GlueConnectionPatch& WithAuthenticationConfiguration(AuthenticationConfigurationT&& value) { SetAuthenticationConfiguration(std::forward<AuthenticationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the Amazon Web Services Glue connection patch.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConnectionProperties() const { return m_connectionProperties; }
    inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }
    template<typename ConnectionPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetConnectionProperties(ConnectionPropertiesT&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::forward<ConnectionPropertiesT>(value); }
    template<typename ConnectionPropertiesT = Aws::Map<Aws::String, Aws::String>>
    GlueConnectionPatch& WithConnectionProperties(ConnectionPropertiesT&& value) { SetConnectionProperties(std::forward<ConnectionPropertiesT>(value)); return *this;}
    template<typename ConnectionPropertiesKeyT = Aws::String, typename ConnectionPropertiesValueT = Aws::String>
    GlueConnectionPatch& AddConnectionProperties(ConnectionPropertiesKeyT&& key, ConnectionPropertiesValueT&& value) {
      m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::forward<ConnectionPropertiesKeyT>(key), std::forward<ConnectionPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The description of the Amazon Web Services Glue connection patch.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GlueConnectionPatch& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
