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
   * <p>Configures retry behavior in case Kinesis Data Firehose is unable to deliver
   * documents to Amazon Redshift.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/RedshiftRetryOptions">AWS
   * API Reference</a></p>
   */
  class RedshiftRetryOptions
  {
  public:
    AWS_FIREHOSE_API RedshiftRetryOptions();
    AWS_FIREHOSE_API RedshiftRetryOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API RedshiftRetryOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The length of time during which Kinesis Data Firehose retries delivery after
     * a failure, starting from the initial request and including the first attempt.
     * The default value is 3600 seconds (60 minutes). Kinesis Data Firehose does not
     * retry if the value of <code>DurationInSeconds</code> is 0 (zero) or if the first
     * delivery attempt takes longer than the current value.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>The length of time during which Kinesis Data Firehose retries delivery after
     * a failure, starting from the initial request and including the first attempt.
     * The default value is 3600 seconds (60 minutes). Kinesis Data Firehose does not
     * retry if the value of <code>DurationInSeconds</code> is 0 (zero) or if the first
     * delivery attempt takes longer than the current value.</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>The length of time during which Kinesis Data Firehose retries delivery after
     * a failure, starting from the initial request and including the first attempt.
     * The default value is 3600 seconds (60 minutes). Kinesis Data Firehose does not
     * retry if the value of <code>DurationInSeconds</code> is 0 (zero) or if the first
     * delivery attempt takes longer than the current value.</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>The length of time during which Kinesis Data Firehose retries delivery after
     * a failure, starting from the initial request and including the first attempt.
     * The default value is 3600 seconds (60 minutes). Kinesis Data Firehose does not
     * retry if the value of <code>DurationInSeconds</code> is 0 (zero) or if the first
     * delivery attempt takes longer than the current value.</p>
     */
    inline RedshiftRetryOptions& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}

  private:

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
