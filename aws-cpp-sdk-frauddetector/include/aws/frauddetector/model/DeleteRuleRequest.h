/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/frauddetector/model/Rule.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class DeleteRuleRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API DeleteRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRule"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Rule& GetRule() const{ return m_rule; }

    
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }

    
    inline void SetRule(const Rule& value) { m_ruleHasBeenSet = true; m_rule = value; }

    
    inline void SetRule(Rule&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }

    
    inline DeleteRuleRequest& WithRule(const Rule& value) { SetRule(value); return *this;}

    
    inline DeleteRuleRequest& WithRule(Rule&& value) { SetRule(std::move(value)); return *this;}

  private:

    Rule m_rule;
    bool m_ruleHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
