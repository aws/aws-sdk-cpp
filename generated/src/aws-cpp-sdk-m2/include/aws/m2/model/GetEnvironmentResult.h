/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/EngineType.h>
#include <aws/m2/model/HighAvailabilityConfig.h>
#include <aws/m2/model/NetworkType.h>
#include <aws/m2/model/PendingMaintenance.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/m2/model/EnvironmentLifecycle.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/m2/model/StorageConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MainframeModernization
{
namespace Model
{
  class GetEnvironmentResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API GetEnvironmentResult();
    AWS_MAINFRAMEMODERNIZATION_API GetEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API GetEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of instances included in the runtime environment. A standalone
     * runtime environment has a maximum of one instance. Currently, a high
     * availability runtime environment has a maximum of two instances. </p>
     */
    inline int GetActualCapacity() const{ return m_actualCapacity; }
    inline void SetActualCapacity(int value) { m_actualCapacity = value; }
    inline GetEnvironmentResult& WithActualCapacity(int value) { SetActualCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the runtime environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetEnvironmentResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetEnvironmentResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the runtime environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetEnvironmentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetEnvironmentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target platform for the runtime environment.</p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }
    inline void SetEngineType(const EngineType& value) { m_engineType = value; }
    inline void SetEngineType(EngineType&& value) { m_engineType = std::move(value); }
    inline GetEnvironmentResult& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}
    inline GetEnvironmentResult& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the runtime engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersion.assign(value); }
    inline GetEnvironmentResult& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline GetEnvironmentResult& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the runtime environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const{ return m_environmentArn; }
    inline void SetEnvironmentArn(const Aws::String& value) { m_environmentArn = value; }
    inline void SetEnvironmentArn(Aws::String&& value) { m_environmentArn = std::move(value); }
    inline void SetEnvironmentArn(const char* value) { m_environmentArn.assign(value); }
    inline GetEnvironmentResult& WithEnvironmentArn(const Aws::String& value) { SetEnvironmentArn(value); return *this;}
    inline GetEnvironmentResult& WithEnvironmentArn(Aws::String&& value) { SetEnvironmentArn(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithEnvironmentArn(const char* value) { SetEnvironmentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the runtime environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }
    inline GetEnvironmentResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline GetEnvironmentResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired capacity of the high availability configuration for the runtime
     * environment.</p>
     */
    inline const HighAvailabilityConfig& GetHighAvailabilityConfig() const{ return m_highAvailabilityConfig; }
    inline void SetHighAvailabilityConfig(const HighAvailabilityConfig& value) { m_highAvailabilityConfig = value; }
    inline void SetHighAvailabilityConfig(HighAvailabilityConfig&& value) { m_highAvailabilityConfig = std::move(value); }
    inline GetEnvironmentResult& WithHighAvailabilityConfig(const HighAvailabilityConfig& value) { SetHighAvailabilityConfig(value); return *this;}
    inline GetEnvironmentResult& WithHighAvailabilityConfig(HighAvailabilityConfig&& value) { SetHighAvailabilityConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance underlying the runtime environment.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceType.assign(value); }
    inline GetEnvironmentResult& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline GetEnvironmentResult& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a customer managed key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline GetEnvironmentResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline GetEnvironmentResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the load balancer used with the runtime
     * environment.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const{ return m_loadBalancerArn; }
    inline void SetLoadBalancerArn(const Aws::String& value) { m_loadBalancerArn = value; }
    inline void SetLoadBalancerArn(Aws::String&& value) { m_loadBalancerArn = std::move(value); }
    inline void SetLoadBalancerArn(const char* value) { m_loadBalancerArn.assign(value); }
    inline GetEnvironmentResult& WithLoadBalancerArn(const Aws::String& value) { SetLoadBalancerArn(value); return *this;}
    inline GetEnvironmentResult& WithLoadBalancerArn(Aws::String&& value) { SetLoadBalancerArn(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithLoadBalancerArn(const char* value) { SetLoadBalancerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the runtime environment. Must be unique within the account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetEnvironmentResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetEnvironmentResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type supported by the runtime environment.</p>
     */
    inline const NetworkType& GetNetworkType() const{ return m_networkType; }
    inline void SetNetworkType(const NetworkType& value) { m_networkType = value; }
    inline void SetNetworkType(NetworkType&& value) { m_networkType = std::move(value); }
    inline GetEnvironmentResult& WithNetworkType(const NetworkType& value) { SetNetworkType(value); return *this;}
    inline GetEnvironmentResult& WithNetworkType(NetworkType&& value) { SetNetworkType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the pending maintenance scheduled on this environment.</p>
     */
    inline const PendingMaintenance& GetPendingMaintenance() const{ return m_pendingMaintenance; }
    inline void SetPendingMaintenance(const PendingMaintenance& value) { m_pendingMaintenance = value; }
    inline void SetPendingMaintenance(PendingMaintenance&& value) { m_pendingMaintenance = std::move(value); }
    inline GetEnvironmentResult& WithPendingMaintenance(const PendingMaintenance& value) { SetPendingMaintenance(value); return *this;}
    inline GetEnvironmentResult& WithPendingMaintenance(PendingMaintenance&& value) { SetPendingMaintenance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maintenance window for the runtime environment. If you don't provide a
     * value for the maintenance window, the service assigns a random value.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindow.assign(value); }
    inline GetEnvironmentResult& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline GetEnvironmentResult& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether applications running in this runtime environment are publicly
     * accessible. </p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessible = value; }
    inline GetEnvironmentResult& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of the security groups assigned to this runtime
     * environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIds = std::move(value); }
    inline GetEnvironmentResult& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline GetEnvironmentResult& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline GetEnvironmentResult& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIds.push_back(value); return *this; }
    inline GetEnvironmentResult& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline GetEnvironmentResult& AddSecurityGroupIds(const char* value) { m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the runtime environment. If the Amazon Web Services Mainframe
     * Modernization environment is missing a connection to the customer owned
     * dependent resource, the status will be <code>Unhealthy</code>.</p>
     */
    inline const EnvironmentLifecycle& GetStatus() const{ return m_status; }
    inline void SetStatus(const EnvironmentLifecycle& value) { m_status = value; }
    inline void SetStatus(EnvironmentLifecycle&& value) { m_status = std::move(value); }
    inline GetEnvironmentResult& WithStatus(const EnvironmentLifecycle& value) { SetStatus(value); return *this;}
    inline GetEnvironmentResult& WithStatus(EnvironmentLifecycle&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the reported status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline GetEnvironmentResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline GetEnvironmentResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage configurations defined for the runtime environment.</p>
     */
    inline const Aws::Vector<StorageConfiguration>& GetStorageConfigurations() const{ return m_storageConfigurations; }
    inline void SetStorageConfigurations(const Aws::Vector<StorageConfiguration>& value) { m_storageConfigurations = value; }
    inline void SetStorageConfigurations(Aws::Vector<StorageConfiguration>&& value) { m_storageConfigurations = std::move(value); }
    inline GetEnvironmentResult& WithStorageConfigurations(const Aws::Vector<StorageConfiguration>& value) { SetStorageConfigurations(value); return *this;}
    inline GetEnvironmentResult& WithStorageConfigurations(Aws::Vector<StorageConfiguration>&& value) { SetStorageConfigurations(std::move(value)); return *this;}
    inline GetEnvironmentResult& AddStorageConfigurations(const StorageConfiguration& value) { m_storageConfigurations.push_back(value); return *this; }
    inline GetEnvironmentResult& AddStorageConfigurations(StorageConfiguration&& value) { m_storageConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of the subnets assigned to this runtime
     * environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIds = std::move(value); }
    inline GetEnvironmentResult& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline GetEnvironmentResult& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline GetEnvironmentResult& AddSubnetIds(const Aws::String& value) { m_subnetIds.push_back(value); return *this; }
    inline GetEnvironmentResult& AddSubnetIds(Aws::String&& value) { m_subnetIds.push_back(std::move(value)); return *this; }
    inline GetEnvironmentResult& AddSubnetIds(const char* value) { m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags defined for this runtime environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetEnvironmentResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetEnvironmentResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetEnvironmentResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetEnvironmentResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetEnvironmentResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetEnvironmentResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetEnvironmentResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetEnvironmentResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetEnvironmentResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the VPC used with this runtime environment.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }
    inline GetEnvironmentResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline GetEnvironmentResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEnvironmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEnvironmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEnvironmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_actualCapacity;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_description;

    EngineType m_engineType;

    Aws::String m_engineVersion;

    Aws::String m_environmentArn;

    Aws::String m_environmentId;

    HighAvailabilityConfig m_highAvailabilityConfig;

    Aws::String m_instanceType;

    Aws::String m_kmsKeyId;

    Aws::String m_loadBalancerArn;

    Aws::String m_name;

    NetworkType m_networkType;

    PendingMaintenance m_pendingMaintenance;

    Aws::String m_preferredMaintenanceWindow;

    bool m_publiclyAccessible;

    Aws::Vector<Aws::String> m_securityGroupIds;

    EnvironmentLifecycle m_status;

    Aws::String m_statusReason;

    Aws::Vector<StorageConfiguration> m_storageConfigurations;

    Aws::Vector<Aws::String> m_subnetIds;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_vpcId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
