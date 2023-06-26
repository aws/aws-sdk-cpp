/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/frauddetector/model/Rule.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class UpdateRuleMetadataRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API UpdateRuleMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRuleMetadata"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The rule to update.</p>
     */
    inline const Rule& GetRule() const{ return m_rule; }

    /**
     * <p>The rule to update.</p>
     */
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }

    /**
     * <p>The rule to update.</p>
     */
    inline void SetRule(const Rule& value) { m_ruleHasBeenSet = true; m_rule = value; }

    /**
     * <p>The rule to update.</p>
     */
    inline void SetRule(Rule&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }

    /**
     * <p>The rule to update.</p>
     */
    inline UpdateRuleMetadataRequest& WithRule(const Rule& value) { SetRule(value); return *this;}

    /**
     * <p>The rule to update.</p>
     */
    inline UpdateRuleMetadataRequest& WithRule(Rule&& value) { SetRule(std::move(value)); return *this;}


    /**
     * <p>The rule description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The rule description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The rule description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The rule description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The rule description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The rule description.</p>
     */
    inline UpdateRuleMetadataRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The rule description.</p>
     */
    inline UpdateRuleMetadataRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The rule description.</p>
     */
    inline UpdateRuleMetadataRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Rule m_rule;
    bool m_ruleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
