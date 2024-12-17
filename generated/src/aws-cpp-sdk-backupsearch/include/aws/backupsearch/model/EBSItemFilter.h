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
    AWS_BACKUPSEARCH_API EBSItemFilter();
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
    inline const Aws::Vector<StringCondition>& GetFilePaths() const{ return m_filePaths; }
    inline bool FilePathsHasBeenSet() const { return m_filePathsHasBeenSet; }
    inline void SetFilePaths(const Aws::Vector<StringCondition>& value) { m_filePathsHasBeenSet = true; m_filePaths = value; }
    inline void SetFilePaths(Aws::Vector<StringCondition>&& value) { m_filePathsHasBeenSet = true; m_filePaths = std::move(value); }
    inline EBSItemFilter& WithFilePaths(const Aws::Vector<StringCondition>& value) { SetFilePaths(value); return *this;}
    inline EBSItemFilter& WithFilePaths(Aws::Vector<StringCondition>&& value) { SetFilePaths(std::move(value)); return *this;}
    inline EBSItemFilter& AddFilePaths(const StringCondition& value) { m_filePathsHasBeenSet = true; m_filePaths.push_back(value); return *this; }
    inline EBSItemFilter& AddFilePaths(StringCondition&& value) { m_filePathsHasBeenSet = true; m_filePaths.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one is included, the results will
     * return only items that match.</p> <p>If more than one is included, the results
     * will return all items that match any of the included values.</p>
     */
    inline const Aws::Vector<LongCondition>& GetSizes() const{ return m_sizes; }
    inline bool SizesHasBeenSet() const { return m_sizesHasBeenSet; }
    inline void SetSizes(const Aws::Vector<LongCondition>& value) { m_sizesHasBeenSet = true; m_sizes = value; }
    inline void SetSizes(Aws::Vector<LongCondition>&& value) { m_sizesHasBeenSet = true; m_sizes = std::move(value); }
    inline EBSItemFilter& WithSizes(const Aws::Vector<LongCondition>& value) { SetSizes(value); return *this;}
    inline EBSItemFilter& WithSizes(Aws::Vector<LongCondition>&& value) { SetSizes(std::move(value)); return *this;}
    inline EBSItemFilter& AddSizes(const LongCondition& value) { m_sizesHasBeenSet = true; m_sizes.push_back(value); return *this; }
    inline EBSItemFilter& AddSizes(LongCondition&& value) { m_sizesHasBeenSet = true; m_sizes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one is included, the results will
     * return only items that match.</p> <p>If more than one is included, the results
     * will return all items that match any of the included values.</p>
     */
    inline const Aws::Vector<TimeCondition>& GetCreationTimes() const{ return m_creationTimes; }
    inline bool CreationTimesHasBeenSet() const { return m_creationTimesHasBeenSet; }
    inline void SetCreationTimes(const Aws::Vector<TimeCondition>& value) { m_creationTimesHasBeenSet = true; m_creationTimes = value; }
    inline void SetCreationTimes(Aws::Vector<TimeCondition>&& value) { m_creationTimesHasBeenSet = true; m_creationTimes = std::move(value); }
    inline EBSItemFilter& WithCreationTimes(const Aws::Vector<TimeCondition>& value) { SetCreationTimes(value); return *this;}
    inline EBSItemFilter& WithCreationTimes(Aws::Vector<TimeCondition>&& value) { SetCreationTimes(std::move(value)); return *this;}
    inline EBSItemFilter& AddCreationTimes(const TimeCondition& value) { m_creationTimesHasBeenSet = true; m_creationTimes.push_back(value); return *this; }
    inline EBSItemFilter& AddCreationTimes(TimeCondition&& value) { m_creationTimesHasBeenSet = true; m_creationTimes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can include 1 to 10 values.</p> <p>If one is included, the results will
     * return only items that match.</p> <p>If more than one is included, the results
     * will return all items that match any of the included values.</p>
     */
    inline const Aws::Vector<TimeCondition>& GetLastModificationTimes() const{ return m_lastModificationTimes; }
    inline bool LastModificationTimesHasBeenSet() const { return m_lastModificationTimesHasBeenSet; }
    inline void SetLastModificationTimes(const Aws::Vector<TimeCondition>& value) { m_lastModificationTimesHasBeenSet = true; m_lastModificationTimes = value; }
    inline void SetLastModificationTimes(Aws::Vector<TimeCondition>&& value) { m_lastModificationTimesHasBeenSet = true; m_lastModificationTimes = std::move(value); }
    inline EBSItemFilter& WithLastModificationTimes(const Aws::Vector<TimeCondition>& value) { SetLastModificationTimes(value); return *this;}
    inline EBSItemFilter& WithLastModificationTimes(Aws::Vector<TimeCondition>&& value) { SetLastModificationTimes(std::move(value)); return *this;}
    inline EBSItemFilter& AddLastModificationTimes(const TimeCondition& value) { m_lastModificationTimesHasBeenSet = true; m_lastModificationTimes.push_back(value); return *this; }
    inline EBSItemFilter& AddLastModificationTimes(TimeCondition&& value) { m_lastModificationTimesHasBeenSet = true; m_lastModificationTimes.push_back(std::move(value)); return *this; }
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
