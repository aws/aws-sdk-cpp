/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/SamlConfiguration.h>
#include <aws/grafana/model/SamlConfigurationStatus.h>
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
namespace ManagedGrafana
{
namespace Model
{

  /**
   * <p>A structure containing information about how this workspace works with SAML.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/SamlAuthentication">AWS
   * API Reference</a></p>
   */
  class SamlAuthentication
  {
  public:
    AWS_MANAGEDGRAFANA_API SamlAuthentication();
    AWS_MANAGEDGRAFANA_API SamlAuthentication(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API SamlAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure containing details about how this workspace works with SAML. </p>
     */
    inline const SamlConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>A structure containing details about how this workspace works with SAML. </p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>A structure containing details about how this workspace works with SAML. </p>
     */
    inline void SetConfiguration(const SamlConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>A structure containing details about how this workspace works with SAML. </p>
     */
    inline void SetConfiguration(SamlConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>A structure containing details about how this workspace works with SAML. </p>
     */
    inline SamlAuthentication& WithConfiguration(const SamlConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>A structure containing details about how this workspace works with SAML. </p>
     */
    inline SamlAuthentication& WithConfiguration(SamlConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the workspace's SAML configuration is complete.</p>
     */
    inline const SamlConfigurationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies whether the workspace's SAML configuration is complete.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies whether the workspace's SAML configuration is complete.</p>
     */
    inline void SetStatus(const SamlConfigurationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies whether the workspace's SAML configuration is complete.</p>
     */
    inline void SetStatus(SamlConfigurationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies whether the workspace's SAML configuration is complete.</p>
     */
    inline SamlAuthentication& WithStatus(const SamlConfigurationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies whether the workspace's SAML configuration is complete.</p>
     */
    inline SamlAuthentication& WithStatus(SamlConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    SamlConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    SamlConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
