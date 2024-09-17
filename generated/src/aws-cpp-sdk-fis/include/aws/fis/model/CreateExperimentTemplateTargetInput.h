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
   * Resource Name (ARN) or at least one resource tag. You cannot specify both ARNs
   * and tags.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/fis/latest/userguide/targets.html">Targets</a>
   * in the <i>Fault Injection Service User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/CreateExperimentTemplateTargetInput">AWS
   * API Reference</a></p>
   */
  class CreateExperimentTemplateTargetInput
  {
  public:
    AWS_FIS_API CreateExperimentTemplateTargetInput();
    AWS_FIS_API CreateExperimentTemplateTargetInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API CreateExperimentTemplateTargetInput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline CreateExperimentTemplateTargetInput& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline CreateExperimentTemplateTargetInput& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline CreateExperimentTemplateTargetInput& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }
    inline CreateExperimentTemplateTargetInput& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}
    inline CreateExperimentTemplateTargetInput& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}
    inline CreateExperimentTemplateTargetInput& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }
    inline CreateExperimentTemplateTargetInput& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }
    inline CreateExperimentTemplateTargetInput& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags for the target resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceTags() const{ return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    inline void SetResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }
    inline void SetResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }
    inline CreateExperimentTemplateTargetInput& WithResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { SetResourceTags(value); return *this;}
    inline CreateExperimentTemplateTargetInput& WithResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { SetResourceTags(std::move(value)); return *this;}
    inline CreateExperimentTemplateTargetInput& AddResourceTags(const Aws::String& key, const Aws::String& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, value); return *this; }
    inline CreateExperimentTemplateTargetInput& AddResourceTags(Aws::String&& key, const Aws::String& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), value); return *this; }
    inline CreateExperimentTemplateTargetInput& AddResourceTags(const Aws::String& key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, std::move(value)); return *this; }
    inline CreateExperimentTemplateTargetInput& AddResourceTags(Aws::String&& key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateExperimentTemplateTargetInput& AddResourceTags(const char* key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, std::move(value)); return *this; }
    inline CreateExperimentTemplateTargetInput& AddResourceTags(Aws::String&& key, const char* value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), value); return *this; }
    inline CreateExperimentTemplateTargetInput& AddResourceTags(const char* key, const char* value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, value); return *this; }
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
    inline CreateExperimentTemplateTargetInput& WithFilters(const Aws::Vector<ExperimentTemplateTargetInputFilter>& value) { SetFilters(value); return *this;}
    inline CreateExperimentTemplateTargetInput& WithFilters(Aws::Vector<ExperimentTemplateTargetInputFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline CreateExperimentTemplateTargetInput& AddFilters(const ExperimentTemplateTargetInputFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline CreateExperimentTemplateTargetInput& AddFilters(ExperimentTemplateTargetInputFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Scopes the identified resources to a specific count of the resources at
     * random, or a percentage of the resources. All identified resources are included
     * in the target.</p> <ul> <li> <p>ALL - Run the action on all identified targets.
     * This is the default.</p> </li> <li> <p>COUNT(n) - Run the action on the
     * specified number of targets, chosen from the identified targets at random. For
     * example, COUNT(1) selects one of the targets.</p> </li> <li> <p>PERCENT(n) - Run
     * the action on the specified percentage of targets, chosen from the identified
     * targets at random. For example, PERCENT(25) selects 25% of the targets.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetSelectionMode() const{ return m_selectionMode; }
    inline bool SelectionModeHasBeenSet() const { return m_selectionModeHasBeenSet; }
    inline void SetSelectionMode(const Aws::String& value) { m_selectionModeHasBeenSet = true; m_selectionMode = value; }
    inline void SetSelectionMode(Aws::String&& value) { m_selectionModeHasBeenSet = true; m_selectionMode = std::move(value); }
    inline void SetSelectionMode(const char* value) { m_selectionModeHasBeenSet = true; m_selectionMode.assign(value); }
    inline CreateExperimentTemplateTargetInput& WithSelectionMode(const Aws::String& value) { SetSelectionMode(value); return *this;}
    inline CreateExperimentTemplateTargetInput& WithSelectionMode(Aws::String&& value) { SetSelectionMode(std::move(value)); return *this;}
    inline CreateExperimentTemplateTargetInput& WithSelectionMode(const char* value) { SetSelectionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline CreateExperimentTemplateTargetInput& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline CreateExperimentTemplateTargetInput& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline CreateExperimentTemplateTargetInput& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline CreateExperimentTemplateTargetInput& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline CreateExperimentTemplateTargetInput& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline CreateExperimentTemplateTargetInput& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateExperimentTemplateTargetInput& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline CreateExperimentTemplateTargetInput& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline CreateExperimentTemplateTargetInput& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
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
