/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a request to create or edit the <code>StopInstanceOnIdle</code>
   * add-on.</p>  <p>This add-on only applies to Lightsail for Research
   * resources.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StopInstanceOnIdleRequest">AWS
   * API Reference</a></p>
   */
  class StopInstanceOnIdleRequest
  {
  public:
    AWS_LIGHTSAIL_API StopInstanceOnIdleRequest();
    AWS_LIGHTSAIL_API StopInstanceOnIdleRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API StopInstanceOnIdleRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value to compare with the duration.</p>
     */
    inline const Aws::String& GetThreshold() const{ return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(const Aws::String& value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline void SetThreshold(Aws::String&& value) { m_thresholdHasBeenSet = true; m_threshold = std::move(value); }
    inline void SetThreshold(const char* value) { m_thresholdHasBeenSet = true; m_threshold.assign(value); }
    inline StopInstanceOnIdleRequest& WithThreshold(const Aws::String& value) { SetThreshold(value); return *this;}
    inline StopInstanceOnIdleRequest& WithThreshold(Aws::String&& value) { SetThreshold(std::move(value)); return *this;}
    inline StopInstanceOnIdleRequest& WithThreshold(const char* value) { SetThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of idle time in minutes after which your virtual computer will
     * automatically stop.</p>
     */
    inline const Aws::String& GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(const Aws::String& value) { m_durationHasBeenSet = true; m_duration = value; }
    inline void SetDuration(Aws::String&& value) { m_durationHasBeenSet = true; m_duration = std::move(value); }
    inline void SetDuration(const char* value) { m_durationHasBeenSet = true; m_duration.assign(value); }
    inline StopInstanceOnIdleRequest& WithDuration(const Aws::String& value) { SetDuration(value); return *this;}
    inline StopInstanceOnIdleRequest& WithDuration(Aws::String&& value) { SetDuration(std::move(value)); return *this;}
    inline StopInstanceOnIdleRequest& WithDuration(const char* value) { SetDuration(value); return *this;}
    ///@}
  private:

    Aws::String m_threshold;
    bool m_thresholdHasBeenSet = false;

    Aws::String m_duration;
    bool m_durationHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
