/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/AppflowIntegration.h>
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
   * <p>Configuration data for integration workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/IntegrationConfig">AWS
   * API Reference</a></p>
   */
  class IntegrationConfig
  {
  public:
    AWS_CUSTOMERPROFILES_API IntegrationConfig();
    AWS_CUSTOMERPROFILES_API IntegrationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API IntegrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration data for <code>APPFLOW_INTEGRATION</code> workflow type.</p>
     */
    inline const AppflowIntegration& GetAppflowIntegration() const{ return m_appflowIntegration; }
    inline bool AppflowIntegrationHasBeenSet() const { return m_appflowIntegrationHasBeenSet; }
    inline void SetAppflowIntegration(const AppflowIntegration& value) { m_appflowIntegrationHasBeenSet = true; m_appflowIntegration = value; }
    inline void SetAppflowIntegration(AppflowIntegration&& value) { m_appflowIntegrationHasBeenSet = true; m_appflowIntegration = std::move(value); }
    inline IntegrationConfig& WithAppflowIntegration(const AppflowIntegration& value) { SetAppflowIntegration(value); return *this;}
    inline IntegrationConfig& WithAppflowIntegration(AppflowIntegration&& value) { SetAppflowIntegration(std::move(value)); return *this;}
    ///@}
  private:

    AppflowIntegration m_appflowIntegration;
    bool m_appflowIntegrationHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
