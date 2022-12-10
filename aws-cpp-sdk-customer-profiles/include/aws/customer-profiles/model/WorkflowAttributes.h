/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/AppflowIntegrationWorkflowAttributes.h>
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
   * <p>Structure to hold workflow attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/WorkflowAttributes">AWS
   * API Reference</a></p>
   */
  class WorkflowAttributes
  {
  public:
    AWS_CUSTOMERPROFILES_API WorkflowAttributes();
    AWS_CUSTOMERPROFILES_API WorkflowAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API WorkflowAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Workflow attributes specific to <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline const AppflowIntegrationWorkflowAttributes& GetAppflowIntegration() const{ return m_appflowIntegration; }

    /**
     * <p>Workflow attributes specific to <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline bool AppflowIntegrationHasBeenSet() const { return m_appflowIntegrationHasBeenSet; }

    /**
     * <p>Workflow attributes specific to <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline void SetAppflowIntegration(const AppflowIntegrationWorkflowAttributes& value) { m_appflowIntegrationHasBeenSet = true; m_appflowIntegration = value; }

    /**
     * <p>Workflow attributes specific to <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline void SetAppflowIntegration(AppflowIntegrationWorkflowAttributes&& value) { m_appflowIntegrationHasBeenSet = true; m_appflowIntegration = std::move(value); }

    /**
     * <p>Workflow attributes specific to <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline WorkflowAttributes& WithAppflowIntegration(const AppflowIntegrationWorkflowAttributes& value) { SetAppflowIntegration(value); return *this;}

    /**
     * <p>Workflow attributes specific to <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline WorkflowAttributes& WithAppflowIntegration(AppflowIntegrationWorkflowAttributes&& value) { SetAppflowIntegration(std::move(value)); return *this;}

  private:

    AppflowIntegrationWorkflowAttributes m_appflowIntegration;
    bool m_appflowIntegrationHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
