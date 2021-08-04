/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/Rule.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class AWS_TRANSCRIBESERVICE_API CreateCallAnalyticsCategoryRequest : public TranscribeServiceRequest
  {
  public:
    CreateCallAnalyticsCategoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCallAnalyticsCategory"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name that you choose for your category when you create it. </p>
     */
    inline const Aws::String& GetCategoryName() const{ return m_categoryName; }

    /**
     * <p>The name that you choose for your category when you create it. </p>
     */
    inline bool CategoryNameHasBeenSet() const { return m_categoryNameHasBeenSet; }

    /**
     * <p>The name that you choose for your category when you create it. </p>
     */
    inline void SetCategoryName(const Aws::String& value) { m_categoryNameHasBeenSet = true; m_categoryName = value; }

    /**
     * <p>The name that you choose for your category when you create it. </p>
     */
    inline void SetCategoryName(Aws::String&& value) { m_categoryNameHasBeenSet = true; m_categoryName = std::move(value); }

    /**
     * <p>The name that you choose for your category when you create it. </p>
     */
    inline void SetCategoryName(const char* value) { m_categoryNameHasBeenSet = true; m_categoryName.assign(value); }

    /**
     * <p>The name that you choose for your category when you create it. </p>
     */
    inline CreateCallAnalyticsCategoryRequest& WithCategoryName(const Aws::String& value) { SetCategoryName(value); return *this;}

    /**
     * <p>The name that you choose for your category when you create it. </p>
     */
    inline CreateCallAnalyticsCategoryRequest& WithCategoryName(Aws::String&& value) { SetCategoryName(std::move(value)); return *this;}

    /**
     * <p>The name that you choose for your category when you create it. </p>
     */
    inline CreateCallAnalyticsCategoryRequest& WithCategoryName(const char* value) { SetCategoryName(value); return *this;}


    /**
     * <p>To create a category, you must specify between 1 and 20 rules. For each rule,
     * you specify a filter to be applied to the attributes of the call. For example,
     * you can specify a sentiment filter to detect if the customer's sentiment was
     * negative or neutral. </p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>To create a category, you must specify between 1 and 20 rules. For each rule,
     * you specify a filter to be applied to the attributes of the call. For example,
     * you can specify a sentiment filter to detect if the customer's sentiment was
     * negative or neutral. </p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>To create a category, you must specify between 1 and 20 rules. For each rule,
     * you specify a filter to be applied to the attributes of the call. For example,
     * you can specify a sentiment filter to detect if the customer's sentiment was
     * negative or neutral. </p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>To create a category, you must specify between 1 and 20 rules. For each rule,
     * you specify a filter to be applied to the attributes of the call. For example,
     * you can specify a sentiment filter to detect if the customer's sentiment was
     * negative or neutral. </p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>To create a category, you must specify between 1 and 20 rules. For each rule,
     * you specify a filter to be applied to the attributes of the call. For example,
     * you can specify a sentiment filter to detect if the customer's sentiment was
     * negative or neutral. </p>
     */
    inline CreateCallAnalyticsCategoryRequest& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>To create a category, you must specify between 1 and 20 rules. For each rule,
     * you specify a filter to be applied to the attributes of the call. For example,
     * you can specify a sentiment filter to detect if the customer's sentiment was
     * negative or neutral. </p>
     */
    inline CreateCallAnalyticsCategoryRequest& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>To create a category, you must specify between 1 and 20 rules. For each rule,
     * you specify a filter to be applied to the attributes of the call. For example,
     * you can specify a sentiment filter to detect if the customer's sentiment was
     * negative or neutral. </p>
     */
    inline CreateCallAnalyticsCategoryRequest& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>To create a category, you must specify between 1 and 20 rules. For each rule,
     * you specify a filter to be applied to the attributes of the call. For example,
     * you can specify a sentiment filter to detect if the customer's sentiment was
     * negative or neutral. </p>
     */
    inline CreateCallAnalyticsCategoryRequest& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_categoryName;
    bool m_categoryNameHasBeenSet;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
