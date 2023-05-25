/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/EcrRescanDuration.h>
#include <aws/inspector2/model/EcrRescanDurationStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Details about the state of any changes to the ECR automated re-scan duration
   * setting.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/EcrRescanDurationState">AWS
   * API Reference</a></p>
   */
  class EcrRescanDurationState
  {
  public:
    AWS_INSPECTOR2_API EcrRescanDurationState();
    AWS_INSPECTOR2_API EcrRescanDurationState(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API EcrRescanDurationState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ECR automated re-scan duration defines how long an ECR image will be
     * actively scanned by Amazon Inspector. When the number of days since an image was
     * last pushed exceeds the automated re-scan duration the monitoring state of that
     * image becomes <code>inactive</code> and all associated findings are scheduled
     * for closure.</p>
     */
    inline const EcrRescanDuration& GetRescanDuration() const{ return m_rescanDuration; }

    /**
     * <p>The ECR automated re-scan duration defines how long an ECR image will be
     * actively scanned by Amazon Inspector. When the number of days since an image was
     * last pushed exceeds the automated re-scan duration the monitoring state of that
     * image becomes <code>inactive</code> and all associated findings are scheduled
     * for closure.</p>
     */
    inline bool RescanDurationHasBeenSet() const { return m_rescanDurationHasBeenSet; }

    /**
     * <p>The ECR automated re-scan duration defines how long an ECR image will be
     * actively scanned by Amazon Inspector. When the number of days since an image was
     * last pushed exceeds the automated re-scan duration the monitoring state of that
     * image becomes <code>inactive</code> and all associated findings are scheduled
     * for closure.</p>
     */
    inline void SetRescanDuration(const EcrRescanDuration& value) { m_rescanDurationHasBeenSet = true; m_rescanDuration = value; }

    /**
     * <p>The ECR automated re-scan duration defines how long an ECR image will be
     * actively scanned by Amazon Inspector. When the number of days since an image was
     * last pushed exceeds the automated re-scan duration the monitoring state of that
     * image becomes <code>inactive</code> and all associated findings are scheduled
     * for closure.</p>
     */
    inline void SetRescanDuration(EcrRescanDuration&& value) { m_rescanDurationHasBeenSet = true; m_rescanDuration = std::move(value); }

    /**
     * <p>The ECR automated re-scan duration defines how long an ECR image will be
     * actively scanned by Amazon Inspector. When the number of days since an image was
     * last pushed exceeds the automated re-scan duration the monitoring state of that
     * image becomes <code>inactive</code> and all associated findings are scheduled
     * for closure.</p>
     */
    inline EcrRescanDurationState& WithRescanDuration(const EcrRescanDuration& value) { SetRescanDuration(value); return *this;}

    /**
     * <p>The ECR automated re-scan duration defines how long an ECR image will be
     * actively scanned by Amazon Inspector. When the number of days since an image was
     * last pushed exceeds the automated re-scan duration the monitoring state of that
     * image becomes <code>inactive</code> and all associated findings are scheduled
     * for closure.</p>
     */
    inline EcrRescanDurationState& WithRescanDuration(EcrRescanDuration&& value) { SetRescanDuration(std::move(value)); return *this;}


    /**
     * <p>The status of changes to the ECR automated re-scan duration.</p>
     */
    inline const EcrRescanDurationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of changes to the ECR automated re-scan duration.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of changes to the ECR automated re-scan duration.</p>
     */
    inline void SetStatus(const EcrRescanDurationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of changes to the ECR automated re-scan duration.</p>
     */
    inline void SetStatus(EcrRescanDurationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of changes to the ECR automated re-scan duration.</p>
     */
    inline EcrRescanDurationState& WithStatus(const EcrRescanDurationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of changes to the ECR automated re-scan duration.</p>
     */
    inline EcrRescanDurationState& WithStatus(EcrRescanDurationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A timestamp representing when the last time the ECR scan duration setting was
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>A timestamp representing when the last time the ECR scan duration setting was
     * changed.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>A timestamp representing when the last time the ECR scan duration setting was
     * changed.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>A timestamp representing when the last time the ECR scan duration setting was
     * changed.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>A timestamp representing when the last time the ECR scan duration setting was
     * changed.</p>
     */
    inline EcrRescanDurationState& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>A timestamp representing when the last time the ECR scan duration setting was
     * changed.</p>
     */
    inline EcrRescanDurationState& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    EcrRescanDuration m_rescanDuration;
    bool m_rescanDurationHasBeenSet = false;

    EcrRescanDurationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
