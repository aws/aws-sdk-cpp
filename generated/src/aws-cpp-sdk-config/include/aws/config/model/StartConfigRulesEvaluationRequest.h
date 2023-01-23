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
    AWS_CONFIGSERVICE_API StartConfigRulesEvaluationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartConfigRulesEvaluation"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The list of names of Config rules that you want to run evaluations for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigRuleNames() const{ return m_configRuleNames; }

    /**
     * <p>The list of names of Config rules that you want to run evaluations for.</p>
     */
    inline bool ConfigRuleNamesHasBeenSet() const { return m_configRuleNamesHasBeenSet; }

    /**
     * <p>The list of names of Config rules that you want to run evaluations for.</p>
     */
    inline void SetConfigRuleNames(const Aws::Vector<Aws::String>& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = value; }

    /**
     * <p>The list of names of Config rules that you want to run evaluations for.</p>
     */
    inline void SetConfigRuleNames(Aws::Vector<Aws::String>&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = std::move(value); }

    /**
     * <p>The list of names of Config rules that you want to run evaluations for.</p>
     */
    inline StartConfigRulesEvaluationRequest& WithConfigRuleNames(const Aws::Vector<Aws::String>& value) { SetConfigRuleNames(value); return *this;}

    /**
     * <p>The list of names of Config rules that you want to run evaluations for.</p>
     */
    inline StartConfigRulesEvaluationRequest& WithConfigRuleNames(Aws::Vector<Aws::String>&& value) { SetConfigRuleNames(std::move(value)); return *this;}

    /**
     * <p>The list of names of Config rules that you want to run evaluations for.</p>
     */
    inline StartConfigRulesEvaluationRequest& AddConfigRuleNames(const Aws::String& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(value); return *this; }

    /**
     * <p>The list of names of Config rules that you want to run evaluations for.</p>
     */
    inline StartConfigRulesEvaluationRequest& AddConfigRuleNames(Aws::String&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of names of Config rules that you want to run evaluations for.</p>
     */
    inline StartConfigRulesEvaluationRequest& AddConfigRuleNames(const char* value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_configRuleNames;
    bool m_configRuleNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
