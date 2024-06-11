﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/fsx/model/FileCacheType.h>
#include <aws/fsx/model/FileCacheLifecycle.h>
#include <aws/fsx/model/FileCacheFailureDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/FileCacheLustreConfiguration.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>A description of a specific Amazon File Cache resource, which is a response
   * object from the <code>DescribeFileCaches</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/FileCache">AWS API
   * Reference</a></p>
   */
  class FileCache
  {
  public:
    AWS_FSX_API FileCache();
    AWS_FSX_API FileCache(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API FileCache& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline FileCache& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline FileCache& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline FileCache& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline FileCache& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline FileCache& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline const Aws::String& GetFileCacheId() const{ return m_fileCacheId; }
    inline bool FileCacheIdHasBeenSet() const { return m_fileCacheIdHasBeenSet; }
    inline void SetFileCacheId(const Aws::String& value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId = value; }
    inline void SetFileCacheId(Aws::String&& value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId = std::move(value); }
    inline void SetFileCacheId(const char* value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId.assign(value); }
    inline FileCache& WithFileCacheId(const Aws::String& value) { SetFileCacheId(value); return *this;}
    inline FileCache& WithFileCacheId(Aws::String&& value) { SetFileCacheId(std::move(value)); return *this;}
    inline FileCache& WithFileCacheId(const char* value) { SetFileCacheId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of cache, which must be <code>LUSTRE</code>.</p>
     */
    inline const FileCacheType& GetFileCacheType() const{ return m_fileCacheType; }
    inline bool FileCacheTypeHasBeenSet() const { return m_fileCacheTypeHasBeenSet; }
    inline void SetFileCacheType(const FileCacheType& value) { m_fileCacheTypeHasBeenSet = true; m_fileCacheType = value; }
    inline void SetFileCacheType(FileCacheType&& value) { m_fileCacheTypeHasBeenSet = true; m_fileCacheType = std::move(value); }
    inline FileCache& WithFileCacheType(const FileCacheType& value) { SetFileCacheType(value); return *this;}
    inline FileCache& WithFileCacheType(FileCacheType&& value) { SetFileCacheType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lustre version of the cache, which must be <code>2.12</code>.</p>
     */
    inline const Aws::String& GetFileCacheTypeVersion() const{ return m_fileCacheTypeVersion; }
    inline bool FileCacheTypeVersionHasBeenSet() const { return m_fileCacheTypeVersionHasBeenSet; }
    inline void SetFileCacheTypeVersion(const Aws::String& value) { m_fileCacheTypeVersionHasBeenSet = true; m_fileCacheTypeVersion = value; }
    inline void SetFileCacheTypeVersion(Aws::String&& value) { m_fileCacheTypeVersionHasBeenSet = true; m_fileCacheTypeVersion = std::move(value); }
    inline void SetFileCacheTypeVersion(const char* value) { m_fileCacheTypeVersionHasBeenSet = true; m_fileCacheTypeVersion.assign(value); }
    inline FileCache& WithFileCacheTypeVersion(const Aws::String& value) { SetFileCacheTypeVersion(value); return *this;}
    inline FileCache& WithFileCacheTypeVersion(Aws::String&& value) { SetFileCacheTypeVersion(std::move(value)); return *this;}
    inline FileCache& WithFileCacheTypeVersion(const char* value) { SetFileCacheTypeVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle status of the cache. The following are the possible values and
     * what they mean:</p> <ul> <li> <p> <code>AVAILABLE</code> - The cache is in a
     * healthy state, and is reachable and available for use.</p> </li> <li> <p>
     * <code>CREATING</code> - The new cache is being created.</p> </li> <li> <p>
     * <code>DELETING</code> - An existing cache is being deleted.</p> </li> <li> <p>
     * <code>UPDATING</code> - The cache is undergoing a customer-initiated update.</p>
     * </li> <li> <p> <code>FAILED</code> - An existing cache has experienced an
     * unrecoverable failure. When creating a new cache, the cache was unable to be
     * created.</p> </li> </ul>
     */
    inline const FileCacheLifecycle& GetLifecycle() const{ return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(const FileCacheLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline void SetLifecycle(FileCacheLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }
    inline FileCache& WithLifecycle(const FileCacheLifecycle& value) { SetLifecycle(value); return *this;}
    inline FileCache& WithLifecycle(FileCacheLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure providing details of any failures that occurred.</p>
     */
    inline const FileCacheFailureDetails& GetFailureDetails() const{ return m_failureDetails; }
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }
    inline void SetFailureDetails(const FileCacheFailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }
    inline void SetFailureDetails(FileCacheFailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }
    inline FileCache& WithFailureDetails(const FileCacheFailureDetails& value) { SetFailureDetails(value); return *this;}
    inline FileCache& WithFailureDetails(FileCacheFailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage capacity of the cache in gibibytes (GiB).</p>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }
    inline FileCache& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline FileCache& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline FileCache& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline FileCache& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline FileCache& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline FileCache& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline FileCache& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline FileCache& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline FileCache& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const{ return m_networkInterfaceIds; }
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }
    inline void SetNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = value; }
    inline void SetNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::move(value); }
    inline FileCache& WithNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetNetworkInterfaceIds(value); return *this;}
    inline FileCache& WithNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetNetworkInterfaceIds(std::move(value)); return *this;}
    inline FileCache& AddNetworkInterfaceIds(const Aws::String& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }
    inline FileCache& AddNetworkInterfaceIds(Aws::String&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(std::move(value)); return *this; }
    inline FileCache& AddNetworkInterfaceIds(const char* value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Domain Name System (DNS) name for the cache.</p>
     */
    inline const Aws::String& GetDNSName() const{ return m_dNSName; }
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }
    inline void SetDNSName(const Aws::String& value) { m_dNSNameHasBeenSet = true; m_dNSName = value; }
    inline void SetDNSName(Aws::String&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::move(value); }
    inline void SetDNSName(const char* value) { m_dNSNameHasBeenSet = true; m_dNSName.assign(value); }
    inline FileCache& WithDNSName(const Aws::String& value) { SetDNSName(value); return *this;}
    inline FileCache& WithDNSName(Aws::String&& value) { SetDNSName(std::move(value)); return *this;}
    inline FileCache& WithDNSName(const char* value) { SetDNSName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ID of the Key Management Service (KMS) key to use for
     * encrypting data on an Amazon File Cache. If a <code>KmsKeyId</code> isn't
     * specified, the Amazon FSx-managed KMS key for your account is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_Encrypt.html">Encrypt</a>
     * in the <i>Key Management Service API Reference</i>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline FileCache& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline FileCache& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline FileCache& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }
    inline FileCache& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}
    inline FileCache& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}
    inline FileCache& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the Amazon File Cache resource.</p>
     */
    inline const FileCacheLustreConfiguration& GetLustreConfiguration() const{ return m_lustreConfiguration; }
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }
    inline void SetLustreConfiguration(const FileCacheLustreConfiguration& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = value; }
    inline void SetLustreConfiguration(FileCacheLustreConfiguration&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::move(value); }
    inline FileCache& WithLustreConfiguration(const FileCacheLustreConfiguration& value) { SetLustreConfiguration(value); return *this;}
    inline FileCache& WithLustreConfiguration(FileCacheLustreConfiguration&& value) { SetLustreConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IDs of data repository associations that are associated with this
     * cache.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataRepositoryAssociationIds() const{ return m_dataRepositoryAssociationIds; }
    inline bool DataRepositoryAssociationIdsHasBeenSet() const { return m_dataRepositoryAssociationIdsHasBeenSet; }
    inline void SetDataRepositoryAssociationIds(const Aws::Vector<Aws::String>& value) { m_dataRepositoryAssociationIdsHasBeenSet = true; m_dataRepositoryAssociationIds = value; }
    inline void SetDataRepositoryAssociationIds(Aws::Vector<Aws::String>&& value) { m_dataRepositoryAssociationIdsHasBeenSet = true; m_dataRepositoryAssociationIds = std::move(value); }
    inline FileCache& WithDataRepositoryAssociationIds(const Aws::Vector<Aws::String>& value) { SetDataRepositoryAssociationIds(value); return *this;}
    inline FileCache& WithDataRepositoryAssociationIds(Aws::Vector<Aws::String>&& value) { SetDataRepositoryAssociationIds(std::move(value)); return *this;}
    inline FileCache& AddDataRepositoryAssociationIds(const Aws::String& value) { m_dataRepositoryAssociationIdsHasBeenSet = true; m_dataRepositoryAssociationIds.push_back(value); return *this; }
    inline FileCache& AddDataRepositoryAssociationIds(Aws::String&& value) { m_dataRepositoryAssociationIdsHasBeenSet = true; m_dataRepositoryAssociationIds.push_back(std::move(value)); return *this; }
    inline FileCache& AddDataRepositoryAssociationIds(const char* value) { m_dataRepositoryAssociationIdsHasBeenSet = true; m_dataRepositoryAssociationIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_fileCacheId;
    bool m_fileCacheIdHasBeenSet = false;

    FileCacheType m_fileCacheType;
    bool m_fileCacheTypeHasBeenSet = false;

    Aws::String m_fileCacheTypeVersion;
    bool m_fileCacheTypeVersionHasBeenSet = false;

    FileCacheLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    FileCacheFailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;

    int m_storageCapacity;
    bool m_storageCapacityHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkInterfaceIds;
    bool m_networkInterfaceIdsHasBeenSet = false;

    Aws::String m_dNSName;
    bool m_dNSNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    FileCacheLustreConfiguration m_lustreConfiguration;
    bool m_lustreConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataRepositoryAssociationIds;
    bool m_dataRepositoryAssociationIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
