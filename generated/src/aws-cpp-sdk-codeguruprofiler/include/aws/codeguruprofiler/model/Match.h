/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The part of a profile that contains a recommendation found during
   * analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/Match">AWS
   * API Reference</a></p>
   */
  class Match
  {
  public:
    AWS_CODEGURUPROFILER_API Match() = default;
    AWS_CODEGURUPROFILER_API Match(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Match& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location in the profiling graph that contains a recommendation found
     * during analysis.</p>
     */
    inline const Aws::String& GetFrameAddress() const { return m_frameAddress; }
    inline bool FrameAddressHasBeenSet() const { return m_frameAddressHasBeenSet; }
    template<typename FrameAddressT = Aws::String>
    void SetFrameAddress(FrameAddressT&& value) { m_frameAddressHasBeenSet = true; m_frameAddress = std::forward<FrameAddressT>(value); }
    template<typename FrameAddressT = Aws::String>
    Match& WithFrameAddress(FrameAddressT&& value) { SetFrameAddress(std::forward<FrameAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target frame that triggered a match.</p>
     */
    inline int GetTargetFramesIndex() const { return m_targetFramesIndex; }
    inline bool TargetFramesIndexHasBeenSet() const { return m_targetFramesIndexHasBeenSet; }
    inline void SetTargetFramesIndex(int value) { m_targetFramesIndexHasBeenSet = true; m_targetFramesIndex = value; }
    inline Match& WithTargetFramesIndex(int value) { SetTargetFramesIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value in the profile data that exceeded the recommendation threshold.</p>
     */
    inline double GetThresholdBreachValue() const { return m_thresholdBreachValue; }
    inline bool ThresholdBreachValueHasBeenSet() const { return m_thresholdBreachValueHasBeenSet; }
    inline void SetThresholdBreachValue(double value) { m_thresholdBreachValueHasBeenSet = true; m_thresholdBreachValue = value; }
    inline Match& WithThresholdBreachValue(double value) { SetThresholdBreachValue(value); return *this;}
    ///@}
  private:

    Aws::String m_frameAddress;
    bool m_frameAddressHasBeenSet = false;

    int m_targetFramesIndex{0};
    bool m_targetFramesIndexHasBeenSet = false;

    double m_thresholdBreachValue{0.0};
    bool m_thresholdBreachValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
