/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/FileCacheNFSConfiguration.h>
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
   * <p>The configuration for a data repository association (DRA) to be created
   * during the Amazon File Cache resource creation. The DRA links the cache to
   * either an Amazon S3 bucket or prefix, or a Network File System (NFS) data
   * repository that supports the NFSv3 protocol.</p> <p>The DRA does not support
   * automatic import or automatic export.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/FileCacheDataRepositoryAssociation">AWS
   * API Reference</a></p>
   */
  class FileCacheDataRepositoryAssociation
  {
  public:
    AWS_FSX_API FileCacheDataRepositoryAssociation() = default;
    AWS_FSX_API FileCacheDataRepositoryAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API FileCacheDataRepositoryAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A path on the cache that points to a high-level directory (such as
     * <code>/ns1/</code>) or subdirectory (such as <code>/ns1/subdir/</code>) that
     * will be mapped 1-1 with <code>DataRepositoryPath</code>. The leading forward
     * slash in the name is required. Two data repository associations cannot have
     * overlapping cache paths. For example, if a data repository is associated with
     * cache path <code>/ns1/</code>, then you cannot link another data repository with
     * cache path <code>/ns1/ns2</code>.</p> <p>This path specifies where in your cache
     * files will be exported from. This cache directory can be linked to only one data
     * repository, and no data repository other can be linked to the directory.</p>
     *  <p>The cache path can only be set to root (/) on an NFS DRA when
     * <code>DataRepositorySubdirectories</code> is specified. If you specify root (/)
     * as the cache path, you can create only one DRA on the cache.</p> <p>The cache
     * path cannot be set to root (/) for an S3 DRA.</p> 
     */
    inline const Aws::String& GetFileCachePath() const { return m_fileCachePath; }
    inline bool FileCachePathHasBeenSet() const { return m_fileCachePathHasBeenSet; }
    template<typename FileCachePathT = Aws::String>
    void SetFileCachePath(FileCachePathT&& value) { m_fileCachePathHasBeenSet = true; m_fileCachePath = std::forward<FileCachePathT>(value); }
    template<typename FileCachePathT = Aws::String>
    FileCacheDataRepositoryAssociation& WithFileCachePath(FileCachePathT&& value) { SetFileCachePath(std::forward<FileCachePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the S3 or NFS data repository that links to the cache. You must
     * provide one of the following paths:</p> <ul> <li> <p>The path can be an NFS data
     * repository that links to the cache. The path can be in one of two formats:</p>
     * <ul> <li> <p>If you are not using the <code>DataRepositorySubdirectories</code>
     * parameter, the path is to an NFS Export directory (or one of its subdirectories)
     * in the format <code>nfs://nfs-domain-name/exportpath</code>. You can therefore
     * link a single NFS Export to a single data repository association.</p> </li> <li>
     * <p>If you are using the <code>DataRepositorySubdirectories</code> parameter, the
     * path is the domain name of the NFS file system in the format
     * <code>nfs://filer-domain-name</code>, which indicates the root of the
     * subdirectories specified with the <code>DataRepositorySubdirectories</code>
     * parameter.</p> </li> </ul> </li> <li> <p>The path can be an S3 bucket or prefix
     * in the format <code>s3://bucket-name/prefix/</code> (where <code>prefix</code>
     * is optional).</p> </li> </ul>
     */
    inline const Aws::String& GetDataRepositoryPath() const { return m_dataRepositoryPath; }
    inline bool DataRepositoryPathHasBeenSet() const { return m_dataRepositoryPathHasBeenSet; }
    template<typename DataRepositoryPathT = Aws::String>
    void SetDataRepositoryPath(DataRepositoryPathT&& value) { m_dataRepositoryPathHasBeenSet = true; m_dataRepositoryPath = std::forward<DataRepositoryPathT>(value); }
    template<typename DataRepositoryPathT = Aws::String>
    FileCacheDataRepositoryAssociation& WithDataRepositoryPath(DataRepositoryPathT&& value) { SetDataRepositoryPath(std::forward<DataRepositoryPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of NFS Exports that will be linked with this data repository
     * association. The Export paths are in the format <code>/exportpath1</code>. To
     * use this parameter, you must configure <code>DataRepositoryPath</code> as the
     * domain name of the NFS file system. The NFS file system domain name in effect is
     * the root of the subdirectories. Note that
     * <code>DataRepositorySubdirectories</code> is not supported for S3 data
     * repositories.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataRepositorySubdirectories() const { return m_dataRepositorySubdirectories; }
    inline bool DataRepositorySubdirectoriesHasBeenSet() const { return m_dataRepositorySubdirectoriesHasBeenSet; }
    template<typename DataRepositorySubdirectoriesT = Aws::Vector<Aws::String>>
    void SetDataRepositorySubdirectories(DataRepositorySubdirectoriesT&& value) { m_dataRepositorySubdirectoriesHasBeenSet = true; m_dataRepositorySubdirectories = std::forward<DataRepositorySubdirectoriesT>(value); }
    template<typename DataRepositorySubdirectoriesT = Aws::Vector<Aws::String>>
    FileCacheDataRepositoryAssociation& WithDataRepositorySubdirectories(DataRepositorySubdirectoriesT&& value) { SetDataRepositorySubdirectories(std::forward<DataRepositorySubdirectoriesT>(value)); return *this;}
    template<typename DataRepositorySubdirectoriesT = Aws::String>
    FileCacheDataRepositoryAssociation& AddDataRepositorySubdirectories(DataRepositorySubdirectoriesT&& value) { m_dataRepositorySubdirectoriesHasBeenSet = true; m_dataRepositorySubdirectories.emplace_back(std::forward<DataRepositorySubdirectoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for a data repository association that links an Amazon File
     * Cache resource to an NFS data repository.</p>
     */
    inline const FileCacheNFSConfiguration& GetNFS() const { return m_nFS; }
    inline bool NFSHasBeenSet() const { return m_nFSHasBeenSet; }
    template<typename NFST = FileCacheNFSConfiguration>
    void SetNFS(NFST&& value) { m_nFSHasBeenSet = true; m_nFS = std::forward<NFST>(value); }
    template<typename NFST = FileCacheNFSConfiguration>
    FileCacheDataRepositoryAssociation& WithNFS(NFST&& value) { SetNFS(std::forward<NFST>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileCachePath;
    bool m_fileCachePathHasBeenSet = false;

    Aws::String m_dataRepositoryPath;
    bool m_dataRepositoryPathHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataRepositorySubdirectories;
    bool m_dataRepositorySubdirectoriesHasBeenSet = false;

    FileCacheNFSConfiguration m_nFS;
    bool m_nFSHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
