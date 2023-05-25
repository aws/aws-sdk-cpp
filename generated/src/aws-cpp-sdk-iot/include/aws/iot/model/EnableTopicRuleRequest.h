/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the EnableTopicRuleRequest operation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/EnableTopicRuleRequest">AWS
   * API Reference</a></p>
   */
  class EnableTopicRuleRequest : public IoTRequest
  {
  public:
    AWS_IOT_API EnableTopicRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableTopicRule"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the topic rule to enable.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the topic rule to enable.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>The name of the topic rule to enable.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the topic rule to enable.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>The name of the topic rule to enable.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the topic rule to enable.</p>
     */
    inline EnableTopicRuleRequest& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the topic rule to enable.</p>
     */
    inline EnableTopicRuleRequest& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the topic rule to enable.</p>
     */
    inline EnableTopicRuleRequest& WithRuleName(const char* value) { SetRuleName(value); return *this;}

  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
