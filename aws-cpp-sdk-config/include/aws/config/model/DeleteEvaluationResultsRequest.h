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
  class AWS_CONFIGSERVICE_API DeleteEvaluationResultsRequest : public ConfigServiceRequest
  {
  public:
    DeleteEvaluationResultsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the Config rule for which you want to delete the evaluation
     * results.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The name of the Config rule for which you want to delete the evaluation
     * results.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name of the Config rule for which you want to delete the evaluation
     * results.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name of the Config rule for which you want to delete the evaluation
     * results.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The name of the Config rule for which you want to delete the evaluation
     * results.</p>
     */
    inline DeleteEvaluationResultsRequest& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name of the Config rule for which you want to delete the evaluation
     * results.</p>
     */
    inline DeleteEvaluationResultsRequest& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name of the Config rule for which you want to delete the evaluation
     * results.</p>
     */
    inline DeleteEvaluationResultsRequest& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}

  private:
    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
