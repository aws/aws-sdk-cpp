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
#include <aws/fsx/model/Tag.h>
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
   * <p>The response object for the Amazon File Cache resource being created in the
   * <code>CreateFileCache</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/FileCacheCreating">AWS
   * API Reference</a></p>
   */
  class FileCacheCreating
  {
  public:
    AWS_FSX_API FileCacheCreating();
    AWS_FSX_API FileCacheCreating(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API FileCacheCreating& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    
    inline FileCacheCreating& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    
    inline FileCacheCreating& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    
    inline FileCacheCreating& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    
    inline FileCacheCreating& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    
    inline FileCacheCreating& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline const Aws::String& GetFileCacheId() const{ return m_fileCacheId; }

    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline bool FileCacheIdHasBeenSet() const { return m_fileCacheIdHasBeenSet; }

    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline void SetFileCacheId(const Aws::String& value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId = value; }

    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline void SetFileCacheId(Aws::String&& value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId = std::move(value); }

    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline void SetFileCacheId(const char* value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId.assign(value); }

    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline FileCacheCreating& WithFileCacheId(const Aws::String& value) { SetFileCacheId(value); return *this;}

    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline FileCacheCreating& WithFileCacheId(Aws::String&& value) { SetFileCacheId(std::move(value)); return *this;}

    /**
     * <p>The system-generated, unique ID of the cache.</p>
     */
    inline FileCacheCreating& WithFileCacheId(const char* value) { SetFileCacheId(value); return *this;}


    /**
     * <p>The type of cache, which must be <code>LUSTRE</code>.</p>
     */
    inline const FileCacheType& GetFileCacheType() const{ return m_fileCacheType; }

    /**
     * <p>The type of cache, which must be <code>LUSTRE</code>.</p>
     */
    inline bool FileCacheTypeHasBeenSet() const { return m_fileCacheTypeHasBeenSet; }

    /**
     * <p>The type of cache, which must be <code>LUSTRE</code>.</p>
     */
    inline void SetFileCacheType(const FileCacheType& value) { m_fileCacheTypeHasBeenSet = true; m_fileCacheType = value; }

    /**
     * <p>The type of cache, which must be <code>LUSTRE</code>.</p>
     */
    inline void SetFileCacheType(FileCacheType&& value) { m_fileCacheTypeHasBeenSet = true; m_fileCacheType = std::move(value); }

    /**
     * <p>The type of cache, which must be <code>LUSTRE</code>.</p>
     */
    inline FileCacheCreating& WithFileCacheType(const FileCacheType& value) { SetFileCacheType(value); return *this;}

    /**
     * <p>The type of cache, which must be <code>LUSTRE</code>.</p>
     */
    inline FileCacheCreating& WithFileCacheType(FileCacheType&& value) { SetFileCacheType(std::move(value)); return *this;}


    /**
     * <p>The Lustre version of the cache, which must be <code>2.12</code>.</p>
     */
    inline const Aws::String& GetFileCacheTypeVersion() const{ return m_fileCacheTypeVersion; }

    /**
     * <p>The Lustre version of the cache, which must be <code>2.12</code>.</p>
     */
    inline bool FileCacheTypeVersionHasBeenSet() const { return m_fileCacheTypeVersionHasBeenSet; }

    /**
     * <p>The Lustre version of the cache, which must be <code>2.12</code>.</p>
     */
    inline void SetFileCacheTypeVersion(const Aws::String& value) { m_fileCacheTypeVersionHasBeenSet = true; m_fileCacheTypeVersion = value; }

    /**
     * <p>The Lustre version of the cache, which must be <code>2.12</code>.</p>
     */
    inline void SetFileCacheTypeVersion(Aws::String&& value) { m_fileCacheTypeVersionHasBeenSet = true; m_fileCacheTypeVersion = std::move(value); }

    /**
     * <p>The Lustre version of the cache, which must be <code>2.12</code>.</p>
     */
    inline void SetFileCacheTypeVersion(const char* value) { m_fileCacheTypeVersionHasBeenSet = true; m_fileCacheTypeVersion.assign(value); }

    /**
     * <p>The Lustre version of the cache, which must be <code>2.12</code>.</p>
     */
    inline FileCacheCreating& WithFileCacheTypeVersion(const Aws::String& value) { SetFileCacheTypeVersion(value); return *this;}

    /**
     * <p>The Lustre version of the cache, which must be <code>2.12</code>.</p>
     */
    inline FileCacheCreating& WithFileCacheTypeVersion(Aws::String&& value) { SetFileCacheTypeVersion(std::move(value)); return *this;}

    /**
     * <p>The Lustre version of the cache, which must be <code>2.12</code>.</p>
     */
    inline FileCacheCreating& WithFileCacheTypeVersion(const char* value) { SetFileCacheTypeVersion(value); return *this;}


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
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

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
    inline void SetLifecycle(const FileCacheLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

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
    inline void SetLifecycle(FileCacheLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

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
    inline FileCacheCreating& WithLifecycle(const FileCacheLifecycle& value) { SetLifecycle(value); return *this;}

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
    inline FileCacheCreating& WithLifecycle(FileCacheLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>A structure providing details of any failures that occurred.</p>
     */
    inline const FileCacheFailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    /**
     * <p>A structure providing details of any failures that occurred.</p>
     */
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }

    /**
     * <p>A structure providing details of any failures that occurred.</p>
     */
    inline void SetFailureDetails(const FileCacheFailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    /**
     * <p>A structure providing details of any failures that occurred.</p>
     */
    inline void SetFailureDetails(FileCacheFailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }

    /**
     * <p>A structure providing details of any failures that occurred.</p>
     */
    inline FileCacheCreating& WithFailureDetails(const FileCacheFailureDetails& value) { SetFailureDetails(value); return *this;}

    /**
     * <p>A structure providing details of any failures that occurred.</p>
     */
    inline FileCacheCreating& WithFailureDetails(FileCacheFailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}


    /**
     * <p>The storage capacity of the cache in gibibytes (GiB).</p>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }

    /**
     * <p>The storage capacity of the cache in gibibytes (GiB).</p>
     */
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }

    /**
     * <p>The storage capacity of the cache in gibibytes (GiB).</p>
     */
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }

    /**
     * <p>The storage capacity of the cache in gibibytes (GiB).</p>
     */
    inline FileCacheCreating& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}


    
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    
    inline FileCacheCreating& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    
    inline FileCacheCreating& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    
    inline FileCacheCreating& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    
    inline FileCacheCreating& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    
    inline FileCacheCreating& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    
    inline FileCacheCreating& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    
    inline FileCacheCreating& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    
    inline FileCacheCreating& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const{ return m_networkInterfaceIds; }

    
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }

    
    inline void SetNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = value; }

    
    inline void SetNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::move(value); }

    
    inline FileCacheCreating& WithNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetNetworkInterfaceIds(value); return *this;}

    
    inline FileCacheCreating& WithNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetNetworkInterfaceIds(std::move(value)); return *this;}

    
    inline FileCacheCreating& AddNetworkInterfaceIds(const Aws::String& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }

    
    inline FileCacheCreating& AddNetworkInterfaceIds(Aws::String&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(std::move(value)); return *this; }

    
    inline FileCacheCreating& AddNetworkInterfaceIds(const char* value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }


    /**
     * <p>The Domain Name System (DNS) name for the cache.</p>
     */
    inline const Aws::String& GetDNSName() const{ return m_dNSName; }

    /**
     * <p>The Domain Name System (DNS) name for the cache.</p>
     */
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }

    /**
     * <p>The Domain Name System (DNS) name for the cache.</p>
     */
    inline void SetDNSName(const Aws::String& value) { m_dNSNameHasBeenSet = true; m_dNSName = value; }

    /**
     * <p>The Domain Name System (DNS) name for the cache.</p>
     */
    inline void SetDNSName(Aws::String&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::move(value); }

    /**
     * <p>The Domain Name System (DNS) name for the cache.</p>
     */
    inline void SetDNSName(const char* value) { m_dNSNameHasBeenSet = true; m_dNSName.assign(value); }

    /**
     * <p>The Domain Name System (DNS) name for the cache.</p>
     */
    inline FileCacheCreating& WithDNSName(const Aws::String& value) { SetDNSName(value); return *this;}

    /**
     * <p>The Domain Name System (DNS) name for the cache.</p>
     */
    inline FileCacheCreating& WithDNSName(Aws::String&& value) { SetDNSName(std::move(value)); return *this;}

    /**
     * <p>The Domain Name System (DNS) name for the cache.</p>
     */
    inline FileCacheCreating& WithDNSName(const char* value) { SetDNSName(value); return *this;}


    /**
     * <p>Specifies the ID of the Key Management Service (KMS) key to use for
     * encrypting data on an Amazon File Cache. If a <code>KmsKeyId</code> isn't
     * specified, the Amazon FSx-managed KMS key for your account is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_Encrypt.html">Encrypt</a>
     * in the <i>Key Management Service API Reference</i>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>Specifies the ID of the Key Management Service (KMS) key to use for
     * encrypting data on an Amazon File Cache. If a <code>KmsKeyId</code> isn't
     * specified, the Amazon FSx-managed KMS key for your account is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_Encrypt.html">Encrypt</a>
     * in the <i>Key Management Service API Reference</i>.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the Key Management Service (KMS) key to use for
     * encrypting data on an Amazon File Cache. If a <code>KmsKeyId</code> isn't
     * specified, the Amazon FSx-managed KMS key for your account is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_Encrypt.html">Encrypt</a>
     * in the <i>Key Management Service API Reference</i>.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>Specifies the ID of the Key Management Service (KMS) key to use for
     * encrypting data on an Amazon File Cache. If a <code>KmsKeyId</code> isn't
     * specified, the Amazon FSx-managed KMS key for your account is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_Encrypt.html">Encrypt</a>
     * in the <i>Key Management Service API Reference</i>.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>Specifies the ID of the Key Management Service (KMS) key to use for
     * encrypting data on an Amazon File Cache. If a <code>KmsKeyId</code> isn't
     * specified, the Amazon FSx-managed KMS key for your account is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_Encrypt.html">Encrypt</a>
     * in the <i>Key Management Service API Reference</i>.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>Specifies the ID of the Key Management Service (KMS) key to use for
     * encrypting data on an Amazon File Cache. If a <code>KmsKeyId</code> isn't
     * specified, the Amazon FSx-managed KMS key for your account is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_Encrypt.html">Encrypt</a>
     * in the <i>Key Management Service API Reference</i>.</p>
     */
    inline FileCacheCreating& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>Specifies the ID of the Key Management Service (KMS) key to use for
     * encrypting data on an Amazon File Cache. If a <code>KmsKeyId</code> isn't
     * specified, the Amazon FSx-managed KMS key for your account is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_Encrypt.html">Encrypt</a>
     * in the <i>Key Management Service API Reference</i>.</p>
     */
    inline FileCacheCreating& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the Key Management Service (KMS) key to use for
     * encrypting data on an Amazon File Cache. If a <code>KmsKeyId</code> isn't
     * specified, the Amazon FSx-managed KMS key for your account is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_Encrypt.html">Encrypt</a>
     * in the <i>Key Management Service API Reference</i>.</p>
     */
    inline FileCacheCreating& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    
    inline FileCacheCreating& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    
    inline FileCacheCreating& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    
    inline FileCacheCreating& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline FileCacheCreating& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline FileCacheCreating& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline FileCacheCreating& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline FileCacheCreating& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A boolean flag indicating whether tags for the cache should be copied to data
     * repository associations.</p>
     */
    inline bool GetCopyTagsToDataRepositoryAssociations() const{ return m_copyTagsToDataRepositoryAssociations; }

    /**
     * <p>A boolean flag indicating whether tags for the cache should be copied to data
     * repository associations.</p>
     */
    inline bool CopyTagsToDataRepositoryAssociationsHasBeenSet() const { return m_copyTagsToDataRepositoryAssociationsHasBeenSet; }

    /**
     * <p>A boolean flag indicating whether tags for the cache should be copied to data
     * repository associations.</p>
     */
    inline void SetCopyTagsToDataRepositoryAssociations(bool value) { m_copyTagsToDataRepositoryAssociationsHasBeenSet = true; m_copyTagsToDataRepositoryAssociations = value; }

    /**
     * <p>A boolean flag indicating whether tags for the cache should be copied to data
     * repository associations.</p>
     */
    inline FileCacheCreating& WithCopyTagsToDataRepositoryAssociations(bool value) { SetCopyTagsToDataRepositoryAssociations(value); return *this;}


    /**
     * <p>The configuration for the Amazon File Cache resource.</p>
     */
    inline const FileCacheLustreConfiguration& GetLustreConfiguration() const{ return m_lustreConfiguration; }

    /**
     * <p>The configuration for the Amazon File Cache resource.</p>
     */
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }

    /**
     * <p>The configuration for the Amazon File Cache resource.</p>
     */
    inline void SetLustreConfiguration(const FileCacheLustreConfiguration& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = value; }

    /**
     * <p>The configuration for the Amazon File Cache resource.</p>
     */
    inline void SetLustreConfiguration(FileCacheLustreConfiguration&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::move(value); }

    /**
     * <p>The configuration for the Amazon File Cache resource.</p>
     */
    inline FileCacheCreating& WithLustreConfiguration(const FileCacheLustreConfiguration& value) { SetLustreConfiguration(value); return *this;}

    /**
     * <p>The configuration for the Amazon File Cache resource.</p>
     */
    inline FileCacheCreating& WithLustreConfiguration(FileCacheLustreConfiguration&& value) { SetLustreConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of IDs of data repository associations that are associated with this
     * cache.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataRepositoryAssociationIds() const{ return m_dataRepositoryAssociationIds; }

    /**
     * <p>A list of IDs of data repository associations that are associated with this
     * cache.</p>
     */
    inline bool DataRepositoryAssociationIdsHasBeenSet() const { return m_dataRepositoryAssociationIdsHasBeenSet; }

    /**
     * <p>A list of IDs of data repository associations that are associated with this
     * cache.</p>
     */
    inline void SetDataRepositoryAssociationIds(const Aws::Vector<Aws::String>& value) { m_dataRepositoryAssociationIdsHasBeenSet = true; m_dataRepositoryAssociationIds = value; }

    /**
     * <p>A list of IDs of data repository associations that are associated with this
     * cache.</p>
     */
    inline void SetDataRepositoryAssociationIds(Aws::Vector<Aws::String>&& value) { m_dataRepositoryAssociationIdsHasBeenSet = true; m_dataRepositoryAssociationIds = std::move(value); }

    /**
     * <p>A list of IDs of data repository associations that are associated with this
     * cache.</p>
     */
    inline FileCacheCreating& WithDataRepositoryAssociationIds(const Aws::Vector<Aws::String>& value) { SetDataRepositoryAssociationIds(value); return *this;}

    /**
     * <p>A list of IDs of data repository associations that are associated with this
     * cache.</p>
     */
    inline FileCacheCreating& WithDataRepositoryAssociationIds(Aws::Vector<Aws::String>&& value) { SetDataRepositoryAssociationIds(std::move(value)); return *this;}

    /**
     * <p>A list of IDs of data repository associations that are associated with this
     * cache.</p>
     */
    inline FileCacheCreating& AddDataRepositoryAssociationIds(const Aws::String& value) { m_dataRepositoryAssociationIdsHasBeenSet = true; m_dataRepositoryAssociationIds.push_back(value); return *this; }

    /**
     * <p>A list of IDs of data repository associations that are associated with this
     * cache.</p>
     */
    inline FileCacheCreating& AddDataRepositoryAssociationIds(Aws::String&& value) { m_dataRepositoryAssociationIdsHasBeenSet = true; m_dataRepositoryAssociationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IDs of data repository associations that are associated with this
     * cache.</p>
     */
    inline FileCacheCreating& AddDataRepositoryAssociationIds(const char* value) { m_dataRepositoryAssociationIdsHasBeenSet = true; m_dataRepositoryAssociationIds.push_back(value); return *this; }

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_copyTagsToDataRepositoryAssociations;
    bool m_copyTagsToDataRepositoryAssociationsHasBeenSet = false;

    FileCacheLustreConfiguration m_lustreConfiguration;
    bool m_lustreConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataRepositoryAssociationIds;
    bool m_dataRepositoryAssociationIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
