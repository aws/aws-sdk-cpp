/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeComplianceByConfigRuleRequest">AWS
   * API Reference</a></p>
   */
  class DescribeComplianceByConfigRuleRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DescribeComplianceByConfigRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeComplianceByConfigRule"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specify one or more Config rule names to filter the results by rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigRuleNames() const{ return m_configRuleNames; }
    inline bool ConfigRuleNamesHasBeenSet() const { return m_configRuleNamesHasBeenSet; }
    inline void SetConfigRuleNames(const Aws::Vector<Aws::String>& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = value; }
    inline void SetConfigRuleNames(Aws::Vector<Aws::String>&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = std::move(value); }
    inline DescribeComplianceByConfigRuleRequest& WithConfigRuleNames(const Aws::Vector<Aws::String>& value) { SetConfigRuleNames(value); return *this;}
    inline DescribeComplianceByConfigRuleRequest& WithConfigRuleNames(Aws::Vector<Aws::String>&& value) { SetConfigRuleNames(std::move(value)); return *this;}
    inline DescribeComplianceByConfigRuleRequest& AddConfigRuleNames(const Aws::String& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(value); return *this; }
    inline DescribeComplianceByConfigRuleRequest& AddConfigRuleNames(Aws::String&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(std::move(value)); return *this; }
    inline DescribeComplianceByConfigRuleRequest& AddConfigRuleNames(const char* value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results by compliance.</p>
     */
    inline const Aws::Vector<ComplianceType>& GetComplianceTypes() const{ return m_complianceTypes; }
    inline bool ComplianceTypesHasBeenSet() const { return m_complianceTypesHasBeenSet; }
    inline void SetComplianceTypes(const Aws::Vector<ComplianceType>& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes = value; }
    inline void SetComplianceTypes(Aws::Vector<ComplianceType>&& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes = std::move(value); }
    inline DescribeComplianceByConfigRuleRequest& WithComplianceTypes(const Aws::Vector<ComplianceType>& value) { SetComplianceTypes(value); return *this;}
    inline DescribeComplianceByConfigRuleRequest& WithComplianceTypes(Aws::Vector<ComplianceType>&& value) { SetComplianceTypes(std::move(value)); return *this;}
    inline DescribeComplianceByConfigRuleRequest& AddComplianceTypes(const ComplianceType& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes.push_back(value); return *this; }
    inline DescribeComplianceByConfigRuleRequest& AddComplianceTypes(ComplianceType&& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeComplianceByConfigRuleRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeComplianceByConfigRuleRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeComplianceByConfigRuleRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_configRuleNames;
    bool m_configRuleNamesHasBeenSet = false;

    Aws::Vector<ComplianceType> m_complianceTypes;
    bool m_complianceTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
