/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/S3Object.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p>Gives statistics about how many files have been ingested, and which files
   * have not been ingested, for a particular ingestion job.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/IngestedFilesSummary">AWS
   * API Reference</a></p>
   */
  class IngestedFilesSummary
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API IngestedFilesSummary();
    AWS_LOOKOUTEQUIPMENT_API IngestedFilesSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API IngestedFilesSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates the total number of files that were submitted for ingestion.</p>
     */
    inline int GetTotalNumberOfFiles() const{ return m_totalNumberOfFiles; }

    /**
     * <p>Indicates the total number of files that were submitted for ingestion.</p>
     */
    inline bool TotalNumberOfFilesHasBeenSet() const { return m_totalNumberOfFilesHasBeenSet; }

    /**
     * <p>Indicates the total number of files that were submitted for ingestion.</p>
     */
    inline void SetTotalNumberOfFiles(int value) { m_totalNumberOfFilesHasBeenSet = true; m_totalNumberOfFiles = value; }

    /**
     * <p>Indicates the total number of files that were submitted for ingestion.</p>
     */
    inline IngestedFilesSummary& WithTotalNumberOfFiles(int value) { SetTotalNumberOfFiles(value); return *this;}


    /**
     * <p>Indicates the number of files that were successfully ingested.</p>
     */
    inline int GetIngestedNumberOfFiles() const{ return m_ingestedNumberOfFiles; }

    /**
     * <p>Indicates the number of files that were successfully ingested.</p>
     */
    inline bool IngestedNumberOfFilesHasBeenSet() const { return m_ingestedNumberOfFilesHasBeenSet; }

    /**
     * <p>Indicates the number of files that were successfully ingested.</p>
     */
    inline void SetIngestedNumberOfFiles(int value) { m_ingestedNumberOfFilesHasBeenSet = true; m_ingestedNumberOfFiles = value; }

    /**
     * <p>Indicates the number of files that were successfully ingested.</p>
     */
    inline IngestedFilesSummary& WithIngestedNumberOfFiles(int value) { SetIngestedNumberOfFiles(value); return *this;}


    /**
     * <p>Indicates the number of files that were discarded. A file could be discarded
     * because its format is invalid (for example, a jpg or pdf) or not readable.</p>
     */
    inline const Aws::Vector<S3Object>& GetDiscardedFiles() const{ return m_discardedFiles; }

    /**
     * <p>Indicates the number of files that were discarded. A file could be discarded
     * because its format is invalid (for example, a jpg or pdf) or not readable.</p>
     */
    inline bool DiscardedFilesHasBeenSet() const { return m_discardedFilesHasBeenSet; }

    /**
     * <p>Indicates the number of files that were discarded. A file could be discarded
     * because its format is invalid (for example, a jpg or pdf) or not readable.</p>
     */
    inline void SetDiscardedFiles(const Aws::Vector<S3Object>& value) { m_discardedFilesHasBeenSet = true; m_discardedFiles = value; }

    /**
     * <p>Indicates the number of files that were discarded. A file could be discarded
     * because its format is invalid (for example, a jpg or pdf) or not readable.</p>
     */
    inline void SetDiscardedFiles(Aws::Vector<S3Object>&& value) { m_discardedFilesHasBeenSet = true; m_discardedFiles = std::move(value); }

    /**
     * <p>Indicates the number of files that were discarded. A file could be discarded
     * because its format is invalid (for example, a jpg or pdf) or not readable.</p>
     */
    inline IngestedFilesSummary& WithDiscardedFiles(const Aws::Vector<S3Object>& value) { SetDiscardedFiles(value); return *this;}

    /**
     * <p>Indicates the number of files that were discarded. A file could be discarded
     * because its format is invalid (for example, a jpg or pdf) or not readable.</p>
     */
    inline IngestedFilesSummary& WithDiscardedFiles(Aws::Vector<S3Object>&& value) { SetDiscardedFiles(std::move(value)); return *this;}

    /**
     * <p>Indicates the number of files that were discarded. A file could be discarded
     * because its format is invalid (for example, a jpg or pdf) or not readable.</p>
     */
    inline IngestedFilesSummary& AddDiscardedFiles(const S3Object& value) { m_discardedFilesHasBeenSet = true; m_discardedFiles.push_back(value); return *this; }

    /**
     * <p>Indicates the number of files that were discarded. A file could be discarded
     * because its format is invalid (for example, a jpg or pdf) or not readable.</p>
     */
    inline IngestedFilesSummary& AddDiscardedFiles(S3Object&& value) { m_discardedFilesHasBeenSet = true; m_discardedFiles.push_back(std::move(value)); return *this; }

  private:

    int m_totalNumberOfFiles;
    bool m_totalNumberOfFilesHasBeenSet = false;

    int m_ingestedNumberOfFiles;
    bool m_ingestedNumberOfFilesHasBeenSet = false;

    Aws::Vector<S3Object> m_discardedFiles;
    bool m_discardedFilesHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
