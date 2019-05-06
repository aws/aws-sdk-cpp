/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ComplianceType.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class AWS_CONFIGSERVICE_API GetAggregateComplianceDetailsByConfigRuleRequest : public ConfigServiceRequest
  {
  public:
    GetAggregateComplianceDetailsByConfigRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAggregateComplianceDetailsByConfigRule"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorName() const{ return m_configurationAggregatorName; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline bool ConfigurationAggregatorNameHasBeenSet() const { return m_configurationAggregatorNameHasBeenSet; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(const Aws::String& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = value; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(Aws::String&& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = std::move(value); }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(const char* value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName.assign(value); }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithConfigurationAggregatorName(const Aws::String& value) { SetConfigurationAggregatorName(value); return *this;}

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithConfigurationAggregatorName(Aws::String&& value) { SetConfigurationAggregatorName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithConfigurationAggregatorName(const char* value) { SetConfigurationAggregatorName(value); return *this;}


    /**
     * <p>The name of the AWS Config rule for which you want compliance
     * information.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The name of the AWS Config rule for which you want compliance
     * information.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>The name of the AWS Config rule for which you want compliance
     * information.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name of the AWS Config rule for which you want compliance
     * information.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>The name of the AWS Config rule for which you want compliance
     * information.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The name of the AWS Config rule for which you want compliance
     * information.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name of the AWS Config rule for which you want compliance
     * information.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Config rule for which you want compliance
     * information.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The 12-digit account ID of the source account.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The source region from where the data is aggregated.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The source region from where the data is aggregated.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>The source region from where the data is aggregated.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The source region from where the data is aggregated.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The source region from where the data is aggregated.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The source region from where the data is aggregated.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The source region from where the data is aggregated.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The source region from where the data is aggregated.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    /**
     * <p>The resource compliance status.</p> <note> <p>For the
     * <code>GetAggregateComplianceDetailsByConfigRuleRequest</code> data type, AWS
     * Config supports only the <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * AWS Config does not support the <code>NOT_APPLICABLE</code> and
     * <code>INSUFFICIENT_DATA</code> values.</p> </note>
     */
    inline const ComplianceType& GetComplianceType() const{ return m_complianceType; }

    /**
     * <p>The resource compliance status.</p> <note> <p>For the
     * <code>GetAggregateComplianceDetailsByConfigRuleRequest</code> data type, AWS
     * Config supports only the <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * AWS Config does not support the <code>NOT_APPLICABLE</code> and
     * <code>INSUFFICIENT_DATA</code> values.</p> </note>
     */
    inline bool ComplianceTypeHasBeenSet() const { return m_complianceTypeHasBeenSet; }

    /**
     * <p>The resource compliance status.</p> <note> <p>For the
     * <code>GetAggregateComplianceDetailsByConfigRuleRequest</code> data type, AWS
     * Config supports only the <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * AWS Config does not support the <code>NOT_APPLICABLE</code> and
     * <code>INSUFFICIENT_DATA</code> values.</p> </note>
     */
    inline void SetComplianceType(const ComplianceType& value) { m_complianceTypeHasBeenSet = true; m_complianceType = value; }

    /**
     * <p>The resource compliance status.</p> <note> <p>For the
     * <code>GetAggregateComplianceDetailsByConfigRuleRequest</code> data type, AWS
     * Config supports only the <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * AWS Config does not support the <code>NOT_APPLICABLE</code> and
     * <code>INSUFFICIENT_DATA</code> values.</p> </note>
     */
    inline void SetComplianceType(ComplianceType&& value) { m_complianceTypeHasBeenSet = true; m_complianceType = std::move(value); }

    /**
     * <p>The resource compliance status.</p> <note> <p>For the
     * <code>GetAggregateComplianceDetailsByConfigRuleRequest</code> data type, AWS
     * Config supports only the <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * AWS Config does not support the <code>NOT_APPLICABLE</code> and
     * <code>INSUFFICIENT_DATA</code> values.</p> </note>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithComplianceType(const ComplianceType& value) { SetComplianceType(value); return *this;}

    /**
     * <p>The resource compliance status.</p> <note> <p>For the
     * <code>GetAggregateComplianceDetailsByConfigRuleRequest</code> data type, AWS
     * Config supports only the <code>COMPLIANT</code> and <code>NON_COMPLIANT</code>.
     * AWS Config does not support the <code>NOT_APPLICABLE</code> and
     * <code>INSUFFICIENT_DATA</code> values.</p> </note>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithComplianceType(ComplianceType&& value) { SetComplianceType(std::move(value)); return *this;}


    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 50. You cannot specify a number greater than 100. If you specify 0, AWS
     * Config uses the default.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 50. You cannot specify a number greater than 100. If you specify 0, AWS
     * Config uses the default.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 50. You cannot specify a number greater than 100. If you specify 0, AWS
     * Config uses the default.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 50. You cannot specify a number greater than 100. If you specify 0, AWS
     * Config uses the default.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_configurationAggregatorName;
    bool m_configurationAggregatorNameHasBeenSet;

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet;

    ComplianceType m_complianceType;
    bool m_complianceTypeHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
