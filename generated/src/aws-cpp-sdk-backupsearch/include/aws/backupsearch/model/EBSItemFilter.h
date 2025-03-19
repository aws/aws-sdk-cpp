/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backupsearch/model/StringCondition.h>
#include <aws/backupsearch/model/LongCondition.h>
#include <aws/backupsearch/model/TimeCondition.h>
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
namespace BackupSearch
{
namespace Model
{

  /**
   * <p>This contains arrays of objects, which may include CreationTimes time
   * condition objects, FilePaths string objects, LastModificationTimes time
   * condition objects, </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/EBSItemFilter">AWS
   * API Reference</a></p>
   */
  class EBSItemFilter
  {
  public:
    AWS_BACKUPSEARCH_API EBSItemFilter() = default;
    AWS_BACKUPSEARCH_API EBSItemFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API EBSItemFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one file path is included, the
     * results will return only items that match the file path.</p> <p>If more than one
     * file path is included, the results will return all items that match any of the
     * file paths.</p>
     */
    inline const Aws::Vector<StringCondition>& GetFilePaths() const { return m_filePaths; }
    inline bool FilePathsHasBeenSet() const { return m_filePathsHasBeenSet; }
    template<typename FilePathsT = Aws::Vector<StringCondition>>
    void SetFilePaths(FilePathsT&& value) { m_filePathsHasBeenSet = true; m_filePaths = std::forward<FilePathsT>(value); }
    template<typename FilePathsT = Aws::Vector<StringCondition>>
    EBSItemFilter& WithFilePaths(FilePathsT&& value) { SetFilePaths(std::forward<FilePathsT>(value)); return *this;}
    template<typename FilePathsT = StringCondition>
    EBSItemFilter& AddFilePaths(FilePathsT&& value) { m_filePathsHasBeenSet = true; m_filePaths.emplace_back(std::forward<FilePathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one is included, the results will
     * return only items that match.</p> <p>If more than one is included, the results
     * will return all items that match any of the included values.</p>
     */
    inline const Aws::Vector<LongCondition>& GetSizes() const { return m_sizes; }
    inline bool SizesHasBeenSet() const { return m_sizesHasBeenSet; }
    template<typename SizesT = Aws::Vector<LongCondition>>
    void SetSizes(SizesT&& value) { m_sizesHasBeenSet = true; m_sizes = std::forward<SizesT>(value); }
    template<typename SizesT = Aws::Vector<LongCondition>>
    EBSItemFilter& WithSizes(SizesT&& value) { SetSizes(std::forward<SizesT>(value)); return *this;}
    template<typename SizesT = LongCondition>
    EBSItemFilter& AddSizes(SizesT&& value) { m_sizesHasBeenSet = true; m_sizes.emplace_back(std::forward<SizesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one is included, the results will
     * return only items that match.</p> <p>If more than one is included, the results
     * will return all items that match any of the included values.</p>
     */
    inline const Aws::Vector<TimeCondition>& GetCreationTimes() const { return m_creationTimes; }
    inline bool CreationTimesHasBeenSet() const { return m_creationTimesHasBeenSet; }
    template<typename CreationTimesT = Aws::Vector<TimeCondition>>
    void SetCreationTimes(CreationTimesT&& value) { m_creationTimesHasBeenSet = true; m_creationTimes = std::forward<CreationTimesT>(value); }
    template<typename CreationTimesT = Aws::Vector<TimeCondition>>
    EBSItemFilter& WithCreationTimes(CreationTimesT&& value) { SetCreationTimes(std::forward<CreationTimesT>(value)); return *this;}
    template<typename CreationTimesT = TimeCondition>
    EBSItemFilter& AddCreationTimes(CreationTimesT&& value) { m_creationTimesHasBeenSet = true; m_creationTimes.emplace_back(std::forward<CreationTimesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one is included, the results will
     * return only items that match.</p> <p>If more than one is included, the results
     * will return all items that match any of the included values.</p>
     */
    inline const Aws::Vector<TimeCondition>& GetLastModificationTimes() const { return m_lastModificationTimes; }
    inline bool LastModificationTimesHasBeenSet() const { return m_lastModificationTimesHasBeenSet; }
    template<typename LastModificationTimesT = Aws::Vector<TimeCondition>>
    void SetLastModificationTimes(LastModificationTimesT&& value) { m_lastModificationTimesHasBeenSet = true; m_lastModificationTimes = std::forward<LastModificationTimesT>(value); }
    template<typename LastModificationTimesT = Aws::Vector<TimeCondition>>
    EBSItemFilter& WithLastModificationTimes(LastModificationTimesT&& value) { SetLastModificationTimes(std::forward<LastModificationTimesT>(value)); return *this;}
    template<typename LastModificationTimesT = TimeCondition>
    EBSItemFilter& AddLastModificationTimes(LastModificationTimesT&& value) { m_lastModificationTimesHasBeenSet = true; m_lastModificationTimes.emplace_back(std::forward<LastModificationTimesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<StringCondition> m_filePaths;
    bool m_filePathsHasBeenSet = false;

    Aws::Vector<LongCondition> m_sizes;
    bool m_sizesHasBeenSet = false;

    Aws::Vector<TimeCondition> m_creationTimes;
    bool m_creationTimesHasBeenSet = false;

    Aws::Vector<TimeCondition> m_lastModificationTimes;
    bool m_lastModificationTimesHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
