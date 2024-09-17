/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/fis/model/ExperimentTemplateTargetInputFilter.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Specifies a target for an experiment. You must specify at least one Amazon
   * Resource Name (ARN) or at least one resource tag. You cannot specify
   * both.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/UpdateExperimentTemplateTargetInput">AWS
   * API Reference</a></p>
   */
  class UpdateExperimentTemplateTargetInput
  {
  public:
    AWS_FIS_API UpdateExperimentTemplateTargetInput();
    AWS_FIS_API UpdateExperimentTemplateTargetInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API UpdateExperimentTemplateTargetInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource type. The resource type must be supported for the specified
     * action.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline UpdateExperimentTemplateTargetInput& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline UpdateExperimentTemplateTargetInput& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline UpdateExperimentTemplateTargetInput& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the targets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }
    inline UpdateExperimentTemplateTargetInput& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}
    inline UpdateExperimentTemplateTargetInput& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}
    inline UpdateExperimentTemplateTargetInput& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }
    inline UpdateExperimentTemplateTargetInput& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }
    inline UpdateExperimentTemplateTargetInput& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags for the target resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceTags() const{ return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    inline void SetResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }
    inline void SetResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }
    inline UpdateExperimentTemplateTargetInput& WithResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { SetResourceTags(value); return *this;}
    inline UpdateExperimentTemplateTargetInput& WithResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { SetResourceTags(std::move(value)); return *this;}
    inline UpdateExperimentTemplateTargetInput& AddResourceTags(const Aws::String& key, const Aws::String& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, value); return *this; }
    inline UpdateExperimentTemplateTargetInput& AddResourceTags(Aws::String&& key, const Aws::String& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), value); return *this; }
    inline UpdateExperimentTemplateTargetInput& AddResourceTags(const Aws::String& key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, std::move(value)); return *this; }
    inline UpdateExperimentTemplateTargetInput& AddResourceTags(Aws::String&& key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateExperimentTemplateTargetInput& AddResourceTags(const char* key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, std::move(value)); return *this; }
    inline UpdateExperimentTemplateTargetInput& AddResourceTags(Aws::String&& key, const char* value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), value); return *this; }
    inline UpdateExperimentTemplateTargetInput& AddResourceTags(const char* key, const char* value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters to apply to identify target resources using specific
     * attributes.</p>
     */
    inline const Aws::Vector<ExperimentTemplateTargetInputFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<ExperimentTemplateTargetInputFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<ExperimentTemplateTargetInputFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline UpdateExperimentTemplateTargetInput& WithFilters(const Aws::Vector<ExperimentTemplateTargetInputFilter>& value) { SetFilters(value); return *this;}
    inline UpdateExperimentTemplateTargetInput& WithFilters(Aws::Vector<ExperimentTemplateTargetInputFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline UpdateExperimentTemplateTargetInput& AddFilters(const ExperimentTemplateTargetInputFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline UpdateExperimentTemplateTargetInput& AddFilters(ExperimentTemplateTargetInputFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Scopes the identified resources to a specific count or percentage.</p>
     */
    inline const Aws::String& GetSelectionMode() const{ return m_selectionMode; }
    inline bool SelectionModeHasBeenSet() const { return m_selectionModeHasBeenSet; }
    inline void SetSelectionMode(const Aws::String& value) { m_selectionModeHasBeenSet = true; m_selectionMode = value; }
    inline void SetSelectionMode(Aws::String&& value) { m_selectionModeHasBeenSet = true; m_selectionMode = std::move(value); }
    inline void SetSelectionMode(const char* value) { m_selectionModeHasBeenSet = true; m_selectionMode.assign(value); }
    inline UpdateExperimentTemplateTargetInput& WithSelectionMode(const Aws::String& value) { SetSelectionMode(value); return *this;}
    inline UpdateExperimentTemplateTargetInput& WithSelectionMode(Aws::String&& value) { SetSelectionMode(std::move(value)); return *this;}
    inline UpdateExperimentTemplateTargetInput& WithSelectionMode(const char* value) { SetSelectionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline UpdateExperimentTemplateTargetInput& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline UpdateExperimentTemplateTargetInput& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline UpdateExperimentTemplateTargetInput& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline UpdateExperimentTemplateTargetInput& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline UpdateExperimentTemplateTargetInput& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline UpdateExperimentTemplateTargetInput& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateExperimentTemplateTargetInput& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline UpdateExperimentTemplateTargetInput& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline UpdateExperimentTemplateTargetInput& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    Aws::Vector<ExperimentTemplateTargetInputFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_selectionMode;
    bool m_selectionModeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
