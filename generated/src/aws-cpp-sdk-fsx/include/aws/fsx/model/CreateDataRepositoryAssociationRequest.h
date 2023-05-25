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
    AWS_FSX_API CreateDataRepositoryAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataRepositoryAssociation"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    
    inline CreateDataRepositoryAssociationRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    
    inline CreateDataRepositoryAssociationRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    
    inline CreateDataRepositoryAssociationRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


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
    inline const Aws::String& GetFileSystemPath() const{ return m_fileSystemPath; }

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
    inline bool FileSystemPathHasBeenSet() const { return m_fileSystemPathHasBeenSet; }

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
    inline void SetFileSystemPath(const Aws::String& value) { m_fileSystemPathHasBeenSet = true; m_fileSystemPath = value; }

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
    inline void SetFileSystemPath(Aws::String&& value) { m_fileSystemPathHasBeenSet = true; m_fileSystemPath = std::move(value); }

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
    inline void SetFileSystemPath(const char* value) { m_fileSystemPathHasBeenSet = true; m_fileSystemPath.assign(value); }

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
    inline CreateDataRepositoryAssociationRequest& WithFileSystemPath(const Aws::String& value) { SetFileSystemPath(value); return *this;}

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
    inline CreateDataRepositoryAssociationRequest& WithFileSystemPath(Aws::String&& value) { SetFileSystemPath(std::move(value)); return *this;}

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
    inline CreateDataRepositoryAssociationRequest& WithFileSystemPath(const char* value) { SetFileSystemPath(value); return *this;}


    /**
     * <p>The path to the Amazon S3 data repository that will be linked to the file
     * system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix/</code>. This path specifies where in the S3 data
     * repository files will be imported from or exported to.</p>
     */
    inline const Aws::String& GetDataRepositoryPath() const{ return m_dataRepositoryPath; }

    /**
     * <p>The path to the Amazon S3 data repository that will be linked to the file
     * system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix/</code>. This path specifies where in the S3 data
     * repository files will be imported from or exported to.</p>
     */
    inline bool DataRepositoryPathHasBeenSet() const { return m_dataRepositoryPathHasBeenSet; }

    /**
     * <p>The path to the Amazon S3 data repository that will be linked to the file
     * system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix/</code>. This path specifies where in the S3 data
     * repository files will be imported from or exported to.</p>
     */
    inline void SetDataRepositoryPath(const Aws::String& value) { m_dataRepositoryPathHasBeenSet = true; m_dataRepositoryPath = value; }

    /**
     * <p>The path to the Amazon S3 data repository that will be linked to the file
     * system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix/</code>. This path specifies where in the S3 data
     * repository files will be imported from or exported to.</p>
     */
    inline void SetDataRepositoryPath(Aws::String&& value) { m_dataRepositoryPathHasBeenSet = true; m_dataRepositoryPath = std::move(value); }

    /**
     * <p>The path to the Amazon S3 data repository that will be linked to the file
     * system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix/</code>. This path specifies where in the S3 data
     * repository files will be imported from or exported to.</p>
     */
    inline void SetDataRepositoryPath(const char* value) { m_dataRepositoryPathHasBeenSet = true; m_dataRepositoryPath.assign(value); }

    /**
     * <p>The path to the Amazon S3 data repository that will be linked to the file
     * system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix/</code>. This path specifies where in the S3 data
     * repository files will be imported from or exported to.</p>
     */
    inline CreateDataRepositoryAssociationRequest& WithDataRepositoryPath(const Aws::String& value) { SetDataRepositoryPath(value); return *this;}

    /**
     * <p>The path to the Amazon S3 data repository that will be linked to the file
     * system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix/</code>. This path specifies where in the S3 data
     * repository files will be imported from or exported to.</p>
     */
    inline CreateDataRepositoryAssociationRequest& WithDataRepositoryPath(Aws::String&& value) { SetDataRepositoryPath(std::move(value)); return *this;}

    /**
     * <p>The path to the Amazon S3 data repository that will be linked to the file
     * system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix/</code>. This path specifies where in the S3 data
     * repository files will be imported from or exported to.</p>
     */
    inline CreateDataRepositoryAssociationRequest& WithDataRepositoryPath(const char* value) { SetDataRepositoryPath(value); return *this;}


    /**
     * <p>Set to <code>true</code> to run an import data repository task to import
     * metadata from the data repository to the file system after the data repository
     * association is created. Default is <code>false</code>.</p>
     */
    inline bool GetBatchImportMetaDataOnCreate() const{ return m_batchImportMetaDataOnCreate; }

    /**
     * <p>Set to <code>true</code> to run an import data repository task to import
     * metadata from the data repository to the file system after the data repository
     * association is created. Default is <code>false</code>.</p>
     */
    inline bool BatchImportMetaDataOnCreateHasBeenSet() const { return m_batchImportMetaDataOnCreateHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to run an import data repository task to import
     * metadata from the data repository to the file system after the data repository
     * association is created. Default is <code>false</code>.</p>
     */
    inline void SetBatchImportMetaDataOnCreate(bool value) { m_batchImportMetaDataOnCreateHasBeenSet = true; m_batchImportMetaDataOnCreate = value; }

    /**
     * <p>Set to <code>true</code> to run an import data repository task to import
     * metadata from the data repository to the file system after the data repository
     * association is created. Default is <code>false</code>.</p>
     */
    inline CreateDataRepositoryAssociationRequest& WithBatchImportMetaDataOnCreate(bool value) { SetBatchImportMetaDataOnCreate(value); return *this;}


    /**
     * <p>For files imported from a data repository, this value determines the stripe
     * count and maximum amount of data per file (in MiB) stored on a single physical
     * disk. The maximum number of disks that a single file can be striped across is
     * limited by the total number of disks that make up the file system.</p> <p>The
     * default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB (500
     * GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline int GetImportedFileChunkSize() const{ return m_importedFileChunkSize; }

    /**
     * <p>For files imported from a data repository, this value determines the stripe
     * count and maximum amount of data per file (in MiB) stored on a single physical
     * disk. The maximum number of disks that a single file can be striped across is
     * limited by the total number of disks that make up the file system.</p> <p>The
     * default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB (500
     * GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline bool ImportedFileChunkSizeHasBeenSet() const { return m_importedFileChunkSizeHasBeenSet; }

    /**
     * <p>For files imported from a data repository, this value determines the stripe
     * count and maximum amount of data per file (in MiB) stored on a single physical
     * disk. The maximum number of disks that a single file can be striped across is
     * limited by the total number of disks that make up the file system.</p> <p>The
     * default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB (500
     * GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline void SetImportedFileChunkSize(int value) { m_importedFileChunkSizeHasBeenSet = true; m_importedFileChunkSize = value; }

    /**
     * <p>For files imported from a data repository, this value determines the stripe
     * count and maximum amount of data per file (in MiB) stored on a single physical
     * disk. The maximum number of disks that a single file can be striped across is
     * limited by the total number of disks that make up the file system.</p> <p>The
     * default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB (500
     * GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline CreateDataRepositoryAssociationRequest& WithImportedFileChunkSize(int value) { SetImportedFileChunkSize(value); return *this;}


    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * Lustre file system with a data repository association. The configuration defines
     * which file events (new, changed, or deleted files or directories) are
     * automatically imported from the linked data repository to the file system or
     * automatically exported from the file system to the data repository.</p>
     */
    inline const S3DataRepositoryConfiguration& GetS3() const{ return m_s3; }

    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * Lustre file system with a data repository association. The configuration defines
     * which file events (new, changed, or deleted files or directories) are
     * automatically imported from the linked data repository to the file system or
     * automatically exported from the file system to the data repository.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * Lustre file system with a data repository association. The configuration defines
     * which file events (new, changed, or deleted files or directories) are
     * automatically imported from the linked data repository to the file system or
     * automatically exported from the file system to the data repository.</p>
     */
    inline void SetS3(const S3DataRepositoryConfiguration& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * Lustre file system with a data repository association. The configuration defines
     * which file events (new, changed, or deleted files or directories) are
     * automatically imported from the linked data repository to the file system or
     * automatically exported from the file system to the data repository.</p>
     */
    inline void SetS3(S3DataRepositoryConfiguration&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * Lustre file system with a data repository association. The configuration defines
     * which file events (new, changed, or deleted files or directories) are
     * automatically imported from the linked data repository to the file system or
     * automatically exported from the file system to the data repository.</p>
     */
    inline CreateDataRepositoryAssociationRequest& WithS3(const S3DataRepositoryConfiguration& value) { SetS3(value); return *this;}

    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * Lustre file system with a data repository association. The configuration defines
     * which file events (new, changed, or deleted files or directories) are
     * automatically imported from the linked data repository to the file system or
     * automatically exported from the file system to the data repository.</p>
     */
    inline CreateDataRepositoryAssociationRequest& WithS3(S3DataRepositoryConfiguration&& value) { SetS3(std::move(value)); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline CreateDataRepositoryAssociationRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline CreateDataRepositoryAssociationRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline CreateDataRepositoryAssociationRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateDataRepositoryAssociationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateDataRepositoryAssociationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateDataRepositoryAssociationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateDataRepositoryAssociationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_fileSystemPath;
    bool m_fileSystemPathHasBeenSet = false;

    Aws::String m_dataRepositoryPath;
    bool m_dataRepositoryPathHasBeenSet = false;

    bool m_batchImportMetaDataOnCreate;
    bool m_batchImportMetaDataOnCreateHasBeenSet = false;

    int m_importedFileChunkSize;
    bool m_importedFileChunkSizeHasBeenSet = false;

    S3DataRepositoryConfiguration m_s3;
    bool m_s3HasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
