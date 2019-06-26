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
  class AWS_CODECOMMIT_API ConflictMetadata
  {
  public:
    ConflictMetadata();
    ConflictMetadata(Aws::Utils::Json::JsonView jsonValue);
    ConflictMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path of the file that contains conflicts.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The path of the file that contains conflicts.</p>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>The path of the file that contains conflicts.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>The path of the file that contains conflicts.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>The path of the file that contains conflicts.</p>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>The path of the file that contains conflicts.</p>
     */
    inline ConflictMetadata& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The path of the file that contains conflicts.</p>
     */
    inline ConflictMetadata& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The path of the file that contains conflicts.</p>
     */
    inline ConflictMetadata& WithFilePath(const char* value) { SetFilePath(value); return *this;}


    /**
     * <p>The file sizes of the file in the source, destination, and base of the
     * merge.</p>
     */
    inline const FileSizes& GetFileSizes() const{ return m_fileSizes; }

    /**
     * <p>The file sizes of the file in the source, destination, and base of the
     * merge.</p>
     */
    inline bool FileSizesHasBeenSet() const { return m_fileSizesHasBeenSet; }

    /**
     * <p>The file sizes of the file in the source, destination, and base of the
     * merge.</p>
     */
    inline void SetFileSizes(const FileSizes& value) { m_fileSizesHasBeenSet = true; m_fileSizes = value; }

    /**
     * <p>The file sizes of the file in the source, destination, and base of the
     * merge.</p>
     */
    inline void SetFileSizes(FileSizes&& value) { m_fileSizesHasBeenSet = true; m_fileSizes = std::move(value); }

    /**
     * <p>The file sizes of the file in the source, destination, and base of the
     * merge.</p>
     */
    inline ConflictMetadata& WithFileSizes(const FileSizes& value) { SetFileSizes(value); return *this;}

    /**
     * <p>The file sizes of the file in the source, destination, and base of the
     * merge.</p>
     */
    inline ConflictMetadata& WithFileSizes(FileSizes&& value) { SetFileSizes(std::move(value)); return *this;}


    /**
     * <p>The file modes of the file in the source, destination, and base of the
     * merge.</p>
     */
    inline const FileModes& GetFileModes() const{ return m_fileModes; }

    /**
     * <p>The file modes of the file in the source, destination, and base of the
     * merge.</p>
     */
    inline bool FileModesHasBeenSet() const { return m_fileModesHasBeenSet; }

    /**
     * <p>The file modes of the file in the source, destination, and base of the
     * merge.</p>
     */
    inline void SetFileModes(const FileModes& value) { m_fileModesHasBeenSet = true; m_fileModes = value; }

    /**
     * <p>The file modes of the file in the source, destination, and base of the
     * merge.</p>
     */
    inline void SetFileModes(FileModes&& value) { m_fileModesHasBeenSet = true; m_fileModes = std::move(value); }

    /**
     * <p>The file modes of the file in the source, destination, and base of the
     * merge.</p>
     */
    inline ConflictMetadata& WithFileModes(const FileModes& value) { SetFileModes(value); return *this;}

    /**
     * <p>The file modes of the file in the source, destination, and base of the
     * merge.</p>
     */
    inline ConflictMetadata& WithFileModes(FileModes&& value) { SetFileModes(std::move(value)); return *this;}


    /**
     * <p>Information about any object type conflicts in a merge operation.</p>
     */
    inline const ObjectTypes& GetObjectTypes() const{ return m_objectTypes; }

    /**
     * <p>Information about any object type conflicts in a merge operation.</p>
     */
    inline bool ObjectTypesHasBeenSet() const { return m_objectTypesHasBeenSet; }

    /**
     * <p>Information about any object type conflicts in a merge operation.</p>
     */
    inline void SetObjectTypes(const ObjectTypes& value) { m_objectTypesHasBeenSet = true; m_objectTypes = value; }

    /**
     * <p>Information about any object type conflicts in a merge operation.</p>
     */
    inline void SetObjectTypes(ObjectTypes&& value) { m_objectTypesHasBeenSet = true; m_objectTypes = std::move(value); }

    /**
     * <p>Information about any object type conflicts in a merge operation.</p>
     */
    inline ConflictMetadata& WithObjectTypes(const ObjectTypes& value) { SetObjectTypes(value); return *this;}

    /**
     * <p>Information about any object type conflicts in a merge operation.</p>
     */
    inline ConflictMetadata& WithObjectTypes(ObjectTypes&& value) { SetObjectTypes(std::move(value)); return *this;}


    /**
     * <p>The number of conflicts, including both hunk conflicts and metadata
     * conflicts.</p>
     */
    inline int GetNumberOfConflicts() const{ return m_numberOfConflicts; }

    /**
     * <p>The number of conflicts, including both hunk conflicts and metadata
     * conflicts.</p>
     */
    inline bool NumberOfConflictsHasBeenSet() const { return m_numberOfConflictsHasBeenSet; }

    /**
     * <p>The number of conflicts, including both hunk conflicts and metadata
     * conflicts.</p>
     */
    inline void SetNumberOfConflicts(int value) { m_numberOfConflictsHasBeenSet = true; m_numberOfConflicts = value; }

    /**
     * <p>The number of conflicts, including both hunk conflicts and metadata
     * conflicts.</p>
     */
    inline ConflictMetadata& WithNumberOfConflicts(int value) { SetNumberOfConflicts(value); return *this;}


    /**
     * <p>A boolean value (true or false) indicating whether the file is binary or
     * textual in the source, destination, and base of the merge.</p>
     */
    inline const IsBinaryFile& GetIsBinaryFile() const{ return m_isBinaryFile; }

    /**
     * <p>A boolean value (true or false) indicating whether the file is binary or
     * textual in the source, destination, and base of the merge.</p>
     */
    inline bool IsBinaryFileHasBeenSet() const { return m_isBinaryFileHasBeenSet; }

    /**
     * <p>A boolean value (true or false) indicating whether the file is binary or
     * textual in the source, destination, and base of the merge.</p>
     */
    inline void SetIsBinaryFile(const IsBinaryFile& value) { m_isBinaryFileHasBeenSet = true; m_isBinaryFile = value; }

    /**
     * <p>A boolean value (true or false) indicating whether the file is binary or
     * textual in the source, destination, and base of the merge.</p>
     */
    inline void SetIsBinaryFile(IsBinaryFile&& value) { m_isBinaryFileHasBeenSet = true; m_isBinaryFile = std::move(value); }

    /**
     * <p>A boolean value (true or false) indicating whether the file is binary or
     * textual in the source, destination, and base of the merge.</p>
     */
    inline ConflictMetadata& WithIsBinaryFile(const IsBinaryFile& value) { SetIsBinaryFile(value); return *this;}

    /**
     * <p>A boolean value (true or false) indicating whether the file is binary or
     * textual in the source, destination, and base of the merge.</p>
     */
    inline ConflictMetadata& WithIsBinaryFile(IsBinaryFile&& value) { SetIsBinaryFile(std::move(value)); return *this;}


    /**
     * <p>A boolean value indicating whether there are conflicts in the content of a
     * file.</p>
     */
    inline bool GetContentConflict() const{ return m_contentConflict; }

    /**
     * <p>A boolean value indicating whether there are conflicts in the content of a
     * file.</p>
     */
    inline bool ContentConflictHasBeenSet() const { return m_contentConflictHasBeenSet; }

    /**
     * <p>A boolean value indicating whether there are conflicts in the content of a
     * file.</p>
     */
    inline void SetContentConflict(bool value) { m_contentConflictHasBeenSet = true; m_contentConflict = value; }

    /**
     * <p>A boolean value indicating whether there are conflicts in the content of a
     * file.</p>
     */
    inline ConflictMetadata& WithContentConflict(bool value) { SetContentConflict(value); return *this;}


    /**
     * <p>A boolean value indicating whether there are conflicts in the file mode of a
     * file.</p>
     */
    inline bool GetFileModeConflict() const{ return m_fileModeConflict; }

    /**
     * <p>A boolean value indicating whether there are conflicts in the file mode of a
     * file.</p>
     */
    inline bool FileModeConflictHasBeenSet() const { return m_fileModeConflictHasBeenSet; }

    /**
     * <p>A boolean value indicating whether there are conflicts in the file mode of a
     * file.</p>
     */
    inline void SetFileModeConflict(bool value) { m_fileModeConflictHasBeenSet = true; m_fileModeConflict = value; }

    /**
     * <p>A boolean value indicating whether there are conflicts in the file mode of a
     * file.</p>
     */
    inline ConflictMetadata& WithFileModeConflict(bool value) { SetFileModeConflict(value); return *this;}


    /**
     * <p>A boolean value (true or false) indicating whether there are conflicts
     * between the branches in the object type of a file, folder, or submodule.</p>
     */
    inline bool GetObjectTypeConflict() const{ return m_objectTypeConflict; }

    /**
     * <p>A boolean value (true or false) indicating whether there are conflicts
     * between the branches in the object type of a file, folder, or submodule.</p>
     */
    inline bool ObjectTypeConflictHasBeenSet() const { return m_objectTypeConflictHasBeenSet; }

    /**
     * <p>A boolean value (true or false) indicating whether there are conflicts
     * between the branches in the object type of a file, folder, or submodule.</p>
     */
    inline void SetObjectTypeConflict(bool value) { m_objectTypeConflictHasBeenSet = true; m_objectTypeConflict = value; }

    /**
     * <p>A boolean value (true or false) indicating whether there are conflicts
     * between the branches in the object type of a file, folder, or submodule.</p>
     */
    inline ConflictMetadata& WithObjectTypeConflict(bool value) { SetObjectTypeConflict(value); return *this;}


    /**
     * <p>Whether an add, modify, or delete operation caused the conflict between the
     * source and destination of the merge.</p>
     */
    inline const MergeOperations& GetMergeOperations() const{ return m_mergeOperations; }

    /**
     * <p>Whether an add, modify, or delete operation caused the conflict between the
     * source and destination of the merge.</p>
     */
    inline bool MergeOperationsHasBeenSet() const { return m_mergeOperationsHasBeenSet; }

    /**
     * <p>Whether an add, modify, or delete operation caused the conflict between the
     * source and destination of the merge.</p>
     */
    inline void SetMergeOperations(const MergeOperations& value) { m_mergeOperationsHasBeenSet = true; m_mergeOperations = value; }

    /**
     * <p>Whether an add, modify, or delete operation caused the conflict between the
     * source and destination of the merge.</p>
     */
    inline void SetMergeOperations(MergeOperations&& value) { m_mergeOperationsHasBeenSet = true; m_mergeOperations = std::move(value); }

    /**
     * <p>Whether an add, modify, or delete operation caused the conflict between the
     * source and destination of the merge.</p>
     */
    inline ConflictMetadata& WithMergeOperations(const MergeOperations& value) { SetMergeOperations(value); return *this;}

    /**
     * <p>Whether an add, modify, or delete operation caused the conflict between the
     * source and destination of the merge.</p>
     */
    inline ConflictMetadata& WithMergeOperations(MergeOperations&& value) { SetMergeOperations(std::move(value)); return *this;}

  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet;

    FileSizes m_fileSizes;
    bool m_fileSizesHasBeenSet;

    FileModes m_fileModes;
    bool m_fileModesHasBeenSet;

    ObjectTypes m_objectTypes;
    bool m_objectTypesHasBeenSet;

    int m_numberOfConflicts;
    bool m_numberOfConflictsHasBeenSet;

    IsBinaryFile m_isBinaryFile;
    bool m_isBinaryFileHasBeenSet;

    bool m_contentConflict;
    bool m_contentConflictHasBeenSet;

    bool m_fileModeConflict;
    bool m_fileModeConflictHasBeenSet;

    bool m_objectTypeConflict;
    bool m_objectTypeConflictHasBeenSet;

    MergeOperations m_mergeOperations;
    bool m_mergeOperationsHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
