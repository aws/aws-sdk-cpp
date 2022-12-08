/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/FileCacheType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/CreateFileCacheLustreConfiguration.h>
#include <aws/fsx/model/Tag.h>
#include <aws/fsx/model/FileCacheDataRepositoryAssociation.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class CreateFileCacheRequest : public FSxRequest
  {
  public:
    AWS_FSX_API CreateFileCacheRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFileCache"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An idempotency token for resource creation, in a string of up to 64 ASCII
     * characters. This token is automatically filled on your behalf when you use the
     * Command Line Interface (CLI) or an Amazon Web Services SDK.</p> <p>By using the
     * idempotent operation, you can retry a <code>CreateFileCache</code> operation
     * without the risk of creating an extra cache. This approach can be useful when an
     * initial call fails in a way that makes it unclear whether a cache was created.
     * Examples are if a transport level timeout occurred, or your connection was
     * reset. If you use the same client request token and the initial call created a
     * cache, the client receives success as long as the parameters are the same.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>An idempotency token for resource creation, in a string of up to 64 ASCII
     * characters. This token is automatically filled on your behalf when you use the
     * Command Line Interface (CLI) or an Amazon Web Services SDK.</p> <p>By using the
     * idempotent operation, you can retry a <code>CreateFileCache</code> operation
     * without the risk of creating an extra cache. This approach can be useful when an
     * initial call fails in a way that makes it unclear whether a cache was created.
     * Examples are if a transport level timeout occurred, or your connection was
     * reset. If you use the same client request token and the initial call created a
     * cache, the client receives success as long as the parameters are the same.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>An idempotency token for resource creation, in a string of up to 64 ASCII
     * characters. This token is automatically filled on your behalf when you use the
     * Command Line Interface (CLI) or an Amazon Web Services SDK.</p> <p>By using the
     * idempotent operation, you can retry a <code>CreateFileCache</code> operation
     * without the risk of creating an extra cache. This approach can be useful when an
     * initial call fails in a way that makes it unclear whether a cache was created.
     * Examples are if a transport level timeout occurred, or your connection was
     * reset. If you use the same client request token and the initial call created a
     * cache, the client receives success as long as the parameters are the same.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>An idempotency token for resource creation, in a string of up to 64 ASCII
     * characters. This token is automatically filled on your behalf when you use the
     * Command Line Interface (CLI) or an Amazon Web Services SDK.</p> <p>By using the
     * idempotent operation, you can retry a <code>CreateFileCache</code> operation
     * without the risk of creating an extra cache. This approach can be useful when an
     * initial call fails in a way that makes it unclear whether a cache was created.
     * Examples are if a transport level timeout occurred, or your connection was
     * reset. If you use the same client request token and the initial call created a
     * cache, the client receives success as long as the parameters are the same.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>An idempotency token for resource creation, in a string of up to 64 ASCII
     * characters. This token is automatically filled on your behalf when you use the
     * Command Line Interface (CLI) or an Amazon Web Services SDK.</p> <p>By using the
     * idempotent operation, you can retry a <code>CreateFileCache</code> operation
     * without the risk of creating an extra cache. This approach can be useful when an
     * initial call fails in a way that makes it unclear whether a cache was created.
     * Examples are if a transport level timeout occurred, or your connection was
     * reset. If you use the same client request token and the initial call created a
     * cache, the client receives success as long as the parameters are the same.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>An idempotency token for resource creation, in a string of up to 64 ASCII
     * characters. This token is automatically filled on your behalf when you use the
     * Command Line Interface (CLI) or an Amazon Web Services SDK.</p> <p>By using the
     * idempotent operation, you can retry a <code>CreateFileCache</code> operation
     * without the risk of creating an extra cache. This approach can be useful when an
     * initial call fails in a way that makes it unclear whether a cache was created.
     * Examples are if a transport level timeout occurred, or your connection was
     * reset. If you use the same client request token and the initial call created a
     * cache, the client receives success as long as the parameters are the same.</p>
     */
    inline CreateFileCacheRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>An idempotency token for resource creation, in a string of up to 64 ASCII
     * characters. This token is automatically filled on your behalf when you use the
     * Command Line Interface (CLI) or an Amazon Web Services SDK.</p> <p>By using the
     * idempotent operation, you can retry a <code>CreateFileCache</code> operation
     * without the risk of creating an extra cache. This approach can be useful when an
     * initial call fails in a way that makes it unclear whether a cache was created.
     * Examples are if a transport level timeout occurred, or your connection was
     * reset. If you use the same client request token and the initial call created a
     * cache, the client receives success as long as the parameters are the same.</p>
     */
    inline CreateFileCacheRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>An idempotency token for resource creation, in a string of up to 64 ASCII
     * characters. This token is automatically filled on your behalf when you use the
     * Command Line Interface (CLI) or an Amazon Web Services SDK.</p> <p>By using the
     * idempotent operation, you can retry a <code>CreateFileCache</code> operation
     * without the risk of creating an extra cache. This approach can be useful when an
     * initial call fails in a way that makes it unclear whether a cache was created.
     * Examples are if a transport level timeout occurred, or your connection was
     * reset. If you use the same client request token and the initial call created a
     * cache, the client receives success as long as the parameters are the same.</p>
     */
    inline CreateFileCacheRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The type of cache that you're creating, which must be
     * <code>LUSTRE</code>.</p>
     */
    inline const FileCacheType& GetFileCacheType() const{ return m_fileCacheType; }

    /**
     * <p>The type of cache that you're creating, which must be
     * <code>LUSTRE</code>.</p>
     */
    inline bool FileCacheTypeHasBeenSet() const { return m_fileCacheTypeHasBeenSet; }

    /**
     * <p>The type of cache that you're creating, which must be
     * <code>LUSTRE</code>.</p>
     */
    inline void SetFileCacheType(const FileCacheType& value) { m_fileCacheTypeHasBeenSet = true; m_fileCacheType = value; }

    /**
     * <p>The type of cache that you're creating, which must be
     * <code>LUSTRE</code>.</p>
     */
    inline void SetFileCacheType(FileCacheType&& value) { m_fileCacheTypeHasBeenSet = true; m_fileCacheType = std::move(value); }

    /**
     * <p>The type of cache that you're creating, which must be
     * <code>LUSTRE</code>.</p>
     */
    inline CreateFileCacheRequest& WithFileCacheType(const FileCacheType& value) { SetFileCacheType(value); return *this;}

    /**
     * <p>The type of cache that you're creating, which must be
     * <code>LUSTRE</code>.</p>
     */
    inline CreateFileCacheRequest& WithFileCacheType(FileCacheType&& value) { SetFileCacheType(std::move(value)); return *this;}


    /**
     * <p>Sets the Lustre version for the cache that you're creating, which must be
     * <code>2.12</code>.</p>
     */
    inline const Aws::String& GetFileCacheTypeVersion() const{ return m_fileCacheTypeVersion; }

    /**
     * <p>Sets the Lustre version for the cache that you're creating, which must be
     * <code>2.12</code>.</p>
     */
    inline bool FileCacheTypeVersionHasBeenSet() const { return m_fileCacheTypeVersionHasBeenSet; }

    /**
     * <p>Sets the Lustre version for the cache that you're creating, which must be
     * <code>2.12</code>.</p>
     */
    inline void SetFileCacheTypeVersion(const Aws::String& value) { m_fileCacheTypeVersionHasBeenSet = true; m_fileCacheTypeVersion = value; }

    /**
     * <p>Sets the Lustre version for the cache that you're creating, which must be
     * <code>2.12</code>.</p>
     */
    inline void SetFileCacheTypeVersion(Aws::String&& value) { m_fileCacheTypeVersionHasBeenSet = true; m_fileCacheTypeVersion = std::move(value); }

    /**
     * <p>Sets the Lustre version for the cache that you're creating, which must be
     * <code>2.12</code>.</p>
     */
    inline void SetFileCacheTypeVersion(const char* value) { m_fileCacheTypeVersionHasBeenSet = true; m_fileCacheTypeVersion.assign(value); }

    /**
     * <p>Sets the Lustre version for the cache that you're creating, which must be
     * <code>2.12</code>.</p>
     */
    inline CreateFileCacheRequest& WithFileCacheTypeVersion(const Aws::String& value) { SetFileCacheTypeVersion(value); return *this;}

    /**
     * <p>Sets the Lustre version for the cache that you're creating, which must be
     * <code>2.12</code>.</p>
     */
    inline CreateFileCacheRequest& WithFileCacheTypeVersion(Aws::String&& value) { SetFileCacheTypeVersion(std::move(value)); return *this;}

    /**
     * <p>Sets the Lustre version for the cache that you're creating, which must be
     * <code>2.12</code>.</p>
     */
    inline CreateFileCacheRequest& WithFileCacheTypeVersion(const char* value) { SetFileCacheTypeVersion(value); return *this;}


    /**
     * <p>The storage capacity of the cache in gibibytes (GiB). Valid values are 1200
     * GiB, 2400 GiB, and increments of 2400 GiB.</p>
     */
    inline int GetStorageCapacity() const{ return m_storageCapacity; }

    /**
     * <p>The storage capacity of the cache in gibibytes (GiB). Valid values are 1200
     * GiB, 2400 GiB, and increments of 2400 GiB.</p>
     */
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }

    /**
     * <p>The storage capacity of the cache in gibibytes (GiB). Valid values are 1200
     * GiB, 2400 GiB, and increments of 2400 GiB.</p>
     */
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }

    /**
     * <p>The storage capacity of the cache in gibibytes (GiB). Valid values are 1200
     * GiB, 2400 GiB, and increments of 2400 GiB.</p>
     */
    inline CreateFileCacheRequest& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    
    inline CreateFileCacheRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    
    inline CreateFileCacheRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    
    inline CreateFileCacheRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    
    inline CreateFileCacheRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    
    inline CreateFileCacheRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for Amazon File Cache access. This list isn't returned in
     * later requests to describe the cache.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for Amazon File Cache access. This list isn't returned in
     * later requests to describe the cache.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for Amazon File Cache access. This list isn't returned in
     * later requests to describe the cache.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for Amazon File Cache access. This list isn't returned in
     * later requests to describe the cache.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for Amazon File Cache access. This list isn't returned in
     * later requests to describe the cache.</p>
     */
    inline CreateFileCacheRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for Amazon File Cache access. This list isn't returned in
     * later requests to describe the cache.</p>
     */
    inline CreateFileCacheRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for Amazon File Cache access. This list isn't returned in
     * later requests to describe the cache.</p>
     */
    inline CreateFileCacheRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for Amazon File Cache access. This list isn't returned in
     * later requests to describe the cache.</p>
     */
    inline CreateFileCacheRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for Amazon File Cache access. This list isn't returned in
     * later requests to describe the cache.</p>
     */
    inline CreateFileCacheRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateFileCacheRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateFileCacheRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateFileCacheRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateFileCacheRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A boolean flag indicating whether tags for the cache should be copied to data
     * repository associations. This value defaults to false.</p>
     */
    inline bool GetCopyTagsToDataRepositoryAssociations() const{ return m_copyTagsToDataRepositoryAssociations; }

    /**
     * <p>A boolean flag indicating whether tags for the cache should be copied to data
     * repository associations. This value defaults to false.</p>
     */
    inline bool CopyTagsToDataRepositoryAssociationsHasBeenSet() const { return m_copyTagsToDataRepositoryAssociationsHasBeenSet; }

    /**
     * <p>A boolean flag indicating whether tags for the cache should be copied to data
     * repository associations. This value defaults to false.</p>
     */
    inline void SetCopyTagsToDataRepositoryAssociations(bool value) { m_copyTagsToDataRepositoryAssociationsHasBeenSet = true; m_copyTagsToDataRepositoryAssociations = value; }

    /**
     * <p>A boolean flag indicating whether tags for the cache should be copied to data
     * repository associations. This value defaults to false.</p>
     */
    inline CreateFileCacheRequest& WithCopyTagsToDataRepositoryAssociations(bool value) { SetCopyTagsToDataRepositoryAssociations(value); return *this;}


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
    inline CreateFileCacheRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>Specifies the ID of the Key Management Service (KMS) key to use for
     * encrypting data on an Amazon File Cache. If a <code>KmsKeyId</code> isn't
     * specified, the Amazon FSx-managed KMS key for your account is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_Encrypt.html">Encrypt</a>
     * in the <i>Key Management Service API Reference</i>.</p>
     */
    inline CreateFileCacheRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the Key Management Service (KMS) key to use for
     * encrypting data on an Amazon File Cache. If a <code>KmsKeyId</code> isn't
     * specified, the Amazon FSx-managed KMS key for your account is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_Encrypt.html">Encrypt</a>
     * in the <i>Key Management Service API Reference</i>.</p>
     */
    inline CreateFileCacheRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The configuration for the Amazon File Cache resource being created.</p>
     */
    inline const CreateFileCacheLustreConfiguration& GetLustreConfiguration() const{ return m_lustreConfiguration; }

    /**
     * <p>The configuration for the Amazon File Cache resource being created.</p>
     */
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }

    /**
     * <p>The configuration for the Amazon File Cache resource being created.</p>
     */
    inline void SetLustreConfiguration(const CreateFileCacheLustreConfiguration& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = value; }

    /**
     * <p>The configuration for the Amazon File Cache resource being created.</p>
     */
    inline void SetLustreConfiguration(CreateFileCacheLustreConfiguration&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::move(value); }

    /**
     * <p>The configuration for the Amazon File Cache resource being created.</p>
     */
    inline CreateFileCacheRequest& WithLustreConfiguration(const CreateFileCacheLustreConfiguration& value) { SetLustreConfiguration(value); return *this;}

    /**
     * <p>The configuration for the Amazon File Cache resource being created.</p>
     */
    inline CreateFileCacheRequest& WithLustreConfiguration(CreateFileCacheLustreConfiguration&& value) { SetLustreConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of up to 8 configurations for data repository associations (DRAs) to
     * be created during the cache creation. The DRAs link the cache to either an
     * Amazon S3 data repository or a Network File System (NFS) data repository that
     * supports the NFSv3 protocol.</p> <p>The DRA configurations must meet the
     * following requirements:</p> <ul> <li> <p>All configurations on the list must be
     * of the same data repository type, either all S3 or all NFS. A cache can't link
     * to different data repository types at the same time.</p> </li> <li> <p>An NFS
     * DRA must link to an NFS file system that supports the NFSv3 protocol.</p> </li>
     * </ul> <p>DRA automatic import and automatic export is not supported.</p>
     */
    inline const Aws::Vector<FileCacheDataRepositoryAssociation>& GetDataRepositoryAssociations() const{ return m_dataRepositoryAssociations; }

    /**
     * <p>A list of up to 8 configurations for data repository associations (DRAs) to
     * be created during the cache creation. The DRAs link the cache to either an
     * Amazon S3 data repository or a Network File System (NFS) data repository that
     * supports the NFSv3 protocol.</p> <p>The DRA configurations must meet the
     * following requirements:</p> <ul> <li> <p>All configurations on the list must be
     * of the same data repository type, either all S3 or all NFS. A cache can't link
     * to different data repository types at the same time.</p> </li> <li> <p>An NFS
     * DRA must link to an NFS file system that supports the NFSv3 protocol.</p> </li>
     * </ul> <p>DRA automatic import and automatic export is not supported.</p>
     */
    inline bool DataRepositoryAssociationsHasBeenSet() const { return m_dataRepositoryAssociationsHasBeenSet; }

    /**
     * <p>A list of up to 8 configurations for data repository associations (DRAs) to
     * be created during the cache creation. The DRAs link the cache to either an
     * Amazon S3 data repository or a Network File System (NFS) data repository that
     * supports the NFSv3 protocol.</p> <p>The DRA configurations must meet the
     * following requirements:</p> <ul> <li> <p>All configurations on the list must be
     * of the same data repository type, either all S3 or all NFS. A cache can't link
     * to different data repository types at the same time.</p> </li> <li> <p>An NFS
     * DRA must link to an NFS file system that supports the NFSv3 protocol.</p> </li>
     * </ul> <p>DRA automatic import and automatic export is not supported.</p>
     */
    inline void SetDataRepositoryAssociations(const Aws::Vector<FileCacheDataRepositoryAssociation>& value) { m_dataRepositoryAssociationsHasBeenSet = true; m_dataRepositoryAssociations = value; }

    /**
     * <p>A list of up to 8 configurations for data repository associations (DRAs) to
     * be created during the cache creation. The DRAs link the cache to either an
     * Amazon S3 data repository or a Network File System (NFS) data repository that
     * supports the NFSv3 protocol.</p> <p>The DRA configurations must meet the
     * following requirements:</p> <ul> <li> <p>All configurations on the list must be
     * of the same data repository type, either all S3 or all NFS. A cache can't link
     * to different data repository types at the same time.</p> </li> <li> <p>An NFS
     * DRA must link to an NFS file system that supports the NFSv3 protocol.</p> </li>
     * </ul> <p>DRA automatic import and automatic export is not supported.</p>
     */
    inline void SetDataRepositoryAssociations(Aws::Vector<FileCacheDataRepositoryAssociation>&& value) { m_dataRepositoryAssociationsHasBeenSet = true; m_dataRepositoryAssociations = std::move(value); }

    /**
     * <p>A list of up to 8 configurations for data repository associations (DRAs) to
     * be created during the cache creation. The DRAs link the cache to either an
     * Amazon S3 data repository or a Network File System (NFS) data repository that
     * supports the NFSv3 protocol.</p> <p>The DRA configurations must meet the
     * following requirements:</p> <ul> <li> <p>All configurations on the list must be
     * of the same data repository type, either all S3 or all NFS. A cache can't link
     * to different data repository types at the same time.</p> </li> <li> <p>An NFS
     * DRA must link to an NFS file system that supports the NFSv3 protocol.</p> </li>
     * </ul> <p>DRA automatic import and automatic export is not supported.</p>
     */
    inline CreateFileCacheRequest& WithDataRepositoryAssociations(const Aws::Vector<FileCacheDataRepositoryAssociation>& value) { SetDataRepositoryAssociations(value); return *this;}

    /**
     * <p>A list of up to 8 configurations for data repository associations (DRAs) to
     * be created during the cache creation. The DRAs link the cache to either an
     * Amazon S3 data repository or a Network File System (NFS) data repository that
     * supports the NFSv3 protocol.</p> <p>The DRA configurations must meet the
     * following requirements:</p> <ul> <li> <p>All configurations on the list must be
     * of the same data repository type, either all S3 or all NFS. A cache can't link
     * to different data repository types at the same time.</p> </li> <li> <p>An NFS
     * DRA must link to an NFS file system that supports the NFSv3 protocol.</p> </li>
     * </ul> <p>DRA automatic import and automatic export is not supported.</p>
     */
    inline CreateFileCacheRequest& WithDataRepositoryAssociations(Aws::Vector<FileCacheDataRepositoryAssociation>&& value) { SetDataRepositoryAssociations(std::move(value)); return *this;}

    /**
     * <p>A list of up to 8 configurations for data repository associations (DRAs) to
     * be created during the cache creation. The DRAs link the cache to either an
     * Amazon S3 data repository or a Network File System (NFS) data repository that
     * supports the NFSv3 protocol.</p> <p>The DRA configurations must meet the
     * following requirements:</p> <ul> <li> <p>All configurations on the list must be
     * of the same data repository type, either all S3 or all NFS. A cache can't link
     * to different data repository types at the same time.</p> </li> <li> <p>An NFS
     * DRA must link to an NFS file system that supports the NFSv3 protocol.</p> </li>
     * </ul> <p>DRA automatic import and automatic export is not supported.</p>
     */
    inline CreateFileCacheRequest& AddDataRepositoryAssociations(const FileCacheDataRepositoryAssociation& value) { m_dataRepositoryAssociationsHasBeenSet = true; m_dataRepositoryAssociations.push_back(value); return *this; }

    /**
     * <p>A list of up to 8 configurations for data repository associations (DRAs) to
     * be created during the cache creation. The DRAs link the cache to either an
     * Amazon S3 data repository or a Network File System (NFS) data repository that
     * supports the NFSv3 protocol.</p> <p>The DRA configurations must meet the
     * following requirements:</p> <ul> <li> <p>All configurations on the list must be
     * of the same data repository type, either all S3 or all NFS. A cache can't link
     * to different data repository types at the same time.</p> </li> <li> <p>An NFS
     * DRA must link to an NFS file system that supports the NFSv3 protocol.</p> </li>
     * </ul> <p>DRA automatic import and automatic export is not supported.</p>
     */
    inline CreateFileCacheRequest& AddDataRepositoryAssociations(FileCacheDataRepositoryAssociation&& value) { m_dataRepositoryAssociationsHasBeenSet = true; m_dataRepositoryAssociations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    FileCacheType m_fileCacheType;
    bool m_fileCacheTypeHasBeenSet = false;

    Aws::String m_fileCacheTypeVersion;
    bool m_fileCacheTypeVersionHasBeenSet = false;

    int m_storageCapacity;
    bool m_storageCapacityHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_copyTagsToDataRepositoryAssociations;
    bool m_copyTagsToDataRepositoryAssociationsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    CreateFileCacheLustreConfiguration m_lustreConfiguration;
    bool m_lustreConfigurationHasBeenSet = false;

    Aws::Vector<FileCacheDataRepositoryAssociation> m_dataRepositoryAssociations;
    bool m_dataRepositoryAssociationsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
