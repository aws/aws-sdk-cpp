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
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RedshiftRunConfigurationOutput">AWS
   * API Reference</a></p>
   */
  class RedshiftRunConfigurationOutput
  {
  public:
    AWS_DATAZONE_API RedshiftRunConfigurationOutput();
    AWS_DATAZONE_API RedshiftRunConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RedshiftRunConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account included in the configuration
     * details of the Amazon Redshift data source.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline RedshiftRunConfigurationOutput& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline RedshiftRunConfigurationOutput& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline RedshiftRunConfigurationOutput& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data access role included in the configuration details of the Amazon
     * Redshift data source.</p>
     */
    inline const Aws::String& GetDataAccessRole() const{ return m_dataAccessRole; }
    inline bool DataAccessRoleHasBeenSet() const { return m_dataAccessRoleHasBeenSet; }
    inline void SetDataAccessRole(const Aws::String& value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole = value; }
    inline void SetDataAccessRole(Aws::String&& value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole = std::move(value); }
    inline void SetDataAccessRole(const char* value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole.assign(value); }
    inline RedshiftRunConfigurationOutput& WithDataAccessRole(const Aws::String& value) { SetDataAccessRole(value); return *this;}
    inline RedshiftRunConfigurationOutput& WithDataAccessRole(Aws::String&& value) { SetDataAccessRole(std::move(value)); return *this;}
    inline RedshiftRunConfigurationOutput& WithDataAccessRole(const char* value) { SetDataAccessRole(value); return *this;}
    ///@}

    ///@{
    
    inline const RedshiftCredentialConfiguration& GetRedshiftCredentialConfiguration() const{ return m_redshiftCredentialConfiguration; }
    inline bool RedshiftCredentialConfigurationHasBeenSet() const { return m_redshiftCredentialConfigurationHasBeenSet; }
    inline void SetRedshiftCredentialConfiguration(const RedshiftCredentialConfiguration& value) { m_redshiftCredentialConfigurationHasBeenSet = true; m_redshiftCredentialConfiguration = value; }
    inline void SetRedshiftCredentialConfiguration(RedshiftCredentialConfiguration&& value) { m_redshiftCredentialConfigurationHasBeenSet = true; m_redshiftCredentialConfiguration = std::move(value); }
    inline RedshiftRunConfigurationOutput& WithRedshiftCredentialConfiguration(const RedshiftCredentialConfiguration& value) { SetRedshiftCredentialConfiguration(value); return *this;}
    inline RedshiftRunConfigurationOutput& WithRedshiftCredentialConfiguration(RedshiftCredentialConfiguration&& value) { SetRedshiftCredentialConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const RedshiftStorage& GetRedshiftStorage() const{ return m_redshiftStorage; }
    inline bool RedshiftStorageHasBeenSet() const { return m_redshiftStorageHasBeenSet; }
    inline void SetRedshiftStorage(const RedshiftStorage& value) { m_redshiftStorageHasBeenSet = true; m_redshiftStorage = value; }
    inline void SetRedshiftStorage(RedshiftStorage&& value) { m_redshiftStorageHasBeenSet = true; m_redshiftStorage = std::move(value); }
    inline RedshiftRunConfigurationOutput& WithRedshiftStorage(const RedshiftStorage& value) { SetRedshiftStorage(value); return *this;}
    inline RedshiftRunConfigurationOutput& WithRedshiftStorage(RedshiftStorage&& value) { SetRedshiftStorage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services region included in the configuration details of the
     * Amazon Redshift data source.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline RedshiftRunConfigurationOutput& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline RedshiftRunConfigurationOutput& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline RedshiftRunConfigurationOutput& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relational filger configurations included in the configuration details of
     * the Amazon Redshift data source.</p>
     */
    inline const Aws::Vector<RelationalFilterConfiguration>& GetRelationalFilterConfigurations() const{ return m_relationalFilterConfigurations; }
    inline bool RelationalFilterConfigurationsHasBeenSet() const { return m_relationalFilterConfigurationsHasBeenSet; }
    inline void SetRelationalFilterConfigurations(const Aws::Vector<RelationalFilterConfiguration>& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations = value; }
    inline void SetRelationalFilterConfigurations(Aws::Vector<RelationalFilterConfiguration>&& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations = std::move(value); }
    inline RedshiftRunConfigurationOutput& WithRelationalFilterConfigurations(const Aws::Vector<RelationalFilterConfiguration>& value) { SetRelationalFilterConfigurations(value); return *this;}
    inline RedshiftRunConfigurationOutput& WithRelationalFilterConfigurations(Aws::Vector<RelationalFilterConfiguration>&& value) { SetRelationalFilterConfigurations(std::move(value)); return *this;}
    inline RedshiftRunConfigurationOutput& AddRelationalFilterConfigurations(const RelationalFilterConfiguration& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations.push_back(value); return *this; }
    inline RedshiftRunConfigurationOutput& AddRelationalFilterConfigurations(RelationalFilterConfiguration&& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_dataAccessRole;
    bool m_dataAccessRoleHasBeenSet = false;

    RedshiftCredentialConfiguration m_redshiftCredentialConfiguration;
    bool m_redshiftCredentialConfigurationHasBeenSet = false;

    RedshiftStorage m_redshiftStorage;
    bool m_redshiftStorageHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<RelationalFilterConfiguration> m_relationalFilterConfigurations;
    bool m_relationalFilterConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
