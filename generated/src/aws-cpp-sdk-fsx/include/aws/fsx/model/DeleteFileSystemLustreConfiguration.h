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
    AWS_FSX_API DeleteFileSystemLustreConfiguration() = default;
    AWS_FSX_API DeleteFileSystemLustreConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DeleteFileSystemLustreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Set <code>SkipFinalBackup</code> to false if you want to take a final backup
     * of the file system you are deleting. By default, Amazon FSx will not take a
     * final backup on your behalf when the <code>DeleteFileSystem</code> operation is
     * invoked. (Default = true)</p>  <p>The <code>fsx:CreateBackup</code>
     * permission is required if you set <code>SkipFinalBackup</code> to
     * <code>false</code> in order to delete the file system and take a final
     * backup.</p> 
     */
    inline bool GetSkipFinalBackup() const { return m_skipFinalBackup; }
    inline bool SkipFinalBackupHasBeenSet() const { return m_skipFinalBackupHasBeenSet; }
    inline void SetSkipFinalBackup(bool value) { m_skipFinalBackupHasBeenSet = true; m_skipFinalBackup = value; }
    inline DeleteFileSystemLustreConfiguration& WithSkipFinalBackup(bool value) { SetSkipFinalBackup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use if <code>SkipFinalBackup</code> is set to <code>false</code>, and you
     * want to apply an array of tags to the final backup. If you have set the file
     * system property <code>CopyTagsToBackups</code> to true, and you specify one or
     * more <code>FinalBackupTags</code> when deleting a file system, Amazon FSx will
     * not copy any existing file system tags to the backup.</p>
     */
    inline const Aws::Vector<Tag>& GetFinalBackupTags() const { return m_finalBackupTags; }
    inline bool FinalBackupTagsHasBeenSet() const { return m_finalBackupTagsHasBeenSet; }
    template<typename FinalBackupTagsT = Aws::Vector<Tag>>
    void SetFinalBackupTags(FinalBackupTagsT&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = std::forward<FinalBackupTagsT>(value); }
    template<typename FinalBackupTagsT = Aws::Vector<Tag>>
    DeleteFileSystemLustreConfiguration& WithFinalBackupTags(FinalBackupTagsT&& value) { SetFinalBackupTags(std::forward<FinalBackupTagsT>(value)); return *this;}
    template<typename FinalBackupTagsT = Tag>
    DeleteFileSystemLustreConfiguration& AddFinalBackupTags(FinalBackupTagsT&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.emplace_back(std::forward<FinalBackupTagsT>(value)); return *this; }
    ///@}
  private:

    bool m_skipFinalBackup{false};
    bool m_skipFinalBackupHasBeenSet = false;

    Aws::Vector<Tag> m_finalBackupTags;
    bool m_finalBackupTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
