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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TriggerType.h>
#include <aws/glue/model/Predicate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Action.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API CreateTriggerRequest : public GlueRequest
  {
  public:
    CreateTriggerRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrigger"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name to assign to the new trigger.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name to assign to the new trigger.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name to assign to the new trigger.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name to assign to the new trigger.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name to assign to the new trigger.</p>
     */
    inline CreateTriggerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name to assign to the new trigger.</p>
     */
    inline CreateTriggerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name to assign to the new trigger.</p>
     */
    inline CreateTriggerRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the new trigger.</p>
     */
    inline const TriggerType& GetType() const{ return m_type; }

    /**
     * <p>The type of the new trigger.</p>
     */
    inline void SetType(const TriggerType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the new trigger.</p>
     */
    inline void SetType(TriggerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the new trigger.</p>
     */
    inline CreateTriggerRequest& WithType(const TriggerType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the new trigger.</p>
     */
    inline CreateTriggerRequest& WithType(TriggerType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A cron schedule expression for the new trigger.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }

    /**
     * <p>A cron schedule expression for the new trigger.</p>
     */
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>A cron schedule expression for the new trigger.</p>
     */
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>A cron schedule expression for the new trigger.</p>
     */
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }

    /**
     * <p>A cron schedule expression for the new trigger.</p>
     */
    inline CreateTriggerRequest& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}

    /**
     * <p>A cron schedule expression for the new trigger.</p>
     */
    inline CreateTriggerRequest& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}

    /**
     * <p>A cron schedule expression for the new trigger.</p>
     */
    inline CreateTriggerRequest& WithSchedule(const char* value) { SetSchedule(value); return *this;}


    /**
     * <p>A predicate to specify when the new trigger should fire.</p>
     */
    inline const Predicate& GetPredicate() const{ return m_predicate; }

    /**
     * <p>A predicate to specify when the new trigger should fire.</p>
     */
    inline void SetPredicate(const Predicate& value) { m_predicateHasBeenSet = true; m_predicate = value; }

    /**
     * <p>A predicate to specify when the new trigger should fire.</p>
     */
    inline void SetPredicate(Predicate&& value) { m_predicateHasBeenSet = true; m_predicate = std::move(value); }

    /**
     * <p>A predicate to specify when the new trigger should fire.</p>
     */
    inline CreateTriggerRequest& WithPredicate(const Predicate& value) { SetPredicate(value); return *this;}

    /**
     * <p>A predicate to specify when the new trigger should fire.</p>
     */
    inline CreateTriggerRequest& WithPredicate(Predicate&& value) { SetPredicate(std::move(value)); return *this;}


    /**
     * <p>The actions initiated by this trigger when it fires.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions initiated by this trigger when it fires.</p>
     */
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions initiated by this trigger when it fires.</p>
     */
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions initiated by this trigger when it fires.</p>
     */
    inline CreateTriggerRequest& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions initiated by this trigger when it fires.</p>
     */
    inline CreateTriggerRequest& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions initiated by this trigger when it fires.</p>
     */
    inline CreateTriggerRequest& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions initiated by this trigger when it fires.</p>
     */
    inline CreateTriggerRequest& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>A description of the new trigger.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the new trigger.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the new trigger.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the new trigger.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the new trigger.</p>
     */
    inline CreateTriggerRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the new trigger.</p>
     */
    inline CreateTriggerRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the new trigger.</p>
     */
    inline CreateTriggerRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    TriggerType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet;

    Predicate m_predicate;
    bool m_predicateHasBeenSet;

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
