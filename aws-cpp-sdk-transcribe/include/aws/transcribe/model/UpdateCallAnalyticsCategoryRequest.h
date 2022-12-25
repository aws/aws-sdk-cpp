/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/InputType.h>
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
  class UpdateCallAnalyticsCategoryRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API UpdateCallAnalyticsCategoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCallAnalyticsCategory"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Call Analytics category you want to update. Category names
     * are case sensitive.</p>
     */
    inline const Aws::String& GetCategoryName() const{ return m_categoryName; }

    /**
     * <p>The name of the Call Analytics category you want to update. Category names
     * are case sensitive.</p>
     */
    inline bool CategoryNameHasBeenSet() const { return m_categoryNameHasBeenSet; }

    /**
     * <p>The name of the Call Analytics category you want to update. Category names
     * are case sensitive.</p>
     */
    inline void SetCategoryName(const Aws::String& value) { m_categoryNameHasBeenSet = true; m_categoryName = value; }

    /**
     * <p>The name of the Call Analytics category you want to update. Category names
     * are case sensitive.</p>
     */
    inline void SetCategoryName(Aws::String&& value) { m_categoryNameHasBeenSet = true; m_categoryName = std::move(value); }

    /**
     * <p>The name of the Call Analytics category you want to update. Category names
     * are case sensitive.</p>
     */
    inline void SetCategoryName(const char* value) { m_categoryNameHasBeenSet = true; m_categoryName.assign(value); }

    /**
     * <p>The name of the Call Analytics category you want to update. Category names
     * are case sensitive.</p>
     */
    inline UpdateCallAnalyticsCategoryRequest& WithCategoryName(const Aws::String& value) { SetCategoryName(value); return *this;}

    /**
     * <p>The name of the Call Analytics category you want to update. Category names
     * are case sensitive.</p>
     */
    inline UpdateCallAnalyticsCategoryRequest& WithCategoryName(Aws::String&& value) { SetCategoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the Call Analytics category you want to update. Category names
     * are case sensitive.</p>
     */
    inline UpdateCallAnalyticsCategoryRequest& WithCategoryName(const char* value) { SetCategoryName(value); return *this;}


    /**
     * <p>The rules used for the updated Call Analytics category. The rules you provide
     * in this field replace the ones that are currently being used in the specified
     * category.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }

    /**
     * <p>The rules used for the updated Call Analytics category. The rules you provide
     * in this field replace the ones that are currently being used in the specified
     * category.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>The rules used for the updated Call Analytics category. The rules you provide
     * in this field replace the ones that are currently being used in the specified
     * category.</p>
     */
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>The rules used for the updated Call Analytics category. The rules you provide
     * in this field replace the ones that are currently being used in the specified
     * category.</p>
     */
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>The rules used for the updated Call Analytics category. The rules you provide
     * in this field replace the ones that are currently being used in the specified
     * category.</p>
     */
    inline UpdateCallAnalyticsCategoryRequest& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}

    /**
     * <p>The rules used for the updated Call Analytics category. The rules you provide
     * in this field replace the ones that are currently being used in the specified
     * category.</p>
     */
    inline UpdateCallAnalyticsCategoryRequest& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The rules used for the updated Call Analytics category. The rules you provide
     * in this field replace the ones that are currently being used in the specified
     * category.</p>
     */
    inline UpdateCallAnalyticsCategoryRequest& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>The rules used for the updated Call Analytics category. The rules you provide
     * in this field replace the ones that are currently being used in the specified
     * category.</p>
     */
    inline UpdateCallAnalyticsCategoryRequest& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p>Choose whether you want to update a streaming or a batch Call Analytics
     * category. The input type you specify must match the input type specified when
     * the category was created. For example, if you created a category with the
     * <code>POST_CALL</code> input type, you must use <code>POST_CALL</code> as the
     * input type when updating this category.</p>
     */
    inline const InputType& GetInputType() const{ return m_inputType; }

    /**
     * <p>Choose whether you want to update a streaming or a batch Call Analytics
     * category. The input type you specify must match the input type specified when
     * the category was created. For example, if you created a category with the
     * <code>POST_CALL</code> input type, you must use <code>POST_CALL</code> as the
     * input type when updating this category.</p>
     */
    inline bool InputTypeHasBeenSet() const { return m_inputTypeHasBeenSet; }

    /**
     * <p>Choose whether you want to update a streaming or a batch Call Analytics
     * category. The input type you specify must match the input type specified when
     * the category was created. For example, if you created a category with the
     * <code>POST_CALL</code> input type, you must use <code>POST_CALL</code> as the
     * input type when updating this category.</p>
     */
    inline void SetInputType(const InputType& value) { m_inputTypeHasBeenSet = true; m_inputType = value; }

    /**
     * <p>Choose whether you want to update a streaming or a batch Call Analytics
     * category. The input type you specify must match the input type specified when
     * the category was created. For example, if you created a category with the
     * <code>POST_CALL</code> input type, you must use <code>POST_CALL</code> as the
     * input type when updating this category.</p>
     */
    inline void SetInputType(InputType&& value) { m_inputTypeHasBeenSet = true; m_inputType = std::move(value); }

    /**
     * <p>Choose whether you want to update a streaming or a batch Call Analytics
     * category. The input type you specify must match the input type specified when
     * the category was created. For example, if you created a category with the
     * <code>POST_CALL</code> input type, you must use <code>POST_CALL</code> as the
     * input type when updating this category.</p>
     */
    inline UpdateCallAnalyticsCategoryRequest& WithInputType(const InputType& value) { SetInputType(value); return *this;}

    /**
     * <p>Choose whether you want to update a streaming or a batch Call Analytics
     * category. The input type you specify must match the input type specified when
     * the category was created. For example, if you created a category with the
     * <code>POST_CALL</code> input type, you must use <code>POST_CALL</code> as the
     * input type when updating this category.</p>
     */
    inline UpdateCallAnalyticsCategoryRequest& WithInputType(InputType&& value) { SetInputType(std::move(value)); return *this;}

  private:

    Aws::String m_categoryName;
    bool m_categoryNameHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    InputType m_inputType;
    bool m_inputTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
