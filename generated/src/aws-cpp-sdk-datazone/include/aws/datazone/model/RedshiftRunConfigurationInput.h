/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/RedshiftCredentialConfiguration.h>
#include <aws/datazone/model/RedshiftStorage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/RelationalFilterConfiguration.h>
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
   * <p>The configuration details of the Amazon Redshift data source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RedshiftRunConfigurationInput">AWS
   * API Reference</a></p>
   */
  class RedshiftRunConfigurationInput
  {
  public:
    AWS_DATAZONE_API RedshiftRunConfigurationInput() = default;
    AWS_DATAZONE_API RedshiftRunConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RedshiftRunConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data access role included in the configuration details of the Amazon
     * Redshift data source.</p>
     */
    inline const Aws::String& GetDataAccessRole() const { return m_dataAccessRole; }
    inline bool DataAccessRoleHasBeenSet() const { return m_dataAccessRoleHasBeenSet; }
    template<typename DataAccessRoleT = Aws::String>
    void SetDataAccessRole(DataAccessRoleT&& value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole = std::forward<DataAccessRoleT>(value); }
    template<typename DataAccessRoleT = Aws::String>
    RedshiftRunConfigurationInput& WithDataAccessRole(DataAccessRoleT&& value) { SetDataAccessRole(std::forward<DataAccessRoleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RedshiftCredentialConfiguration& GetRedshiftCredentialConfiguration() const { return m_redshiftCredentialConfiguration; }
    inline bool RedshiftCredentialConfigurationHasBeenSet() const { return m_redshiftCredentialConfigurationHasBeenSet; }
    template<typename RedshiftCredentialConfigurationT = RedshiftCredentialConfiguration>
    void SetRedshiftCredentialConfiguration(RedshiftCredentialConfigurationT&& value) { m_redshiftCredentialConfigurationHasBeenSet = true; m_redshiftCredentialConfiguration = std::forward<RedshiftCredentialConfigurationT>(value); }
    template<typename RedshiftCredentialConfigurationT = RedshiftCredentialConfiguration>
    RedshiftRunConfigurationInput& WithRedshiftCredentialConfiguration(RedshiftCredentialConfigurationT&& value) { SetRedshiftCredentialConfiguration(std::forward<RedshiftCredentialConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RedshiftStorage& GetRedshiftStorage() const { return m_redshiftStorage; }
    inline bool RedshiftStorageHasBeenSet() const { return m_redshiftStorageHasBeenSet; }
    template<typename RedshiftStorageT = RedshiftStorage>
    void SetRedshiftStorage(RedshiftStorageT&& value) { m_redshiftStorageHasBeenSet = true; m_redshiftStorage = std::forward<RedshiftStorageT>(value); }
    template<typename RedshiftStorageT = RedshiftStorage>
    RedshiftRunConfigurationInput& WithRedshiftStorage(RedshiftStorageT&& value) { SetRedshiftStorage(std::forward<RedshiftStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relational filger configurations included in the configuration details of
     * the Amazon Redshift data source.</p>
     */
    inline const Aws::Vector<RelationalFilterConfiguration>& GetRelationalFilterConfigurations() const { return m_relationalFilterConfigurations; }
    inline bool RelationalFilterConfigurationsHasBeenSet() const { return m_relationalFilterConfigurationsHasBeenSet; }
    template<typename RelationalFilterConfigurationsT = Aws::Vector<RelationalFilterConfiguration>>
    void SetRelationalFilterConfigurations(RelationalFilterConfigurationsT&& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations = std::forward<RelationalFilterConfigurationsT>(value); }
    template<typename RelationalFilterConfigurationsT = Aws::Vector<RelationalFilterConfiguration>>
    RedshiftRunConfigurationInput& WithRelationalFilterConfigurations(RelationalFilterConfigurationsT&& value) { SetRelationalFilterConfigurations(std::forward<RelationalFilterConfigurationsT>(value)); return *this;}
    template<typename RelationalFilterConfigurationsT = RelationalFilterConfiguration>
    RedshiftRunConfigurationInput& AddRelationalFilterConfigurations(RelationalFilterConfigurationsT&& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations.emplace_back(std::forward<RelationalFilterConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dataAccessRole;
    bool m_dataAccessRoleHasBeenSet = false;

    RedshiftCredentialConfiguration m_redshiftCredentialConfiguration;
    bool m_redshiftCredentialConfigurationHasBeenSet = false;

    RedshiftStorage m_redshiftStorage;
    bool m_redshiftStorageHasBeenSet = false;

    Aws::Vector<RelationalFilterConfiguration> m_relationalFilterConfigurations;
    bool m_relationalFilterConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
