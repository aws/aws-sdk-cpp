/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/FreeTrialType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/inspector2/model/FreeTrialStatus.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>An object that contains information about the Amazon Inspector free trial for
   * an account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/FreeTrialInfo">AWS
   * API Reference</a></p>
   */
  class FreeTrialInfo
  {
  public:
    AWS_INSPECTOR2_API FreeTrialInfo() = default;
    AWS_INSPECTOR2_API FreeTrialInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API FreeTrialInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of scan covered by the Amazon Inspector free trail.</p>
     */
    inline FreeTrialType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FreeTrialType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FreeTrialInfo& WithType(FreeTrialType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Amazon Inspector free trail started for a given
     * account.</p>
     */
    inline const Aws::Utils::DateTime& GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    template<typename StartT = Aws::Utils::DateTime>
    void SetStart(StartT&& value) { m_startHasBeenSet = true; m_start = std::forward<StartT>(value); }
    template<typename StartT = Aws::Utils::DateTime>
    FreeTrialInfo& WithStart(StartT&& value) { SetStart(std::forward<StartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Amazon Inspector free trail ends for a given
     * account.</p>
     */
    inline const Aws::Utils::DateTime& GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    template<typename EndT = Aws::Utils::DateTime>
    void SetEnd(EndT&& value) { m_endHasBeenSet = true; m_end = std::forward<EndT>(value); }
    template<typename EndT = Aws::Utils::DateTime>
    FreeTrialInfo& WithEnd(EndT&& value) { SetEnd(std::forward<EndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order to sort results by.</p>
     */
    inline FreeTrialStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FreeTrialStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline FreeTrialInfo& WithStatus(FreeTrialStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    FreeTrialType m_type{FreeTrialType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_start{};
    bool m_startHasBeenSet = false;

    Aws::Utils::DateTime m_end{};
    bool m_endHasBeenSet = false;

    FreeTrialStatus m_status{FreeTrialStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
