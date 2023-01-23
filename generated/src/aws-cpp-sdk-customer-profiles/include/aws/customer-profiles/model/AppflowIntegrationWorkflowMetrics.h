/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Workflow specific execution metrics for <code>APPFLOW_INTEGRATION</code>
   * workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/AppflowIntegrationWorkflowMetrics">AWS
   * API Reference</a></p>
   */
  class AppflowIntegrationWorkflowMetrics
  {
  public:
    AWS_CUSTOMERPROFILES_API AppflowIntegrationWorkflowMetrics();
    AWS_CUSTOMERPROFILES_API AppflowIntegrationWorkflowMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API AppflowIntegrationWorkflowMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Number of records processed in <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline long long GetRecordsProcessed() const{ return m_recordsProcessed; }

    /**
     * <p>Number of records processed in <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline bool RecordsProcessedHasBeenSet() const { return m_recordsProcessedHasBeenSet; }

    /**
     * <p>Number of records processed in <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetRecordsProcessed(long long value) { m_recordsProcessedHasBeenSet = true; m_recordsProcessed = value; }

    /**
     * <p>Number of records processed in <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline AppflowIntegrationWorkflowMetrics& WithRecordsProcessed(long long value) { SetRecordsProcessed(value); return *this;}


    /**
     * <p>Total steps completed in <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline long long GetStepsCompleted() const{ return m_stepsCompleted; }

    /**
     * <p>Total steps completed in <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline bool StepsCompletedHasBeenSet() const { return m_stepsCompletedHasBeenSet; }

    /**
     * <p>Total steps completed in <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetStepsCompleted(long long value) { m_stepsCompletedHasBeenSet = true; m_stepsCompleted = value; }

    /**
     * <p>Total steps completed in <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline AppflowIntegrationWorkflowMetrics& WithStepsCompleted(long long value) { SetStepsCompleted(value); return *this;}


    /**
     * <p>Total steps in <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline long long GetTotalSteps() const{ return m_totalSteps; }

    /**
     * <p>Total steps in <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline bool TotalStepsHasBeenSet() const { return m_totalStepsHasBeenSet; }

    /**
     * <p>Total steps in <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetTotalSteps(long long value) { m_totalStepsHasBeenSet = true; m_totalSteps = value; }

    /**
     * <p>Total steps in <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline AppflowIntegrationWorkflowMetrics& WithTotalSteps(long long value) { SetTotalSteps(value); return *this;}

  private:

    long long m_recordsProcessed;
    bool m_recordsProcessedHasBeenSet = false;

    long long m_stepsCompleted;
    bool m_stepsCompletedHasBeenSet = false;

    long long m_totalSteps;
    bool m_totalStepsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
