/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/ReplaceContentEntry.h>
#include <aws/codecommit/model/DeleteFileEntry.h>
#include <aws/codecommit/model/SetFileModeEntry.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>If AUTOMERGE is the conflict resolution strategy, a list of inputs to use
   * when resolving conflicts during a merge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ConflictResolution">AWS
   * API Reference</a></p>
   */
  class ConflictResolution
  {
  public:
    AWS_CODECOMMIT_API ConflictResolution() = default;
    AWS_CODECOMMIT_API ConflictResolution(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ConflictResolution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Files to have content replaced as part of the merge conflict resolution.</p>
     */
    inline const Aws::Vector<ReplaceContentEntry>& GetReplaceContents() const { return m_replaceContents; }
    inline bool ReplaceContentsHasBeenSet() const { return m_replaceContentsHasBeenSet; }
    template<typename ReplaceContentsT = Aws::Vector<ReplaceContentEntry>>
    void SetReplaceContents(ReplaceContentsT&& value) { m_replaceContentsHasBeenSet = true; m_replaceContents = std::forward<ReplaceContentsT>(value); }
    template<typename ReplaceContentsT = Aws::Vector<ReplaceContentEntry>>
    ConflictResolution& WithReplaceContents(ReplaceContentsT&& value) { SetReplaceContents(std::forward<ReplaceContentsT>(value)); return *this;}
    template<typename ReplaceContentsT = ReplaceContentEntry>
    ConflictResolution& AddReplaceContents(ReplaceContentsT&& value) { m_replaceContentsHasBeenSet = true; m_replaceContents.emplace_back(std::forward<ReplaceContentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Files to be deleted as part of the merge conflict resolution.</p>
     */
    inline const Aws::Vector<DeleteFileEntry>& GetDeleteFiles() const { return m_deleteFiles; }
    inline bool DeleteFilesHasBeenSet() const { return m_deleteFilesHasBeenSet; }
    template<typename DeleteFilesT = Aws::Vector<DeleteFileEntry>>
    void SetDeleteFiles(DeleteFilesT&& value) { m_deleteFilesHasBeenSet = true; m_deleteFiles = std::forward<DeleteFilesT>(value); }
    template<typename DeleteFilesT = Aws::Vector<DeleteFileEntry>>
    ConflictResolution& WithDeleteFiles(DeleteFilesT&& value) { SetDeleteFiles(std::forward<DeleteFilesT>(value)); return *this;}
    template<typename DeleteFilesT = DeleteFileEntry>
    ConflictResolution& AddDeleteFiles(DeleteFilesT&& value) { m_deleteFilesHasBeenSet = true; m_deleteFiles.emplace_back(std::forward<DeleteFilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>File modes that are set as part of the merge conflict resolution.</p>
     */
    inline const Aws::Vector<SetFileModeEntry>& GetSetFileModes() const { return m_setFileModes; }
    inline bool SetFileModesHasBeenSet() const { return m_setFileModesHasBeenSet; }
    template<typename SetFileModesT = Aws::Vector<SetFileModeEntry>>
    void SetSetFileModes(SetFileModesT&& value) { m_setFileModesHasBeenSet = true; m_setFileModes = std::forward<SetFileModesT>(value); }
    template<typename SetFileModesT = Aws::Vector<SetFileModeEntry>>
    ConflictResolution& WithSetFileModes(SetFileModesT&& value) { SetSetFileModes(std::forward<SetFileModesT>(value)); return *this;}
    template<typename SetFileModesT = SetFileModeEntry>
    ConflictResolution& AddSetFileModes(SetFileModesT&& value) { m_setFileModesHasBeenSet = true; m_setFileModes.emplace_back(std::forward<SetFileModesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ReplaceContentEntry> m_replaceContents;
    bool m_replaceContentsHasBeenSet = false;

    Aws::Vector<DeleteFileEntry> m_deleteFiles;
    bool m_deleteFilesHasBeenSet = false;

    Aws::Vector<SetFileModeEntry> m_setFileModes;
    bool m_setFileModesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
