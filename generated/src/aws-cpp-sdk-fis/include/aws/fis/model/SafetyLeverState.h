/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/SafetyLeverStatus.h>
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
   * <p> Describes the state of the safety lever. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/SafetyLeverState">AWS
   * API Reference</a></p>
   */
  class SafetyLeverState
  {
  public:
    AWS_FIS_API SafetyLeverState() = default;
    AWS_FIS_API SafetyLeverState(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API SafetyLeverState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The state of the safety lever. </p>
     */
    inline SafetyLeverStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SafetyLeverStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SafetyLeverState& WithStatus(SafetyLeverStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason for the state of the safety lever. </p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    SafetyLeverState& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    SafetyLeverStatus m_status{SafetyLeverStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
