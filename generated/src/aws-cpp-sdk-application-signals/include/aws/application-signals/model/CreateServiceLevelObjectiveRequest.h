/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/ServiceLevelIndicatorConfig.h>
#include <aws/application-signals/model/RequestBasedServiceLevelIndicatorConfig.h>
#include <aws/application-signals/model/Goal.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-signals/model/Tag.h>
#include <aws/application-signals/model/BurnRateConfiguration.h>
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
    AWS_APPLICATIONSIGNALS_API CreateServiceLevelObjectiveRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateServiceLevelObjectiveRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for this SLO.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateServiceLevelObjectiveRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this SLO is a period-based SLO, this structure defines the information
     * about what performance metric this SLO will monitor.</p> <p>You can't specify
     * both <code>RequestBasedSliConfig</code> and <code>SliConfig</code> in the same
     * operation.</p>
     */
    inline const ServiceLevelIndicatorConfig& GetSliConfig() const { return m_sliConfig; }
    inline bool SliConfigHasBeenSet() const { return m_sliConfigHasBeenSet; }
    template<typename SliConfigT = ServiceLevelIndicatorConfig>
    void SetSliConfig(SliConfigT&& value) { m_sliConfigHasBeenSet = true; m_sliConfig = std::forward<SliConfigT>(value); }
    template<typename SliConfigT = ServiceLevelIndicatorConfig>
    CreateServiceLevelObjectiveRequest& WithSliConfig(SliConfigT&& value) { SetSliConfig(std::forward<SliConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this SLO is a request-based SLO, this structure defines the information
     * about what performance metric this SLO will monitor.</p> <p>You can't specify
     * both <code>RequestBasedSliConfig</code> and <code>SliConfig</code> in the same
     * operation.</p>
     */
    inline const RequestBasedServiceLevelIndicatorConfig& GetRequestBasedSliConfig() const { return m_requestBasedSliConfig; }
    inline bool RequestBasedSliConfigHasBeenSet() const { return m_requestBasedSliConfigHasBeenSet; }
    template<typename RequestBasedSliConfigT = RequestBasedServiceLevelIndicatorConfig>
    void SetRequestBasedSliConfig(RequestBasedSliConfigT&& value) { m_requestBasedSliConfigHasBeenSet = true; m_requestBasedSliConfig = std::forward<RequestBasedSliConfigT>(value); }
    template<typename RequestBasedSliConfigT = RequestBasedServiceLevelIndicatorConfig>
    CreateServiceLevelObjectiveRequest& WithRequestBasedSliConfig(RequestBasedSliConfigT&& value) { SetRequestBasedSliConfig(std::forward<RequestBasedSliConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains the attributes that determine the goal of the
     * SLO.</p>
     */
    inline const Goal& GetGoal() const { return m_goal; }
    inline bool GoalHasBeenSet() const { return m_goalHasBeenSet; }
    template<typename GoalT = Goal>
    void SetGoal(GoalT&& value) { m_goalHasBeenSet = true; m_goal = std::forward<GoalT>(value); }
    template<typename GoalT = Goal>
    CreateServiceLevelObjectiveRequest& WithGoal(GoalT&& value) { SetGoal(std::forward<GoalT>(value)); return *this;}
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
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateServiceLevelObjectiveRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateServiceLevelObjectiveRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use this array to create <i>burn rates</i> for this SLO. Each burn rate is a
     * metric that indicates how fast the service is consuming the error budget,
     * relative to the attainment goal of the SLO.</p>
     */
    inline const Aws::Vector<BurnRateConfiguration>& GetBurnRateConfigurations() const { return m_burnRateConfigurations; }
    inline bool BurnRateConfigurationsHasBeenSet() const { return m_burnRateConfigurationsHasBeenSet; }
    template<typename BurnRateConfigurationsT = Aws::Vector<BurnRateConfiguration>>
    void SetBurnRateConfigurations(BurnRateConfigurationsT&& value) { m_burnRateConfigurationsHasBeenSet = true; m_burnRateConfigurations = std::forward<BurnRateConfigurationsT>(value); }
    template<typename BurnRateConfigurationsT = Aws::Vector<BurnRateConfiguration>>
    CreateServiceLevelObjectiveRequest& WithBurnRateConfigurations(BurnRateConfigurationsT&& value) { SetBurnRateConfigurations(std::forward<BurnRateConfigurationsT>(value)); return *this;}
    template<typename BurnRateConfigurationsT = BurnRateConfiguration>
    CreateServiceLevelObjectiveRequest& AddBurnRateConfigurations(BurnRateConfigurationsT&& value) { m_burnRateConfigurationsHasBeenSet = true; m_burnRateConfigurations.emplace_back(std::forward<BurnRateConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ServiceLevelIndicatorConfig m_sliConfig;
    bool m_sliConfigHasBeenSet = false;

    RequestBasedServiceLevelIndicatorConfig m_requestBasedSliConfig;
    bool m_requestBasedSliConfigHasBeenSet = false;

    Goal m_goal;
    bool m_goalHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<BurnRateConfiguration> m_burnRateConfigurations;
    bool m_burnRateConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
