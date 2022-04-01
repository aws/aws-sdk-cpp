/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/fis/model/ActionTarget.h>
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
   * <p>Provides a summary of an action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ActionSummary">AWS
   * API Reference</a></p>
   */
  class AWS_FIS_API ActionSummary
  {
  public:
    ActionSummary();
    ActionSummary(Aws::Utils::Json::JsonView jsonValue);
    ActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the action.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the action.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the action.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the action.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the action.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the action.</p>
     */
    inline ActionSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the action.</p>
     */
    inline ActionSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the action.</p>
     */
    inline ActionSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The description for the action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the action.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the action.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the action.</p>
     */
    inline ActionSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the action.</p>
     */
    inline ActionSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the action.</p>
     */
    inline ActionSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The targets for the action.</p>
     */
    inline const Aws::Map<Aws::String, ActionTarget>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets for the action.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets for the action.</p>
     */
    inline void SetTargets(const Aws::Map<Aws::String, ActionTarget>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets for the action.</p>
     */
    inline void SetTargets(Aws::Map<Aws::String, ActionTarget>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets for the action.</p>
     */
    inline ActionSummary& WithTargets(const Aws::Map<Aws::String, ActionTarget>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets for the action.</p>
     */
    inline ActionSummary& WithTargets(Aws::Map<Aws::String, ActionTarget>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets for the action.</p>
     */
    inline ActionSummary& AddTargets(const Aws::String& key, const ActionTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }

    /**
     * <p>The targets for the action.</p>
     */
    inline ActionSummary& AddTargets(Aws::String&& key, const ActionTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), value); return *this; }

    /**
     * <p>The targets for the action.</p>
     */
    inline ActionSummary& AddTargets(const Aws::String& key, ActionTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The targets for the action.</p>
     */
    inline ActionSummary& AddTargets(Aws::String&& key, ActionTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The targets for the action.</p>
     */
    inline ActionSummary& AddTargets(const char* key, ActionTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The targets for the action.</p>
     */
    inline ActionSummary& AddTargets(const char* key, const ActionTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }


    /**
     * <p>The tags for the action.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the action.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the action.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the action.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the action.</p>
     */
    inline ActionSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the action.</p>
     */
    inline ActionSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the action.</p>
     */
    inline ActionSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags for the action.</p>
     */
    inline ActionSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the action.</p>
     */
    inline ActionSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the action.</p>
     */
    inline ActionSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags for the action.</p>
     */
    inline ActionSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the action.</p>
     */
    inline ActionSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the action.</p>
     */
    inline ActionSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Map<Aws::String, ActionTarget> m_targets;
    bool m_targetsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
