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
     * <p>The number of records processed that were marked for deletion in the input
     * file using the DELETE schema mapping field. These are the records to be removed
     * from the ID mapping table.</p>
     */
    inline int GetDeleteRecordsProcessed() const { return m_deleteRecordsProcessed; }
    inline bool DeleteRecordsProcessedHasBeenSet() const { return m_deleteRecordsProcessedHasBeenSet; }
    inline void SetDeleteRecordsProcessed(int value) { m_deleteRecordsProcessedHasBeenSet = true; m_deleteRecordsProcessed = value; }
    inline IdMappingJobMetrics& WithDeleteRecordsProcessed(int value) { SetDeleteRecordsProcessed(value); return *this;}
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
     * <p>The number of de-duplicated processed records across all runs, excluding
     * deletion-related records. Duplicates are determined by the field marked as
     * UNIQUE_ID in your schema mapping. Records sharing the same value in this field
     * are considered duplicates. For example, if you specified "customer_id" as a
     * UNIQUE_ID field and had three records with the same customer_id value, they
     * would count as one unique record in this metric. </p>
     */
    inline int GetUniqueRecordsLoaded() const { return m_uniqueRecordsLoaded; }
    inline bool UniqueRecordsLoadedHasBeenSet() const { return m_uniqueRecordsLoadedHasBeenSet; }
    inline void SetUniqueRecordsLoaded(int value) { m_uniqueRecordsLoadedHasBeenSet = true; m_uniqueRecordsLoaded = value; }
    inline IdMappingJobMetrics& WithUniqueRecordsLoaded(int value) { SetUniqueRecordsLoaded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of new mapped records.</p>
     */
    inline int GetNewMappedRecords() const { return m_newMappedRecords; }
    inline bool NewMappedRecordsHasBeenSet() const { return m_newMappedRecordsHasBeenSet; }
    inline void SetNewMappedRecords(int value) { m_newMappedRecordsHasBeenSet = true; m_newMappedRecords = value; }
    inline IdMappingJobMetrics& WithNewMappedRecords(int value) { SetNewMappedRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of new source records mapped.</p>
     */
    inline int GetNewMappedSourceRecords() const { return m_newMappedSourceRecords; }
    inline bool NewMappedSourceRecordsHasBeenSet() const { return m_newMappedSourceRecordsHasBeenSet; }
    inline void SetNewMappedSourceRecords(int value) { m_newMappedSourceRecordsHasBeenSet = true; m_newMappedSourceRecords = value; }
    inline IdMappingJobMetrics& WithNewMappedSourceRecords(int value) { SetNewMappedSourceRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of new mapped target records.</p>
     */
    inline int GetNewMappedTargetRecords() const { return m_newMappedTargetRecords; }
    inline bool NewMappedTargetRecordsHasBeenSet() const { return m_newMappedTargetRecordsHasBeenSet; }
    inline void SetNewMappedTargetRecords(int value) { m_newMappedTargetRecordsHasBeenSet = true; m_newMappedTargetRecords = value; }
    inline IdMappingJobMetrics& WithNewMappedTargetRecords(int value) { SetNewMappedTargetRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of new unique records processed in the current job run, after
     * removing duplicates. This metric excludes deletion-related records. Duplicates
     * are determined by the field marked as UNIQUE_ID in your schema mapping. Records
     * sharing the same value in this field are considered duplicates. For example, if
     * your current run processes five new records with the same UNIQUE_ID value, they
     * would count as one new unique record in this metric.</p>
     */
    inline int GetNewUniqueRecordsLoaded() const { return m_newUniqueRecordsLoaded; }
    inline bool NewUniqueRecordsLoadedHasBeenSet() const { return m_newUniqueRecordsLoadedHasBeenSet; }
    inline void SetNewUniqueRecordsLoaded(int value) { m_newUniqueRecordsLoadedHasBeenSet = true; m_newUniqueRecordsLoaded = value; }
    inline IdMappingJobMetrics& WithNewUniqueRecordsLoaded(int value) { SetNewUniqueRecordsLoaded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of mapped records removed.</p>
     */
    inline int GetMappedRecordsRemoved() const { return m_mappedRecordsRemoved; }
    inline bool MappedRecordsRemovedHasBeenSet() const { return m_mappedRecordsRemovedHasBeenSet; }
    inline void SetMappedRecordsRemoved(int value) { m_mappedRecordsRemovedHasBeenSet = true; m_mappedRecordsRemoved = value; }
    inline IdMappingJobMetrics& WithMappedRecordsRemoved(int value) { SetMappedRecordsRemoved(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of source records removed due to ID mapping.</p>
     */
    inline int GetMappedSourceRecordsRemoved() const { return m_mappedSourceRecordsRemoved; }
    inline bool MappedSourceRecordsRemovedHasBeenSet() const { return m_mappedSourceRecordsRemovedHasBeenSet; }
    inline void SetMappedSourceRecordsRemoved(int value) { m_mappedSourceRecordsRemovedHasBeenSet = true; m_mappedSourceRecordsRemoved = value; }
    inline IdMappingJobMetrics& WithMappedSourceRecordsRemoved(int value) { SetMappedSourceRecordsRemoved(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of mapped target records removed.</p>
     */
    inline int GetMappedTargetRecordsRemoved() const { return m_mappedTargetRecordsRemoved; }
    inline bool MappedTargetRecordsRemovedHasBeenSet() const { return m_mappedTargetRecordsRemovedHasBeenSet; }
    inline void SetMappedTargetRecordsRemoved(int value) { m_mappedTargetRecordsRemovedHasBeenSet = true; m_mappedTargetRecordsRemoved = value; }
    inline IdMappingJobMetrics& WithMappedTargetRecordsRemoved(int value) { SetMappedTargetRecordsRemoved(value); return *this;}
    ///@}
  private:

    int m_inputRecords{0};
    bool m_inputRecordsHasBeenSet = false;

    int m_totalRecordsProcessed{0};
    bool m_totalRecordsProcessedHasBeenSet = false;

    int m_recordsNotProcessed{0};
    bool m_recordsNotProcessedHasBeenSet = false;

    int m_deleteRecordsProcessed{0};
    bool m_deleteRecordsProcessedHasBeenSet = false;

    int m_totalMappedRecords{0};
    bool m_totalMappedRecordsHasBeenSet = false;

    int m_totalMappedSourceRecords{0};
    bool m_totalMappedSourceRecordsHasBeenSet = false;

    int m_totalMappedTargetRecords{0};
    bool m_totalMappedTargetRecordsHasBeenSet = false;

    int m_uniqueRecordsLoaded{0};
    bool m_uniqueRecordsLoadedHasBeenSet = false;

    int m_newMappedRecords{0};
    bool m_newMappedRecordsHasBeenSet = false;

    int m_newMappedSourceRecords{0};
    bool m_newMappedSourceRecordsHasBeenSet = false;

    int m_newMappedTargetRecords{0};
    bool m_newMappedTargetRecordsHasBeenSet = false;

    int m_newUniqueRecordsLoaded{0};
    bool m_newUniqueRecordsLoadedHasBeenSet = false;

    int m_mappedRecordsRemoved{0};
    bool m_mappedRecordsRemovedHasBeenSet = false;

    int m_mappedSourceRecordsRemoved{0};
    bool m_mappedSourceRecordsRemovedHasBeenSet = false;

    int m_mappedTargetRecordsRemoved{0};
    bool m_mappedTargetRecordsRemovedHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
