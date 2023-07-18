/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Splice insert message configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/SpliceInsertMessage">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API SpliceInsertMessage
  {
  public:
    SpliceInsertMessage();
    SpliceInsertMessage(Aws::Utils::Json::JsonView jsonValue);
    SpliceInsertMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This is written to splice_insert.avail_num, as defined in section 9.7.3.1 of
     * the SCTE-35 specification. The default value is 0. Values must be between 0 and
     * 256, inclusive.</p>
     */
    inline int GetAvailNum() const{ return m_availNum; }

    /**
     * <p>This is written to splice_insert.avail_num, as defined in section 9.7.3.1 of
     * the SCTE-35 specification. The default value is 0. Values must be between 0 and
     * 256, inclusive.</p>
     */
    inline bool AvailNumHasBeenSet() const { return m_availNumHasBeenSet; }

    /**
     * <p>This is written to splice_insert.avail_num, as defined in section 9.7.3.1 of
     * the SCTE-35 specification. The default value is 0. Values must be between 0 and
     * 256, inclusive.</p>
     */
    inline void SetAvailNum(int value) { m_availNumHasBeenSet = true; m_availNum = value; }

    /**
     * <p>This is written to splice_insert.avail_num, as defined in section 9.7.3.1 of
     * the SCTE-35 specification. The default value is 0. Values must be between 0 and
     * 256, inclusive.</p>
     */
    inline SpliceInsertMessage& WithAvailNum(int value) { SetAvailNum(value); return *this;}


    /**
     * <p>This is written to splice_insert.avails_expected, as defined in section
     * 9.7.3.1 of the SCTE-35 specification. The default value is 0. Values must be
     * between 0 and 256, inclusive.</p>
     */
    inline int GetAvailsExpected() const{ return m_availsExpected; }

    /**
     * <p>This is written to splice_insert.avails_expected, as defined in section
     * 9.7.3.1 of the SCTE-35 specification. The default value is 0. Values must be
     * between 0 and 256, inclusive.</p>
     */
    inline bool AvailsExpectedHasBeenSet() const { return m_availsExpectedHasBeenSet; }

    /**
     * <p>This is written to splice_insert.avails_expected, as defined in section
     * 9.7.3.1 of the SCTE-35 specification. The default value is 0. Values must be
     * between 0 and 256, inclusive.</p>
     */
    inline void SetAvailsExpected(int value) { m_availsExpectedHasBeenSet = true; m_availsExpected = value; }

    /**
     * <p>This is written to splice_insert.avails_expected, as defined in section
     * 9.7.3.1 of the SCTE-35 specification. The default value is 0. Values must be
     * between 0 and 256, inclusive.</p>
     */
    inline SpliceInsertMessage& WithAvailsExpected(int value) { SetAvailsExpected(value); return *this;}


    /**
     * <p>This is written to splice_insert.splice_event_id, as defined in section
     * 9.7.3.1 of the SCTE-35 specification. The default value is 1.</p>
     */
    inline int GetSpliceEventId() const{ return m_spliceEventId; }

    /**
     * <p>This is written to splice_insert.splice_event_id, as defined in section
     * 9.7.3.1 of the SCTE-35 specification. The default value is 1.</p>
     */
    inline bool SpliceEventIdHasBeenSet() const { return m_spliceEventIdHasBeenSet; }

    /**
     * <p>This is written to splice_insert.splice_event_id, as defined in section
     * 9.7.3.1 of the SCTE-35 specification. The default value is 1.</p>
     */
    inline void SetSpliceEventId(int value) { m_spliceEventIdHasBeenSet = true; m_spliceEventId = value; }

    /**
     * <p>This is written to splice_insert.splice_event_id, as defined in section
     * 9.7.3.1 of the SCTE-35 specification. The default value is 1.</p>
     */
    inline SpliceInsertMessage& WithSpliceEventId(int value) { SetSpliceEventId(value); return *this;}


    /**
     * <p>This is written to splice_insert.unique_program_id, as defined in section
     * 9.7.3.1 of the SCTE-35 specification. The default value is 0. Values must be
     * between 0 and 256, inclusive.</p>
     */
    inline int GetUniqueProgramId() const{ return m_uniqueProgramId; }

    /**
     * <p>This is written to splice_insert.unique_program_id, as defined in section
     * 9.7.3.1 of the SCTE-35 specification. The default value is 0. Values must be
     * between 0 and 256, inclusive.</p>
     */
    inline bool UniqueProgramIdHasBeenSet() const { return m_uniqueProgramIdHasBeenSet; }

    /**
     * <p>This is written to splice_insert.unique_program_id, as defined in section
     * 9.7.3.1 of the SCTE-35 specification. The default value is 0. Values must be
     * between 0 and 256, inclusive.</p>
     */
    inline void SetUniqueProgramId(int value) { m_uniqueProgramIdHasBeenSet = true; m_uniqueProgramId = value; }

    /**
     * <p>This is written to splice_insert.unique_program_id, as defined in section
     * 9.7.3.1 of the SCTE-35 specification. The default value is 0. Values must be
     * between 0 and 256, inclusive.</p>
     */
    inline SpliceInsertMessage& WithUniqueProgramId(int value) { SetUniqueProgramId(value); return *this;}

  private:

    int m_availNum;
    bool m_availNumHasBeenSet;

    int m_availsExpected;
    bool m_availsExpectedHasBeenSet;

    int m_spliceEventId;
    bool m_spliceEventIdHasBeenSet;

    int m_uniqueProgramId;
    bool m_uniqueProgramIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
