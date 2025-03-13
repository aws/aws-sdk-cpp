/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ComplianceType.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceDetailsByConfigRuleRequest">AWS
   * API Reference</a></p>
   */
  class GetComplianceDetailsByConfigRuleRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API GetComplianceDetailsByConfigRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComplianceDetailsByConfigRule"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Config rule for which you want compliance information.</p>
     */
    inline const Aws::String& GetConfigRuleName() const { return m_configRuleName; }
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }
    template<typename ConfigRuleNameT = Aws::String>
    void SetConfigRuleName(ConfigRuleNameT&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::forward<ConfigRuleNameT>(value); }
    template<typename ConfigRuleNameT = Aws::String>
    GetComplianceDetailsByConfigRuleRequest& WithConfigRuleName(ConfigRuleNameT&& value) { SetConfigRuleName(std::forward<ConfigRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results by compliance.</p> <p> <code>INSUFFICIENT_DATA</code> is
     * a valid <code>ComplianceType</code> that is returned when an Config rule cannot
     * be evaluated. However, <code>INSUFFICIENT_DATA</code> cannot be used as a
     * <code>ComplianceType</code> for filtering results.</p>
     */
    inline const Aws::Vector<ComplianceType>& GetComplianceTypes() const { return m_complianceTypes; }
    inline bool ComplianceTypesHasBeenSet() const { return m_complianceTypesHasBeenSet; }
    template<typename ComplianceTypesT = Aws::Vector<ComplianceType>>
    void SetComplianceTypes(ComplianceTypesT&& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes = std::forward<ComplianceTypesT>(value); }
    template<typename ComplianceTypesT = Aws::Vector<ComplianceType>>
    GetComplianceDetailsByConfigRuleRequest& WithComplianceTypes(ComplianceTypesT&& value) { SetComplianceTypes(std::forward<ComplianceTypesT>(value)); return *this;}
    inline GetComplianceDetailsByConfigRuleRequest& AddComplianceTypes(ComplianceType value) { m_complianceTypesHasBeenSet = true; m_complianceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 10. You cannot specify a number greater than 100. If you specify 0, Config
     * uses the default.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetComplianceDetailsByConfigRuleRequest& WithLimit(int value) { SetLimit(value); return *this;}
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
    GetComplianceDetailsByConfigRuleRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    Aws::Vector<ComplianceType> m_complianceTypes;
    bool m_complianceTypesHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
