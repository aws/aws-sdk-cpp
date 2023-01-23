/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>

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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>Details about the timing of a job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/Timing">AWS
   * API Reference</a></p>
   */
  class Timing
  {
  public:
    AWS_ELASTICTRANSCODER_API Timing();
    AWS_ELASTICTRANSCODER_API Timing(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Timing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time the job was submitted to Elastic Transcoder, in epoch
     * milliseconds.</p>
     */
    inline long long GetSubmitTimeMillis() const{ return m_submitTimeMillis; }

    /**
     * <p>The time the job was submitted to Elastic Transcoder, in epoch
     * milliseconds.</p>
     */
    inline bool SubmitTimeMillisHasBeenSet() const { return m_submitTimeMillisHasBeenSet; }

    /**
     * <p>The time the job was submitted to Elastic Transcoder, in epoch
     * milliseconds.</p>
     */
    inline void SetSubmitTimeMillis(long long value) { m_submitTimeMillisHasBeenSet = true; m_submitTimeMillis = value; }

    /**
     * <p>The time the job was submitted to Elastic Transcoder, in epoch
     * milliseconds.</p>
     */
    inline Timing& WithSubmitTimeMillis(long long value) { SetSubmitTimeMillis(value); return *this;}


    /**
     * <p>The time the job began transcoding, in epoch milliseconds.</p>
     */
    inline long long GetStartTimeMillis() const{ return m_startTimeMillis; }

    /**
     * <p>The time the job began transcoding, in epoch milliseconds.</p>
     */
    inline bool StartTimeMillisHasBeenSet() const { return m_startTimeMillisHasBeenSet; }

    /**
     * <p>The time the job began transcoding, in epoch milliseconds.</p>
     */
    inline void SetStartTimeMillis(long long value) { m_startTimeMillisHasBeenSet = true; m_startTimeMillis = value; }

    /**
     * <p>The time the job began transcoding, in epoch milliseconds.</p>
     */
    inline Timing& WithStartTimeMillis(long long value) { SetStartTimeMillis(value); return *this;}


    /**
     * <p>The time the job finished transcoding, in epoch milliseconds.</p>
     */
    inline long long GetFinishTimeMillis() const{ return m_finishTimeMillis; }

    /**
     * <p>The time the job finished transcoding, in epoch milliseconds.</p>
     */
    inline bool FinishTimeMillisHasBeenSet() const { return m_finishTimeMillisHasBeenSet; }

    /**
     * <p>The time the job finished transcoding, in epoch milliseconds.</p>
     */
    inline void SetFinishTimeMillis(long long value) { m_finishTimeMillisHasBeenSet = true; m_finishTimeMillis = value; }

    /**
     * <p>The time the job finished transcoding, in epoch milliseconds.</p>
     */
    inline Timing& WithFinishTimeMillis(long long value) { SetFinishTimeMillis(value); return *this;}

  private:

    long long m_submitTimeMillis;
    bool m_submitTimeMillisHasBeenSet = false;

    long long m_startTimeMillis;
    bool m_startTimeMillisHasBeenSet = false;

    long long m_finishTimeMillis;
    bool m_finishTimeMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
