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
    AWS_DATAZONE_API RedshiftRunConfigurationInput();
    AWS_DATAZONE_API RedshiftRunConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RedshiftRunConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data access role included in the configuration details of the Amazon
     * Redshift data source.</p>
     */
    inline const Aws::String& GetDataAccessRole() const{ return m_dataAccessRole; }

    /**
     * <p>The data access role included in the configuration details of the Amazon
     * Redshift data source.</p>
     */
    inline bool DataAccessRoleHasBeenSet() const { return m_dataAccessRoleHasBeenSet; }

    /**
     * <p>The data access role included in the configuration details of the Amazon
     * Redshift data source.</p>
     */
    inline void SetDataAccessRole(const Aws::String& value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole = value; }

    /**
     * <p>The data access role included in the configuration details of the Amazon
     * Redshift data source.</p>
     */
    inline void SetDataAccessRole(Aws::String&& value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole = std::move(value); }

    /**
     * <p>The data access role included in the configuration details of the Amazon
     * Redshift data source.</p>
     */
    inline void SetDataAccessRole(const char* value) { m_dataAccessRoleHasBeenSet = true; m_dataAccessRole.assign(value); }

    /**
     * <p>The data access role included in the configuration details of the Amazon
     * Redshift data source.</p>
     */
    inline RedshiftRunConfigurationInput& WithDataAccessRole(const Aws::String& value) { SetDataAccessRole(value); return *this;}

    /**
     * <p>The data access role included in the configuration details of the Amazon
     * Redshift data source.</p>
     */
    inline RedshiftRunConfigurationInput& WithDataAccessRole(Aws::String&& value) { SetDataAccessRole(std::move(value)); return *this;}

    /**
     * <p>The data access role included in the configuration details of the Amazon
     * Redshift data source.</p>
     */
    inline RedshiftRunConfigurationInput& WithDataAccessRole(const char* value) { SetDataAccessRole(value); return *this;}


    
    inline const RedshiftCredentialConfiguration& GetRedshiftCredentialConfiguration() const{ return m_redshiftCredentialConfiguration; }

    
    inline bool RedshiftCredentialConfigurationHasBeenSet() const { return m_redshiftCredentialConfigurationHasBeenSet; }

    
    inline void SetRedshiftCredentialConfiguration(const RedshiftCredentialConfiguration& value) { m_redshiftCredentialConfigurationHasBeenSet = true; m_redshiftCredentialConfiguration = value; }

    
    inline void SetRedshiftCredentialConfiguration(RedshiftCredentialConfiguration&& value) { m_redshiftCredentialConfigurationHasBeenSet = true; m_redshiftCredentialConfiguration = std::move(value); }

    
    inline RedshiftRunConfigurationInput& WithRedshiftCredentialConfiguration(const RedshiftCredentialConfiguration& value) { SetRedshiftCredentialConfiguration(value); return *this;}

    
    inline RedshiftRunConfigurationInput& WithRedshiftCredentialConfiguration(RedshiftCredentialConfiguration&& value) { SetRedshiftCredentialConfiguration(std::move(value)); return *this;}


    
    inline const RedshiftStorage& GetRedshiftStorage() const{ return m_redshiftStorage; }

    
    inline bool RedshiftStorageHasBeenSet() const { return m_redshiftStorageHasBeenSet; }

    
    inline void SetRedshiftStorage(const RedshiftStorage& value) { m_redshiftStorageHasBeenSet = true; m_redshiftStorage = value; }

    
    inline void SetRedshiftStorage(RedshiftStorage&& value) { m_redshiftStorageHasBeenSet = true; m_redshiftStorage = std::move(value); }

    
    inline RedshiftRunConfigurationInput& WithRedshiftStorage(const RedshiftStorage& value) { SetRedshiftStorage(value); return *this;}

    
    inline RedshiftRunConfigurationInput& WithRedshiftStorage(RedshiftStorage&& value) { SetRedshiftStorage(std::move(value)); return *this;}


    /**
     * <p>The relational filger configurations included in the configuration details of
     * the Amazon Redshift data source.</p>
     */
    inline const Aws::Vector<RelationalFilterConfiguration>& GetRelationalFilterConfigurations() const{ return m_relationalFilterConfigurations; }

    /**
     * <p>The relational filger configurations included in the configuration details of
     * the Amazon Redshift data source.</p>
     */
    inline bool RelationalFilterConfigurationsHasBeenSet() const { return m_relationalFilterConfigurationsHasBeenSet; }

    /**
     * <p>The relational filger configurations included in the configuration details of
     * the Amazon Redshift data source.</p>
     */
    inline void SetRelationalFilterConfigurations(const Aws::Vector<RelationalFilterConfiguration>& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations = value; }

    /**
     * <p>The relational filger configurations included in the configuration details of
     * the Amazon Redshift data source.</p>
     */
    inline void SetRelationalFilterConfigurations(Aws::Vector<RelationalFilterConfiguration>&& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations = std::move(value); }

    /**
     * <p>The relational filger configurations included in the configuration details of
     * the Amazon Redshift data source.</p>
     */
    inline RedshiftRunConfigurationInput& WithRelationalFilterConfigurations(const Aws::Vector<RelationalFilterConfiguration>& value) { SetRelationalFilterConfigurations(value); return *this;}

    /**
     * <p>The relational filger configurations included in the configuration details of
     * the Amazon Redshift data source.</p>
     */
    inline RedshiftRunConfigurationInput& WithRelationalFilterConfigurations(Aws::Vector<RelationalFilterConfiguration>&& value) { SetRelationalFilterConfigurations(std::move(value)); return *this;}

    /**
     * <p>The relational filger configurations included in the configuration details of
     * the Amazon Redshift data source.</p>
     */
    inline RedshiftRunConfigurationInput& AddRelationalFilterConfigurations(const RelationalFilterConfiguration& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations.push_back(value); return *this; }

    /**
     * <p>The relational filger configurations included in the configuration details of
     * the Amazon Redshift data source.</p>
     */
    inline RedshiftRunConfigurationInput& AddRelationalFilterConfigurations(RelationalFilterConfiguration&& value) { m_relationalFilterConfigurationsHasBeenSet = true; m_relationalFilterConfigurations.push_back(std::move(value)); return *this; }

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
