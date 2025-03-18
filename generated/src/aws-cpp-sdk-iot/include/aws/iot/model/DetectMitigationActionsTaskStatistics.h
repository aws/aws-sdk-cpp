/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>

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
namespace IoT
{
namespace Model
{

  /**
   * <p> The statistics of a mitigation action task. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetectMitigationActionsTaskStatistics">AWS
   * API Reference</a></p>
   */
  class DetectMitigationActionsTaskStatistics
  {
  public:
    AWS_IOT_API DetectMitigationActionsTaskStatistics() = default;
    AWS_IOT_API DetectMitigationActionsTaskStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API DetectMitigationActionsTaskStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The actions that were performed. </p>
     */
    inline long long GetActionsExecuted() const { return m_actionsExecuted; }
    inline bool ActionsExecutedHasBeenSet() const { return m_actionsExecutedHasBeenSet; }
    inline void SetActionsExecuted(long long value) { m_actionsExecutedHasBeenSet = true; m_actionsExecuted = value; }
    inline DetectMitigationActionsTaskStatistics& WithActionsExecuted(long long value) { SetActionsExecuted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The actions that were skipped. </p>
     */
    inline long long GetActionsSkipped() const { return m_actionsSkipped; }
    inline bool ActionsSkippedHasBeenSet() const { return m_actionsSkippedHasBeenSet; }
    inline void SetActionsSkipped(long long value) { m_actionsSkippedHasBeenSet = true; m_actionsSkipped = value; }
    inline DetectMitigationActionsTaskStatistics& WithActionsSkipped(long long value) { SetActionsSkipped(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The actions that failed. </p>
     */
    inline long long GetActionsFailed() const { return m_actionsFailed; }
    inline bool ActionsFailedHasBeenSet() const { return m_actionsFailedHasBeenSet; }
    inline void SetActionsFailed(long long value) { m_actionsFailedHasBeenSet = true; m_actionsFailed = value; }
    inline DetectMitigationActionsTaskStatistics& WithActionsFailed(long long value) { SetActionsFailed(value); return *this;}
    ///@}
  private:

    long long m_actionsExecuted{0};
    bool m_actionsExecutedHasBeenSet = false;

    long long m_actionsSkipped{0};
    bool m_actionsSkippedHasBeenSet = false;

    long long m_actionsFailed{0};
    bool m_actionsFailedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
