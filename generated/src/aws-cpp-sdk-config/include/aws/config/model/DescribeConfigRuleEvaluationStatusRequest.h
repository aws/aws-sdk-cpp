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
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRuleEvaluationStatusRequest">AWS
   * API Reference</a></p>
   */
  class DescribeConfigRuleEvaluationStatusRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigRuleEvaluationStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigRuleEvaluationStatus"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Config managed rules for which you want status information.
     * If you do not specify any names, Config returns status information for all
     * Config managed rules that you use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigRuleNames() const { return m_configRuleNames; }
    inline bool ConfigRuleNamesHasBeenSet() const { return m_configRuleNamesHasBeenSet; }
    template<typename ConfigRuleNamesT = Aws::Vector<Aws::String>>
    void SetConfigRuleNames(ConfigRuleNamesT&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = std::forward<ConfigRuleNamesT>(value); }
    template<typename ConfigRuleNamesT = Aws::Vector<Aws::String>>
    DescribeConfigRuleEvaluationStatusRequest& WithConfigRuleNames(ConfigRuleNamesT&& value) { SetConfigRuleNames(std::forward<ConfigRuleNamesT>(value)); return *this;}
    template<typename ConfigRuleNamesT = Aws::String>
    DescribeConfigRuleEvaluationStatusRequest& AddConfigRuleNames(ConfigRuleNamesT&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.emplace_back(std::forward<ConfigRuleNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeConfigRuleEvaluationStatusRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rule evaluation results that you want returned.</p> <p>This
     * parameter is required if the rule limit for your account is more than the
     * default of 1000 rules.</p> <p>For information about requesting a rule limit
     * increase, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_config">Config
     * Limits</a> in the <i>Amazon Web Services General Reference Guide</i>.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeConfigRuleEvaluationStatusRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_configRuleNames;
    bool m_configRuleNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
