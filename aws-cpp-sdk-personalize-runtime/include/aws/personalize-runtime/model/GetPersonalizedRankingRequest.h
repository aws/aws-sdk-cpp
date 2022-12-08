/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/personalize-runtime/PersonalizeRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace PersonalizeRuntime
{
namespace Model
{

  /**
   */
  class GetPersonalizedRankingRequest : public PersonalizeRuntimeRequest
  {
  public:
    AWS_PERSONALIZERUNTIME_API GetPersonalizedRankingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPersonalizedRanking"; }

    AWS_PERSONALIZERUNTIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline const Aws::String& GetCampaignArn() const{ return m_campaignArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline bool CampaignArnHasBeenSet() const { return m_campaignArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline void SetCampaignArn(const Aws::String& value) { m_campaignArnHasBeenSet = true; m_campaignArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline void SetCampaignArn(Aws::String&& value) { m_campaignArnHasBeenSet = true; m_campaignArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline void SetCampaignArn(const char* value) { m_campaignArnHasBeenSet = true; m_campaignArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline GetPersonalizedRankingRequest& WithCampaignArn(const Aws::String& value) { SetCampaignArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline GetPersonalizedRankingRequest& WithCampaignArn(Aws::String&& value) { SetCampaignArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline GetPersonalizedRankingRequest& WithCampaignArn(const char* value) { SetCampaignArn(value); return *this;}


    /**
     * <p>A list of items (by <code>itemId</code>) to rank. If an item was not included
     * in the training dataset, the item is appended to the end of the reranked list.
     * The maximum is 500.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputList() const{ return m_inputList; }

    /**
     * <p>A list of items (by <code>itemId</code>) to rank. If an item was not included
     * in the training dataset, the item is appended to the end of the reranked list.
     * The maximum is 500.</p>
     */
    inline bool InputListHasBeenSet() const { return m_inputListHasBeenSet; }

    /**
     * <p>A list of items (by <code>itemId</code>) to rank. If an item was not included
     * in the training dataset, the item is appended to the end of the reranked list.
     * The maximum is 500.</p>
     */
    inline void SetInputList(const Aws::Vector<Aws::String>& value) { m_inputListHasBeenSet = true; m_inputList = value; }

    /**
     * <p>A list of items (by <code>itemId</code>) to rank. If an item was not included
     * in the training dataset, the item is appended to the end of the reranked list.
     * The maximum is 500.</p>
     */
    inline void SetInputList(Aws::Vector<Aws::String>&& value) { m_inputListHasBeenSet = true; m_inputList = std::move(value); }

    /**
     * <p>A list of items (by <code>itemId</code>) to rank. If an item was not included
     * in the training dataset, the item is appended to the end of the reranked list.
     * The maximum is 500.</p>
     */
    inline GetPersonalizedRankingRequest& WithInputList(const Aws::Vector<Aws::String>& value) { SetInputList(value); return *this;}

    /**
     * <p>A list of items (by <code>itemId</code>) to rank. If an item was not included
     * in the training dataset, the item is appended to the end of the reranked list.
     * The maximum is 500.</p>
     */
    inline GetPersonalizedRankingRequest& WithInputList(Aws::Vector<Aws::String>&& value) { SetInputList(std::move(value)); return *this;}

    /**
     * <p>A list of items (by <code>itemId</code>) to rank. If an item was not included
     * in the training dataset, the item is appended to the end of the reranked list.
     * The maximum is 500.</p>
     */
    inline GetPersonalizedRankingRequest& AddInputList(const Aws::String& value) { m_inputListHasBeenSet = true; m_inputList.push_back(value); return *this; }

    /**
     * <p>A list of items (by <code>itemId</code>) to rank. If an item was not included
     * in the training dataset, the item is appended to the end of the reranked list.
     * The maximum is 500.</p>
     */
    inline GetPersonalizedRankingRequest& AddInputList(Aws::String&& value) { m_inputListHasBeenSet = true; m_inputList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of items (by <code>itemId</code>) to rank. If an item was not included
     * in the training dataset, the item is appended to the end of the reranked list.
     * The maximum is 500.</p>
     */
    inline GetPersonalizedRankingRequest& AddInputList(const char* value) { m_inputListHasBeenSet = true; m_inputList.push_back(value); return *this; }


    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline GetPersonalizedRankingRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline GetPersonalizedRankingRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline GetPersonalizedRankingRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type.</p>
     */
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type.</p>
     */
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type.</p>
     */
    inline GetPersonalizedRankingRequest& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type.</p>
     */
    inline GetPersonalizedRankingRequest& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type.</p>
     */
    inline GetPersonalizedRankingRequest& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type.</p>
     */
    inline GetPersonalizedRankingRequest& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type.</p>
     */
    inline GetPersonalizedRankingRequest& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type.</p>
     */
    inline GetPersonalizedRankingRequest& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type.</p>
     */
    inline GetPersonalizedRankingRequest& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type.</p>
     */
    inline GetPersonalizedRankingRequest& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type.</p>
     */
    inline GetPersonalizedRankingRequest& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of a filter you created to include items or
     * exclude items from recommendations for a given user. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline const Aws::String& GetFilterArn() const{ return m_filterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a filter you created to include items or
     * exclude items from recommendations for a given user. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline bool FilterArnHasBeenSet() const { return m_filterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a filter you created to include items or
     * exclude items from recommendations for a given user. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline void SetFilterArn(const Aws::String& value) { m_filterArnHasBeenSet = true; m_filterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a filter you created to include items or
     * exclude items from recommendations for a given user. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline void SetFilterArn(Aws::String&& value) { m_filterArnHasBeenSet = true; m_filterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a filter you created to include items or
     * exclude items from recommendations for a given user. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline void SetFilterArn(const char* value) { m_filterArnHasBeenSet = true; m_filterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a filter you created to include items or
     * exclude items from recommendations for a given user. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline GetPersonalizedRankingRequest& WithFilterArn(const Aws::String& value) { SetFilterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a filter you created to include items or
     * exclude items from recommendations for a given user. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline GetPersonalizedRankingRequest& WithFilterArn(Aws::String&& value) { SetFilterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a filter you created to include items or
     * exclude items from recommendations for a given user. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline GetPersonalizedRankingRequest& WithFilterArn(const char* value) { SetFilterArn(value); return *this;}


    /**
     * <p>The values to use when filtering recommendations. For each placeholder
     * parameter in your filter expression, provide the parameter name (in matching
     * case) as a key and the filter value(s) as the corresponding value. Separate
     * multiple values for one parameter with a comma. </p> <p>For filter expressions
     * that use an <code>INCLUDE</code> element to include items, you must provide
     * values for all parameters that are defined in the expression. For filters with
     * expressions that use an <code>EXCLUDE</code> element to exclude items, you can
     * omit the <code>filter-values</code>.In this case, Amazon Personalize doesn't use
     * that portion of the expression to filter recommendations.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFilterValues() const{ return m_filterValues; }

    /**
     * <p>The values to use when filtering recommendations. For each placeholder
     * parameter in your filter expression, provide the parameter name (in matching
     * case) as a key and the filter value(s) as the corresponding value. Separate
     * multiple values for one parameter with a comma. </p> <p>For filter expressions
     * that use an <code>INCLUDE</code> element to include items, you must provide
     * values for all parameters that are defined in the expression. For filters with
     * expressions that use an <code>EXCLUDE</code> element to exclude items, you can
     * omit the <code>filter-values</code>.In this case, Amazon Personalize doesn't use
     * that portion of the expression to filter recommendations.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline bool FilterValuesHasBeenSet() const { return m_filterValuesHasBeenSet; }

    /**
     * <p>The values to use when filtering recommendations. For each placeholder
     * parameter in your filter expression, provide the parameter name (in matching
     * case) as a key and the filter value(s) as the corresponding value. Separate
     * multiple values for one parameter with a comma. </p> <p>For filter expressions
     * that use an <code>INCLUDE</code> element to include items, you must provide
     * values for all parameters that are defined in the expression. For filters with
     * expressions that use an <code>EXCLUDE</code> element to exclude items, you can
     * omit the <code>filter-values</code>.In this case, Amazon Personalize doesn't use
     * that portion of the expression to filter recommendations.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline void SetFilterValues(const Aws::Map<Aws::String, Aws::String>& value) { m_filterValuesHasBeenSet = true; m_filterValues = value; }

    /**
     * <p>The values to use when filtering recommendations. For each placeholder
     * parameter in your filter expression, provide the parameter name (in matching
     * case) as a key and the filter value(s) as the corresponding value. Separate
     * multiple values for one parameter with a comma. </p> <p>For filter expressions
     * that use an <code>INCLUDE</code> element to include items, you must provide
     * values for all parameters that are defined in the expression. For filters with
     * expressions that use an <code>EXCLUDE</code> element to exclude items, you can
     * omit the <code>filter-values</code>.In this case, Amazon Personalize doesn't use
     * that portion of the expression to filter recommendations.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline void SetFilterValues(Aws::Map<Aws::String, Aws::String>&& value) { m_filterValuesHasBeenSet = true; m_filterValues = std::move(value); }

    /**
     * <p>The values to use when filtering recommendations. For each placeholder
     * parameter in your filter expression, provide the parameter name (in matching
     * case) as a key and the filter value(s) as the corresponding value. Separate
     * multiple values for one parameter with a comma. </p> <p>For filter expressions
     * that use an <code>INCLUDE</code> element to include items, you must provide
     * values for all parameters that are defined in the expression. For filters with
     * expressions that use an <code>EXCLUDE</code> element to exclude items, you can
     * omit the <code>filter-values</code>.In this case, Amazon Personalize doesn't use
     * that portion of the expression to filter recommendations.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline GetPersonalizedRankingRequest& WithFilterValues(const Aws::Map<Aws::String, Aws::String>& value) { SetFilterValues(value); return *this;}

    /**
     * <p>The values to use when filtering recommendations. For each placeholder
     * parameter in your filter expression, provide the parameter name (in matching
     * case) as a key and the filter value(s) as the corresponding value. Separate
     * multiple values for one parameter with a comma. </p> <p>For filter expressions
     * that use an <code>INCLUDE</code> element to include items, you must provide
     * values for all parameters that are defined in the expression. For filters with
     * expressions that use an <code>EXCLUDE</code> element to exclude items, you can
     * omit the <code>filter-values</code>.In this case, Amazon Personalize doesn't use
     * that portion of the expression to filter recommendations.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline GetPersonalizedRankingRequest& WithFilterValues(Aws::Map<Aws::String, Aws::String>&& value) { SetFilterValues(std::move(value)); return *this;}

    /**
     * <p>The values to use when filtering recommendations. For each placeholder
     * parameter in your filter expression, provide the parameter name (in matching
     * case) as a key and the filter value(s) as the corresponding value. Separate
     * multiple values for one parameter with a comma. </p> <p>For filter expressions
     * that use an <code>INCLUDE</code> element to include items, you must provide
     * values for all parameters that are defined in the expression. For filters with
     * expressions that use an <code>EXCLUDE</code> element to exclude items, you can
     * omit the <code>filter-values</code>.In this case, Amazon Personalize doesn't use
     * that portion of the expression to filter recommendations.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline GetPersonalizedRankingRequest& AddFilterValues(const Aws::String& key, const Aws::String& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(key, value); return *this; }

    /**
     * <p>The values to use when filtering recommendations. For each placeholder
     * parameter in your filter expression, provide the parameter name (in matching
     * case) as a key and the filter value(s) as the corresponding value. Separate
     * multiple values for one parameter with a comma. </p> <p>For filter expressions
     * that use an <code>INCLUDE</code> element to include items, you must provide
     * values for all parameters that are defined in the expression. For filters with
     * expressions that use an <code>EXCLUDE</code> element to exclude items, you can
     * omit the <code>filter-values</code>.In this case, Amazon Personalize doesn't use
     * that portion of the expression to filter recommendations.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline GetPersonalizedRankingRequest& AddFilterValues(Aws::String&& key, const Aws::String& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(std::move(key), value); return *this; }

    /**
     * <p>The values to use when filtering recommendations. For each placeholder
     * parameter in your filter expression, provide the parameter name (in matching
     * case) as a key and the filter value(s) as the corresponding value. Separate
     * multiple values for one parameter with a comma. </p> <p>For filter expressions
     * that use an <code>INCLUDE</code> element to include items, you must provide
     * values for all parameters that are defined in the expression. For filters with
     * expressions that use an <code>EXCLUDE</code> element to exclude items, you can
     * omit the <code>filter-values</code>.In this case, Amazon Personalize doesn't use
     * that portion of the expression to filter recommendations.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline GetPersonalizedRankingRequest& AddFilterValues(const Aws::String& key, Aws::String&& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The values to use when filtering recommendations. For each placeholder
     * parameter in your filter expression, provide the parameter name (in matching
     * case) as a key and the filter value(s) as the corresponding value. Separate
     * multiple values for one parameter with a comma. </p> <p>For filter expressions
     * that use an <code>INCLUDE</code> element to include items, you must provide
     * values for all parameters that are defined in the expression. For filters with
     * expressions that use an <code>EXCLUDE</code> element to exclude items, you can
     * omit the <code>filter-values</code>.In this case, Amazon Personalize doesn't use
     * that portion of the expression to filter recommendations.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline GetPersonalizedRankingRequest& AddFilterValues(Aws::String&& key, Aws::String&& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The values to use when filtering recommendations. For each placeholder
     * parameter in your filter expression, provide the parameter name (in matching
     * case) as a key and the filter value(s) as the corresponding value. Separate
     * multiple values for one parameter with a comma. </p> <p>For filter expressions
     * that use an <code>INCLUDE</code> element to include items, you must provide
     * values for all parameters that are defined in the expression. For filters with
     * expressions that use an <code>EXCLUDE</code> element to exclude items, you can
     * omit the <code>filter-values</code>.In this case, Amazon Personalize doesn't use
     * that portion of the expression to filter recommendations.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline GetPersonalizedRankingRequest& AddFilterValues(const char* key, Aws::String&& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The values to use when filtering recommendations. For each placeholder
     * parameter in your filter expression, provide the parameter name (in matching
     * case) as a key and the filter value(s) as the corresponding value. Separate
     * multiple values for one parameter with a comma. </p> <p>For filter expressions
     * that use an <code>INCLUDE</code> element to include items, you must provide
     * values for all parameters that are defined in the expression. For filters with
     * expressions that use an <code>EXCLUDE</code> element to exclude items, you can
     * omit the <code>filter-values</code>.In this case, Amazon Personalize doesn't use
     * that portion of the expression to filter recommendations.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline GetPersonalizedRankingRequest& AddFilterValues(Aws::String&& key, const char* value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(std::move(key), value); return *this; }

    /**
     * <p>The values to use when filtering recommendations. For each placeholder
     * parameter in your filter expression, provide the parameter name (in matching
     * case) as a key and the filter value(s) as the corresponding value. Separate
     * multiple values for one parameter with a comma. </p> <p>For filter expressions
     * that use an <code>INCLUDE</code> element to include items, you must provide
     * values for all parameters that are defined in the expression. For filters with
     * expressions that use an <code>EXCLUDE</code> element to exclude items, you can
     * omit the <code>filter-values</code>.In this case, Amazon Personalize doesn't use
     * that portion of the expression to filter recommendations.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline GetPersonalizedRankingRequest& AddFilterValues(const char* key, const char* value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(key, value); return *this; }

  private:

    Aws::String m_campaignArn;
    bool m_campaignArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputList;
    bool m_inputListHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet = false;

    Aws::String m_filterArn;
    bool m_filterArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_filterValues;
    bool m_filterValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
