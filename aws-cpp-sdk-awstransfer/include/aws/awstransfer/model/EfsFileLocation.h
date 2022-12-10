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
   * <p>Reserved for future use.</p> <p> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/EfsFileLocation">AWS
   * API Reference</a></p>
   */
  class EfsFileLocation
  {
  public:
    AWS_TRANSFER_API EfsFileLocation();
    AWS_TRANSFER_API EfsFileLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API EfsFileLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the file system, assigned by Amazon EFS.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The identifier of the file system, assigned by Amazon EFS.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The identifier of the file system, assigned by Amazon EFS.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The identifier of the file system, assigned by Amazon EFS.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The identifier of the file system, assigned by Amazon EFS.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The identifier of the file system, assigned by Amazon EFS.</p>
     */
    inline EfsFileLocation& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The identifier of the file system, assigned by Amazon EFS.</p>
     */
    inline EfsFileLocation& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the file system, assigned by Amazon EFS.</p>
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
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
