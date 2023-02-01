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
    AWS_CONFIGSERVICE_API GetComplianceDetailsByConfigRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComplianceDetailsByConfigRule"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Config rule for which you want compliance information.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The name of the Config rule for which you want compliance information.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>The name of the Config rule for which you want compliance information.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name of the Config rule for which you want compliance information.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>The name of the Config rule for which you want compliance information.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The name of the Config rule for which you want compliance information.</p>
     */
    inline GetComplianceDetailsByConfigRuleRequest& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name of the Config rule for which you want compliance information.</p>
     */
    inline GetComplianceDetailsByConfigRuleRequest& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the Config rule for which you want compliance information.</p>
     */
    inline GetComplianceDetailsByConfigRuleRequest& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code>.</p>
     */
    inline const Aws::Vector<ComplianceType>& GetComplianceTypes() const{ return m_complianceTypes; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code>.</p>
     */
    inline bool ComplianceTypesHasBeenSet() const { return m_complianceTypesHasBeenSet; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code>.</p>
     */
    inline void SetComplianceTypes(const Aws::Vector<ComplianceType>& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes = value; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code>.</p>
     */
    inline void SetComplianceTypes(Aws::Vector<ComplianceType>&& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes = std::move(value); }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code>.</p>
     */
    inline GetComplianceDetailsByConfigRuleRequest& WithComplianceTypes(const Aws::Vector<ComplianceType>& value) { SetComplianceTypes(value); return *this;}

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code>.</p>
     */
    inline GetComplianceDetailsByConfigRuleRequest& WithComplianceTypes(Aws::Vector<ComplianceType>&& value) { SetComplianceTypes(std::move(value)); return *this;}

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code>.</p>
     */
    inline GetComplianceDetailsByConfigRuleRequest& AddComplianceTypes(const ComplianceType& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes.push_back(value); return *this; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code>.</p>
     */
    inline GetComplianceDetailsByConfigRuleRequest& AddComplianceTypes(ComplianceType&& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 10. You cannot specify a number greater than 100. If you specify 0, Config
     * uses the default.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 10. You cannot specify a number greater than 100. If you specify 0, Config
     * uses the default.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 10. You cannot specify a number greater than 100. If you specify 0, Config
     * uses the default.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 10. You cannot specify a number greater than 100. If you specify 0, Config
     * uses the default.</p>
     */
    inline GetComplianceDetailsByConfigRuleRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline GetComplianceDetailsByConfigRuleRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline GetComplianceDetailsByConfigRuleRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline GetComplianceDetailsByConfigRuleRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet = false;

    Aws::Vector<ComplianceType> m_complianceTypes;
    bool m_complianceTypesHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
