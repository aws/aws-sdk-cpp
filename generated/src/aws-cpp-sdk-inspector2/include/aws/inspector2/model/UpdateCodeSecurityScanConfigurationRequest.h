﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CodeSecurityScanConfiguration.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class UpdateCodeSecurityScanConfigurationRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API UpdateCodeSecurityScanConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCodeSecurityScanConfiguration"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scan configuration to update.</p>
     */
    inline const Aws::String& GetScanConfigurationArn() const { return m_scanConfigurationArn; }
    inline bool ScanConfigurationArnHasBeenSet() const { return m_scanConfigurationArnHasBeenSet; }
    template<typename ScanConfigurationArnT = Aws::String>
    void SetScanConfigurationArn(ScanConfigurationArnT&& value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn = std::forward<ScanConfigurationArnT>(value); }
    template<typename ScanConfigurationArnT = Aws::String>
    UpdateCodeSecurityScanConfigurationRequest& WithScanConfigurationArn(ScanConfigurationArnT&& value) { SetScanConfigurationArn(std::forward<ScanConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated configuration settings for the code security scan.</p>
     */
    inline const CodeSecurityScanConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = CodeSecurityScanConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = CodeSecurityScanConfiguration>
    UpdateCodeSecurityScanConfigurationRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scanConfigurationArn;
    bool m_scanConfigurationArnHasBeenSet = false;

    CodeSecurityScanConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
