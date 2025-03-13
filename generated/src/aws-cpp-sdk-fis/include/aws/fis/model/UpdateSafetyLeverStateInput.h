/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/SafetyLeverStatusInput.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p> Specifies a state for a safety lever. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/UpdateSafetyLeverStateInput">AWS
   * API Reference</a></p>
   */
  class UpdateSafetyLeverStateInput
  {
  public:
    AWS_FIS_API UpdateSafetyLeverStateInput() = default;
    AWS_FIS_API UpdateSafetyLeverStateInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API UpdateSafetyLeverStateInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The updated state of the safety lever. </p>
     */
    inline SafetyLeverStatusInput GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SafetyLeverStatusInput value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateSafetyLeverStateInput& WithStatus(SafetyLeverStatusInput value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason for updating the state of the safety lever. </p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    UpdateSafetyLeverStateInput& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    SafetyLeverStatusInput m_status{SafetyLeverStatusInput::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
