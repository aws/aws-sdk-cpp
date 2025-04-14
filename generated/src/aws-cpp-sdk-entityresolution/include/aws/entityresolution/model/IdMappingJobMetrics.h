/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>

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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>An object that contains metrics about an ID mapping job, including counts of
   * input records, processed records, and mapped records between source and target
   * identifiers. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IdMappingJobMetrics">AWS
   * API Reference</a></p>
   */
  class IdMappingJobMetrics
  {
  public:
    AWS_ENTITYRESOLUTION_API IdMappingJobMetrics() = default;
    AWS_ENTITYRESOLUTION_API IdMappingJobMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IdMappingJobMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of records that were input for processing.</p>
     */
    inline int GetInputRecords() const { return m_inputRecords; }
    inline bool InputRecordsHasBeenSet() const { return m_inputRecordsHasBeenSet; }
    inline void SetInputRecords(int value) { m_inputRecordsHasBeenSet = true; m_inputRecords = value; }
    inline IdMappingJobMetrics& WithInputRecords(int value) { SetInputRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of records that were processed.</p>
     */
    inline int GetTotalRecordsProcessed() const { return m_totalRecordsProcessed; }
    inline bool TotalRecordsProcessedHasBeenSet() const { return m_totalRecordsProcessedHasBeenSet; }
    inline void SetTotalRecordsProcessed(int value) { m_totalRecordsProcessedHasBeenSet = true; m_totalRecordsProcessed = value; }
    inline IdMappingJobMetrics& WithTotalRecordsProcessed(int value) { SetTotalRecordsProcessed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of records that did not get processed.</p>
     */
    inline int GetRecordsNotProcessed() const { return m_recordsNotProcessed; }
    inline bool RecordsNotProcessedHasBeenSet() const { return m_recordsNotProcessedHasBeenSet; }
    inline void SetRecordsNotProcessed(int value) { m_recordsNotProcessedHasBeenSet = true; m_recordsNotProcessed = value; }
    inline IdMappingJobMetrics& WithRecordsNotProcessed(int value) { SetRecordsNotProcessed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of records that were mapped.</p>
     */
    inline int GetTotalMappedRecords() const { return m_totalMappedRecords; }
    inline bool TotalMappedRecordsHasBeenSet() const { return m_totalMappedRecordsHasBeenSet; }
    inline void SetTotalMappedRecords(int value) { m_totalMappedRecordsHasBeenSet = true; m_totalMappedRecords = value; }
    inline IdMappingJobMetrics& WithTotalMappedRecords(int value) { SetTotalMappedRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of mapped source records.</p>
     */
    inline int GetTotalMappedSourceRecords() const { return m_totalMappedSourceRecords; }
    inline bool TotalMappedSourceRecordsHasBeenSet() const { return m_totalMappedSourceRecordsHasBeenSet; }
    inline void SetTotalMappedSourceRecords(int value) { m_totalMappedSourceRecordsHasBeenSet = true; m_totalMappedSourceRecords = value; }
    inline IdMappingJobMetrics& WithTotalMappedSourceRecords(int value) { SetTotalMappedSourceRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of distinct mapped target records.</p>
     */
    inline int GetTotalMappedTargetRecords() const { return m_totalMappedTargetRecords; }
    inline bool TotalMappedTargetRecordsHasBeenSet() const { return m_totalMappedTargetRecordsHasBeenSet; }
    inline void SetTotalMappedTargetRecords(int value) { m_totalMappedTargetRecordsHasBeenSet = true; m_totalMappedTargetRecords = value; }
    inline IdMappingJobMetrics& WithTotalMappedTargetRecords(int value) { SetTotalMappedTargetRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records remaining after loading and aggregating duplicate
     * records. Duplicates are determined by the field marked as UNIQUE_ID in your
     * schema mapping - records sharing the same value in this field are considered
     * duplicates. For example, if you specified "customer_id" as a UNIQUE_ID field and
     * had three records with the same customer_id value, they would count as one
     * unique record in this metric. </p>
     */
    inline int GetUniqueRecordsLoaded() const { return m_uniqueRecordsLoaded; }
    inline bool UniqueRecordsLoadedHasBeenSet() const { return m_uniqueRecordsLoadedHasBeenSet; }
    inline void SetUniqueRecordsLoaded(int value) { m_uniqueRecordsLoadedHasBeenSet = true; m_uniqueRecordsLoaded = value; }
    inline IdMappingJobMetrics& WithUniqueRecordsLoaded(int value) { SetUniqueRecordsLoaded(value); return *this;}
    ///@}
  private:

    int m_inputRecords{0};
    bool m_inputRecordsHasBeenSet = false;

    int m_totalRecordsProcessed{0};
    bool m_totalRecordsProcessedHasBeenSet = false;

    int m_recordsNotProcessed{0};
    bool m_recordsNotProcessedHasBeenSet = false;

    int m_totalMappedRecords{0};
    bool m_totalMappedRecordsHasBeenSet = false;

    int m_totalMappedSourceRecords{0};
    bool m_totalMappedSourceRecordsHasBeenSet = false;

    int m_totalMappedTargetRecords{0};
    bool m_totalMappedTargetRecordsHasBeenSet = false;

    int m_uniqueRecordsLoaded{0};
    bool m_uniqueRecordsLoadedHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
