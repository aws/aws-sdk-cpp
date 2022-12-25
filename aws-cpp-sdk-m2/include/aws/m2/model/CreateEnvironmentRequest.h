/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/MainframeModernizationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/EngineType.h>
#include <aws/m2/model/HighAvailabilityConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/m2/model/StorageConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

  /**
   */
  class CreateEnvironmentRequest : public MainframeModernizationRequest
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API CreateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironment"; }

    AWS_MAINFRAMEMODERNIZATION_API Aws::String SerializePayload() const override;


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create an environment. The service generates the clientToken when
     * the API call is triggered. The token expires after one hour, so if you retry the
     * API within this timeframe with the same clientToken, you will get the same
     * response. The service also handles deleting the clientToken after it expires.
     * </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create an environment. The service generates the clientToken when
     * the API call is triggered. The token expires after one hour, so if you retry the
     * API within this timeframe with the same clientToken, you will get the same
     * response. The service also handles deleting the clientToken after it expires.
     * </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create an environment. The service generates the clientToken when
     * the API call is triggered. The token expires after one hour, so if you retry the
     * API within this timeframe with the same clientToken, you will get the same
     * response. The service also handles deleting the clientToken after it expires.
     * </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create an environment. The service generates the clientToken when
     * the API call is triggered. The token expires after one hour, so if you retry the
     * API within this timeframe with the same clientToken, you will get the same
     * response. The service also handles deleting the clientToken after it expires.
     * </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create an environment. The service generates the clientToken when
     * the API call is triggered. The token expires after one hour, so if you retry the
     * API within this timeframe with the same clientToken, you will get the same
     * response. The service also handles deleting the clientToken after it expires.
     * </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create an environment. The service generates the clientToken when
     * the API call is triggered. The token expires after one hour, so if you retry the
     * API within this timeframe with the same clientToken, you will get the same
     * response. The service also handles deleting the clientToken after it expires.
     * </p>
     */
    inline CreateEnvironmentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create an environment. The service generates the clientToken when
     * the API call is triggered. The token expires after one hour, so if you retry the
     * API within this timeframe with the same clientToken, you will get the same
     * response. The service also handles deleting the clientToken after it expires.
     * </p>
     */
    inline CreateEnvironmentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request to create an environment. The service generates the clientToken when
     * the API call is triggered. The token expires after one hour, so if you retry the
     * API within this timeframe with the same clientToken, you will get the same
     * response. The service also handles deleting the clientToken after it expires.
     * </p>
     */
    inline CreateEnvironmentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The description of the runtime environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the runtime environment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the runtime environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the runtime environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the runtime environment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The engine type for the runtime environment.</p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * <p>The engine type for the runtime environment.</p>
     */
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }

    /**
     * <p>The engine type for the runtime environment.</p>
     */
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }

    /**
     * <p>The engine type for the runtime environment.</p>
     */
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }

    /**
     * <p>The engine type for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * <p>The engine type for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}


    /**
     * <p>The version of the engine type for the runtime environment.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version of the engine type for the runtime environment.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version of the engine type for the runtime environment.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version of the engine type for the runtime environment.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version of the engine type for the runtime environment.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version of the engine type for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version of the engine type for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the engine type for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The details of a high availability configuration for this runtime
     * environment.</p>
     */
    inline const HighAvailabilityConfig& GetHighAvailabilityConfig() const{ return m_highAvailabilityConfig; }

    /**
     * <p>The details of a high availability configuration for this runtime
     * environment.</p>
     */
    inline bool HighAvailabilityConfigHasBeenSet() const { return m_highAvailabilityConfigHasBeenSet; }

    /**
     * <p>The details of a high availability configuration for this runtime
     * environment.</p>
     */
    inline void SetHighAvailabilityConfig(const HighAvailabilityConfig& value) { m_highAvailabilityConfigHasBeenSet = true; m_highAvailabilityConfig = value; }

    /**
     * <p>The details of a high availability configuration for this runtime
     * environment.</p>
     */
    inline void SetHighAvailabilityConfig(HighAvailabilityConfig&& value) { m_highAvailabilityConfigHasBeenSet = true; m_highAvailabilityConfig = std::move(value); }

    /**
     * <p>The details of a high availability configuration for this runtime
     * environment.</p>
     */
    inline CreateEnvironmentRequest& WithHighAvailabilityConfig(const HighAvailabilityConfig& value) { SetHighAvailabilityConfig(value); return *this;}

    /**
     * <p>The details of a high availability configuration for this runtime
     * environment.</p>
     */
    inline CreateEnvironmentRequest& WithHighAvailabilityConfig(HighAvailabilityConfig&& value) { SetHighAvailabilityConfig(std::move(value)); return *this;}


    /**
     * <p>The type of instance for the runtime environment.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The type of instance for the runtime environment.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The type of instance for the runtime environment.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The type of instance for the runtime environment.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The type of instance for the runtime environment.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The type of instance for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The type of instance for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The type of instance for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The identifier of a customer managed key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The identifier of a customer managed key.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The identifier of a customer managed key.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The identifier of a customer managed key.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The identifier of a customer managed key.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The identifier of a customer managed key.</p>
     */
    inline CreateEnvironmentRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The identifier of a customer managed key.</p>
     */
    inline CreateEnvironmentRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a customer managed key.</p>
     */
    inline CreateEnvironmentRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The name of the runtime environment. Must be unique within the account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the runtime environment. Must be unique within the account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the runtime environment. Must be unique within the account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the runtime environment. Must be unique within the account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the runtime environment. Must be unique within the account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the runtime environment. Must be unique within the account.</p>
     */
    inline CreateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the runtime environment. Must be unique within the account.</p>
     */
    inline CreateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the runtime environment. Must be unique within the account.</p>
     */
    inline CreateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Configures the maintenance window you want for the runtime environment. If
     * you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>Configures the maintenance window you want for the runtime environment. If
     * you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>Configures the maintenance window you want for the runtime environment. If
     * you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>Configures the maintenance window you want for the runtime environment. If
     * you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>Configures the maintenance window you want for the runtime environment. If
     * you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>Configures the maintenance window you want for the runtime environment. If
     * you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline CreateEnvironmentRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>Configures the maintenance window you want for the runtime environment. If
     * you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline CreateEnvironmentRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>Configures the maintenance window you want for the runtime environment. If
     * you do not provide a value, a random system-generated value will be
     * assigned.</p>
     */
    inline CreateEnvironmentRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>Specifies whether the runtime environment is publicly accessible.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Specifies whether the runtime environment is publicly accessible.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>Specifies whether the runtime environment is publicly accessible.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>Specifies whether the runtime environment is publicly accessible.</p>
     */
    inline CreateEnvironmentRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>The list of security groups for the VPC associated with this runtime
     * environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The list of security groups for the VPC associated with this runtime
     * environment.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The list of security groups for the VPC associated with this runtime
     * environment.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The list of security groups for the VPC associated with this runtime
     * environment.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The list of security groups for the VPC associated with this runtime
     * environment.</p>
     */
    inline CreateEnvironmentRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The list of security groups for the VPC associated with this runtime
     * environment.</p>
     */
    inline CreateEnvironmentRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The list of security groups for the VPC associated with this runtime
     * environment.</p>
     */
    inline CreateEnvironmentRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The list of security groups for the VPC associated with this runtime
     * environment.</p>
     */
    inline CreateEnvironmentRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of security groups for the VPC associated with this runtime
     * environment.</p>
     */
    inline CreateEnvironmentRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>Optional. The storage configurations for this runtime environment.</p>
     */
    inline const Aws::Vector<StorageConfiguration>& GetStorageConfigurations() const{ return m_storageConfigurations; }

    /**
     * <p>Optional. The storage configurations for this runtime environment.</p>
     */
    inline bool StorageConfigurationsHasBeenSet() const { return m_storageConfigurationsHasBeenSet; }

    /**
     * <p>Optional. The storage configurations for this runtime environment.</p>
     */
    inline void SetStorageConfigurations(const Aws::Vector<StorageConfiguration>& value) { m_storageConfigurationsHasBeenSet = true; m_storageConfigurations = value; }

    /**
     * <p>Optional. The storage configurations for this runtime environment.</p>
     */
    inline void SetStorageConfigurations(Aws::Vector<StorageConfiguration>&& value) { m_storageConfigurationsHasBeenSet = true; m_storageConfigurations = std::move(value); }

    /**
     * <p>Optional. The storage configurations for this runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithStorageConfigurations(const Aws::Vector<StorageConfiguration>& value) { SetStorageConfigurations(value); return *this;}

    /**
     * <p>Optional. The storage configurations for this runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithStorageConfigurations(Aws::Vector<StorageConfiguration>&& value) { SetStorageConfigurations(std::move(value)); return *this;}

    /**
     * <p>Optional. The storage configurations for this runtime environment.</p>
     */
    inline CreateEnvironmentRequest& AddStorageConfigurations(const StorageConfiguration& value) { m_storageConfigurationsHasBeenSet = true; m_storageConfigurations.push_back(value); return *this; }

    /**
     * <p>Optional. The storage configurations for this runtime environment.</p>
     */
    inline CreateEnvironmentRequest& AddStorageConfigurations(StorageConfiguration&& value) { m_storageConfigurationsHasBeenSet = true; m_storageConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of subnets associated with the VPC for this runtime environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The list of subnets associated with the VPC for this runtime environment.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The list of subnets associated with the VPC for this runtime environment.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The list of subnets associated with the VPC for this runtime environment.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The list of subnets associated with the VPC for this runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The list of subnets associated with the VPC for this runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The list of subnets associated with the VPC for this runtime environment.</p>
     */
    inline CreateEnvironmentRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The list of subnets associated with the VPC for this runtime environment.</p>
     */
    inline CreateEnvironmentRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of subnets associated with the VPC for this runtime environment.</p>
     */
    inline CreateEnvironmentRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The tags for the runtime environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the runtime environment.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the runtime environment.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the runtime environment.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the runtime environment.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    HighAvailabilityConfig m_highAvailabilityConfig;
    bool m_highAvailabilityConfigHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<StorageConfiguration> m_storageConfigurations;
    bool m_storageConfigurationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
