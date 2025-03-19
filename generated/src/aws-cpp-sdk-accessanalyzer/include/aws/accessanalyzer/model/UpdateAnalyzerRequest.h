/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/AnalyzerConfiguration.h>
#include <utility>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

  /**
   */
  class UpdateAnalyzerRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API UpdateAnalyzerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAnalyzer"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the analyzer to modify.</p>
     */
    inline const Aws::String& GetAnalyzerName() const { return m_analyzerName; }
    inline bool AnalyzerNameHasBeenSet() const { return m_analyzerNameHasBeenSet; }
    template<typename AnalyzerNameT = Aws::String>
    void SetAnalyzerName(AnalyzerNameT&& value) { m_analyzerNameHasBeenSet = true; m_analyzerName = std::forward<AnalyzerNameT>(value); }
    template<typename AnalyzerNameT = Aws::String>
    UpdateAnalyzerRequest& WithAnalyzerName(AnalyzerNameT&& value) { SetAnalyzerName(std::forward<AnalyzerNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AnalyzerConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = AnalyzerConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = AnalyzerConfiguration>
    UpdateAnalyzerRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_analyzerName;
    bool m_analyzerNameHasBeenSet = false;

    AnalyzerConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
