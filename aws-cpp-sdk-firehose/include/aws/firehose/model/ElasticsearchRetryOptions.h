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
   * documents to Amazon ES.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/ElasticsearchRetryOptions">AWS
   * API Reference</a></p>
   */
  class ElasticsearchRetryOptions
  {
  public:
    AWS_FIREHOSE_API ElasticsearchRetryOptions();
    AWS_FIREHOSE_API ElasticsearchRetryOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API ElasticsearchRetryOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>After an initial failure to deliver to Amazon ES, the total amount of time
     * during which Kinesis Data Firehose retries delivery (including the first
     * attempt). After this time has elapsed, the failed documents are written to
     * Amazon S3. Default value is 300 seconds (5 minutes). A value of 0 (zero) results
     * in no retries.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>After an initial failure to deliver to Amazon ES, the total amount of time
     * during which Kinesis Data Firehose retries delivery (including the first
     * attempt). After this time has elapsed, the failed documents are written to
     * Amazon S3. Default value is 300 seconds (5 minutes). A value of 0 (zero) results
     * in no retries.</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>After an initial failure to deliver to Amazon ES, the total amount of time
     * during which Kinesis Data Firehose retries delivery (including the first
     * attempt). After this time has elapsed, the failed documents are written to
     * Amazon S3. Default value is 300 seconds (5 minutes). A value of 0 (zero) results
     * in no retries.</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>After an initial failure to deliver to Amazon ES, the total amount of time
     * during which Kinesis Data Firehose retries delivery (including the first
     * attempt). After this time has elapsed, the failed documents are written to
     * Amazon S3. Default value is 300 seconds (5 minutes). A value of 0 (zero) results
     * in no retries.</p>
     */
    inline ElasticsearchRetryOptions& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}

  private:

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
