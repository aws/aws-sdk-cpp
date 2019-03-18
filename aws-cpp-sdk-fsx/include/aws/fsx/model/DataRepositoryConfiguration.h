/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The data repository configuration object for Lustre file systems returned in
   * the response of the <code>CreateFileSystem</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DataRepositoryConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API DataRepositoryConfiguration
  {
  public:
    DataRepositoryConfiguration();
    DataRepositoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    DataRepositoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The import path to the Amazon S3 bucket (and optional prefix) that you're
     * using as the data repository for your FSx for Lustre file system, for example
     * <code>s3://import-bucket/optional-prefix</code>. If a prefix is specified after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline const Aws::String& GetImportPath() const{ return m_importPath; }

    /**
     * <p>The import path to the Amazon S3 bucket (and optional prefix) that you're
     * using as the data repository for your FSx for Lustre file system, for example
     * <code>s3://import-bucket/optional-prefix</code>. If a prefix is specified after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline bool ImportPathHasBeenSet() const { return m_importPathHasBeenSet; }

    /**
     * <p>The import path to the Amazon S3 bucket (and optional prefix) that you're
     * using as the data repository for your FSx for Lustre file system, for example
     * <code>s3://import-bucket/optional-prefix</code>. If a prefix is specified after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline void SetImportPath(const Aws::String& value) { m_importPathHasBeenSet = true; m_importPath = value; }

    /**
     * <p>The import path to the Amazon S3 bucket (and optional prefix) that you're
     * using as the data repository for your FSx for Lustre file system, for example
     * <code>s3://import-bucket/optional-prefix</code>. If a prefix is specified after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline void SetImportPath(Aws::String&& value) { m_importPathHasBeenSet = true; m_importPath = std::move(value); }

    /**
     * <p>The import path to the Amazon S3 bucket (and optional prefix) that you're
     * using as the data repository for your FSx for Lustre file system, for example
     * <code>s3://import-bucket/optional-prefix</code>. If a prefix is specified after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline void SetImportPath(const char* value) { m_importPathHasBeenSet = true; m_importPath.assign(value); }

    /**
     * <p>The import path to the Amazon S3 bucket (and optional prefix) that you're
     * using as the data repository for your FSx for Lustre file system, for example
     * <code>s3://import-bucket/optional-prefix</code>. If a prefix is specified after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline DataRepositoryConfiguration& WithImportPath(const Aws::String& value) { SetImportPath(value); return *this;}

    /**
     * <p>The import path to the Amazon S3 bucket (and optional prefix) that you're
     * using as the data repository for your FSx for Lustre file system, for example
     * <code>s3://import-bucket/optional-prefix</code>. If a prefix is specified after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline DataRepositoryConfiguration& WithImportPath(Aws::String&& value) { SetImportPath(std::move(value)); return *this;}

    /**
     * <p>The import path to the Amazon S3 bucket (and optional prefix) that you're
     * using as the data repository for your FSx for Lustre file system, for example
     * <code>s3://import-bucket/optional-prefix</code>. If a prefix is specified after
     * the Amazon S3 bucket name, only object keys with that prefix are loaded into the
     * file system.</p>
     */
    inline DataRepositoryConfiguration& WithImportPath(const char* value) { SetImportPath(value); return *this;}


    /**
     * <p>The export path to the Amazon S3 bucket (and prefix) that you are using to
     * store new and changed Lustre file system files in S3.</p>
     */
    inline const Aws::String& GetExportPath() const{ return m_exportPath; }

    /**
     * <p>The export path to the Amazon S3 bucket (and prefix) that you are using to
     * store new and changed Lustre file system files in S3.</p>
     */
    inline bool ExportPathHasBeenSet() const { return m_exportPathHasBeenSet; }

    /**
     * <p>The export path to the Amazon S3 bucket (and prefix) that you are using to
     * store new and changed Lustre file system files in S3.</p>
     */
    inline void SetExportPath(const Aws::String& value) { m_exportPathHasBeenSet = true; m_exportPath = value; }

    /**
     * <p>The export path to the Amazon S3 bucket (and prefix) that you are using to
     * store new and changed Lustre file system files in S3.</p>
     */
    inline void SetExportPath(Aws::String&& value) { m_exportPathHasBeenSet = true; m_exportPath = std::move(value); }

    /**
     * <p>The export path to the Amazon S3 bucket (and prefix) that you are using to
     * store new and changed Lustre file system files in S3.</p>
     */
    inline void SetExportPath(const char* value) { m_exportPathHasBeenSet = true; m_exportPath.assign(value); }

    /**
     * <p>The export path to the Amazon S3 bucket (and prefix) that you are using to
     * store new and changed Lustre file system files in S3.</p>
     */
    inline DataRepositoryConfiguration& WithExportPath(const Aws::String& value) { SetExportPath(value); return *this;}

    /**
     * <p>The export path to the Amazon S3 bucket (and prefix) that you are using to
     * store new and changed Lustre file system files in S3.</p>
     */
    inline DataRepositoryConfiguration& WithExportPath(Aws::String&& value) { SetExportPath(std::move(value)); return *this;}

    /**
     * <p>The export path to the Amazon S3 bucket (and prefix) that you are using to
     * store new and changed Lustre file system files in S3.</p>
     */
    inline DataRepositoryConfiguration& WithExportPath(const char* value) { SetExportPath(value); return *this;}


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
    inline DataRepositoryConfiguration& WithImportedFileChunkSize(int value) { SetImportedFileChunkSize(value); return *this;}

  private:

    Aws::String m_importPath;
    bool m_importPathHasBeenSet;

    Aws::String m_exportPath;
    bool m_exportPathHasBeenSet;

    int m_importedFileChunkSize;
    bool m_importedFileChunkSizeHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
