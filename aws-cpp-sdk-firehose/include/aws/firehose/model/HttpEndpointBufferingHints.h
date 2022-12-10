/**
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
   * <p>Describes the buffering options that can be applied before data is delivered
   * to the HTTP endpoint destination. Kinesis Data Firehose treats these options as
   * hints, and it might choose to use more optimal values. The
   * <code>SizeInMBs</code> and <code>IntervalInSeconds</code> parameters are
   * optional. However, if specify a value for one of them, you must also provide a
   * value for the other. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/HttpEndpointBufferingHints">AWS
   * API Reference</a></p>
   */
  class HttpEndpointBufferingHints
  {
  public:
    AWS_FIREHOSE_API HttpEndpointBufferingHints();
    AWS_FIREHOSE_API HttpEndpointBufferingHints(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API HttpEndpointBufferingHints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Buffer incoming data to the specified size, in MBs, before delivering it to
     * the destination. The default value is 5. </p> <p>We recommend setting this
     * parameter to a value greater than the amount of data you typically ingest into
     * the delivery stream in 10 seconds. For example, if you typically ingest data at
     * 1 MB/sec, the value should be 10 MB or higher. </p>
     */
    inline int GetSizeInMBs() const{ return m_sizeInMBs; }

    /**
     * <p>Buffer incoming data to the specified size, in MBs, before delivering it to
     * the destination. The default value is 5. </p> <p>We recommend setting this
     * parameter to a value greater than the amount of data you typically ingest into
     * the delivery stream in 10 seconds. For example, if you typically ingest data at
     * 1 MB/sec, the value should be 10 MB or higher. </p>
     */
    inline bool SizeInMBsHasBeenSet() const { return m_sizeInMBsHasBeenSet; }

    /**
     * <p>Buffer incoming data to the specified size, in MBs, before delivering it to
     * the destination. The default value is 5. </p> <p>We recommend setting this
     * parameter to a value greater than the amount of data you typically ingest into
     * the delivery stream in 10 seconds. For example, if you typically ingest data at
     * 1 MB/sec, the value should be 10 MB or higher. </p>
     */
    inline void SetSizeInMBs(int value) { m_sizeInMBsHasBeenSet = true; m_sizeInMBs = value; }

    /**
     * <p>Buffer incoming data to the specified size, in MBs, before delivering it to
     * the destination. The default value is 5. </p> <p>We recommend setting this
     * parameter to a value greater than the amount of data you typically ingest into
     * the delivery stream in 10 seconds. For example, if you typically ingest data at
     * 1 MB/sec, the value should be 10 MB or higher. </p>
     */
    inline HttpEndpointBufferingHints& WithSizeInMBs(int value) { SetSizeInMBs(value); return *this;}


    /**
     * <p>Buffer incoming data for the specified period of time, in seconds, before
     * delivering it to the destination. The default value is 300 (5 minutes). </p>
     */
    inline int GetIntervalInSeconds() const{ return m_intervalInSeconds; }

    /**
     * <p>Buffer incoming data for the specified period of time, in seconds, before
     * delivering it to the destination. The default value is 300 (5 minutes). </p>
     */
    inline bool IntervalInSecondsHasBeenSet() const { return m_intervalInSecondsHasBeenSet; }

    /**
     * <p>Buffer incoming data for the specified period of time, in seconds, before
     * delivering it to the destination. The default value is 300 (5 minutes). </p>
     */
    inline void SetIntervalInSeconds(int value) { m_intervalInSecondsHasBeenSet = true; m_intervalInSeconds = value; }

    /**
     * <p>Buffer incoming data for the specified period of time, in seconds, before
     * delivering it to the destination. The default value is 300 (5 minutes). </p>
     */
    inline HttpEndpointBufferingHints& WithIntervalInSeconds(int value) { SetIntervalInSeconds(value); return *this;}

  private:

    int m_sizeInMBs;
    bool m_sizeInMBsHasBeenSet = false;

    int m_intervalInSeconds;
    bool m_intervalInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
