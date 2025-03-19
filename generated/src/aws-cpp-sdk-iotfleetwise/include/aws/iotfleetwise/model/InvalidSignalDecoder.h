/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/SignalDecoderFailureReason.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>A reason that a signal decoder isn't valid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/InvalidSignalDecoder">AWS
   * API Reference</a></p>
   */
  class InvalidSignalDecoder
  {
  public:
    AWS_IOTFLEETWISE_API InvalidSignalDecoder() = default;
    AWS_IOTFLEETWISE_API InvalidSignalDecoder(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API InvalidSignalDecoder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a signal decoder that isn't valid.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InvalidSignalDecoder& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about why the signal decoder isn't valid.</p>
     */
    inline SignalDecoderFailureReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(SignalDecoderFailureReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline InvalidSignalDecoder& WithReason(SignalDecoderFailureReason value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The possible cause for the invalid signal decoder.</p>
     */
    inline const Aws::String& GetHint() const { return m_hint; }
    inline bool HintHasBeenSet() const { return m_hintHasBeenSet; }
    template<typename HintT = Aws::String>
    void SetHint(HintT&& value) { m_hintHasBeenSet = true; m_hint = std::forward<HintT>(value); }
    template<typename HintT = Aws::String>
    InvalidSignalDecoder& WithHint(HintT&& value) { SetHint(std::forward<HintT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SignalDecoderFailureReason m_reason{SignalDecoderFailureReason::NOT_SET};
    bool m_reasonHasBeenSet = false;

    Aws::String m_hint;
    bool m_hintHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
