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
   * <p>Configures retry behavior in case Firehose is unable to deliver documents to
   * Amazon OpenSearch Service. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/AmazonopensearchserviceRetryOptions">AWS
   * API Reference</a></p>
   */
  class AmazonopensearchserviceRetryOptions
  {
  public:
    AWS_FIREHOSE_API AmazonopensearchserviceRetryOptions() = default;
    AWS_FIREHOSE_API AmazonopensearchserviceRetryOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API AmazonopensearchserviceRetryOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>After an initial failure to deliver to Amazon OpenSearch Service, the total
     * amount of time during which Firehose retries delivery (including the first
     * attempt). After this time has elapsed, the failed documents are written to
     * Amazon S3. Default value is 300 seconds (5 minutes). A value of 0 (zero) results
     * in no retries. </p>
     */
    inline int GetDurationInSeconds() const { return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline AmazonopensearchserviceRetryOptions& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}
    ///@}
  private:

    int m_durationInSeconds{0};
    bool m_durationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
