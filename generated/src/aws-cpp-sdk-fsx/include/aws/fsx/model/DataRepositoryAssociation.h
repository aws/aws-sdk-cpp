/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/DataRepositoryLifecycle.h>
#include <aws/fsx/model/DataRepositoryFailureDetails.h>
#include <aws/fsx/model/S3DataRepositoryConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/fsx/model/NFSDataRepositoryConfiguration.h>
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
   * <p>The configuration of a data repository association that links an Amazon FSx
   * for Lustre file system to an Amazon S3 bucket or an Amazon File Cache resource
   * to an Amazon S3 bucket or an NFS file system. The data repository association
   * configuration object is returned in the response of the following
   * operations:</p> <ul> <li> <p> <code>CreateDataRepositoryAssociation</code> </p>
   * </li> <li> <p> <code>UpdateDataRepositoryAssociation</code> </p> </li> <li> <p>
   * <code>DescribeDataRepositoryAssociations</code> </p> </li> </ul> <p>Data
   * repository associations are supported on Amazon File Cache resources and all FSx
   * for Lustre 2.12 and 2.15 file systems, excluding Intelligent-Tiering and
   * <code>scratch_1</code> file systems.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DataRepositoryAssociation">AWS
   * API Reference</a></p>
   */
  class DataRepositoryAssociation
  {
  public:
    AWS_FSX_API DataRepositoryAssociation() = default;
    AWS_FSX_API DataRepositoryAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DataRepositoryAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated, unique ID of the data repository association.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    DataRepositoryAssociation& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    DataRepositoryAssociation& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    DataRepositoryAssociation& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the state of a data repository association. The lifecycle can have
     * the following values:</p> <ul> <li> <p> <code>CREATING</code> - The data
     * repository association between the file system or cache and the data repository
     * is being created. The data repository is unavailable.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The data repository association is available for
     * use.</p> </li> <li> <p> <code>MISCONFIGURED</code> - The data repository
     * association is misconfigured. Until the configuration is corrected, automatic
     * import and automatic export will not work (only for Amazon FSx for Lustre).</p>
     * </li> <li> <p> <code>UPDATING</code> - The data repository association is
     * undergoing a customer initiated update that might affect its availability.</p>
     * </li> <li> <p> <code>DELETING</code> - The data repository association is
     * undergoing a customer initiated deletion.</p> </li> <li> <p> <code>FAILED</code>
     * - The data repository association is in a terminal state that cannot be
     * recovered.</p> </li> </ul>
     */
    inline DataRepositoryLifecycle GetLifecycle() const { return m_lifecycle; }
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
    inline void SetLifecycle(DataRepositoryLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline DataRepositoryAssociation& WithLifecycle(DataRepositoryLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    
    inline const DataRepositoryFailureDetails& GetFailureDetails() const { return m_failureDetails; }
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }
    template<typename FailureDetailsT = DataRepositoryFailureDetails>
    void SetFailureDetails(FailureDetailsT&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::forward<FailureDetailsT>(value); }
    template<typename FailureDetailsT = DataRepositoryFailureDetails>
    DataRepositoryAssociation& WithFailureDetails(FailureDetailsT&& value) { SetFailureDetails(std::forward<FailureDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A path on the Amazon FSx for Lustre file system that points to a high-level
     * directory (such as <code>/ns1/</code>) or subdirectory (such as
     * <code>/ns1/subdir/</code>) that will be mapped 1-1 with
     * <code>DataRepositoryPath</code>. The leading forward slash in the name is
     * required. Two data repository associations cannot have overlapping file system
     * paths. For example, if a data repository is associated with file system path
     * <code>/ns1/</code>, then you cannot link another data repository with file
     * system path <code>/ns1/ns2</code>.</p> <p>This path specifies where in your file
     * system files will be exported from or imported to. This file system directory
     * can be linked to only one Amazon S3 bucket, and no other S3 bucket can be linked
     * to the directory.</p>  <p>If you specify only a forward slash
     * (<code>/</code>) as the file system path, you can link only one data repository
     * to the file system. You can only specify "/" as the file system path for the
     * first data repository associated with a file system.</p> 
     */
    inline const Aws::String& GetFileSystemPath() const { return m_fileSystemPath; }
    inline bool FileSystemPathHasBeenSet() const { return m_fileSystemPathHasBeenSet; }
    template<typename FileSystemPathT = Aws::String>
    void SetFileSystemPath(FileSystemPathT&& value) { m_fileSystemPathHasBeenSet = true; m_fileSystemPath = std::forward<FileSystemPathT>(value); }
    template<typename FileSystemPathT = Aws::String>
    DataRepositoryAssociation& WithFileSystemPath(FileSystemPathT&& value) { SetFileSystemPath(std::forward<FileSystemPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the data repository that will be linked to the cache or file
     * system.</p> <ul> <li> <p>For Amazon File Cache, the path can be an NFS data
     * repository that will be linked to the cache. The path can be in one of two
     * formats:</p> <ul> <li> <p>If you are not using the
     * <code>DataRepositorySubdirectories</code> parameter, the path is to an NFS
     * Export directory (or one of its subdirectories) in the format
     * <code>nsf://nfs-domain-name/exportpath</code>. You can therefore link a single
     * NFS Export to a single data repository association.</p> </li> <li> <p>If you are
     * using the <code>DataRepositorySubdirectories</code> parameter, the path is the
     * domain name of the NFS file system in the format
     * <code>nfs://filer-domain-name</code>, which indicates the root of the
     * subdirectories specified with the <code>DataRepositorySubdirectories</code>
     * parameter.</p> </li> </ul> </li> <li> <p>For Amazon File Cache, the path can be
     * an S3 bucket or prefix in the format <code>s3://bucket-name/prefix/</code>
     * (where <code>prefix</code> is optional).</p> </li> <li> <p>For Amazon FSx for
     * Lustre, the path can be an S3 bucket or prefix in the format
     * <code>s3://bucket-name/prefix/</code> (where <code>prefix</code> is
     * optional).</p> </li> </ul>
     */
    inline const Aws::String& GetDataRepositoryPath() const { return m_dataRepositoryPath; }
    inline bool DataRepositoryPathHasBeenSet() const { return m_dataRepositoryPathHasBeenSet; }
    template<typename DataRepositoryPathT = Aws::String>
    void SetDataRepositoryPath(DataRepositoryPathT&& value) { m_dataRepositoryPathHasBeenSet = true; m_dataRepositoryPath = std::forward<DataRepositoryPathT>(value); }
    template<typename DataRepositoryPathT = Aws::String>
    DataRepositoryAssociation& WithDataRepositoryPath(DataRepositoryPathT&& value) { SetDataRepositoryPath(std::forward<DataRepositoryPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean flag indicating whether an import data repository task to import
     * metadata should run after the data repository association is created. The task
     * runs if this flag is set to <code>true</code>.</p>  <p>
     * <code>BatchImportMetaDataOnCreate</code> is not supported for data repositories
     * linked to an Amazon File Cache resource.</p> 
     */
    inline bool GetBatchImportMetaDataOnCreate() const { return m_batchImportMetaDataOnCreate; }
    inline bool BatchImportMetaDataOnCreateHasBeenSet() const { return m_batchImportMetaDataOnCreateHasBeenSet; }
    inline void SetBatchImportMetaDataOnCreate(bool value) { m_batchImportMetaDataOnCreateHasBeenSet = true; m_batchImportMetaDataOnCreate = value; }
    inline DataRepositoryAssociation& WithBatchImportMetaDataOnCreate(bool value) { SetBatchImportMetaDataOnCreate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For files imported from a data repository, this value determines the stripe
     * count and maximum amount of data per file (in MiB) stored on a single physical
     * disk. The maximum number of disks that a single file can be striped across is
     * limited by the total number of disks that make up the file system or cache.</p>
     * <p>The default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline int GetImportedFileChunkSize() const { return m_importedFileChunkSize; }
    inline bool ImportedFileChunkSizeHasBeenSet() const { return m_importedFileChunkSizeHasBeenSet; }
    inline void SetImportedFileChunkSize(int value) { m_importedFileChunkSizeHasBeenSet = true; m_importedFileChunkSize = value; }
    inline DataRepositoryAssociation& WithImportedFileChunkSize(int value) { SetImportedFileChunkSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * for Lustre file system with a data repository association.</p>
     */
    inline const S3DataRepositoryConfiguration& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3DataRepositoryConfiguration>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3DataRepositoryConfiguration>
    DataRepositoryAssociation& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DataRepositoryAssociation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DataRepositoryAssociation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DataRepositoryAssociation& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The globally unique ID of the Amazon File Cache resource.</p>
     */
    inline const Aws::String& GetFileCacheId() const { return m_fileCacheId; }
    inline bool FileCacheIdHasBeenSet() const { return m_fileCacheIdHasBeenSet; }
    template<typename FileCacheIdT = Aws::String>
    void SetFileCacheId(FileCacheIdT&& value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId = std::forward<FileCacheIdT>(value); }
    template<typename FileCacheIdT = Aws::String>
    DataRepositoryAssociation& WithFileCacheId(FileCacheIdT&& value) { SetFileCacheId(std::forward<FileCacheIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A path on the Amazon File Cache that points to a high-level directory (such
     * as <code>/ns1/</code>) or subdirectory (such as <code>/ns1/subdir/</code>) that
     * will be mapped 1-1 with <code>DataRepositoryPath</code>. The leading forward
     * slash in the path is required. Two data repository associations cannot have
     * overlapping cache paths. For example, if a data repository is associated with
     * cache path <code>/ns1/</code>, then you cannot link another data repository with
     * cache path <code>/ns1/ns2</code>.</p> <p>This path specifies the directory in
     * your cache where files will be exported from. This cache directory can be linked
     * to only one data repository (S3 or NFS) and no other data repository can be
     * linked to the directory.</p>  <p>The cache path can only be set to root
     * (/) on an NFS DRA when <code>DataRepositorySubdirectories</code> is specified.
     * If you specify root (/) as the cache path, you can create only one DRA on the
     * cache.</p> <p>The cache path cannot be set to root (/) for an S3 DRA.</p>
     * 
     */
    inline const Aws::String& GetFileCachePath() const { return m_fileCachePath; }
    inline bool FileCachePathHasBeenSet() const { return m_fileCachePathHasBeenSet; }
    template<typename FileCachePathT = Aws::String>
    void SetFileCachePath(FileCachePathT&& value) { m_fileCachePathHasBeenSet = true; m_fileCachePath = std::forward<FileCachePathT>(value); }
    template<typename FileCachePathT = Aws::String>
    DataRepositoryAssociation& WithFileCachePath(FileCachePathT&& value) { SetFileCachePath(std::forward<FileCachePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For Amazon File Cache, a list of NFS Exports that will be linked with an NFS
     * data repository association. All the subdirectories must be on a single NFS file
     * system. The Export paths are in the format <code>/exportpath1</code>. To use
     * this parameter, you must configure <code>DataRepositoryPath</code> as the domain
     * name of the NFS file system. The NFS file system domain name in effect is the
     * root of the subdirectories. Note that <code>DataRepositorySubdirectories</code>
     * is not supported for S3 data repositories.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataRepositorySubdirectories() const { return m_dataRepositorySubdirectories; }
    inline bool DataRepositorySubdirectoriesHasBeenSet() const { return m_dataRepositorySubdirectoriesHasBeenSet; }
    template<typename DataRepositorySubdirectoriesT = Aws::Vector<Aws::String>>
    void SetDataRepositorySubdirectories(DataRepositorySubdirectoriesT&& value) { m_dataRepositorySubdirectoriesHasBeenSet = true; m_dataRepositorySubdirectories = std::forward<DataRepositorySubdirectoriesT>(value); }
    template<typename DataRepositorySubdirectoriesT = Aws::Vector<Aws::String>>
    DataRepositoryAssociation& WithDataRepositorySubdirectories(DataRepositorySubdirectoriesT&& value) { SetDataRepositorySubdirectories(std::forward<DataRepositorySubdirectoriesT>(value)); return *this;}
    template<typename DataRepositorySubdirectoriesT = Aws::String>
    DataRepositoryAssociation& AddDataRepositorySubdirectories(DataRepositorySubdirectoriesT&& value) { m_dataRepositorySubdirectoriesHasBeenSet = true; m_dataRepositorySubdirectories.emplace_back(std::forward<DataRepositorySubdirectoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for an NFS data repository linked to an Amazon File Cache
     * resource with a data repository association.</p>
     */
    inline const NFSDataRepositoryConfiguration& GetNFS() const { return m_nFS; }
    inline bool NFSHasBeenSet() const { return m_nFSHasBeenSet; }
    template<typename NFST = NFSDataRepositoryConfiguration>
    void SetNFS(NFST&& value) { m_nFSHasBeenSet = true; m_nFS = std::forward<NFST>(value); }
    template<typename NFST = NFSDataRepositoryConfiguration>
    DataRepositoryAssociation& WithNFS(NFST&& value) { SetNFS(std::forward<NFST>(value)); return *this;}
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    DataRepositoryLifecycle m_lifecycle{DataRepositoryLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    DataRepositoryFailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_fileCacheId;
    bool m_fileCacheIdHasBeenSet = false;

    Aws::String m_fileCachePath;
    bool m_fileCachePathHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataRepositorySubdirectories;
    bool m_dataRepositorySubdirectoriesHasBeenSet = false;

    NFSDataRepositoryConfiguration m_nFS;
    bool m_nFSHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
