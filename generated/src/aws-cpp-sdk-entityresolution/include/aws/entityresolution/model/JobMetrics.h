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
   * <p>An object containing <code>inputRecords</code>,
   * <code>totalRecordsProcessed</code>, <code>matchIDs</code>, and
   * <code>recordsNotProcessed</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/JobMetrics">AWS
   * API Reference</a></p>
   */
  class JobMetrics
  {
  public:
    AWS_ENTITYRESOLUTION_API JobMetrics() = default;
    AWS_ENTITYRESOLUTION_API JobMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API JobMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of input records.</p>
     */
    inline int GetInputRecords() const { return m_inputRecords; }
    inline bool InputRecordsHasBeenSet() const { return m_inputRecordsHasBeenSet; }
    inline void SetInputRecords(int value) { m_inputRecordsHasBeenSet = true; m_inputRecords = value; }
    inline JobMetrics& WithInputRecords(int value) { SetInputRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of records processed.</p>
     */
    inline int GetTotalRecordsProcessed() const { return m_totalRecordsProcessed; }
    inline bool TotalRecordsProcessedHasBeenSet() const { return m_totalRecordsProcessedHasBeenSet; }
    inline void SetTotalRecordsProcessed(int value) { m_totalRecordsProcessedHasBeenSet = true; m_totalRecordsProcessed = value; }
    inline JobMetrics& WithTotalRecordsProcessed(int value) { SetTotalRecordsProcessed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of records that did not get processed.</p>
     */
    inline int GetRecordsNotProcessed() const { return m_recordsNotProcessed; }
    inline bool RecordsNotProcessedHasBeenSet() const { return m_recordsNotProcessedHasBeenSet; }
    inline void SetRecordsNotProcessed(int value) { m_recordsNotProcessedHasBeenSet = true; m_recordsNotProcessed = value; }
    inline JobMetrics& WithRecordsNotProcessed(int value) { SetRecordsNotProcessed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records processed that were marked for deletion
     * (<code>DELETE</code> = True) in the input file. This metric tracks records
     * flagged for removal during the job execution.</p>
     */
    inline int GetDeleteRecordsProcessed() const { return m_deleteRecordsProcessed; }
    inline bool DeleteRecordsProcessedHasBeenSet() const { return m_deleteRecordsProcessedHasBeenSet; }
    inline void SetDeleteRecordsProcessed(int value) { m_deleteRecordsProcessedHasBeenSet = true; m_deleteRecordsProcessed = value; }
    inline JobMetrics& WithDeleteRecordsProcessed(int value) { SetDeleteRecordsProcessed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of <code>matchID</code>s generated.</p>
     */
    inline int GetMatchIDs() const { return m_matchIDs; }
    inline bool MatchIDsHasBeenSet() const { return m_matchIDsHasBeenSet; }
    inline void SetMatchIDs(int value) { m_matchIDsHasBeenSet = true; m_matchIDs = value; }
    inline JobMetrics& WithMatchIDs(int value) { SetMatchIDs(value); return *this;}
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

    int m_matchIDs{0};
    bool m_matchIDsHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
