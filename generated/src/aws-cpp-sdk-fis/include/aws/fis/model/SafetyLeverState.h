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
    AWS_FIS_API SafetyLeverState();
    AWS_FIS_API SafetyLeverState(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API SafetyLeverState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The state of the safety lever. </p>
     */
    inline const SafetyLeverStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SafetyLeverStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SafetyLeverStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SafetyLeverState& WithStatus(const SafetyLeverStatus& value) { SetStatus(value); return *this;}
    inline SafetyLeverState& WithStatus(SafetyLeverStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reason for the state of the safety lever. </p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline SafetyLeverState& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline SafetyLeverState& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline SafetyLeverState& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}
  private:

    SafetyLeverStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
