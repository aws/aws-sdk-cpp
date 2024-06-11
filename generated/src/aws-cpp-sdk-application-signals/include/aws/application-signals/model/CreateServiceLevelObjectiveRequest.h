/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/ServiceLevelIndicatorConfig.h>
#include <aws/application-signals/model/Goal.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-signals/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

  /**
   */
  class CreateServiceLevelObjectiveRequest : public ApplicationSignalsRequest
  {
  public:
    AWS_APPLICATIONSIGNALS_API CreateServiceLevelObjectiveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServiceLevelObjective"; }

    AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A name for this SLO.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateServiceLevelObjectiveRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateServiceLevelObjectiveRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateServiceLevelObjectiveRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for this SLO.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateServiceLevelObjectiveRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateServiceLevelObjectiveRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateServiceLevelObjectiveRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains information about what service and what performance
     * metric that this SLO will monitor.</p>
     */
    inline const ServiceLevelIndicatorConfig& GetSliConfig() const{ return m_sliConfig; }
    inline bool SliConfigHasBeenSet() const { return m_sliConfigHasBeenSet; }
    inline void SetSliConfig(const ServiceLevelIndicatorConfig& value) { m_sliConfigHasBeenSet = true; m_sliConfig = value; }
    inline void SetSliConfig(ServiceLevelIndicatorConfig&& value) { m_sliConfigHasBeenSet = true; m_sliConfig = std::move(value); }
    inline CreateServiceLevelObjectiveRequest& WithSliConfig(const ServiceLevelIndicatorConfig& value) { SetSliConfig(value); return *this;}
    inline CreateServiceLevelObjectiveRequest& WithSliConfig(ServiceLevelIndicatorConfig&& value) { SetSliConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the attributes that determine the goal of the SLO.
     * This includes the time period for evaluation and the attainment threshold.</p>
     */
    inline const Goal& GetGoal() const{ return m_goal; }
    inline bool GoalHasBeenSet() const { return m_goalHasBeenSet; }
    inline void SetGoal(const Goal& value) { m_goalHasBeenSet = true; m_goal = value; }
    inline void SetGoal(Goal&& value) { m_goalHasBeenSet = true; m_goal = std::move(value); }
    inline CreateServiceLevelObjectiveRequest& WithGoal(const Goal& value) { SetGoal(value); return *this;}
    inline CreateServiceLevelObjectiveRequest& WithGoal(Goal&& value) { SetGoal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs to associate with the SLO. You can associate as
     * many as 50 tags with an SLO. To be able to associate tags with the SLO when you
     * create the SLO, you must have the <code>cloudwatch:TagResource</code>
     * permission.</p> <p>Tags can help you organize and categorize your resources. You
     * can also use them to scope user permissions by granting a user permission to
     * access or change only resources with certain tag values.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateServiceLevelObjectiveRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateServiceLevelObjectiveRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateServiceLevelObjectiveRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateServiceLevelObjectiveRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ServiceLevelIndicatorConfig m_sliConfig;
    bool m_sliConfigHasBeenSet = false;

    Goal m_goal;
    bool m_goalHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
