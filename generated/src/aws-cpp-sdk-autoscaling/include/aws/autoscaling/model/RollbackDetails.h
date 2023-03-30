/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/autoscaling/model/InstanceRefreshProgressDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Details about an instance refresh rollback.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/RollbackDetails">AWS
   * API Reference</a></p>
   */
  class RollbackDetails
  {
  public:
    AWS_AUTOSCALING_API RollbackDetails();
    AWS_AUTOSCALING_API RollbackDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API RollbackDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The reason for this instance refresh rollback (for example, whether a manual
     * or automatic rollback was initiated).</p>
     */
    inline const Aws::String& GetRollbackReason() const{ return m_rollbackReason; }

    /**
     * <p>The reason for this instance refresh rollback (for example, whether a manual
     * or automatic rollback was initiated).</p>
     */
    inline bool RollbackReasonHasBeenSet() const { return m_rollbackReasonHasBeenSet; }

    /**
     * <p>The reason for this instance refresh rollback (for example, whether a manual
     * or automatic rollback was initiated).</p>
     */
    inline void SetRollbackReason(const Aws::String& value) { m_rollbackReasonHasBeenSet = true; m_rollbackReason = value; }

    /**
     * <p>The reason for this instance refresh rollback (for example, whether a manual
     * or automatic rollback was initiated).</p>
     */
    inline void SetRollbackReason(Aws::String&& value) { m_rollbackReasonHasBeenSet = true; m_rollbackReason = std::move(value); }

    /**
     * <p>The reason for this instance refresh rollback (for example, whether a manual
     * or automatic rollback was initiated).</p>
     */
    inline void SetRollbackReason(const char* value) { m_rollbackReasonHasBeenSet = true; m_rollbackReason.assign(value); }

    /**
     * <p>The reason for this instance refresh rollback (for example, whether a manual
     * or automatic rollback was initiated).</p>
     */
    inline RollbackDetails& WithRollbackReason(const Aws::String& value) { SetRollbackReason(value); return *this;}

    /**
     * <p>The reason for this instance refresh rollback (for example, whether a manual
     * or automatic rollback was initiated).</p>
     */
    inline RollbackDetails& WithRollbackReason(Aws::String&& value) { SetRollbackReason(std::move(value)); return *this;}

    /**
     * <p>The reason for this instance refresh rollback (for example, whether a manual
     * or automatic rollback was initiated).</p>
     */
    inline RollbackDetails& WithRollbackReason(const char* value) { SetRollbackReason(value); return *this;}


    /**
     * <p>The date and time at which the rollback began.</p>
     */
    inline const Aws::Utils::DateTime& GetRollbackStartTime() const{ return m_rollbackStartTime; }

    /**
     * <p>The date and time at which the rollback began.</p>
     */
    inline bool RollbackStartTimeHasBeenSet() const { return m_rollbackStartTimeHasBeenSet; }

    /**
     * <p>The date and time at which the rollback began.</p>
     */
    inline void SetRollbackStartTime(const Aws::Utils::DateTime& value) { m_rollbackStartTimeHasBeenSet = true; m_rollbackStartTime = value; }

    /**
     * <p>The date and time at which the rollback began.</p>
     */
    inline void SetRollbackStartTime(Aws::Utils::DateTime&& value) { m_rollbackStartTimeHasBeenSet = true; m_rollbackStartTime = std::move(value); }

    /**
     * <p>The date and time at which the rollback began.</p>
     */
    inline RollbackDetails& WithRollbackStartTime(const Aws::Utils::DateTime& value) { SetRollbackStartTime(value); return *this;}

    /**
     * <p>The date and time at which the rollback began.</p>
     */
    inline RollbackDetails& WithRollbackStartTime(Aws::Utils::DateTime&& value) { SetRollbackStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the value of <code>PercentageComplete</code> at the time the
     * rollback started.</p>
     */
    inline int GetPercentageCompleteOnRollback() const{ return m_percentageCompleteOnRollback; }

    /**
     * <p>Indicates the value of <code>PercentageComplete</code> at the time the
     * rollback started.</p>
     */
    inline bool PercentageCompleteOnRollbackHasBeenSet() const { return m_percentageCompleteOnRollbackHasBeenSet; }

    /**
     * <p>Indicates the value of <code>PercentageComplete</code> at the time the
     * rollback started.</p>
     */
    inline void SetPercentageCompleteOnRollback(int value) { m_percentageCompleteOnRollbackHasBeenSet = true; m_percentageCompleteOnRollback = value; }

    /**
     * <p>Indicates the value of <code>PercentageComplete</code> at the time the
     * rollback started.</p>
     */
    inline RollbackDetails& WithPercentageCompleteOnRollback(int value) { SetPercentageCompleteOnRollback(value); return *this;}


    /**
     * <p>Indicates the value of <code>InstancesToUpdate</code> at the time the
     * rollback started.</p>
     */
    inline int GetInstancesToUpdateOnRollback() const{ return m_instancesToUpdateOnRollback; }

    /**
     * <p>Indicates the value of <code>InstancesToUpdate</code> at the time the
     * rollback started.</p>
     */
    inline bool InstancesToUpdateOnRollbackHasBeenSet() const { return m_instancesToUpdateOnRollbackHasBeenSet; }

    /**
     * <p>Indicates the value of <code>InstancesToUpdate</code> at the time the
     * rollback started.</p>
     */
    inline void SetInstancesToUpdateOnRollback(int value) { m_instancesToUpdateOnRollbackHasBeenSet = true; m_instancesToUpdateOnRollback = value; }

    /**
     * <p>Indicates the value of <code>InstancesToUpdate</code> at the time the
     * rollback started.</p>
     */
    inline RollbackDetails& WithInstancesToUpdateOnRollback(int value) { SetInstancesToUpdateOnRollback(value); return *this;}


    /**
     * <p>Reports progress on replacing instances in an Auto Scaling group that has a
     * warm pool. This includes separate details for instances in the warm pool and
     * instances in the Auto Scaling group (the live pool).</p>
     */
    inline const InstanceRefreshProgressDetails& GetProgressDetailsOnRollback() const{ return m_progressDetailsOnRollback; }

    /**
     * <p>Reports progress on replacing instances in an Auto Scaling group that has a
     * warm pool. This includes separate details for instances in the warm pool and
     * instances in the Auto Scaling group (the live pool).</p>
     */
    inline bool ProgressDetailsOnRollbackHasBeenSet() const { return m_progressDetailsOnRollbackHasBeenSet; }

    /**
     * <p>Reports progress on replacing instances in an Auto Scaling group that has a
     * warm pool. This includes separate details for instances in the warm pool and
     * instances in the Auto Scaling group (the live pool).</p>
     */
    inline void SetProgressDetailsOnRollback(const InstanceRefreshProgressDetails& value) { m_progressDetailsOnRollbackHasBeenSet = true; m_progressDetailsOnRollback = value; }

    /**
     * <p>Reports progress on replacing instances in an Auto Scaling group that has a
     * warm pool. This includes separate details for instances in the warm pool and
     * instances in the Auto Scaling group (the live pool).</p>
     */
    inline void SetProgressDetailsOnRollback(InstanceRefreshProgressDetails&& value) { m_progressDetailsOnRollbackHasBeenSet = true; m_progressDetailsOnRollback = std::move(value); }

    /**
     * <p>Reports progress on replacing instances in an Auto Scaling group that has a
     * warm pool. This includes separate details for instances in the warm pool and
     * instances in the Auto Scaling group (the live pool).</p>
     */
    inline RollbackDetails& WithProgressDetailsOnRollback(const InstanceRefreshProgressDetails& value) { SetProgressDetailsOnRollback(value); return *this;}

    /**
     * <p>Reports progress on replacing instances in an Auto Scaling group that has a
     * warm pool. This includes separate details for instances in the warm pool and
     * instances in the Auto Scaling group (the live pool).</p>
     */
    inline RollbackDetails& WithProgressDetailsOnRollback(InstanceRefreshProgressDetails&& value) { SetProgressDetailsOnRollback(std::move(value)); return *this;}

  private:

    Aws::String m_rollbackReason;
    bool m_rollbackReasonHasBeenSet = false;

    Aws::Utils::DateTime m_rollbackStartTime;
    bool m_rollbackStartTimeHasBeenSet = false;

    int m_percentageCompleteOnRollback;
    bool m_percentageCompleteOnRollbackHasBeenSet = false;

    int m_instancesToUpdateOnRollback;
    bool m_instancesToUpdateOnRollbackHasBeenSet = false;

    InstanceRefreshProgressDetails m_progressDetailsOnRollback;
    bool m_progressDetailsOnRollbackHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
