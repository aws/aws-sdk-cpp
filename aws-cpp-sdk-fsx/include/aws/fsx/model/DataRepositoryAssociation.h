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
   * repository associations are supported only for an Amazon FSx for Lustre file
   * system with the <code>Persistent_2</code> deployment type and for an Amazon File
   * Cache resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DataRepositoryAssociation">AWS
   * API Reference</a></p>
   */
  class DataRepositoryAssociation
  {
  public:
    AWS_FSX_API DataRepositoryAssociation();
    AWS_FSX_API DataRepositoryAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DataRepositoryAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The system-generated, unique ID of the data repository association.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The system-generated, unique ID of the data repository association.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The system-generated, unique ID of the data repository association.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The system-generated, unique ID of the data repository association.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The system-generated, unique ID of the data repository association.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The system-generated, unique ID of the data repository association.</p>
     */
    inline DataRepositoryAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The system-generated, unique ID of the data repository association.</p>
     */
    inline DataRepositoryAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The system-generated, unique ID of the data repository association.</p>
     */
    inline DataRepositoryAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    
    inline DataRepositoryAssociation& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    
    inline DataRepositoryAssociation& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    
    inline DataRepositoryAssociation& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    
    inline DataRepositoryAssociation& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    
    inline DataRepositoryAssociation& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    
    inline DataRepositoryAssociation& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


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
    inline const DataRepositoryLifecycle& GetLifecycle() const{ return m_lifecycle; }

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
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

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
    inline void SetLifecycle(const DataRepositoryLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

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
    inline void SetLifecycle(DataRepositoryLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

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
    inline DataRepositoryAssociation& WithLifecycle(const DataRepositoryLifecycle& value) { SetLifecycle(value); return *this;}

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
    inline DataRepositoryAssociation& WithLifecycle(DataRepositoryLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    
    inline const DataRepositoryFailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }

    
    inline void SetFailureDetails(const DataRepositoryFailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    
    inline void SetFailureDetails(DataRepositoryFailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }

    
    inline DataRepositoryAssociation& WithFailureDetails(const DataRepositoryFailureDetails& value) { SetFailureDetails(value); return *this;}

    
    inline DataRepositoryAssociation& WithFailureDetails(DataRepositoryFailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}


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
    inline const Aws::String& GetFileSystemPath() const{ return m_fileSystemPath; }

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
    inline bool FileSystemPathHasBeenSet() const { return m_fileSystemPathHasBeenSet; }

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
    inline void SetFileSystemPath(const Aws::String& value) { m_fileSystemPathHasBeenSet = true; m_fileSystemPath = value; }

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
    inline void SetFileSystemPath(Aws::String&& value) { m_fileSystemPathHasBeenSet = true; m_fileSystemPath = std::move(value); }

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
    inline void SetFileSystemPath(const char* value) { m_fileSystemPathHasBeenSet = true; m_fileSystemPath.assign(value); }

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
    inline DataRepositoryAssociation& WithFileSystemPath(const Aws::String& value) { SetFileSystemPath(value); return *this;}

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
    inline DataRepositoryAssociation& WithFileSystemPath(Aws::String&& value) { SetFileSystemPath(std::move(value)); return *this;}

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
    inline DataRepositoryAssociation& WithFileSystemPath(const char* value) { SetFileSystemPath(value); return *this;}


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
     * an S3 bucket or prefix in the format <code>s3://myBucket/myPrefix/</code>.</p>
     * </li> <li> <p>For Amazon FSx for Lustre, the path can be an S3 bucket or prefix
     * in the format <code>s3://myBucket/myPrefix/</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetDataRepositoryPath() const{ return m_dataRepositoryPath; }

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
     * an S3 bucket or prefix in the format <code>s3://myBucket/myPrefix/</code>.</p>
     * </li> <li> <p>For Amazon FSx for Lustre, the path can be an S3 bucket or prefix
     * in the format <code>s3://myBucket/myPrefix/</code>.</p> </li> </ul>
     */
    inline bool DataRepositoryPathHasBeenSet() const { return m_dataRepositoryPathHasBeenSet; }

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
     * an S3 bucket or prefix in the format <code>s3://myBucket/myPrefix/</code>.</p>
     * </li> <li> <p>For Amazon FSx for Lustre, the path can be an S3 bucket or prefix
     * in the format <code>s3://myBucket/myPrefix/</code>.</p> </li> </ul>
     */
    inline void SetDataRepositoryPath(const Aws::String& value) { m_dataRepositoryPathHasBeenSet = true; m_dataRepositoryPath = value; }

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
     * an S3 bucket or prefix in the format <code>s3://myBucket/myPrefix/</code>.</p>
     * </li> <li> <p>For Amazon FSx for Lustre, the path can be an S3 bucket or prefix
     * in the format <code>s3://myBucket/myPrefix/</code>.</p> </li> </ul>
     */
    inline void SetDataRepositoryPath(Aws::String&& value) { m_dataRepositoryPathHasBeenSet = true; m_dataRepositoryPath = std::move(value); }

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
     * an S3 bucket or prefix in the format <code>s3://myBucket/myPrefix/</code>.</p>
     * </li> <li> <p>For Amazon FSx for Lustre, the path can be an S3 bucket or prefix
     * in the format <code>s3://myBucket/myPrefix/</code>.</p> </li> </ul>
     */
    inline void SetDataRepositoryPath(const char* value) { m_dataRepositoryPathHasBeenSet = true; m_dataRepositoryPath.assign(value); }

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
     * an S3 bucket or prefix in the format <code>s3://myBucket/myPrefix/</code>.</p>
     * </li> <li> <p>For Amazon FSx for Lustre, the path can be an S3 bucket or prefix
     * in the format <code>s3://myBucket/myPrefix/</code>.</p> </li> </ul>
     */
    inline DataRepositoryAssociation& WithDataRepositoryPath(const Aws::String& value) { SetDataRepositoryPath(value); return *this;}

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
     * an S3 bucket or prefix in the format <code>s3://myBucket/myPrefix/</code>.</p>
     * </li> <li> <p>For Amazon FSx for Lustre, the path can be an S3 bucket or prefix
     * in the format <code>s3://myBucket/myPrefix/</code>.</p> </li> </ul>
     */
    inline DataRepositoryAssociation& WithDataRepositoryPath(Aws::String&& value) { SetDataRepositoryPath(std::move(value)); return *this;}

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
     * an S3 bucket or prefix in the format <code>s3://myBucket/myPrefix/</code>.</p>
     * </li> <li> <p>For Amazon FSx for Lustre, the path can be an S3 bucket or prefix
     * in the format <code>s3://myBucket/myPrefix/</code>.</p> </li> </ul>
     */
    inline DataRepositoryAssociation& WithDataRepositoryPath(const char* value) { SetDataRepositoryPath(value); return *this;}


    /**
     * <p>A boolean flag indicating whether an import data repository task to import
     * metadata should run after the data repository association is created. The task
     * runs if this flag is set to <code>true</code>.</p>  <p>
     * <code>BatchImportMetaDataOnCreate</code> is not supported for data repositories
     * linked to an Amazon File Cache resource.</p> 
     */
    inline bool GetBatchImportMetaDataOnCreate() const{ return m_batchImportMetaDataOnCreate; }

    /**
     * <p>A boolean flag indicating whether an import data repository task to import
     * metadata should run after the data repository association is created. The task
     * runs if this flag is set to <code>true</code>.</p>  <p>
     * <code>BatchImportMetaDataOnCreate</code> is not supported for data repositories
     * linked to an Amazon File Cache resource.</p> 
     */
    inline bool BatchImportMetaDataOnCreateHasBeenSet() const { return m_batchImportMetaDataOnCreateHasBeenSet; }

    /**
     * <p>A boolean flag indicating whether an import data repository task to import
     * metadata should run after the data repository association is created. The task
     * runs if this flag is set to <code>true</code>.</p>  <p>
     * <code>BatchImportMetaDataOnCreate</code> is not supported for data repositories
     * linked to an Amazon File Cache resource.</p> 
     */
    inline void SetBatchImportMetaDataOnCreate(bool value) { m_batchImportMetaDataOnCreateHasBeenSet = true; m_batchImportMetaDataOnCreate = value; }

    /**
     * <p>A boolean flag indicating whether an import data repository task to import
     * metadata should run after the data repository association is created. The task
     * runs if this flag is set to <code>true</code>.</p>  <p>
     * <code>BatchImportMetaDataOnCreate</code> is not supported for data repositories
     * linked to an Amazon File Cache resource.</p> 
     */
    inline DataRepositoryAssociation& WithBatchImportMetaDataOnCreate(bool value) { SetBatchImportMetaDataOnCreate(value); return *this;}


    /**
     * <p>For files imported from a data repository, this value determines the stripe
     * count and maximum amount of data per file (in MiB) stored on a single physical
     * disk. The maximum number of disks that a single file can be striped across is
     * limited by the total number of disks that make up the file system or cache.</p>
     * <p>The default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline int GetImportedFileChunkSize() const{ return m_importedFileChunkSize; }

    /**
     * <p>For files imported from a data repository, this value determines the stripe
     * count and maximum amount of data per file (in MiB) stored on a single physical
     * disk. The maximum number of disks that a single file can be striped across is
     * limited by the total number of disks that make up the file system or cache.</p>
     * <p>The default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline bool ImportedFileChunkSizeHasBeenSet() const { return m_importedFileChunkSizeHasBeenSet; }

    /**
     * <p>For files imported from a data repository, this value determines the stripe
     * count and maximum amount of data per file (in MiB) stored on a single physical
     * disk. The maximum number of disks that a single file can be striped across is
     * limited by the total number of disks that make up the file system or cache.</p>
     * <p>The default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline void SetImportedFileChunkSize(int value) { m_importedFileChunkSizeHasBeenSet = true; m_importedFileChunkSize = value; }

    /**
     * <p>For files imported from a data repository, this value determines the stripe
     * count and maximum amount of data per file (in MiB) stored on a single physical
     * disk. The maximum number of disks that a single file can be striped across is
     * limited by the total number of disks that make up the file system or cache.</p>
     * <p>The default chunk size is 1,024 MiB (1 GiB) and can go as high as 512,000 MiB
     * (500 GiB). Amazon S3 objects have a maximum size of 5 TB.</p>
     */
    inline DataRepositoryAssociation& WithImportedFileChunkSize(int value) { SetImportedFileChunkSize(value); return *this;}


    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * for Lustre file system with a data repository association.</p>
     */
    inline const S3DataRepositoryConfiguration& GetS3() const{ return m_s3; }

    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * for Lustre file system with a data repository association.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * for Lustre file system with a data repository association.</p>
     */
    inline void SetS3(const S3DataRepositoryConfiguration& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * for Lustre file system with a data repository association.</p>
     */
    inline void SetS3(S3DataRepositoryConfiguration&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * for Lustre file system with a data repository association.</p>
     */
    inline DataRepositoryAssociation& WithS3(const S3DataRepositoryConfiguration& value) { SetS3(value); return *this;}

    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * for Lustre file system with a data repository association.</p>
     */
    inline DataRepositoryAssociation& WithS3(S3DataRepositoryConfiguration&& value) { SetS3(std::move(value)); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline DataRepositoryAssociation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline DataRepositoryAssociation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline DataRepositoryAssociation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline DataRepositoryAssociation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    
    inline DataRepositoryAssociation& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    
    inline DataRepositoryAssociation& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The globally unique ID of the Amazon File Cache resource.</p>
     */
    inline const Aws::String& GetFileCacheId() const{ return m_fileCacheId; }

    /**
     * <p>The globally unique ID of the Amazon File Cache resource.</p>
     */
    inline bool FileCacheIdHasBeenSet() const { return m_fileCacheIdHasBeenSet; }

    /**
     * <p>The globally unique ID of the Amazon File Cache resource.</p>
     */
    inline void SetFileCacheId(const Aws::String& value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId = value; }

    /**
     * <p>The globally unique ID of the Amazon File Cache resource.</p>
     */
    inline void SetFileCacheId(Aws::String&& value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId = std::move(value); }

    /**
     * <p>The globally unique ID of the Amazon File Cache resource.</p>
     */
    inline void SetFileCacheId(const char* value) { m_fileCacheIdHasBeenSet = true; m_fileCacheId.assign(value); }

    /**
     * <p>The globally unique ID of the Amazon File Cache resource.</p>
     */
    inline DataRepositoryAssociation& WithFileCacheId(const Aws::String& value) { SetFileCacheId(value); return *this;}

    /**
     * <p>The globally unique ID of the Amazon File Cache resource.</p>
     */
    inline DataRepositoryAssociation& WithFileCacheId(Aws::String&& value) { SetFileCacheId(std::move(value)); return *this;}

    /**
     * <p>The globally unique ID of the Amazon File Cache resource.</p>
     */
    inline DataRepositoryAssociation& WithFileCacheId(const char* value) { SetFileCacheId(value); return *this;}


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
    inline const Aws::String& GetFileCachePath() const{ return m_fileCachePath; }

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
    inline bool FileCachePathHasBeenSet() const { return m_fileCachePathHasBeenSet; }

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
    inline void SetFileCachePath(const Aws::String& value) { m_fileCachePathHasBeenSet = true; m_fileCachePath = value; }

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
    inline void SetFileCachePath(Aws::String&& value) { m_fileCachePathHasBeenSet = true; m_fileCachePath = std::move(value); }

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
    inline void SetFileCachePath(const char* value) { m_fileCachePathHasBeenSet = true; m_fileCachePath.assign(value); }

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
    inline DataRepositoryAssociation& WithFileCachePath(const Aws::String& value) { SetFileCachePath(value); return *this;}

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
    inline DataRepositoryAssociation& WithFileCachePath(Aws::String&& value) { SetFileCachePath(std::move(value)); return *this;}

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
    inline DataRepositoryAssociation& WithFileCachePath(const char* value) { SetFileCachePath(value); return *this;}


    /**
     * <p>For Amazon File Cache, a list of NFS Exports that will be linked with an NFS
     * data repository association. All the subdirectories must be on a single NFS file
     * system. The Export paths are in the format <code>/exportpath1</code>. To use
     * this parameter, you must configure <code>DataRepositoryPath</code> as the domain
     * name of the NFS file system. The NFS file system domain name in effect is the
     * root of the subdirectories. Note that <code>DataRepositorySubdirectories</code>
     * is not supported for S3 data repositories.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataRepositorySubdirectories() const{ return m_dataRepositorySubdirectories; }

    /**
     * <p>For Amazon File Cache, a list of NFS Exports that will be linked with an NFS
     * data repository association. All the subdirectories must be on a single NFS file
     * system. The Export paths are in the format <code>/exportpath1</code>. To use
     * this parameter, you must configure <code>DataRepositoryPath</code> as the domain
     * name of the NFS file system. The NFS file system domain name in effect is the
     * root of the subdirectories. Note that <code>DataRepositorySubdirectories</code>
     * is not supported for S3 data repositories.</p>
     */
    inline bool DataRepositorySubdirectoriesHasBeenSet() const { return m_dataRepositorySubdirectoriesHasBeenSet; }

    /**
     * <p>For Amazon File Cache, a list of NFS Exports that will be linked with an NFS
     * data repository association. All the subdirectories must be on a single NFS file
     * system. The Export paths are in the format <code>/exportpath1</code>. To use
     * this parameter, you must configure <code>DataRepositoryPath</code> as the domain
     * name of the NFS file system. The NFS file system domain name in effect is the
     * root of the subdirectories. Note that <code>DataRepositorySubdirectories</code>
     * is not supported for S3 data repositories.</p>
     */
    inline void SetDataRepositorySubdirectories(const Aws::Vector<Aws::String>& value) { m_dataRepositorySubdirectoriesHasBeenSet = true; m_dataRepositorySubdirectories = value; }

    /**
     * <p>For Amazon File Cache, a list of NFS Exports that will be linked with an NFS
     * data repository association. All the subdirectories must be on a single NFS file
     * system. The Export paths are in the format <code>/exportpath1</code>. To use
     * this parameter, you must configure <code>DataRepositoryPath</code> as the domain
     * name of the NFS file system. The NFS file system domain name in effect is the
     * root of the subdirectories. Note that <code>DataRepositorySubdirectories</code>
     * is not supported for S3 data repositories.</p>
     */
    inline void SetDataRepositorySubdirectories(Aws::Vector<Aws::String>&& value) { m_dataRepositorySubdirectoriesHasBeenSet = true; m_dataRepositorySubdirectories = std::move(value); }

    /**
     * <p>For Amazon File Cache, a list of NFS Exports that will be linked with an NFS
     * data repository association. All the subdirectories must be on a single NFS file
     * system. The Export paths are in the format <code>/exportpath1</code>. To use
     * this parameter, you must configure <code>DataRepositoryPath</code> as the domain
     * name of the NFS file system. The NFS file system domain name in effect is the
     * root of the subdirectories. Note that <code>DataRepositorySubdirectories</code>
     * is not supported for S3 data repositories.</p>
     */
    inline DataRepositoryAssociation& WithDataRepositorySubdirectories(const Aws::Vector<Aws::String>& value) { SetDataRepositorySubdirectories(value); return *this;}

    /**
     * <p>For Amazon File Cache, a list of NFS Exports that will be linked with an NFS
     * data repository association. All the subdirectories must be on a single NFS file
     * system. The Export paths are in the format <code>/exportpath1</code>. To use
     * this parameter, you must configure <code>DataRepositoryPath</code> as the domain
     * name of the NFS file system. The NFS file system domain name in effect is the
     * root of the subdirectories. Note that <code>DataRepositorySubdirectories</code>
     * is not supported for S3 data repositories.</p>
     */
    inline DataRepositoryAssociation& WithDataRepositorySubdirectories(Aws::Vector<Aws::String>&& value) { SetDataRepositorySubdirectories(std::move(value)); return *this;}

    /**
     * <p>For Amazon File Cache, a list of NFS Exports that will be linked with an NFS
     * data repository association. All the subdirectories must be on a single NFS file
     * system. The Export paths are in the format <code>/exportpath1</code>. To use
     * this parameter, you must configure <code>DataRepositoryPath</code> as the domain
     * name of the NFS file system. The NFS file system domain name in effect is the
     * root of the subdirectories. Note that <code>DataRepositorySubdirectories</code>
     * is not supported for S3 data repositories.</p>
     */
    inline DataRepositoryAssociation& AddDataRepositorySubdirectories(const Aws::String& value) { m_dataRepositorySubdirectoriesHasBeenSet = true; m_dataRepositorySubdirectories.push_back(value); return *this; }

    /**
     * <p>For Amazon File Cache, a list of NFS Exports that will be linked with an NFS
     * data repository association. All the subdirectories must be on a single NFS file
     * system. The Export paths are in the format <code>/exportpath1</code>. To use
     * this parameter, you must configure <code>DataRepositoryPath</code> as the domain
     * name of the NFS file system. The NFS file system domain name in effect is the
     * root of the subdirectories. Note that <code>DataRepositorySubdirectories</code>
     * is not supported for S3 data repositories.</p>
     */
    inline DataRepositoryAssociation& AddDataRepositorySubdirectories(Aws::String&& value) { m_dataRepositorySubdirectoriesHasBeenSet = true; m_dataRepositorySubdirectories.push_back(std::move(value)); return *this; }

    /**
     * <p>For Amazon File Cache, a list of NFS Exports that will be linked with an NFS
     * data repository association. All the subdirectories must be on a single NFS file
     * system. The Export paths are in the format <code>/exportpath1</code>. To use
     * this parameter, you must configure <code>DataRepositoryPath</code> as the domain
     * name of the NFS file system. The NFS file system domain name in effect is the
     * root of the subdirectories. Note that <code>DataRepositorySubdirectories</code>
     * is not supported for S3 data repositories.</p>
     */
    inline DataRepositoryAssociation& AddDataRepositorySubdirectories(const char* value) { m_dataRepositorySubdirectoriesHasBeenSet = true; m_dataRepositorySubdirectories.push_back(value); return *this; }


    /**
     * <p>The configuration for an NFS data repository linked to an Amazon File Cache
     * resource with a data repository association.</p>
     */
    inline const NFSDataRepositoryConfiguration& GetNFS() const{ return m_nFS; }

    /**
     * <p>The configuration for an NFS data repository linked to an Amazon File Cache
     * resource with a data repository association.</p>
     */
    inline bool NFSHasBeenSet() const { return m_nFSHasBeenSet; }

    /**
     * <p>The configuration for an NFS data repository linked to an Amazon File Cache
     * resource with a data repository association.</p>
     */
    inline void SetNFS(const NFSDataRepositoryConfiguration& value) { m_nFSHasBeenSet = true; m_nFS = value; }

    /**
     * <p>The configuration for an NFS data repository linked to an Amazon File Cache
     * resource with a data repository association.</p>
     */
    inline void SetNFS(NFSDataRepositoryConfiguration&& value) { m_nFSHasBeenSet = true; m_nFS = std::move(value); }

    /**
     * <p>The configuration for an NFS data repository linked to an Amazon File Cache
     * resource with a data repository association.</p>
     */
    inline DataRepositoryAssociation& WithNFS(const NFSDataRepositoryConfiguration& value) { SetNFS(value); return *this;}

    /**
     * <p>The configuration for an NFS data repository linked to an Amazon File Cache
     * resource with a data repository association.</p>
     */
    inline DataRepositoryAssociation& WithNFS(NFSDataRepositoryConfiguration&& value) { SetNFS(std::move(value)); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    DataRepositoryLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    DataRepositoryFailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
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
