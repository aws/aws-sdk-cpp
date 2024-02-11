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
   * <code>TotalRecordsProcessed</code>, <code>MatchIDs</code>, and
   * <code>RecordsNotProcessed</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/JobMetrics">AWS
   * API Reference</a></p>
   */
  class JobMetrics
  {
  public:
    AWS_ENTITYRESOLUTION_API JobMetrics();
    AWS_ENTITYRESOLUTION_API JobMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API JobMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of input records.</p>
     */
    inline int GetInputRecords() const{ return m_inputRecords; }

    /**
     * <p>The total number of input records.</p>
     */
    inline bool InputRecordsHasBeenSet() const { return m_inputRecordsHasBeenSet; }

    /**
     * <p>The total number of input records.</p>
     */
    inline void SetInputRecords(int value) { m_inputRecordsHasBeenSet = true; m_inputRecords = value; }

    /**
     * <p>The total number of input records.</p>
     */
    inline JobMetrics& WithInputRecords(int value) { SetInputRecords(value); return *this;}


    /**
     * <p>The total number of <code>matchID</code>s generated.</p>
     */
    inline int GetMatchIDs() const{ return m_matchIDs; }

    /**
     * <p>The total number of <code>matchID</code>s generated.</p>
     */
    inline bool MatchIDsHasBeenSet() const { return m_matchIDsHasBeenSet; }

    /**
     * <p>The total number of <code>matchID</code>s generated.</p>
     */
    inline void SetMatchIDs(int value) { m_matchIDsHasBeenSet = true; m_matchIDs = value; }

    /**
     * <p>The total number of <code>matchID</code>s generated.</p>
     */
    inline JobMetrics& WithMatchIDs(int value) { SetMatchIDs(value); return *this;}


    /**
     * <p>The total number of records that did not get processed.</p>
     */
    inline int GetRecordsNotProcessed() const{ return m_recordsNotProcessed; }

    /**
     * <p>The total number of records that did not get processed.</p>
     */
    inline bool RecordsNotProcessedHasBeenSet() const { return m_recordsNotProcessedHasBeenSet; }

    /**
     * <p>The total number of records that did not get processed.</p>
     */
    inline void SetRecordsNotProcessed(int value) { m_recordsNotProcessedHasBeenSet = true; m_recordsNotProcessed = value; }

    /**
     * <p>The total number of records that did not get processed.</p>
     */
    inline JobMetrics& WithRecordsNotProcessed(int value) { SetRecordsNotProcessed(value); return *this;}


    /**
     * <p>The total number of records processed.</p>
     */
    inline int GetTotalRecordsProcessed() const{ return m_totalRecordsProcessed; }

    /**
     * <p>The total number of records processed.</p>
     */
    inline bool TotalRecordsProcessedHasBeenSet() const { return m_totalRecordsProcessedHasBeenSet; }

    /**
     * <p>The total number of records processed.</p>
     */
    inline void SetTotalRecordsProcessed(int value) { m_totalRecordsProcessedHasBeenSet = true; m_totalRecordsProcessed = value; }

    /**
     * <p>The total number of records processed.</p>
     */
    inline JobMetrics& WithTotalRecordsProcessed(int value) { SetTotalRecordsProcessed(value); return *this;}

  private:

    int m_inputRecords;
    bool m_inputRecordsHasBeenSet = false;

    int m_matchIDs;
    bool m_matchIDsHasBeenSet = false;

    int m_recordsNotProcessed;
    bool m_recordsNotProcessedHasBeenSet = false;

    int m_totalRecordsProcessed;
    bool m_totalRecordsProcessedHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
