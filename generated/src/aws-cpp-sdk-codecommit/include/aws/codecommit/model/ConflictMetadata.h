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
    AWS_CODECOMMIT_API ConflictMetadata();
    AWS_CODECOMMIT_API ConflictMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ConflictMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path of the file that contains conflicts.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }
    inline ConflictMetadata& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}
    inline ConflictMetadata& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}
    inline ConflictMetadata& WithFilePath(const char* value) { SetFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file sizes of the file in the source, destination, and base of the
     * merge.</p>
     */
    inline const FileSizes& GetFileSizes() const{ return m_fileSizes; }
    inline bool FileSizesHasBeenSet() const { return m_fileSizesHasBeenSet; }
    inline void SetFileSizes(const FileSizes& value) { m_fileSizesHasBeenSet = true; m_fileSizes = value; }
    inline void SetFileSizes(FileSizes&& value) { m_fileSizesHasBeenSet = true; m_fileSizes = std::move(value); }
    inline ConflictMetadata& WithFileSizes(const FileSizes& value) { SetFileSizes(value); return *this;}
    inline ConflictMetadata& WithFileSizes(FileSizes&& value) { SetFileSizes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file modes of the file in the source, destination, and base of the
     * merge.</p>
     */
    inline const FileModes& GetFileModes() const{ return m_fileModes; }
    inline bool FileModesHasBeenSet() const { return m_fileModesHasBeenSet; }
    inline void SetFileModes(const FileModes& value) { m_fileModesHasBeenSet = true; m_fileModes = value; }
    inline void SetFileModes(FileModes&& value) { m_fileModesHasBeenSet = true; m_fileModes = std::move(value); }
    inline ConflictMetadata& WithFileModes(const FileModes& value) { SetFileModes(value); return *this;}
    inline ConflictMetadata& WithFileModes(FileModes&& value) { SetFileModes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about any object type conflicts in a merge operation.</p>
     */
    inline const ObjectTypes& GetObjectTypes() const{ return m_objectTypes; }
    inline bool ObjectTypesHasBeenSet() const { return m_objectTypesHasBeenSet; }
    inline void SetObjectTypes(const ObjectTypes& value) { m_objectTypesHasBeenSet = true; m_objectTypes = value; }
    inline void SetObjectTypes(ObjectTypes&& value) { m_objectTypesHasBeenSet = true; m_objectTypes = std::move(value); }
    inline ConflictMetadata& WithObjectTypes(const ObjectTypes& value) { SetObjectTypes(value); return *this;}
    inline ConflictMetadata& WithObjectTypes(ObjectTypes&& value) { SetObjectTypes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of conflicts, including both hunk conflicts and metadata
     * conflicts.</p>
     */
    inline int GetNumberOfConflicts() const{ return m_numberOfConflicts; }
    inline bool NumberOfConflictsHasBeenSet() const { return m_numberOfConflictsHasBeenSet; }
    inline void SetNumberOfConflicts(int value) { m_numberOfConflictsHasBeenSet = true; m_numberOfConflicts = value; }
    inline ConflictMetadata& WithNumberOfConflicts(int value) { SetNumberOfConflicts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value (true or false) indicating whether the file is binary or
     * textual in the source, destination, and base of the merge.</p>
     */
    inline const IsBinaryFile& GetIsBinaryFile() const{ return m_isBinaryFile; }
    inline bool IsBinaryFileHasBeenSet() const { return m_isBinaryFileHasBeenSet; }
    inline void SetIsBinaryFile(const IsBinaryFile& value) { m_isBinaryFileHasBeenSet = true; m_isBinaryFile = value; }
    inline void SetIsBinaryFile(IsBinaryFile&& value) { m_isBinaryFileHasBeenSet = true; m_isBinaryFile = std::move(value); }
    inline ConflictMetadata& WithIsBinaryFile(const IsBinaryFile& value) { SetIsBinaryFile(value); return *this;}
    inline ConflictMetadata& WithIsBinaryFile(IsBinaryFile&& value) { SetIsBinaryFile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value indicating whether there are conflicts in the content of a
     * file.</p>
     */
    inline bool GetContentConflict() const{ return m_contentConflict; }
    inline bool ContentConflictHasBeenSet() const { return m_contentConflictHasBeenSet; }
    inline void SetContentConflict(bool value) { m_contentConflictHasBeenSet = true; m_contentConflict = value; }
    inline ConflictMetadata& WithContentConflict(bool value) { SetContentConflict(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value indicating whether there are conflicts in the file mode of a
     * file.</p>
     */
    inline bool GetFileModeConflict() const{ return m_fileModeConflict; }
    inline bool FileModeConflictHasBeenSet() const { return m_fileModeConflictHasBeenSet; }
    inline void SetFileModeConflict(bool value) { m_fileModeConflictHasBeenSet = true; m_fileModeConflict = value; }
    inline ConflictMetadata& WithFileModeConflict(bool value) { SetFileModeConflict(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value (true or false) indicating whether there are conflicts
     * between the branches in the object type of a file, folder, or submodule.</p>
     */
    inline bool GetObjectTypeConflict() const{ return m_objectTypeConflict; }
    inline bool ObjectTypeConflictHasBeenSet() const { return m_objectTypeConflictHasBeenSet; }
    inline void SetObjectTypeConflict(bool value) { m_objectTypeConflictHasBeenSet = true; m_objectTypeConflict = value; }
    inline ConflictMetadata& WithObjectTypeConflict(bool value) { SetObjectTypeConflict(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether an add, modify, or delete operation caused the conflict between the
     * source and destination of the merge.</p>
     */
    inline const MergeOperations& GetMergeOperations() const{ return m_mergeOperations; }
    inline bool MergeOperationsHasBeenSet() const { return m_mergeOperationsHasBeenSet; }
    inline void SetMergeOperations(const MergeOperations& value) { m_mergeOperationsHasBeenSet = true; m_mergeOperations = value; }
    inline void SetMergeOperations(MergeOperations&& value) { m_mergeOperationsHasBeenSet = true; m_mergeOperations = std::move(value); }
    inline ConflictMetadata& WithMergeOperations(const MergeOperations& value) { SetMergeOperations(value); return *this;}
    inline ConflictMetadata& WithMergeOperations(MergeOperations&& value) { SetMergeOperations(std::move(value)); return *this;}
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

    int m_numberOfConflicts;
    bool m_numberOfConflictsHasBeenSet = false;

    IsBinaryFile m_isBinaryFile;
    bool m_isBinaryFileHasBeenSet = false;

    bool m_contentConflict;
    bool m_contentConflictHasBeenSet = false;

    bool m_fileModeConflict;
    bool m_fileModeConflictHasBeenSet = false;

    bool m_objectTypeConflict;
    bool m_objectTypeConflictHasBeenSet = false;

    MergeOperations m_mergeOperations;
    bool m_mergeOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
