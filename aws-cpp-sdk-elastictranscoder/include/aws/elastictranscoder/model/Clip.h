/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/model/TimeSpan.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>Settings for one clip in a composition. All jobs in a playlist must have the
   * same clip settings.</p>
   */
  class AWS_ELASTICTRANSCODER_API Clip
  {
  public:
    Clip();
    Clip(const Aws::Utils::Json::JsonValue& jsonValue);
    Clip& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Settings that determine when a clip begins and how long it lasts.</p>
     */
    inline const TimeSpan& GetTimeSpan() const{ return m_timeSpan; }

    /**
     * <p>Settings that determine when a clip begins and how long it lasts.</p>
     */
    inline void SetTimeSpan(const TimeSpan& value) { m_timeSpanHasBeenSet = true; m_timeSpan = value; }

    /**
     * <p>Settings that determine when a clip begins and how long it lasts.</p>
     */
    inline void SetTimeSpan(TimeSpan&& value) { m_timeSpanHasBeenSet = true; m_timeSpan = value; }

    /**
     * <p>Settings that determine when a clip begins and how long it lasts.</p>
     */
    inline Clip& WithTimeSpan(const TimeSpan& value) { SetTimeSpan(value); return *this;}

    /**
     * <p>Settings that determine when a clip begins and how long it lasts.</p>
     */
    inline Clip& WithTimeSpan(TimeSpan&& value) { SetTimeSpan(value); return *this;}

  private:
    TimeSpan m_timeSpan;
    bool m_timeSpanHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
