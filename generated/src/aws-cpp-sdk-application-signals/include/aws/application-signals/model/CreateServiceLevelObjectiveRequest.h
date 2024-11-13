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
     * <p>If this SLO is a period-based SLO, this structure defines the information
     * about what performance metric this SLO will monitor.</p> <p>You can't specify
     * both <code>RequestBasedSliConfig</code> and <code>SliConfig</code> in the same
     * operation.</p>
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
     * <p>If this SLO is a request-based SLO, this structure defines the information
     * about what performance metric this SLO will monitor.</p> <p>You can't specify
     * both <code>RequestBasedSliConfig</code> and <code>SliConfig</code> in the same
     * operation.</p>
     */
    inline const RequestBasedServiceLevelIndicatorConfig& GetRequestBasedSliConfig() const{ return m_requestBasedSliConfig; }
    inline bool RequestBasedSliConfigHasBeenSet() const { return m_requestBasedSliConfigHasBeenSet; }
    inline void SetRequestBasedSliConfig(const RequestBasedServiceLevelIndicatorConfig& value) { m_requestBasedSliConfigHasBeenSet = true; m_requestBasedSliConfig = value; }
    inline void SetRequestBasedSliConfig(RequestBasedServiceLevelIndicatorConfig&& value) { m_requestBasedSliConfigHasBeenSet = true; m_requestBasedSliConfig = std::move(value); }
    inline CreateServiceLevelObjectiveRequest& WithRequestBasedSliConfig(const RequestBasedServiceLevelIndicatorConfig& value) { SetRequestBasedSliConfig(value); return *this;}
    inline CreateServiceLevelObjectiveRequest& WithRequestBasedSliConfig(RequestBasedServiceLevelIndicatorConfig&& value) { SetRequestBasedSliConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains the attributes that determine the goal of the
     * SLO.</p>
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

    ///@{
    /**
     * <p>Use this array to create <i>burn rates</i> for this SLO. Each burn rate is a
     * metric that indicates how fast the service is consuming the error budget,
     * relative to the attainment goal of the SLO.</p>
     */
    inline const Aws::Vector<BurnRateConfiguration>& GetBurnRateConfigurations() const{ return m_burnRateConfigurations; }
    inline bool BurnRateConfigurationsHasBeenSet() const { return m_burnRateConfigurationsHasBeenSet; }
    inline void SetBurnRateConfigurations(const Aws::Vector<BurnRateConfiguration>& value) { m_burnRateConfigurationsHasBeenSet = true; m_burnRateConfigurations = value; }
    inline void SetBurnRateConfigurations(Aws::Vector<BurnRateConfiguration>&& value) { m_burnRateConfigurationsHasBeenSet = true; m_burnRateConfigurations = std::move(value); }
    inline CreateServiceLevelObjectiveRequest& WithBurnRateConfigurations(const Aws::Vector<BurnRateConfiguration>& value) { SetBurnRateConfigurations(value); return *this;}
    inline CreateServiceLevelObjectiveRequest& WithBurnRateConfigurations(Aws::Vector<BurnRateConfiguration>&& value) { SetBurnRateConfigurations(std::move(value)); return *this;}
    inline CreateServiceLevelObjectiveRequest& AddBurnRateConfigurations(const BurnRateConfiguration& value) { m_burnRateConfigurationsHasBeenSet = true; m_burnRateConfigurations.push_back(value); return *this; }
    inline CreateServiceLevelObjectiveRequest& AddBurnRateConfigurations(BurnRateConfiguration&& value) { m_burnRateConfigurationsHasBeenSet = true; m_burnRateConfigurations.push_back(std::move(value)); return *this; }
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
