/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_CONFIGSERVICE_API DescribeConfigRuleEvaluationStatusRequest : public ConfigServiceRequest
  {
  public:
    DescribeConfigRuleEvaluationStatusRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the AWS managed Config rules for which you want status
     * information. If you do not specify any names, AWS Config returns status
     * information for all AWS managed Config rules that you use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigRuleNames() const{ return m_configRuleNames; }

    /**
     * <p>The name of the AWS managed Config rules for which you want status
     * information. If you do not specify any names, AWS Config returns status
     * information for all AWS managed Config rules that you use.</p>
     */
    inline void SetConfigRuleNames(const Aws::Vector<Aws::String>& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = value; }

    /**
     * <p>The name of the AWS managed Config rules for which you want status
     * information. If you do not specify any names, AWS Config returns status
     * information for all AWS managed Config rules that you use.</p>
     */
    inline void SetConfigRuleNames(Aws::Vector<Aws::String>&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = value; }

    /**
     * <p>The name of the AWS managed Config rules for which you want status
     * information. If you do not specify any names, AWS Config returns status
     * information for all AWS managed Config rules that you use.</p>
     */
    inline DescribeConfigRuleEvaluationStatusRequest& WithConfigRuleNames(const Aws::Vector<Aws::String>& value) { SetConfigRuleNames(value); return *this;}

    /**
     * <p>The name of the AWS managed Config rules for which you want status
     * information. If you do not specify any names, AWS Config returns status
     * information for all AWS managed Config rules that you use.</p>
     */
    inline DescribeConfigRuleEvaluationStatusRequest& WithConfigRuleNames(Aws::Vector<Aws::String>&& value) { SetConfigRuleNames(value); return *this;}

    /**
     * <p>The name of the AWS managed Config rules for which you want status
     * information. If you do not specify any names, AWS Config returns status
     * information for all AWS managed Config rules that you use.</p>
     */
    inline DescribeConfigRuleEvaluationStatusRequest& AddConfigRuleNames(const Aws::String& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(value); return *this; }

    /**
     * <p>The name of the AWS managed Config rules for which you want status
     * information. If you do not specify any names, AWS Config returns status
     * information for all AWS managed Config rules that you use.</p>
     */
    inline DescribeConfigRuleEvaluationStatusRequest& AddConfigRuleNames(Aws::String&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(value); return *this; }

    /**
     * <p>The name of the AWS managed Config rules for which you want status
     * information. If you do not specify any names, AWS Config returns status
     * information for all AWS managed Config rules that you use.</p>
     */
    inline DescribeConfigRuleEvaluationStatusRequest& AddConfigRuleNames(const char* value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_configRuleNames;
    bool m_configRuleNamesHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
