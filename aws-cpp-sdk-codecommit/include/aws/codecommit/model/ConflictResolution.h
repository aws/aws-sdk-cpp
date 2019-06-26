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
   * <p>A list of inputs to use when resolving conflicts during a merge if AUTOMERGE
   * is chosen as the conflict resolution strategy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ConflictResolution">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API ConflictResolution
  {
  public:
    ConflictResolution();
    ConflictResolution(Aws::Utils::Json::JsonView jsonValue);
    ConflictResolution& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Files that will have content replaced as part of the merge conflict
     * resolution.</p>
     */
    inline const Aws::Vector<ReplaceContentEntry>& GetReplaceContents() const{ return m_replaceContents; }

    /**
     * <p>Files that will have content replaced as part of the merge conflict
     * resolution.</p>
     */
    inline bool ReplaceContentsHasBeenSet() const { return m_replaceContentsHasBeenSet; }

    /**
     * <p>Files that will have content replaced as part of the merge conflict
     * resolution.</p>
     */
    inline void SetReplaceContents(const Aws::Vector<ReplaceContentEntry>& value) { m_replaceContentsHasBeenSet = true; m_replaceContents = value; }

    /**
     * <p>Files that will have content replaced as part of the merge conflict
     * resolution.</p>
     */
    inline void SetReplaceContents(Aws::Vector<ReplaceContentEntry>&& value) { m_replaceContentsHasBeenSet = true; m_replaceContents = std::move(value); }

    /**
     * <p>Files that will have content replaced as part of the merge conflict
     * resolution.</p>
     */
    inline ConflictResolution& WithReplaceContents(const Aws::Vector<ReplaceContentEntry>& value) { SetReplaceContents(value); return *this;}

    /**
     * <p>Files that will have content replaced as part of the merge conflict
     * resolution.</p>
     */
    inline ConflictResolution& WithReplaceContents(Aws::Vector<ReplaceContentEntry>&& value) { SetReplaceContents(std::move(value)); return *this;}

    /**
     * <p>Files that will have content replaced as part of the merge conflict
     * resolution.</p>
     */
    inline ConflictResolution& AddReplaceContents(const ReplaceContentEntry& value) { m_replaceContentsHasBeenSet = true; m_replaceContents.push_back(value); return *this; }

    /**
     * <p>Files that will have content replaced as part of the merge conflict
     * resolution.</p>
     */
    inline ConflictResolution& AddReplaceContents(ReplaceContentEntry&& value) { m_replaceContentsHasBeenSet = true; m_replaceContents.push_back(std::move(value)); return *this; }


    /**
     * <p>Files that will be deleted as part of the merge conflict resolution.</p>
     */
    inline const Aws::Vector<DeleteFileEntry>& GetDeleteFiles() const{ return m_deleteFiles; }

    /**
     * <p>Files that will be deleted as part of the merge conflict resolution.</p>
     */
    inline bool DeleteFilesHasBeenSet() const { return m_deleteFilesHasBeenSet; }

    /**
     * <p>Files that will be deleted as part of the merge conflict resolution.</p>
     */
    inline void SetDeleteFiles(const Aws::Vector<DeleteFileEntry>& value) { m_deleteFilesHasBeenSet = true; m_deleteFiles = value; }

    /**
     * <p>Files that will be deleted as part of the merge conflict resolution.</p>
     */
    inline void SetDeleteFiles(Aws::Vector<DeleteFileEntry>&& value) { m_deleteFilesHasBeenSet = true; m_deleteFiles = std::move(value); }

    /**
     * <p>Files that will be deleted as part of the merge conflict resolution.</p>
     */
    inline ConflictResolution& WithDeleteFiles(const Aws::Vector<DeleteFileEntry>& value) { SetDeleteFiles(value); return *this;}

    /**
     * <p>Files that will be deleted as part of the merge conflict resolution.</p>
     */
    inline ConflictResolution& WithDeleteFiles(Aws::Vector<DeleteFileEntry>&& value) { SetDeleteFiles(std::move(value)); return *this;}

    /**
     * <p>Files that will be deleted as part of the merge conflict resolution.</p>
     */
    inline ConflictResolution& AddDeleteFiles(const DeleteFileEntry& value) { m_deleteFilesHasBeenSet = true; m_deleteFiles.push_back(value); return *this; }

    /**
     * <p>Files that will be deleted as part of the merge conflict resolution.</p>
     */
    inline ConflictResolution& AddDeleteFiles(DeleteFileEntry&& value) { m_deleteFilesHasBeenSet = true; m_deleteFiles.push_back(std::move(value)); return *this; }


    /**
     * <p>File modes that will be set as part of the merge conflict resolution.</p>
     */
    inline const Aws::Vector<SetFileModeEntry>& GetSetFileModes() const{ return m_setFileModes; }

    /**
     * <p>File modes that will be set as part of the merge conflict resolution.</p>
     */
    inline bool SetFileModesHasBeenSet() const { return m_setFileModesHasBeenSet; }

    /**
     * <p>File modes that will be set as part of the merge conflict resolution.</p>
     */
    inline void SetSetFileModes(const Aws::Vector<SetFileModeEntry>& value) { m_setFileModesHasBeenSet = true; m_setFileModes = value; }

    /**
     * <p>File modes that will be set as part of the merge conflict resolution.</p>
     */
    inline void SetSetFileModes(Aws::Vector<SetFileModeEntry>&& value) { m_setFileModesHasBeenSet = true; m_setFileModes = std::move(value); }

    /**
     * <p>File modes that will be set as part of the merge conflict resolution.</p>
     */
    inline ConflictResolution& WithSetFileModes(const Aws::Vector<SetFileModeEntry>& value) { SetSetFileModes(value); return *this;}

    /**
     * <p>File modes that will be set as part of the merge conflict resolution.</p>
     */
    inline ConflictResolution& WithSetFileModes(Aws::Vector<SetFileModeEntry>&& value) { SetSetFileModes(std::move(value)); return *this;}

    /**
     * <p>File modes that will be set as part of the merge conflict resolution.</p>
     */
    inline ConflictResolution& AddSetFileModes(const SetFileModeEntry& value) { m_setFileModesHasBeenSet = true; m_setFileModes.push_back(value); return *this; }

    /**
     * <p>File modes that will be set as part of the merge conflict resolution.</p>
     */
    inline ConflictResolution& AddSetFileModes(SetFileModeEntry&& value) { m_setFileModesHasBeenSet = true; m_setFileModes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ReplaceContentEntry> m_replaceContents;
    bool m_replaceContentsHasBeenSet;

    Aws::Vector<DeleteFileEntry> m_deleteFiles;
    bool m_deleteFilesHasBeenSet;

    Aws::Vector<SetFileModeEntry> m_setFileModes;
    bool m_setFileModesHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
