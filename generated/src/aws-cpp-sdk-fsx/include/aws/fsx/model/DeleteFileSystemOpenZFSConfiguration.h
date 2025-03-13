/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/Tag.h>
#include <aws/fsx/model/DeleteFileSystemOpenZFSOption.h>
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
   * <p>The configuration object for the Amazon FSx for OpenZFS file system used in
   * the <code>DeleteFileSystem</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileSystemOpenZFSConfiguration">AWS
   * API Reference</a></p>
   */
  class DeleteFileSystemOpenZFSConfiguration
  {
  public:
    AWS_FSX_API DeleteFileSystemOpenZFSConfiguration() = default;
    AWS_FSX_API DeleteFileSystemOpenZFSConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DeleteFileSystemOpenZFSConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>By default, Amazon FSx for OpenZFS takes a final backup on your behalf when
     * the <code>DeleteFileSystem</code> operation is invoked. Doing this helps protect
     * you from data loss, and we highly recommend taking the final backup. If you want
     * to skip taking a final backup, set this value to <code>true</code>.</p>
     */
    inline bool GetSkipFinalBackup() const { return m_skipFinalBackup; }
    inline bool SkipFinalBackupHasBeenSet() const { return m_skipFinalBackupHasBeenSet; }
    inline void SetSkipFinalBackup(bool value) { m_skipFinalBackupHasBeenSet = true; m_skipFinalBackup = value; }
    inline DeleteFileSystemOpenZFSConfiguration& WithSkipFinalBackup(bool value) { SetSkipFinalBackup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to apply to the file system's final backup.</p>
     */
    inline const Aws::Vector<Tag>& GetFinalBackupTags() const { return m_finalBackupTags; }
    inline bool FinalBackupTagsHasBeenSet() const { return m_finalBackupTagsHasBeenSet; }
    template<typename FinalBackupTagsT = Aws::Vector<Tag>>
    void SetFinalBackupTags(FinalBackupTagsT&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = std::forward<FinalBackupTagsT>(value); }
    template<typename FinalBackupTagsT = Aws::Vector<Tag>>
    DeleteFileSystemOpenZFSConfiguration& WithFinalBackupTags(FinalBackupTagsT&& value) { SetFinalBackupTags(std::forward<FinalBackupTagsT>(value)); return *this;}
    template<typename FinalBackupTagsT = Tag>
    DeleteFileSystemOpenZFSConfiguration& AddFinalBackupTags(FinalBackupTagsT&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.emplace_back(std::forward<FinalBackupTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>To delete a file system if there are child volumes present below the root
     * volume, use the string <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>. If your
     * file system has child volumes and you don't use this option, the delete request
     * will fail.</p>
     */
    inline const Aws::Vector<DeleteFileSystemOpenZFSOption>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Vector<DeleteFileSystemOpenZFSOption>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Vector<DeleteFileSystemOpenZFSOption>>
    DeleteFileSystemOpenZFSConfiguration& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    inline DeleteFileSystemOpenZFSConfiguration& AddOptions(DeleteFileSystemOpenZFSOption value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }
    ///@}
  private:

    bool m_skipFinalBackup{false};
    bool m_skipFinalBackupHasBeenSet = false;

    Aws::Vector<Tag> m_finalBackupTags;
    bool m_finalBackupTagsHasBeenSet = false;

    Aws::Vector<DeleteFileSystemOpenZFSOption> m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
