/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/EcrRescanDuration.h>
#include <aws/inspector2/model/EcrRescanDurationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/inspector2/model/EcrPullDateRescanDuration.h>
#include <aws/inspector2/model/EcrPullDateRescanMode.h>
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
   * <p>Details about the state of your ECR re-scan duration settings. The ECR
   * re-scan duration defines how long an ECR image will be actively scanned by
   * Amazon Inspector. When the number of days since an image was last pushed exceeds
   * the duration configured for image pull date, and the duration configured for
   * image pull date, the monitoring state of that image becomes
   * <code>inactive</code> and all associated findings are scheduled for
   * closure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/EcrRescanDurationState">AWS
   * API Reference</a></p>
   */
  class EcrRescanDurationState
  {
  public:
    AWS_INSPECTOR2_API EcrRescanDurationState() = default;
    AWS_INSPECTOR2_API EcrRescanDurationState(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API EcrRescanDurationState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The rescan duration configured for image push date. </p>
     */
    inline EcrRescanDuration GetRescanDuration() const { return m_rescanDuration; }
    inline bool RescanDurationHasBeenSet() const { return m_rescanDurationHasBeenSet; }
    inline void SetRescanDuration(EcrRescanDuration value) { m_rescanDurationHasBeenSet = true; m_rescanDuration = value; }
    inline EcrRescanDurationState& WithRescanDuration(EcrRescanDuration value) { SetRescanDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of changes to the ECR automated re-scan duration.</p>
     */
    inline EcrRescanDurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EcrRescanDurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EcrRescanDurationState& WithStatus(EcrRescanDurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp representing when the last time the ECR scan duration setting was
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    EcrRescanDurationState& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rescan duration configured for image pull date.</p>
     */
    inline EcrPullDateRescanDuration GetPullDateRescanDuration() const { return m_pullDateRescanDuration; }
    inline bool PullDateRescanDurationHasBeenSet() const { return m_pullDateRescanDurationHasBeenSet; }
    inline void SetPullDateRescanDuration(EcrPullDateRescanDuration value) { m_pullDateRescanDurationHasBeenSet = true; m_pullDateRescanDuration = value; }
    inline EcrRescanDurationState& WithPullDateRescanDuration(EcrPullDateRescanDuration value) { SetPullDateRescanDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pull date for the re-scan mode.</p>
     */
    inline EcrPullDateRescanMode GetPullDateRescanMode() const { return m_pullDateRescanMode; }
    inline bool PullDateRescanModeHasBeenSet() const { return m_pullDateRescanModeHasBeenSet; }
    inline void SetPullDateRescanMode(EcrPullDateRescanMode value) { m_pullDateRescanModeHasBeenSet = true; m_pullDateRescanMode = value; }
    inline EcrRescanDurationState& WithPullDateRescanMode(EcrPullDateRescanMode value) { SetPullDateRescanMode(value); return *this;}
    ///@}
  private:

    EcrRescanDuration m_rescanDuration{EcrRescanDuration::NOT_SET};
    bool m_rescanDurationHasBeenSet = false;

    EcrRescanDurationStatus m_status{EcrRescanDurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    EcrPullDateRescanDuration m_pullDateRescanDuration{EcrPullDateRescanDuration::NOT_SET};
    bool m_pullDateRescanDurationHasBeenSet = false;

    EcrPullDateRescanMode m_pullDateRescanMode{EcrPullDateRescanMode::NOT_SET};
    bool m_pullDateRescanModeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
