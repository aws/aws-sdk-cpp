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
    AWS_FSX_API CreateFileCacheRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFileCache"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An idempotency token for resource creation, in a string of up to 63 ASCII
     * characters. This token is automatically filled on your behalf when you use the
     * Command Line Interface (CLI) or an Amazon Web Services SDK.</p> <p>By using the
     * idempotent operation, you can retry a <code>CreateFileCache</code> operation
     * without the risk of creating an extra cache. This approach can be useful when an
     * initial call fails in a way that makes it unclear whether a cache was created.
     * Examples are if a transport level timeout occurred, or your connection was
     * reset. If you use the same client request token and the initial call created a
     * cache, the client receives success as long as the parameters are the same.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateFileCacheRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of cache that you're creating, which must be
     * <code>LUSTRE</code>.</p>
     */
    inline FileCacheType GetFileCacheType() const { return m_fileCacheType; }
    inline bool FileCacheTypeHasBeenSet() const { return m_fileCacheTypeHasBeenSet; }
    inline void SetFileCacheType(FileCacheType value) { m_fileCacheTypeHasBeenSet = true; m_fileCacheType = value; }
    inline CreateFileCacheRequest& WithFileCacheType(FileCacheType value) { SetFileCacheType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the Lustre version for the cache that you're creating, which must be
     * <code>2.12</code>.</p>
     */
    inline const Aws::String& GetFileCacheTypeVersion() const { return m_fileCacheTypeVersion; }
    inline bool FileCacheTypeVersionHasBeenSet() const { return m_fileCacheTypeVersionHasBeenSet; }
    template<typename FileCacheTypeVersionT = Aws::String>
    void SetFileCacheTypeVersion(FileCacheTypeVersionT&& value) { m_fileCacheTypeVersionHasBeenSet = true; m_fileCacheTypeVersion = std::forward<FileCacheTypeVersionT>(value); }
    template<typename FileCacheTypeVersionT = Aws::String>
    CreateFileCacheRequest& WithFileCacheTypeVersion(FileCacheTypeVersionT&& value) { SetFileCacheTypeVersion(std::forward<FileCacheTypeVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage capacity of the cache in gibibytes (GiB). Valid values are 1200
     * GiB, 2400 GiB, and increments of 2400 GiB.</p>
     */
    inline int GetStorageCapacity() const { return m_storageCapacity; }
    inline bool StorageCapacityHasBeenSet() const { return m_storageCapacityHasBeenSet; }
    inline void SetStorageCapacity(int value) { m_storageCapacityHasBeenSet = true; m_storageCapacity = value; }
    inline CreateFileCacheRequest& WithStorageCapacity(int value) { SetStorageCapacity(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    CreateFileCacheRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    CreateFileCacheRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IDs specifying the security groups to apply to all network
     * interfaces created for Amazon File Cache access. This list isn't returned in
     * later requests to describe the cache.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateFileCacheRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    CreateFileCacheRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateFileCacheRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateFileCacheRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A boolean flag indicating whether tags for the cache should be copied to data
     * repository associations. This value defaults to false.</p>
     */
    inline bool GetCopyTagsToDataRepositoryAssociations() const { return m_copyTagsToDataRepositoryAssociations; }
    inline bool CopyTagsToDataRepositoryAssociationsHasBeenSet() const { return m_copyTagsToDataRepositoryAssociationsHasBeenSet; }
    inline void SetCopyTagsToDataRepositoryAssociations(bool value) { m_copyTagsToDataRepositoryAssociationsHasBeenSet = true; m_copyTagsToDataRepositoryAssociations = value; }
    inline CreateFileCacheRequest& WithCopyTagsToDataRepositoryAssociations(bool value) { SetCopyTagsToDataRepositoryAssociations(value); return *this;}
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
    CreateFileCacheRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the Amazon File Cache resource being created.</p>
     */
    inline const CreateFileCacheLustreConfiguration& GetLustreConfiguration() const { return m_lustreConfiguration; }
    inline bool LustreConfigurationHasBeenSet() const { return m_lustreConfigurationHasBeenSet; }
    template<typename LustreConfigurationT = CreateFileCacheLustreConfiguration>
    void SetLustreConfiguration(LustreConfigurationT&& value) { m_lustreConfigurationHasBeenSet = true; m_lustreConfiguration = std::forward<LustreConfigurationT>(value); }
    template<typename LustreConfigurationT = CreateFileCacheLustreConfiguration>
    CreateFileCacheRequest& WithLustreConfiguration(LustreConfigurationT&& value) { SetLustreConfiguration(std::forward<LustreConfigurationT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<FileCacheDataRepositoryAssociation>& GetDataRepositoryAssociations() const { return m_dataRepositoryAssociations; }
    inline bool DataRepositoryAssociationsHasBeenSet() const { return m_dataRepositoryAssociationsHasBeenSet; }
    template<typename DataRepositoryAssociationsT = Aws::Vector<FileCacheDataRepositoryAssociation>>
    void SetDataRepositoryAssociations(DataRepositoryAssociationsT&& value) { m_dataRepositoryAssociationsHasBeenSet = true; m_dataRepositoryAssociations = std::forward<DataRepositoryAssociationsT>(value); }
    template<typename DataRepositoryAssociationsT = Aws::Vector<FileCacheDataRepositoryAssociation>>
    CreateFileCacheRequest& WithDataRepositoryAssociations(DataRepositoryAssociationsT&& value) { SetDataRepositoryAssociations(std::forward<DataRepositoryAssociationsT>(value)); return *this;}
    template<typename DataRepositoryAssociationsT = FileCacheDataRepositoryAssociation>
    CreateFileCacheRequest& AddDataRepositoryAssociations(DataRepositoryAssociationsT&& value) { m_dataRepositoryAssociationsHasBeenSet = true; m_dataRepositoryAssociations.emplace_back(std::forward<DataRepositoryAssociationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    FileCacheType m_fileCacheType{FileCacheType::NOT_SET};
    bool m_fileCacheTypeHasBeenSet = false;

    Aws::String m_fileCacheTypeVersion;
    bool m_fileCacheTypeVersionHasBeenSet = false;

    int m_storageCapacity{0};
    bool m_storageCapacityHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_copyTagsToDataRepositoryAssociations{false};
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
