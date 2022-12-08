/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The configuration object for the Amazon FSx for Lustre file system being
   * deleted in the <code>DeleteFileSystem</code> operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileSystemLustreConfiguration">AWS
   * API Reference</a></p>
   */
  class DeleteFileSystemLustreConfiguration
  {
  public:
    AWS_FSX_API DeleteFileSystemLustreConfiguration();
    AWS_FSX_API DeleteFileSystemLustreConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DeleteFileSystemLustreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Set <code>SkipFinalBackup</code> to false if you want to take a final backup
     * of the file system you are deleting. By default, Amazon FSx will not take a
     * final backup on your behalf when the <code>DeleteFileSystem</code> operation is
     * invoked. (Default = true)</p>  <p>The <code>fsx:CreateBackup</code>
     * permission is required if you set <code>SkipFinalBackup</code> to
     * <code>false</code> in order to delete the file system and take a final
     * backup.</p> 
     */
    inline bool GetSkipFinalBackup() const{ return m_skipFinalBackup; }

    /**
     * <p>Set <code>SkipFinalBackup</code> to false if you want to take a final backup
     * of the file system you are deleting. By default, Amazon FSx will not take a
     * final backup on your behalf when the <code>DeleteFileSystem</code> operation is
     * invoked. (Default = true)</p>  <p>The <code>fsx:CreateBackup</code>
     * permission is required if you set <code>SkipFinalBackup</code> to
     * <code>false</code> in order to delete the file system and take a final
     * backup.</p> 
     */
    inline bool SkipFinalBackupHasBeenSet() const { return m_skipFinalBackupHasBeenSet; }

    /**
     * <p>Set <code>SkipFinalBackup</code> to false if you want to take a final backup
     * of the file system you are deleting. By default, Amazon FSx will not take a
     * final backup on your behalf when the <code>DeleteFileSystem</code> operation is
     * invoked. (Default = true)</p>  <p>The <code>fsx:CreateBackup</code>
     * permission is required if you set <code>SkipFinalBackup</code> to
     * <code>false</code> in order to delete the file system and take a final
     * backup.</p> 
     */
    inline void SetSkipFinalBackup(bool value) { m_skipFinalBackupHasBeenSet = true; m_skipFinalBackup = value; }

    /**
     * <p>Set <code>SkipFinalBackup</code> to false if you want to take a final backup
     * of the file system you are deleting. By default, Amazon FSx will not take a
     * final backup on your behalf when the <code>DeleteFileSystem</code> operation is
     * invoked. (Default = true)</p>  <p>The <code>fsx:CreateBackup</code>
     * permission is required if you set <code>SkipFinalBackup</code> to
     * <code>false</code> in order to delete the file system and take a final
     * backup.</p> 
     */
    inline DeleteFileSystemLustreConfiguration& WithSkipFinalBackup(bool value) { SetSkipFinalBackup(value); return *this;}


    /**
     * <p>Use if <code>SkipFinalBackup</code> is set to <code>false</code>, and you
     * want to apply an array of tags to the final backup. If you have set the file
     * system property <code>CopyTagsToBackups</code> to true, and you specify one or
     * more <code>FinalBackupTags</code> when deleting a file system, Amazon FSx will
     * not copy any existing file system tags to the backup.</p>
     */
    inline const Aws::Vector<Tag>& GetFinalBackupTags() const{ return m_finalBackupTags; }

    /**
     * <p>Use if <code>SkipFinalBackup</code> is set to <code>false</code>, and you
     * want to apply an array of tags to the final backup. If you have set the file
     * system property <code>CopyTagsToBackups</code> to true, and you specify one or
     * more <code>FinalBackupTags</code> when deleting a file system, Amazon FSx will
     * not copy any existing file system tags to the backup.</p>
     */
    inline bool FinalBackupTagsHasBeenSet() const { return m_finalBackupTagsHasBeenSet; }

    /**
     * <p>Use if <code>SkipFinalBackup</code> is set to <code>false</code>, and you
     * want to apply an array of tags to the final backup. If you have set the file
     * system property <code>CopyTagsToBackups</code> to true, and you specify one or
     * more <code>FinalBackupTags</code> when deleting a file system, Amazon FSx will
     * not copy any existing file system tags to the backup.</p>
     */
    inline void SetFinalBackupTags(const Aws::Vector<Tag>& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = value; }

    /**
     * <p>Use if <code>SkipFinalBackup</code> is set to <code>false</code>, and you
     * want to apply an array of tags to the final backup. If you have set the file
     * system property <code>CopyTagsToBackups</code> to true, and you specify one or
     * more <code>FinalBackupTags</code> when deleting a file system, Amazon FSx will
     * not copy any existing file system tags to the backup.</p>
     */
    inline void SetFinalBackupTags(Aws::Vector<Tag>&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = std::move(value); }

    /**
     * <p>Use if <code>SkipFinalBackup</code> is set to <code>false</code>, and you
     * want to apply an array of tags to the final backup. If you have set the file
     * system property <code>CopyTagsToBackups</code> to true, and you specify one or
     * more <code>FinalBackupTags</code> when deleting a file system, Amazon FSx will
     * not copy any existing file system tags to the backup.</p>
     */
    inline DeleteFileSystemLustreConfiguration& WithFinalBackupTags(const Aws::Vector<Tag>& value) { SetFinalBackupTags(value); return *this;}

    /**
     * <p>Use if <code>SkipFinalBackup</code> is set to <code>false</code>, and you
     * want to apply an array of tags to the final backup. If you have set the file
     * system property <code>CopyTagsToBackups</code> to true, and you specify one or
     * more <code>FinalBackupTags</code> when deleting a file system, Amazon FSx will
     * not copy any existing file system tags to the backup.</p>
     */
    inline DeleteFileSystemLustreConfiguration& WithFinalBackupTags(Aws::Vector<Tag>&& value) { SetFinalBackupTags(std::move(value)); return *this;}

    /**
     * <p>Use if <code>SkipFinalBackup</code> is set to <code>false</code>, and you
     * want to apply an array of tags to the final backup. If you have set the file
     * system property <code>CopyTagsToBackups</code> to true, and you specify one or
     * more <code>FinalBackupTags</code> when deleting a file system, Amazon FSx will
     * not copy any existing file system tags to the backup.</p>
     */
    inline DeleteFileSystemLustreConfiguration& AddFinalBackupTags(const Tag& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.push_back(value); return *this; }

    /**
     * <p>Use if <code>SkipFinalBackup</code> is set to <code>false</code>, and you
     * want to apply an array of tags to the final backup. If you have set the file
     * system property <code>CopyTagsToBackups</code> to true, and you specify one or
     * more <code>FinalBackupTags</code> when deleting a file system, Amazon FSx will
     * not copy any existing file system tags to the backup.</p>
     */
    inline DeleteFileSystemLustreConfiguration& AddFinalBackupTags(Tag&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.push_back(std::move(value)); return *this; }

  private:

    bool m_skipFinalBackup;
    bool m_skipFinalBackupHasBeenSet = false;

    Aws::Vector<Tag> m_finalBackupTags;
    bool m_finalBackupTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
