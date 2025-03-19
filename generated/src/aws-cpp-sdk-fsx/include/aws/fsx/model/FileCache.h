/**
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
    AWS_FSX_API FileCache() = default;
    AWS_FSX_API FileCache(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API FileCache& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    FileCache& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    FileCache& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline const Aws::String& GetFileCacheId() const { return m_fileCacheId; }
    inline bool FileCacheIdHasBeenSet() const { return m_fileCacheIdHasBeenSet; }
    template<typename FileCacheIdT = Aws::String>
    void SetFileCacheId(FileCacheIdT&& value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId = std::forward<FileCacheIdT>(value); }
    template<typename FileCacheIdT = Aws::String>
    FileCache& WithFileCacheId(FileCacheIdT&& value) { SetFileCacheId(std::forward<FileCacheIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of cache, which must be <code>LUSTRE</code>.</p>
     */
    inline FileCacheType GetFileCacheType() const { return m_fileCacheType; }
    inline bool FileCacheTypeHasBeenSet() const { return m_fileCacheTypeHasBeenSet; }
    inline void SetFileCacheType(FileCacheType value) { m_fileCacheTypeHasBeenSet = true; m_fileCacheType = value; }
    inline FileCache& WithFileCacheType(FileCacheType value) { SetFileCacheType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lustre version of the cache, which must be <code>2.12</code>.</p>
     */
    inline const Aws::String& GetFileCacheTypeVersion() const { return m_fileCacheTypeVersion; }
    inline bool FileCacheTypeVersionHasBeenSet() const { return m_fileCacheTypeVersionHasBeenSet; }
    template<typename FileCacheTypeVersionT = Aws::String>
    void SetFileCacheTypeVersion(FileCacheTypeVersionT&& value) { m_fileCacheTypeVersionHasBeenSet = true; m_fileCacheTypeVersion = std::forward<FileCacheTypeVersionT>(value); }
    template<typename FileCacheTypeVersionT = Aws::String>
    FileCache& WithFileCacheTypeVersion(FileCacheTypeVersionT&& value) { SetFileCacheTypeVersion(std::forward<FileCacheTypeVersionT>(value)); return *this;}
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
    inline FileCacheLifecycle GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(FileCacheLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline FileCache& WithLifecycle(FileCacheLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure providing details of any failures that occurred.</p>
     */
    inline const FileCacheFailureDetails& GetFailureDetails() const { return m_failureDetails; }
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }
    template<typename FailureDetailsT = FileCacheFailureDetails>
    void SetFailureDetails(FailureDetailsT&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::forward<FailureDetailsT>(value); }
    template<typename FailureDetailsT = FileCacheFailureDetails>
    FileCache& WithFailureDetails(FailureDetailsT&& value) { SetFailureDetails(std::forward<FailureDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage capacity of the cache in gibibytes (GiB).</p>
     */
    inline int GetStorageCapacity() const { return m_storageCapacity; }
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }
    inline FileCache& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    FileCache& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    FileCache& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    FileCache& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const { return m_networkInterfaceIds; }
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }
    template<typename NetworkInterfaceIdsT = Aws::Vector<Aws::String>>
    void SetNetworkInterfaceIds(NetworkInterfaceIdsT&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::forward<NetworkInterfaceIdsT>(value); }
    template<typename NetworkInterfaceIdsT = Aws::Vector<Aws::String>>
    FileCache& WithNetworkInterfaceIds(NetworkInterfaceIdsT&& value) { SetNetworkInterfaceIds(std::forward<NetworkInterfaceIdsT>(value)); return *this;}
    template<typename NetworkInterfaceIdsT = Aws::String>
    FileCache& AddNetworkInterfaceIds(NetworkInterfaceIdsT&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.emplace_back(std::forward<NetworkInterfaceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Domain Name System (DNS) name for the cache.</p>
     */
    inline const Aws::String& GetDNSName() const { return m_dNSName; }
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }
    template<typename DNSNameT = Aws::String>
    void SetDNSName(DNSNameT&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::forward<DNSNameT>(value); }
    template<typename DNSNameT = Aws::String>
    FileCache& WithDNSName(DNSNameT&& value) { SetDNSName(std::forward<DNSNameT>(value)); return *this;}
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
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    FileCache& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    FileCache& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the Amazon File Cache resource.</p>
     */
    inline const FileCacheLustreConfiguration& GetLustreConfiguration() const { return m_lustreConfiguration; }
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }
    template<typename LustreConfigurationT = FileCacheLustreConfiguration>
    void SetLustreConfiguration(LustreConfigurationT&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::forward<LustreConfigurationT>(value); }
    template<typename LustreConfigurationT = FileCacheLustreConfiguration>
    FileCache& WithLustreConfiguration(LustreConfigurationT&& value) { SetLustreConfiguration(std::forward<LustreConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of IDs of data repository associations that are associated with this
     * cache.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataRepositoryAssociationIds() const { return m_dataRepositoryAssociationIds; }
    inline bool DataRepositoryAssociationIdsHasBeenSet() const { return m_dataRepositoryAssociationIdsHasBeenSet; }
    template<typename DataRepositoryAssociationIdsT = Aws::Vector<Aws::String>>
    void SetDataRepositoryAssociationIds(DataRepositoryAssociationIdsT&& value) { m_dataRepositoryAssociationIdsHasBeenSet = true; m_dataRepositoryAssociationIds = std::forward<DataRepositoryAssociationIdsT>(value); }
    template<typename DataRepositoryAssociationIdsT = Aws::Vector<Aws::String>>
    FileCache& WithDataRepositoryAssociationIds(DataRepositoryAssociationIdsT&& value) { SetDataRepositoryAssociationIds(std::forward<DataRepositoryAssociationIdsT>(value)); return *this;}
    template<typename DataRepositoryAssociationIdsT = Aws::String>
    FileCache& AddDataRepositoryAssociationIds(DataRepositoryAssociationIdsT&& value) { m_dataRepositoryAssociationIdsHasBeenSet = true; m_dataRepositoryAssociationIds.emplace_back(std::forward<DataRepositoryAssociationIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_fileCacheId;
    bool m_fileCacheIdHasBeenSet = false;

    FileCacheType m_fileCacheType{FileCacheType::NOT_SET};
    bool m_fileCacheTypeHasBeenSet = false;

    Aws::String m_fileCacheTypeVersion;
    bool m_fileCacheTypeVersionHasBeenSet = false;

    FileCacheLifecycle m_lifecycle{FileCacheLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    FileCacheFailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;

    int m_storageCapacity{0};
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
