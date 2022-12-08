/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>You can't delete a backup while it's being used to restore a file
   * system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/BackupRestoring">AWS
   * API Reference</a></p>
   */
  class BackupRestoring
  {
  public:
    AWS_FSX_API BackupRestoring();
    AWS_FSX_API BackupRestoring(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API BackupRestoring& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline BackupRestoring& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline BackupRestoring& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline BackupRestoring& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The ID of a file system being restored from the backup.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of a file system being restored from the backup.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of a file system being restored from the backup.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of a file system being restored from the backup.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of a file system being restored from the backup.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of a file system being restored from the backup.</p>
     */
    inline BackupRestoring& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of a file system being restored from the backup.</p>
     */
    inline BackupRestoring& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of a file system being restored from the backup.</p>
     */
    inline BackupRestoring& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
