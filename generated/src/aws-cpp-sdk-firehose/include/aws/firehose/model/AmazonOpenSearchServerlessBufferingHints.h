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
   * <p>Describes the buffering to perform before delivering data to the Serverless
   * offering for Amazon OpenSearch Service destination.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/AmazonOpenSearchServerlessBufferingHints">AWS
   * API Reference</a></p>
   */
  class AmazonOpenSearchServerlessBufferingHints
  {
  public:
    AWS_FIREHOSE_API AmazonOpenSearchServerlessBufferingHints() = default;
    AWS_FIREHOSE_API AmazonOpenSearchServerlessBufferingHints(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API AmazonOpenSearchServerlessBufferingHints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Buffer incoming data for the specified period of time, in seconds, before
     * delivering it to the destination. The default value is 300 (5 minutes).</p>
     */
    inline int GetIntervalInSeconds() const { return m_intervalInSeconds; }
    inline bool IntervalInSecondsHasBeenSet() const { return m_intervalInSecondsHasBeenSet; }
    inline void SetIntervalInSeconds(int value) { m_intervalInSecondsHasBeenSet = true; m_intervalInSeconds = value; }
    inline AmazonOpenSearchServerlessBufferingHints& WithIntervalInSeconds(int value) { SetIntervalInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Buffer incoming data to the specified size, in MBs, before delivering it to
     * the destination. The default value is 5. </p> <p>We recommend setting this
     * parameter to a value greater than the amount of data you typically ingest into
     * the Firehose stream in 10 seconds. For example, if you typically ingest data at
     * 1 MB/sec, the value should be 10 MB or higher.</p>
     */
    inline int GetSizeInMBs() const { return m_sizeInMBs; }
    inline bool SizeInMBsHasBeenSet() const { return m_sizeInMBsHasBeenSet; }
    inline void SetSizeInMBs(int value) { m_sizeInMBsHasBeenSet = true; m_sizeInMBs = value; }
    inline AmazonOpenSearchServerlessBufferingHints& WithSizeInMBs(int value) { SetSizeInMBs(value); return *this;}
    ///@}
  private:

    int m_intervalInSeconds{0};
    bool m_intervalInSecondsHasBeenSet = false;

    int m_sizeInMBs{0};
    bool m_sizeInMBsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
