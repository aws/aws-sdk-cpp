/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Specifies the details for the file location for the file being used in the
   * workflow. Only applicable if you are using Amazon EFS for storage.</p> <p> You
   * need to provide the file system ID and the pathname. The pathname can represent
   * either a path or a file. This is determined by whether or not you end the path
   * value with the forward slash (/) character. If the final character is "/", then
   * your file is copied to the folder, and its name does not change. If, rather, the
   * final character is alphanumeric, your uploaded file is renamed to the path
   * value. In this case, if a file with that name already exists, it is overwritten.
   * </p> <p>For example, if your path is <code>shared-files/bob/</code>, your
   * uploaded files are copied to the <code>shared-files/bob/</code>, folder. If your
   * path is <code>shared-files/today</code>, each uploaded file is copied to the
   * <code>shared-files</code> folder and named <code>today</code>: each upload
   * overwrites the previous version of the <code>bob</code> file.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/EfsFileLocation">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSFER_API EfsFileLocation
  {
  public:
    EfsFileLocation();
    EfsFileLocation(Aws::Utils::Json::JsonView jsonValue);
    EfsFileLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline EfsFileLocation& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline EfsFileLocation& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline EfsFileLocation& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The pathname for the folder being used by a workflow.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The pathname for the folder being used by a workflow.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The pathname for the folder being used by a workflow.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The pathname for the folder being used by a workflow.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The pathname for the folder being used by a workflow.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The pathname for the folder being used by a workflow.</p>
     */
    inline EfsFileLocation& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The pathname for the folder being used by a workflow.</p>
     */
    inline EfsFileLocation& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The pathname for the folder being used by a workflow.</p>
     */
    inline EfsFileLocation& WithPath(const char* value) { SetPath(value); return *this;}

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;

    Aws::String m_path;
    bool m_pathHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
