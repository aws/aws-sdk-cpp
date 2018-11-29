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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/PropertyNameSuggestion.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class AWS_SAGEMAKER_API GetSearchSuggestionsResult
  {
  public:
    GetSearchSuggestionsResult();
    GetSearchSuggestionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSearchSuggestionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of property names for a <code>Resource</code> that match a
     * <code>SuggestionQuery</code>.</p>
     */
    inline const Aws::Vector<PropertyNameSuggestion>& GetPropertyNameSuggestions() const{ return m_propertyNameSuggestions; }

    /**
     * <p>A list of property names for a <code>Resource</code> that match a
     * <code>SuggestionQuery</code>.</p>
     */
    inline void SetPropertyNameSuggestions(const Aws::Vector<PropertyNameSuggestion>& value) { m_propertyNameSuggestions = value; }

    /**
     * <p>A list of property names for a <code>Resource</code> that match a
     * <code>SuggestionQuery</code>.</p>
     */
    inline void SetPropertyNameSuggestions(Aws::Vector<PropertyNameSuggestion>&& value) { m_propertyNameSuggestions = std::move(value); }

    /**
     * <p>A list of property names for a <code>Resource</code> that match a
     * <code>SuggestionQuery</code>.</p>
     */
    inline GetSearchSuggestionsResult& WithPropertyNameSuggestions(const Aws::Vector<PropertyNameSuggestion>& value) { SetPropertyNameSuggestions(value); return *this;}

    /**
     * <p>A list of property names for a <code>Resource</code> that match a
     * <code>SuggestionQuery</code>.</p>
     */
    inline GetSearchSuggestionsResult& WithPropertyNameSuggestions(Aws::Vector<PropertyNameSuggestion>&& value) { SetPropertyNameSuggestions(std::move(value)); return *this;}

    /**
     * <p>A list of property names for a <code>Resource</code> that match a
     * <code>SuggestionQuery</code>.</p>
     */
    inline GetSearchSuggestionsResult& AddPropertyNameSuggestions(const PropertyNameSuggestion& value) { m_propertyNameSuggestions.push_back(value); return *this; }

    /**
     * <p>A list of property names for a <code>Resource</code> that match a
     * <code>SuggestionQuery</code>.</p>
     */
    inline GetSearchSuggestionsResult& AddPropertyNameSuggestions(PropertyNameSuggestion&& value) { m_propertyNameSuggestions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PropertyNameSuggestion> m_propertyNameSuggestions;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
