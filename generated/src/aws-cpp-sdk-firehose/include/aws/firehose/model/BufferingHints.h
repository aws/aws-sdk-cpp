﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>

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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes hints for the buffering to perform before delivering data to the
   * destination. These options are treated as hints, and therefore Firehose might
   * choose to use different values when it is optimal. The <code>SizeInMBs</code>
   * and <code>IntervalInSeconds</code> parameters are optional. However, if specify
   * a value for one of them, you must also provide a value for the
   * other.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/BufferingHints">AWS
   * API Reference</a></p>
   */
  class BufferingHints
  {
  public:
    AWS_FIREHOSE_API BufferingHints() = default;
    AWS_FIREHOSE_API BufferingHints(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API BufferingHints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Buffer incoming data to the specified size, in MiBs, before delivering it to
     * the destination. The default value is 5. This parameter is optional but if you
     * specify a value for it, you must also specify a value for
     * <code>IntervalInSeconds</code>, and vice versa.</p> <p>We recommend setting this
     * parameter to a value greater than the amount of data you typically ingest into
     * the Firehose stream in 10 seconds. For example, if you typically ingest data at
     * 1 MiB/sec, the value should be 10 MiB or higher.</p>
     */
    inline int GetSizeInMBs() const { return m_sizeInMBs; }
    inline bool SizeInMBsHasBeenSet() const { return m_sizeInMBsHasBeenSet; }
    inline void SetSizeInMBs(int value) { m_sizeInMBsHasBeenSet = true; m_sizeInMBs = value; }
    inline BufferingHints& WithSizeInMBs(int value) { SetSizeInMBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Buffer incoming data for the specified period of time, in seconds, before
     * delivering it to the destination. The default value is 300. This parameter is
     * optional but if you specify a value for it, you must also specify a value for
     * <code>SizeInMBs</code>, and vice versa.</p>
     */
    inline int GetIntervalInSeconds() const { return m_intervalInSeconds; }
    inline bool IntervalInSecondsHasBeenSet() const { return m_intervalInSecondsHasBeenSet; }
    inline void SetIntervalInSeconds(int value) { m_intervalInSecondsHasBeenSet = true; m_intervalInSeconds = value; }
    inline BufferingHints& WithIntervalInSeconds(int value) { SetIntervalInSeconds(value); return *this;}
    ///@}
  private:

    int m_sizeInMBs{0};
    bool m_sizeInMBsHasBeenSet = false;

    int m_intervalInSeconds{0};
    bool m_intervalInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
