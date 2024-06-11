/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/fis/model/ActionParameter.h>
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
   * <p>Describes an action. For more information, see <a
   * href="https://docs.aws.amazon.com/fis/latest/userguide/fis-actions-reference.html">FIS
   * actions</a> in the <i>Fault Injection Service User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/Action">AWS API
   * Reference</a></p>
   */
  class Action
  {
  public:
    AWS_FIS_API Action();
    AWS_FIS_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the action.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Action& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Action& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Action& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Action& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Action& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Action& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Action& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Action& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Action& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action parameters, if applicable.</p>
     */
    inline const Aws::Map<Aws::String, ActionParameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, ActionParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, ActionParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline Action& WithParameters(const Aws::Map<Aws::String, ActionParameter>& value) { SetParameters(value); return *this;}
    inline Action& WithParameters(Aws::Map<Aws::String, ActionParameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline Action& AddParameters(const Aws::String& key, const ActionParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline Action& AddParameters(Aws::String&& key, const ActionParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline Action& AddParameters(const Aws::String& key, ActionParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline Action& AddParameters(Aws::String&& key, ActionParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline Action& AddParameters(const char* key, ActionParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline Action& AddParameters(const char* key, const ActionParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported targets for the action.</p>
     */
    inline const Aws::Map<Aws::String, ActionTarget>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Map<Aws::String, ActionTarget>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Map<Aws::String, ActionTarget>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline Action& WithTargets(const Aws::Map<Aws::String, ActionTarget>& value) { SetTargets(value); return *this;}
    inline Action& WithTargets(Aws::Map<Aws::String, ActionTarget>&& value) { SetTargets(std::move(value)); return *this;}
    inline Action& AddTargets(const Aws::String& key, const ActionTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }
    inline Action& AddTargets(Aws::String&& key, const ActionTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), value); return *this; }
    inline Action& AddTargets(const Aws::String& key, ActionTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }
    inline Action& AddTargets(Aws::String&& key, ActionTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), std::move(value)); return *this; }
    inline Action& AddTargets(const char* key, ActionTarget&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }
    inline Action& AddTargets(const char* key, const ActionTarget& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags for the action.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Action& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Action& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Action& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Action& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Action& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Action& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Action& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Action& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Action& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, ActionParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Map<Aws::String, ActionTarget> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
