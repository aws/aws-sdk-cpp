/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/AppflowIntegrationWorkflowMetrics.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Generic object containing workflow execution metrics.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/WorkflowMetrics">AWS
   * API Reference</a></p>
   */
  class WorkflowMetrics
  {
  public:
    AWS_CUSTOMERPROFILES_API WorkflowMetrics();
    AWS_CUSTOMERPROFILES_API WorkflowMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API WorkflowMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Workflow execution metrics for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline const AppflowIntegrationWorkflowMetrics& GetAppflowIntegration() const{ return m_appflowIntegration; }

    /**
     * <p>Workflow execution metrics for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline bool AppflowIntegrationHasBeenSet() const { return m_appflowIntegrationHasBeenSet; }

    /**
     * <p>Workflow execution metrics for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetAppflowIntegration(const AppflowIntegrationWorkflowMetrics& value) { m_appflowIntegrationHasBeenSet = true; m_appflowIntegration = value; }

    /**
     * <p>Workflow execution metrics for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetAppflowIntegration(AppflowIntegrationWorkflowMetrics&& value) { m_appflowIntegrationHasBeenSet = true; m_appflowIntegration = std::move(value); }

    /**
     * <p>Workflow execution metrics for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline WorkflowMetrics& WithAppflowIntegration(const AppflowIntegrationWorkflowMetrics& value) { SetAppflowIntegration(value); return *this;}

    /**
     * <p>Workflow execution metrics for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline WorkflowMetrics& WithAppflowIntegration(AppflowIntegrationWorkflowMetrics&& value) { SetAppflowIntegration(std::move(value)); return *this;}

  private:

    AppflowIntegrationWorkflowMetrics m_appflowIntegration;
    bool m_appflowIntegrationHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
