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
   * <p> The retry behavior in case Kinesis Data Firehose is unable to deliver data
   * to an Amazon S3 prefix.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/RetryOptions">AWS
   * API Reference</a></p>
   */
  class RetryOptions
  {
  public:
    AWS_FIREHOSE_API RetryOptions();
    AWS_FIREHOSE_API RetryOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API RetryOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The period of time during which Kinesis Data Firehose retries to deliver data
     * to the specified Amazon S3 prefix.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>The period of time during which Kinesis Data Firehose retries to deliver data
     * to the specified Amazon S3 prefix.</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>The period of time during which Kinesis Data Firehose retries to deliver data
     * to the specified Amazon S3 prefix.</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>The period of time during which Kinesis Data Firehose retries to deliver data
     * to the specified Amazon S3 prefix.</p>
     */
    inline RetryOptions& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}

  private:

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
