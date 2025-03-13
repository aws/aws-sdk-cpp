/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StartConfigRulesEvaluationRequest">AWS
   * API Reference</a></p>
   */
  class StartConfigRulesEvaluationRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API StartConfigRulesEvaluationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartConfigRulesEvaluation"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The list of names of Config rules that you want to run evaluations for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigRuleNames() const { return m_configRuleNames; }
    inline bool ConfigRuleNamesHasBeenSet() const { return m_configRuleNamesHasBeenSet; }
    template<typename ConfigRuleNamesT = Aws::Vector<Aws::String>>
    void SetConfigRuleNames(ConfigRuleNamesT&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = std::forward<ConfigRuleNamesT>(value); }
    template<typename ConfigRuleNamesT = Aws::Vector<Aws::String>>
    StartConfigRulesEvaluationRequest& WithConfigRuleNames(ConfigRuleNamesT&& value) { SetConfigRuleNames(std::forward<ConfigRuleNamesT>(value)); return *this;}
    template<typename ConfigRuleNamesT = Aws::String>
    StartConfigRulesEvaluationRequest& AddConfigRuleNames(ConfigRuleNamesT&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.emplace_back(std::forward<ConfigRuleNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_configRuleNames;
    bool m_configRuleNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
