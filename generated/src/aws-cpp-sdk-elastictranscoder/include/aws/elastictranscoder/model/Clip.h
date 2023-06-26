/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/model/TimeSpan.h>
#include <utility>

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
   * <p>Settings for one clip in a composition. All jobs in a playlist must have the
   * same clip settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/Clip">AWS
   * API Reference</a></p>
   */
  class Clip
  {
  public:
    AWS_ELASTICTRANSCODER_API Clip();
    AWS_ELASTICTRANSCODER_API Clip(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Clip& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Settings that determine when a clip begins and how long it lasts.</p>
     */
    inline const TimeSpan& GetTimeSpan() const{ return m_timeSpan; }

    /**
     * <p>Settings that determine when a clip begins and how long it lasts.</p>
     */
    inline bool TimeSpanHasBeenSet() const { return m_timeSpanHasBeenSet; }

    /**
     * <p>Settings that determine when a clip begins and how long it lasts.</p>
     */
    inline void SetTimeSpan(const TimeSpan& value) { m_timeSpanHasBeenSet = true; m_timeSpan = value; }

    /**
     * <p>Settings that determine when a clip begins and how long it lasts.</p>
     */
    inline void SetTimeSpan(TimeSpan&& value) { m_timeSpanHasBeenSet = true; m_timeSpan = std::move(value); }

    /**
     * <p>Settings that determine when a clip begins and how long it lasts.</p>
     */
    inline Clip& WithTimeSpan(const TimeSpan& value) { SetTimeSpan(value); return *this;}

    /**
     * <p>Settings that determine when a clip begins and how long it lasts.</p>
     */
    inline Clip& WithTimeSpan(TimeSpan&& value) { SetTimeSpan(std::move(value)); return *this;}

  private:

    TimeSpan m_timeSpan;
    bool m_timeSpanHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
