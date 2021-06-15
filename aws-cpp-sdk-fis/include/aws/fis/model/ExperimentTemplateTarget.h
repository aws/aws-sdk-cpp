/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/fis/model/ExperimentTemplateTargetFilter.h>
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
   * <p>Describes a target for an experiment template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentTemplateTarget">AWS
   * API Reference</a></p>
   */
  class AWS_FIS_API ExperimentTemplateTarget
  {
  public:
    ExperimentTemplateTarget();
    ExperimentTemplateTarget(Aws::Utils::Json::JsonView jsonValue);
    ExperimentTemplateTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type.</p>
     */
    inline ExperimentTemplateTarget& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline ExperimentTemplateTarget& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline ExperimentTemplateTarget& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the targets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the targets.</p>
     */
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the targets.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the targets.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the targets.</p>
     */
    inline ExperimentTemplateTarget& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the targets.</p>
     */
    inline ExperimentTemplateTarget& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the targets.</p>
     */
    inline ExperimentTemplateTarget& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the targets.</p>
     */
    inline ExperimentTemplateTarget& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the targets.</p>
     */
    inline ExperimentTemplateTarget& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }


    /**
     * <p>The tags for the target resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p>The tags for the target resources.</p>
     */
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }

    /**
     * <p>The tags for the target resources.</p>
     */
    inline void SetResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }

    /**
     * <p>The tags for the target resources.</p>
     */
    inline void SetResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }

    /**
     * <p>The tags for the target resources.</p>
     */
    inline ExperimentTemplateTarget& WithResourceTags(const Aws::Map<Aws::String, Aws::String>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>The tags for the target resources.</p>
     */
    inline ExperimentTemplateTarget& WithResourceTags(Aws::Map<Aws::String, Aws::String>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the target resources.</p>
     */
    inline ExperimentTemplateTarget& AddResourceTags(const Aws::String& key, const Aws::String& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, value); return *this; }

    /**
     * <p>The tags for the target resources.</p>
     */
    inline ExperimentTemplateTarget& AddResourceTags(Aws::String&& key, const Aws::String& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the target resources.</p>
     */
    inline ExperimentTemplateTarget& AddResourceTags(const Aws::String& key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the target resources.</p>
     */
    inline ExperimentTemplateTarget& AddResourceTags(Aws::String&& key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags for the target resources.</p>
     */
    inline ExperimentTemplateTarget& AddResourceTags(const char* key, Aws::String&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the target resources.</p>
     */
    inline ExperimentTemplateTarget& AddResourceTags(Aws::String&& key, const char* value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the target resources.</p>
     */
    inline ExperimentTemplateTarget& AddResourceTags(const char* key, const char* value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace(key, value); return *this; }


    /**
     * <p>The filters to apply to identify target resources using specific
     * attributes.</p>
     */
    inline const Aws::Vector<ExperimentTemplateTargetFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters to apply to identify target resources using specific
     * attributes.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters to apply to identify target resources using specific
     * attributes.</p>
     */
    inline void SetFilters(const Aws::Vector<ExperimentTemplateTargetFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters to apply to identify target resources using specific
     * attributes.</p>
     */
    inline void SetFilters(Aws::Vector<ExperimentTemplateTargetFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters to apply to identify target resources using specific
     * attributes.</p>
     */
    inline ExperimentTemplateTarget& WithFilters(const Aws::Vector<ExperimentTemplateTargetFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters to apply to identify target resources using specific
     * attributes.</p>
     */
    inline ExperimentTemplateTarget& WithFilters(Aws::Vector<ExperimentTemplateTargetFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters to apply to identify target resources using specific
     * attributes.</p>
     */
    inline ExperimentTemplateTarget& AddFilters(const ExperimentTemplateTargetFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters to apply to identify target resources using specific
     * attributes.</p>
     */
    inline ExperimentTemplateTarget& AddFilters(ExperimentTemplateTargetFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>Scopes the identified resources to a specific count or percentage.</p>
     */
    inline const Aws::String& GetSelectionMode() const{ return m_selectionMode; }

    /**
     * <p>Scopes the identified resources to a specific count or percentage.</p>
     */
    inline bool SelectionModeHasBeenSet() const { return m_selectionModeHasBeenSet; }

    /**
     * <p>Scopes the identified resources to a specific count or percentage.</p>
     */
    inline void SetSelectionMode(const Aws::String& value) { m_selectionModeHasBeenSet = true; m_selectionMode = value; }

    /**
     * <p>Scopes the identified resources to a specific count or percentage.</p>
     */
    inline void SetSelectionMode(Aws::String&& value) { m_selectionModeHasBeenSet = true; m_selectionMode = std::move(value); }

    /**
     * <p>Scopes the identified resources to a specific count or percentage.</p>
     */
    inline void SetSelectionMode(const char* value) { m_selectionModeHasBeenSet = true; m_selectionMode.assign(value); }

    /**
     * <p>Scopes the identified resources to a specific count or percentage.</p>
     */
    inline ExperimentTemplateTarget& WithSelectionMode(const Aws::String& value) { SetSelectionMode(value); return *this;}

    /**
     * <p>Scopes the identified resources to a specific count or percentage.</p>
     */
    inline ExperimentTemplateTarget& WithSelectionMode(Aws::String&& value) { SetSelectionMode(std::move(value)); return *this;}

    /**
     * <p>Scopes the identified resources to a specific count or percentage.</p>
     */
    inline ExperimentTemplateTarget& WithSelectionMode(const char* value) { SetSelectionMode(value); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_resourceTags;
    bool m_resourceTagsHasBeenSet;

    Aws::Vector<ExperimentTemplateTargetFilter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_selectionMode;
    bool m_selectionModeHasBeenSet;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
