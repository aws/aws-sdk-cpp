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
   * <p>An object containing <code>InputRecords</code>,
   * <code>RecordsNotProcessed</code>, <code>TotalRecordsProcessed</code>,
   * <code>TotalMappedRecords</code>, <code>TotalMappedSourceRecords</code>, and
   * <code>TotalMappedTargetRecords</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IdMappingJobMetrics">AWS
   * API Reference</a></p>
   */
  class IdMappingJobMetrics
  {
  public:
    AWS_ENTITYRESOLUTION_API IdMappingJobMetrics();
    AWS_ENTITYRESOLUTION_API IdMappingJobMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IdMappingJobMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of records that were input for processing.</p>
     */
    inline int GetInputRecords() const{ return m_inputRecords; }
    inline bool InputRecordsHasBeenSet() const { return m_inputRecordsHasBeenSet; }
    inline void SetInputRecords(int value) { m_inputRecordsHasBeenSet = true; m_inputRecords = value; }
    inline IdMappingJobMetrics& WithInputRecords(int value) { SetInputRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of records that did not get processed.</p>
     */
    inline int GetRecordsNotProcessed() const{ return m_recordsNotProcessed; }
    inline bool RecordsNotProcessedHasBeenSet() const { return m_recordsNotProcessedHasBeenSet; }
    inline void SetRecordsNotProcessed(int value) { m_recordsNotProcessedHasBeenSet = true; m_recordsNotProcessed = value; }
    inline IdMappingJobMetrics& WithRecordsNotProcessed(int value) { SetRecordsNotProcessed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of records that were mapped.</p>
     */
    inline int GetTotalMappedRecords() const{ return m_totalMappedRecords; }
    inline bool TotalMappedRecordsHasBeenSet() const { return m_totalMappedRecordsHasBeenSet; }
    inline void SetTotalMappedRecords(int value) { m_totalMappedRecordsHasBeenSet = true; m_totalMappedRecords = value; }
    inline IdMappingJobMetrics& WithTotalMappedRecords(int value) { SetTotalMappedRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of mapped source records.</p>
     */
    inline int GetTotalMappedSourceRecords() const{ return m_totalMappedSourceRecords; }
    inline bool TotalMappedSourceRecordsHasBeenSet() const { return m_totalMappedSourceRecordsHasBeenSet; }
    inline void SetTotalMappedSourceRecords(int value) { m_totalMappedSourceRecordsHasBeenSet = true; m_totalMappedSourceRecords = value; }
    inline IdMappingJobMetrics& WithTotalMappedSourceRecords(int value) { SetTotalMappedSourceRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of distinct mapped target records.</p>
     */
    inline int GetTotalMappedTargetRecords() const{ return m_totalMappedTargetRecords; }
    inline bool TotalMappedTargetRecordsHasBeenSet() const { return m_totalMappedTargetRecordsHasBeenSet; }
    inline void SetTotalMappedTargetRecords(int value) { m_totalMappedTargetRecordsHasBeenSet = true; m_totalMappedTargetRecords = value; }
    inline IdMappingJobMetrics& WithTotalMappedTargetRecords(int value) { SetTotalMappedTargetRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of records that were processed.</p>
     */
    inline int GetTotalRecordsProcessed() const{ return m_totalRecordsProcessed; }
    inline bool TotalRecordsProcessedHasBeenSet() const { return m_totalRecordsProcessedHasBeenSet; }
    inline void SetTotalRecordsProcessed(int value) { m_totalRecordsProcessedHasBeenSet = true; m_totalRecordsProcessed = value; }
    inline IdMappingJobMetrics& WithTotalRecordsProcessed(int value) { SetTotalRecordsProcessed(value); return *this;}
    ///@}
  private:

    int m_inputRecords;
    bool m_inputRecordsHasBeenSet = false;

    int m_recordsNotProcessed;
    bool m_recordsNotProcessedHasBeenSet = false;

    int m_totalMappedRecords;
    bool m_totalMappedRecordsHasBeenSet = false;

    int m_totalMappedSourceRecords;
    bool m_totalMappedSourceRecordsHasBeenSet = false;

    int m_totalMappedTargetRecords;
    bool m_totalMappedTargetRecordsHasBeenSet = false;

    int m_totalRecordsProcessed;
    bool m_totalRecordsProcessedHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
