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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/Scope.h>
#include <aws/inspector/model/Attribute.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{

  /**
   * <p>Contains information about what is excluded from an assessment run given the
   * current state of the assessment template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ExclusionPreview">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR_API ExclusionPreview
  {
  public:
    ExclusionPreview();
    ExclusionPreview(Aws::Utils::Json::JsonView jsonValue);
    ExclusionPreview& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the exclusion preview.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The name of the exclusion preview.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The name of the exclusion preview.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The name of the exclusion preview.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The name of the exclusion preview.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The name of the exclusion preview.</p>
     */
    inline ExclusionPreview& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The name of the exclusion preview.</p>
     */
    inline ExclusionPreview& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The name of the exclusion preview.</p>
     */
    inline ExclusionPreview& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The description of the exclusion preview.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the exclusion preview.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the exclusion preview.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the exclusion preview.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the exclusion preview.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the exclusion preview.</p>
     */
    inline ExclusionPreview& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the exclusion preview.</p>
     */
    inline ExclusionPreview& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the exclusion preview.</p>
     */
    inline ExclusionPreview& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The recommendation for the exclusion preview.</p>
     */
    inline const Aws::String& GetRecommendation() const{ return m_recommendation; }

    /**
     * <p>The recommendation for the exclusion preview.</p>
     */
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }

    /**
     * <p>The recommendation for the exclusion preview.</p>
     */
    inline void SetRecommendation(const Aws::String& value) { m_recommendationHasBeenSet = true; m_recommendation = value; }

    /**
     * <p>The recommendation for the exclusion preview.</p>
     */
    inline void SetRecommendation(Aws::String&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::move(value); }

    /**
     * <p>The recommendation for the exclusion preview.</p>
     */
    inline void SetRecommendation(const char* value) { m_recommendationHasBeenSet = true; m_recommendation.assign(value); }

    /**
     * <p>The recommendation for the exclusion preview.</p>
     */
    inline ExclusionPreview& WithRecommendation(const Aws::String& value) { SetRecommendation(value); return *this;}

    /**
     * <p>The recommendation for the exclusion preview.</p>
     */
    inline ExclusionPreview& WithRecommendation(Aws::String&& value) { SetRecommendation(std::move(value)); return *this;}

    /**
     * <p>The recommendation for the exclusion preview.</p>
     */
    inline ExclusionPreview& WithRecommendation(const char* value) { SetRecommendation(value); return *this;}


    /**
     * <p>The AWS resources for which the exclusion preview pertains.</p>
     */
    inline const Aws::Vector<Scope>& GetScopes() const{ return m_scopes; }

    /**
     * <p>The AWS resources for which the exclusion preview pertains.</p>
     */
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }

    /**
     * <p>The AWS resources for which the exclusion preview pertains.</p>
     */
    inline void SetScopes(const Aws::Vector<Scope>& value) { m_scopesHasBeenSet = true; m_scopes = value; }

    /**
     * <p>The AWS resources for which the exclusion preview pertains.</p>
     */
    inline void SetScopes(Aws::Vector<Scope>&& value) { m_scopesHasBeenSet = true; m_scopes = std::move(value); }

    /**
     * <p>The AWS resources for which the exclusion preview pertains.</p>
     */
    inline ExclusionPreview& WithScopes(const Aws::Vector<Scope>& value) { SetScopes(value); return *this;}

    /**
     * <p>The AWS resources for which the exclusion preview pertains.</p>
     */
    inline ExclusionPreview& WithScopes(Aws::Vector<Scope>&& value) { SetScopes(std::move(value)); return *this;}

    /**
     * <p>The AWS resources for which the exclusion preview pertains.</p>
     */
    inline ExclusionPreview& AddScopes(const Scope& value) { m_scopesHasBeenSet = true; m_scopes.push_back(value); return *this; }

    /**
     * <p>The AWS resources for which the exclusion preview pertains.</p>
     */
    inline ExclusionPreview& AddScopes(Scope&& value) { m_scopesHasBeenSet = true; m_scopes.push_back(std::move(value)); return *this; }


    /**
     * <p>The system-defined attributes for the exclusion preview.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The system-defined attributes for the exclusion preview.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The system-defined attributes for the exclusion preview.</p>
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The system-defined attributes for the exclusion preview.</p>
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The system-defined attributes for the exclusion preview.</p>
     */
    inline ExclusionPreview& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The system-defined attributes for the exclusion preview.</p>
     */
    inline ExclusionPreview& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The system-defined attributes for the exclusion preview.</p>
     */
    inline ExclusionPreview& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The system-defined attributes for the exclusion preview.</p>
     */
    inline ExclusionPreview& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_title;
    bool m_titleHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_recommendation;
    bool m_recommendationHasBeenSet;

    Aws::Vector<Scope> m_scopes;
    bool m_scopesHasBeenSet;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
