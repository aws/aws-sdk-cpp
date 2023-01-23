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
    AWS_IOT_API DetectMitigationActionsTaskStatistics();
    AWS_IOT_API DetectMitigationActionsTaskStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API DetectMitigationActionsTaskStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The actions that were performed. </p>
     */
    inline long long GetActionsExecuted() const{ return m_actionsExecuted; }

    /**
     * <p> The actions that were performed. </p>
     */
    inline bool ActionsExecutedHasBeenSet() const { return m_actionsExecutedHasBeenSet; }

    /**
     * <p> The actions that were performed. </p>
     */
    inline void SetActionsExecuted(long long value) { m_actionsExecutedHasBeenSet = true; m_actionsExecuted = value; }

    /**
     * <p> The actions that were performed. </p>
     */
    inline DetectMitigationActionsTaskStatistics& WithActionsExecuted(long long value) { SetActionsExecuted(value); return *this;}


    /**
     * <p> The actions that were skipped. </p>
     */
    inline long long GetActionsSkipped() const{ return m_actionsSkipped; }

    /**
     * <p> The actions that were skipped. </p>
     */
    inline bool ActionsSkippedHasBeenSet() const { return m_actionsSkippedHasBeenSet; }

    /**
     * <p> The actions that were skipped. </p>
     */
    inline void SetActionsSkipped(long long value) { m_actionsSkippedHasBeenSet = true; m_actionsSkipped = value; }

    /**
     * <p> The actions that were skipped. </p>
     */
    inline DetectMitigationActionsTaskStatistics& WithActionsSkipped(long long value) { SetActionsSkipped(value); return *this;}


    /**
     * <p> The actions that failed. </p>
     */
    inline long long GetActionsFailed() const{ return m_actionsFailed; }

    /**
     * <p> The actions that failed. </p>
     */
    inline bool ActionsFailedHasBeenSet() const { return m_actionsFailedHasBeenSet; }

    /**
     * <p> The actions that failed. </p>
     */
    inline void SetActionsFailed(long long value) { m_actionsFailedHasBeenSet = true; m_actionsFailed = value; }

    /**
     * <p> The actions that failed. </p>
     */
    inline DetectMitigationActionsTaskStatistics& WithActionsFailed(long long value) { SetActionsFailed(value); return *this;}

  private:

    long long m_actionsExecuted;
    bool m_actionsExecutedHasBeenSet = false;

    long long m_actionsSkipped;
    bool m_actionsSkippedHasBeenSet = false;

    long long m_actionsFailed;
    bool m_actionsFailedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
