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
   * for Lustre file system to an Amazon S3 bucket. The data repository association
   * configuration object is returned in the response of the following
   * operations:</p> <ul> <li> <p> <code>CreateDataRepositoryAssociation</code> </p>
   * </li> <li> <p> <code>UpdateDataRepositoryAssociation</code> </p> </li> <li> <p>
   * <code>DescribeDataRepositoryAssociations</code> </p> </li> </ul> <p>Data
   * repository associations are supported only for file systems with the
   * <code>Persistent_2</code> deployment type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DataRepositoryAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API DataRepositoryAssociation
  {
  public:
    DataRepositoryAssociation();
    DataRepositoryAssociation(Aws::Utils::Json::JsonView jsonValue);
    DataRepositoryAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * repository association between the FSx file system and the S3 data repository is
     * being created. The data repository is unavailable.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The data repository association is available for
     * use.</p> </li> <li> <p> <code>MISCONFIGURED</code> - Amazon FSx cannot
     * automatically import updates from the S3 bucket or automatically export updates
     * to the S3 bucket until the data repository association configuration is
     * corrected.</p> </li> <li> <p> <code>UPDATING</code> - The data repository
     * association is undergoing a customer initiated update that might affect its
     * availability.</p> </li> <li> <p> <code>DELETING</code> - The data repository
     * association is undergoing a customer initiated deletion.</p> </li> <li> <p>
     * <code>FAILED</code> - The data repository association is in a terminal state
     * that cannot be recovered.</p> </li> </ul>
     */
    inline const DataRepositoryLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>Describes the state of a data repository association. The lifecycle can have
     * the following values:</p> <ul> <li> <p> <code>CREATING</code> - The data
     * repository association between the FSx file system and the S3 data repository is
     * being created. The data repository is unavailable.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The data repository association is available for
     * use.</p> </li> <li> <p> <code>MISCONFIGURED</code> - Amazon FSx cannot
     * automatically import updates from the S3 bucket or automatically export updates
     * to the S3 bucket until the data repository association configuration is
     * corrected.</p> </li> <li> <p> <code>UPDATING</code> - The data repository
     * association is undergoing a customer initiated update that might affect its
     * availability.</p> </li> <li> <p> <code>DELETING</code> - The data repository
     * association is undergoing a customer initiated deletion.</p> </li> <li> <p>
     * <code>FAILED</code> - The data repository association is in a terminal state
     * that cannot be recovered.</p> </li> </ul>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>Describes the state of a data repository association. The lifecycle can have
     * the following values:</p> <ul> <li> <p> <code>CREATING</code> - The data
     * repository association between the FSx file system and the S3 data repository is
     * being created. The data repository is unavailable.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The data repository association is available for
     * use.</p> </li> <li> <p> <code>MISCONFIGURED</code> - Amazon FSx cannot
     * automatically import updates from the S3 bucket or automatically export updates
     * to the S3 bucket until the data repository association configuration is
     * corrected.</p> </li> <li> <p> <code>UPDATING</code> - The data repository
     * association is undergoing a customer initiated update that might affect its
     * availability.</p> </li> <li> <p> <code>DELETING</code> - The data repository
     * association is undergoing a customer initiated deletion.</p> </li> <li> <p>
     * <code>FAILED</code> - The data repository association is in a terminal state
     * that cannot be recovered.</p> </li> </ul>
     */
    inline void SetLifecycle(const DataRepositoryLifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>Describes the state of a data repository association. The lifecycle can have
     * the following values:</p> <ul> <li> <p> <code>CREATING</code> - The data
     * repository association between the FSx file system and the S3 data repository is
     * being created. The data repository is unavailable.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The data repository association is available for
     * use.</p> </li> <li> <p> <code>MISCONFIGURED</code> - Amazon FSx cannot
     * automatically import updates from the S3 bucket or automatically export updates
     * to the S3 bucket until the data repository association configuration is
     * corrected.</p> </li> <li> <p> <code>UPDATING</code> - The data repository
     * association is undergoing a customer initiated update that might affect its
     * availability.</p> </li> <li> <p> <code>DELETING</code> - The data repository
     * association is undergoing a customer initiated deletion.</p> </li> <li> <p>
     * <code>FAILED</code> - The data repository association is in a terminal state
     * that cannot be recovered.</p> </li> </ul>
     */
    inline void SetLifecycle(DataRepositoryLifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>Describes the state of a data repository association. The lifecycle can have
     * the following values:</p> <ul> <li> <p> <code>CREATING</code> - The data
     * repository association between the FSx file system and the S3 data repository is
     * being created. The data repository is unavailable.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The data repository association is available for
     * use.</p> </li> <li> <p> <code>MISCONFIGURED</code> - Amazon FSx cannot
     * automatically import updates from the S3 bucket or automatically export updates
     * to the S3 bucket until the data repository association configuration is
     * corrected.</p> </li> <li> <p> <code>UPDATING</code> - The data repository
     * association is undergoing a customer initiated update that might affect its
     * availability.</p> </li> <li> <p> <code>DELETING</code> - The data repository
     * association is undergoing a customer initiated deletion.</p> </li> <li> <p>
     * <code>FAILED</code> - The data repository association is in a terminal state
     * that cannot be recovered.</p> </li> </ul>
     */
    inline DataRepositoryAssociation& WithLifecycle(const DataRepositoryLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>Describes the state of a data repository association. The lifecycle can have
     * the following values:</p> <ul> <li> <p> <code>CREATING</code> - The data
     * repository association between the FSx file system and the S3 data repository is
     * being created. The data repository is unavailable.</p> </li> <li> <p>
     * <code>AVAILABLE</code> - The data repository association is available for
     * use.</p> </li> <li> <p> <code>MISCONFIGURED</code> - Amazon FSx cannot
     * automatically import updates from the S3 bucket or automatically export updates
     * to the S3 bucket until the data repository association configuration is
     * corrected.</p> </li> <li> <p> <code>UPDATING</code> - The data repository
     * association is undergoing a customer initiated update that might affect its
     * availability.</p> </li> <li> <p> <code>DELETING</code> - The data repository
     * association is undergoing a customer initiated deletion.</p> </li> <li> <p>
     * <code>FAILED</code> - The data repository association is in a terminal state
     * that cannot be recovered.</p> </li> </ul>
     */
    inline DataRepositoryAssociation& WithLifecycle(DataRepositoryLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    
    inline const DataRepositoryFailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }

    
    inline void SetFailureDetails(const DataRepositoryFailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    
    inline void SetFailureDetails(DataRepositoryFailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }

    
    inline DataRepositoryAssociation& WithFailureDetails(const DataRepositoryFailureDetails& value) { SetFailureDetails(value); return *this;}

    
    inline DataRepositoryAssociation& WithFailureDetails(DataRepositoryFailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}


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
     * 1 data repository to the file system. You can only specify "/" as the file
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
     * 1 data repository to the file system. You can only specify "/" as the file
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
     * 1 data repository to the file system. You can only specify "/" as the file
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
     * 1 data repository to the file system. You can only specify "/" as the file
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
     * 1 data repository to the file system. You can only specify "/" as the file
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
     * 1 data repository to the file system. You can only specify "/" as the file
     * system path for the first data repository associated with a file system.</p>
     * 
     */
    inline DataRepositoryAssociation& WithFileSystemPath(const Aws::String& value) { SetFileSystemPath(value); return *this;}

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
     * 1 data repository to the file system. You can only specify "/" as the file
     * system path for the first data repository associated with a file system.</p>
     * 
     */
    inline DataRepositoryAssociation& WithFileSystemPath(Aws::String&& value) { SetFileSystemPath(std::move(value)); return *this;}

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
     * 1 data repository to the file system. You can only specify "/" as the file
     * system path for the first data repository associated with a file system.</p>
     * 
     */
    inline DataRepositoryAssociation& WithFileSystemPath(const char* value) { SetFileSystemPath(value); return *this;}


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
    inline DataRepositoryAssociation& WithDataRepositoryPath(const Aws::String& value) { SetDataRepositoryPath(value); return *this;}

    /**
     * <p>The path to the Amazon S3 data repository that will be linked to the file
     * system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix/</code>. This path specifies where in the S3 data
     * repository files will be imported from or exported to.</p>
     */
    inline DataRepositoryAssociation& WithDataRepositoryPath(Aws::String&& value) { SetDataRepositoryPath(std::move(value)); return *this;}

    /**
     * <p>The path to the Amazon S3 data repository that will be linked to the file
     * system. The path can be an S3 bucket or prefix in the format
     * <code>s3://myBucket/myPrefix/</code>. This path specifies where in the S3 data
     * repository files will be imported from or exported to.</p>
     */
    inline DataRepositoryAssociation& WithDataRepositoryPath(const char* value) { SetDataRepositoryPath(value); return *this;}


    /**
     * <p>A boolean flag indicating whether an import data repository task to import
     * metadata should run after the data repository association is created. The task
     * runs if this flag is set to <code>true</code>.</p>
     */
    inline bool GetBatchImportMetaDataOnCreate() const{ return m_batchImportMetaDataOnCreate; }

    /**
     * <p>A boolean flag indicating whether an import data repository task to import
     * metadata should run after the data repository association is created. The task
     * runs if this flag is set to <code>true</code>.</p>
     */
    inline bool BatchImportMetaDataOnCreateHasBeenSet() const { return m_batchImportMetaDataOnCreateHasBeenSet; }

    /**
     * <p>A boolean flag indicating whether an import data repository task to import
     * metadata should run after the data repository association is created. The task
     * runs if this flag is set to <code>true</code>.</p>
     */
    inline void SetBatchImportMetaDataOnCreate(bool value) { m_batchImportMetaDataOnCreateHasBeenSet = true; m_batchImportMetaDataOnCreate = value; }

    /**
     * <p>A boolean flag indicating whether an import data repository task to import
     * metadata should run after the data repository association is created. The task
     * runs if this flag is set to <code>true</code>.</p>
     */
    inline DataRepositoryAssociation& WithBatchImportMetaDataOnCreate(bool value) { SetBatchImportMetaDataOnCreate(value); return *this;}


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
    inline DataRepositoryAssociation& WithImportedFileChunkSize(int value) { SetImportedFileChunkSize(value); return *this;}


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
    inline DataRepositoryAssociation& WithS3(const S3DataRepositoryConfiguration& value) { SetS3(value); return *this;}

    /**
     * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
     * Lustre file system with a data repository association. The configuration defines
     * which file events (new, changed, or deleted files or directories) are
     * automatically imported from the linked data repository to the file system or
     * automatically exported from the file system to the data repository.</p>
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

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;

    DataRepositoryLifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet;

    DataRepositoryFailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet;

    Aws::String m_fileSystemPath;
    bool m_fileSystemPathHasBeenSet;

    Aws::String m_dataRepositoryPath;
    bool m_dataRepositoryPathHasBeenSet;

    bool m_batchImportMetaDataOnCreate;
    bool m_batchImportMetaDataOnCreateHasBeenSet;

    int m_importedFileChunkSize;
    bool m_importedFileChunkSizeHasBeenSet;

    S3DataRepositoryConfiguration m_s3;
    bool m_s3HasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
