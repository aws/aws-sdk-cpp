/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/FileSizes.h>
#include <aws/codecommit/model/FileModes.h>
#include <aws/codecommit/model/ObjectTypes.h>
#include <aws/codecommit/model/IsBinaryFile.h>
#include <aws/codecommit/model/MergeOperations.h>
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
   * <p>Information about the metadata for a conflict in a merge
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ConflictMetadata">AWS
   * API Reference</a></p>
   */
  class ConflictMetadata
  {
  public:
    AWS_CODECOMMIT_API ConflictMetadata() = default;
    AWS_CODECOMMIT_API ConflictMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ConflictMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path of the file that contains conflicts.</p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    ConflictMetadata& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file sizes of the file in the source, destination, and base of the
     * merge.</p>
     */
    inline const FileSizes& GetFileSizes() const { return m_fileSizes; }
    inline bool FileSizesHasBeenSet() const { return m_fileSizesHasBeenSet; }
    template<typename FileSizesT = FileSizes>
    void SetFileSizes(FileSizesT&& value) { m_fileSizesHasBeenSet = true; m_fileSizes = std::forward<FileSizesT>(value); }
    template<typename FileSizesT = FileSizes>
    ConflictMetadata& WithFileSizes(FileSizesT&& value) { SetFileSizes(std::forward<FileSizesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file modes of the file in the source, destination, and base of the
     * merge.</p>
     */
    inline const FileModes& GetFileModes() const { return m_fileModes; }
    inline bool FileModesHasBeenSet() const { return m_fileModesHasBeenSet; }
    template<typename FileModesT = FileModes>
    void SetFileModes(FileModesT&& value) { m_fileModesHasBeenSet = true; m_fileModes = std::forward<FileModesT>(value); }
    template<typename FileModesT = FileModes>
    ConflictMetadata& WithFileModes(FileModesT&& value) { SetFileModes(std::forward<FileModesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about any object type conflicts in a merge operation.</p>
     */
    inline const ObjectTypes& GetObjectTypes() const { return m_objectTypes; }
    inline bool ObjectTypesHasBeenSet() const { return m_objectTypesHasBeenSet; }
    template<typename ObjectTypesT = ObjectTypes>
    void SetObjectTypes(ObjectTypesT&& value) { m_objectTypesHasBeenSet = true; m_objectTypes = std::forward<ObjectTypesT>(value); }
    template<typename ObjectTypesT = ObjectTypes>
    ConflictMetadata& WithObjectTypes(ObjectTypesT&& value) { SetObjectTypes(std::forward<ObjectTypesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of conflicts, including both hunk conflicts and metadata
     * conflicts.</p>
     */
    inline int GetNumberOfConflicts() const { return m_numberOfConflicts; }
    inline bool NumberOfConflictsHasBeenSet() const { return m_numberOfConflictsHasBeenSet; }
    inline void SetNumberOfConflicts(int value) { m_numberOfConflictsHasBeenSet = true; m_numberOfConflicts = value; }
    inline ConflictMetadata& WithNumberOfConflicts(int value) { SetNumberOfConflicts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value (true or false) indicating whether the file is binary or
     * textual in the source, destination, and base of the merge.</p>
     */
    inline const IsBinaryFile& GetIsBinaryFile() const { return m_isBinaryFile; }
    inline bool IsBinaryFileHasBeenSet() const { return m_isBinaryFileHasBeenSet; }
    template<typename IsBinaryFileT = IsBinaryFile>
    void SetIsBinaryFile(IsBinaryFileT&& value) { m_isBinaryFileHasBeenSet = true; m_isBinaryFile = std::forward<IsBinaryFileT>(value); }
    template<typename IsBinaryFileT = IsBinaryFile>
    ConflictMetadata& WithIsBinaryFile(IsBinaryFileT&& value) { SetIsBinaryFile(std::forward<IsBinaryFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value indicating whether there are conflicts in the content of a
     * file.</p>
     */
    inline bool GetContentConflict() const { return m_contentConflict; }
    inline bool ContentConflictHasBeenSet() const { return m_contentConflictHasBeenSet; }
    inline void SetContentConflict(bool value) { m_contentConflictHasBeenSet = true; m_contentConflict = value; }
    inline ConflictMetadata& WithContentConflict(bool value) { SetContentConflict(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value indicating whether there are conflicts in the file mode of a
     * file.</p>
     */
    inline bool GetFileModeConflict() const { return m_fileModeConflict; }
    inline bool FileModeConflictHasBeenSet() const { return m_fileModeConflictHasBeenSet; }
    inline void SetFileModeConflict(bool value) { m_fileModeConflictHasBeenSet = true; m_fileModeConflict = value; }
    inline ConflictMetadata& WithFileModeConflict(bool value) { SetFileModeConflict(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value (true or false) indicating whether there are conflicts
     * between the branches in the object type of a file, folder, or submodule.</p>
     */
    inline bool GetObjectTypeConflict() const { return m_objectTypeConflict; }
    inline bool ObjectTypeConflictHasBeenSet() const { return m_objectTypeConflictHasBeenSet; }
    inline void SetObjectTypeConflict(bool value) { m_objectTypeConflictHasBeenSet = true; m_objectTypeConflict = value; }
    inline ConflictMetadata& WithObjectTypeConflict(bool value) { SetObjectTypeConflict(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether an add, modify, or delete operation caused the conflict between the
     * source and destination of the merge.</p>
     */
    inline const MergeOperations& GetMergeOperations() const { return m_mergeOperations; }
    inline bool MergeOperationsHasBeenSet() const { return m_mergeOperationsHasBeenSet; }
    template<typename MergeOperationsT = MergeOperations>
    void SetMergeOperations(MergeOperationsT&& value) { m_mergeOperationsHasBeenSet = true; m_mergeOperations = std::forward<MergeOperationsT>(value); }
    template<typename MergeOperationsT = MergeOperations>
    ConflictMetadata& WithMergeOperations(MergeOperationsT&& value) { SetMergeOperations(std::forward<MergeOperationsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    FileSizes m_fileSizes;
    bool m_fileSizesHasBeenSet = false;

    FileModes m_fileModes;
    bool m_fileModesHasBeenSet = false;

    ObjectTypes m_objectTypes;
    bool m_objectTypesHasBeenSet = false;

    int m_numberOfConflicts{0};
    bool m_numberOfConflictsHasBeenSet = false;

    IsBinaryFile m_isBinaryFile;
    bool m_isBinaryFileHasBeenSet = false;

    bool m_contentConflict{false};
    bool m_contentConflictHasBeenSet = false;

    bool m_fileModeConflict{false};
    bool m_fileModeConflictHasBeenSet = false;

    bool m_objectTypeConflict{false};
    bool m_objectTypeConflictHasBeenSet = false;

    MergeOperations m_mergeOperations;
    bool m_mergeOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
