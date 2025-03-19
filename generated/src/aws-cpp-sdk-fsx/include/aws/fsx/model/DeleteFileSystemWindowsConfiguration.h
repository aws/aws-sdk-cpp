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
   * <p>The configuration object for the Microsoft Windows file system used in the
   * <code>DeleteFileSystem</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileSystemWindowsConfiguration">AWS
   * API Reference</a></p>
   */
  class DeleteFileSystemWindowsConfiguration
  {
  public:
    AWS_FSX_API DeleteFileSystemWindowsConfiguration() = default;
    AWS_FSX_API DeleteFileSystemWindowsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DeleteFileSystemWindowsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>By default, Amazon FSx for Windows takes a final backup on your behalf when
     * the <code>DeleteFileSystem</code> operation is invoked. Doing this helps protect
     * you from data loss, and we highly recommend taking the final backup. If you want
     * to skip this backup, use this flag to do so.</p>
     */
    inline bool GetSkipFinalBackup() const { return m_skipFinalBackup; }
    inline bool SkipFinalBackupHasBeenSet() const { return m_skipFinalBackupHasBeenSet; }
    inline void SetSkipFinalBackup(bool value) { m_skipFinalBackupHasBeenSet = true; m_skipFinalBackup = value; }
    inline DeleteFileSystemWindowsConfiguration& WithSkipFinalBackup(bool value) { SetSkipFinalBackup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of tags for your final backup.</p>
     */
    inline const Aws::Vector<Tag>& GetFinalBackupTags() const { return m_finalBackupTags; }
    inline bool FinalBackupTagsHasBeenSet() const { return m_finalBackupTagsHasBeenSet; }
    template<typename FinalBackupTagsT = Aws::Vector<Tag>>
    void SetFinalBackupTags(FinalBackupTagsT&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = std::forward<FinalBackupTagsT>(value); }
    template<typename FinalBackupTagsT = Aws::Vector<Tag>>
    DeleteFileSystemWindowsConfiguration& WithFinalBackupTags(FinalBackupTagsT&& value) { SetFinalBackupTags(std::forward<FinalBackupTagsT>(value)); return *this;}
    template<typename FinalBackupTagsT = Tag>
    DeleteFileSystemWindowsConfiguration& AddFinalBackupTags(FinalBackupTagsT&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.emplace_back(std::forward<FinalBackupTagsT>(value)); return *this; }
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
