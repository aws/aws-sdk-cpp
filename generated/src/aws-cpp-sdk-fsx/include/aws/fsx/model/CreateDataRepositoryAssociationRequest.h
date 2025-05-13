/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/S3DataRepositoryConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/Tag.h>
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
  class CreateDataRepositoryAssociationRequest : public FSxRequest
  {
  public:
    AWS_FSX_API CreateDataRepositoryAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataRepositoryAssociation"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    CreateDataRepositoryAssociationRequest& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A path on the file system that points to a high-level directory (such as
     * <code>/ns1/</code>) or subdirectory (such as <code>/ns1/subdir/</code>) that
     * will be mapped 1-1 with <code>DataRepositoryPath</code>. The leading forward
     * slash in the name is required. Two data repository associations cannot have
     * overlapping file system paths. For example, if a data repository is associated
     * with file system path <code>/ns1/</code>, then you cannot link another data
     * repository with file system path <code>/ns1/ns2</code>.</p> <p>This path
     * specifies where in your file system files will be exported from or imported to.
     * This file system directory can be linked to only one Amazon S3 bucket, and no
     * other S3 bucket can be linked to the directory.</p>  <p>If you specify
     * only a forward slash (<code>/</code>) as the file system path, you can link only
     * one data repository to the file system. You can only specify "/" as the file
     * system path for the first data repository associated with a file system.</p>
     * 
     */
    inline const Aws::String& GetFileSystemPath() const { return m_fileSystemPath; }
    inline bool FileSystemPathHasBeenSet() const { return m_fileSystemPathHasBeenSet; }
    template<typename FileSystemPathT = Aws::String>
    void SetFileSystemPath(FileSystemPathT&& value) { m_fileSystemPathHasBeenSet = true; m_fileSystemPath = std::forward<FileSystemPathT>(value); }
    template<typename FileSystemPathT = Aws::String>
    CreateDataRepositoryAssociationRequest& WithFileSystemPath(FileSystemPathT&& value) { SetFileSystemPath(std::forward<FileSystemPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the Amazon S3 data repository that will be linked to the file
     * system. The path can be an S3 bucket or prefix in the format
     * <code>s3://bucket-name/prefix/</code> (where <code>prefix</code> is optional).
     * This path specifies where in the S3 data repository files will be imported from
     * or exported to.</p>
     */
    inline const Aws::String& GetDataRepositoryPath() const { return m_dataRepositoryPath; }
    inline bool DataRepositoryPathHasBeenSet() const { return m_dataRepositoryPathHasBeenSet; }
    template<typename DataRepositoryPathT = Aws::String>
    void SetDataRepositoryPath(DataRepositoryPathT&& value) { m_dataRepositoryPathHasBeenSet = true; m_dataRepositoryPath = std::forward<DataRepositoryPathT>(value); }
    template<typename DataRepositoryPathT = Aws::String>
    CreateDataRepositoryAssociationRequest& WithDataRepositoryPath(DataRepositoryPathT&& value) { SetDataRepositoryPath(std::forward<DataRepositoryPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to run an import data repository task to import
     * metadata from the data repository to the file system after the data repository
     * association is created. Default is <code>false</code>.</p>
     */
    inline bool GetBatchImportMetaDataOnCreate() const { return m_batchImportMetaDataOnCreate; }
    inline bool BatchImportMetaDataOnCreateHasBeenSet() const { return m_batchImportMetaDataOnCreateHasBeenSet; }
    inline void SetBatchImportMetaDataOnCreate(bool value) { m_batchImportMetaDataOnCreateHasBeenSet = true; m_batchImportMetaDataOnCreate = value; }
    inline CreateDataRepositoryAssociationRequest& WithBatchImportMetaDataOnCreate(bool value) { SetBatchImportMetaDataOnCreate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For files imported from a data repository, this value determines the stripe
     * count and maximum amount of data per file (in MiB) stored on a single physical
     * disk. The maximum number of disks that a single file can be striped across is
     * limited by the total number of disks that make up the file system.</p> <p>The
     * default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB (500
     * GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline int GetImportedFileChunkSize() const { return m_importedFileChunkSize; }
    inline bool ImportedFileChunkSizeHasBeenSet() const { return m_importedFileChunkSizeHasBeenSet; }
    inline void SetImportedFileChunkSize(int value) { m_importedFileChunkSizeHasBeenSet = true; m_importedFileChunkSize = value; }
    inline CreateDataRepositoryAssociationRequest& WithImportedFileChunkSize(int value) { SetImportedFileChunkSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * Lustre file system with a data repository association. The configuration defines
     * which file events (new, changed, or deleted files or directories) are
     * automatically imported from the linked data repository to the file system or
     * automatically exported from the file system to the data repository.</p>
     */
    inline const S3DataRepositoryConfiguration& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3DataRepositoryConfiguration>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3DataRepositoryConfiguration>
    CreateDataRepositoryAssociationRequest& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateDataRepositoryAssociationRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDataRepositoryAssociationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDataRepositoryAssociationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_fileSystemPath;
    bool m_fileSystemPathHasBeenSet = false;

    Aws::String m_dataRepositoryPath;
    bool m_dataRepositoryPathHasBeenSet = false;

    bool m_batchImportMetaDataOnCreate{false};
    bool m_batchImportMetaDataOnCreateHasBeenSet = false;

    int m_importedFileChunkSize{0};
    bool m_importedFileChunkSizeHasBeenSet = false;

    S3DataRepositoryConfiguration m_s3;
    bool m_s3HasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
