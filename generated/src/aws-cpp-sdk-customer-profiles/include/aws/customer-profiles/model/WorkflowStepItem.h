﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/AppflowIntegrationWorkflowStep.h>
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
   * <p>List containing steps in workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/WorkflowStepItem">AWS
   * API Reference</a></p>
   */
  class WorkflowStepItem
  {
  public:
    AWS_CUSTOMERPROFILES_API WorkflowStepItem() = default;
    AWS_CUSTOMERPROFILES_API WorkflowStepItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API WorkflowStepItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Workflow step information specific to <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline const AppflowIntegrationWorkflowStep& GetAppflowIntegration() const { return m_appflowIntegration; }
    inline bool AppflowIntegrationHasBeenSet() const { return m_appflowIntegrationHasBeenSet; }
    template<typename AppflowIntegrationT = AppflowIntegrationWorkflowStep>
    void SetAppflowIntegration(AppflowIntegrationT&& value) { m_appflowIntegrationHasBeenSet = true; m_appflowIntegration = std::forward<AppflowIntegrationT>(value); }
    template<typename AppflowIntegrationT = AppflowIntegrationWorkflowStep>
    WorkflowStepItem& WithAppflowIntegration(AppflowIntegrationT&& value) { SetAppflowIntegration(std::forward<AppflowIntegrationT>(value)); return *this;}
    ///@}
  private:

    AppflowIntegrationWorkflowStep m_appflowIntegration;
    bool m_appflowIntegrationHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
