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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/model/ResourceType.h>
#include <aws/sagemaker/model/SuggestionQuery.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API GetSearchSuggestionsRequest : public SageMakerRequest
  {
  public:
    GetSearchSuggestionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSearchSuggestions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Amazon SageMaker resource to Search for. The only valid
     * <code>Resource</code> value is <code>TrainingJob</code>.</p>
     */
    inline const ResourceType& GetResource() const{ return m_resource; }

    /**
     * <p>The name of the Amazon SageMaker resource to Search for. The only valid
     * <code>Resource</code> value is <code>TrainingJob</code>.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The name of the Amazon SageMaker resource to Search for. The only valid
     * <code>Resource</code> value is <code>TrainingJob</code>.</p>
     */
    inline void SetResource(const ResourceType& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The name of the Amazon SageMaker resource to Search for. The only valid
     * <code>Resource</code> value is <code>TrainingJob</code>.</p>
     */
    inline void SetResource(ResourceType&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The name of the Amazon SageMaker resource to Search for. The only valid
     * <code>Resource</code> value is <code>TrainingJob</code>.</p>
     */
    inline GetSearchSuggestionsRequest& WithResource(const ResourceType& value) { SetResource(value); return *this;}

    /**
     * <p>The name of the Amazon SageMaker resource to Search for. The only valid
     * <code>Resource</code> value is <code>TrainingJob</code>.</p>
     */
    inline GetSearchSuggestionsRequest& WithResource(ResourceType&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>Limits the property names that are included in the response.</p>
     */
    inline const SuggestionQuery& GetSuggestionQuery() const{ return m_suggestionQuery; }

    /**
     * <p>Limits the property names that are included in the response.</p>
     */
    inline bool SuggestionQueryHasBeenSet() const { return m_suggestionQueryHasBeenSet; }

    /**
     * <p>Limits the property names that are included in the response.</p>
     */
    inline void SetSuggestionQuery(const SuggestionQuery& value) { m_suggestionQueryHasBeenSet = true; m_suggestionQuery = value; }

    /**
     * <p>Limits the property names that are included in the response.</p>
     */
    inline void SetSuggestionQuery(SuggestionQuery&& value) { m_suggestionQueryHasBeenSet = true; m_suggestionQuery = std::move(value); }

    /**
     * <p>Limits the property names that are included in the response.</p>
     */
    inline GetSearchSuggestionsRequest& WithSuggestionQuery(const SuggestionQuery& value) { SetSuggestionQuery(value); return *this;}

    /**
     * <p>Limits the property names that are included in the response.</p>
     */
    inline GetSearchSuggestionsRequest& WithSuggestionQuery(SuggestionQuery&& value) { SetSuggestionQuery(std::move(value)); return *this;}

  private:

    ResourceType m_resource;
    bool m_resourceHasBeenSet;

    SuggestionQuery m_suggestionQuery;
    bool m_suggestionQueryHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
