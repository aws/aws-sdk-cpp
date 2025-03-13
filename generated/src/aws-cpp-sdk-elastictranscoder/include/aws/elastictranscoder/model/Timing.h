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
    AWS_ELASTICTRANSCODER_API Timing() = default;
    AWS_ELASTICTRANSCODER_API Timing(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Timing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time the job was submitted to Elastic Transcoder, in epoch
     * milliseconds.</p>
     */
    inline long long GetSubmitTimeMillis() const { return m_submitTimeMillis; }
    inline bool SubmitTimeMillisHasBeenSet() const { return m_submitTimeMillisHasBeenSet; }
    inline void SetSubmitTimeMillis(long long value) { m_submitTimeMillisHasBeenSet = true; m_submitTimeMillis = value; }
    inline Timing& WithSubmitTimeMillis(long long value) { SetSubmitTimeMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the job began transcoding, in epoch milliseconds.</p>
     */
    inline long long GetStartTimeMillis() const { return m_startTimeMillis; }
    inline bool StartTimeMillisHasBeenSet() const { return m_startTimeMillisHasBeenSet; }
    inline void SetStartTimeMillis(long long value) { m_startTimeMillisHasBeenSet = true; m_startTimeMillis = value; }
    inline Timing& WithStartTimeMillis(long long value) { SetStartTimeMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the job finished transcoding, in epoch milliseconds.</p>
     */
    inline long long GetFinishTimeMillis() const { return m_finishTimeMillis; }
    inline bool FinishTimeMillisHasBeenSet() const { return m_finishTimeMillisHasBeenSet; }
    inline void SetFinishTimeMillis(long long value) { m_finishTimeMillisHasBeenSet = true; m_finishTimeMillis = value; }
    inline Timing& WithFinishTimeMillis(long long value) { SetFinishTimeMillis(value); return *this;}
    ///@}
  private:

    long long m_submitTimeMillis{0};
    bool m_submitTimeMillisHasBeenSet = false;

    long long m_startTimeMillis{0};
    bool m_startTimeMillisHasBeenSet = false;

    long long m_finishTimeMillis{0};
    bool m_finishTimeMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
