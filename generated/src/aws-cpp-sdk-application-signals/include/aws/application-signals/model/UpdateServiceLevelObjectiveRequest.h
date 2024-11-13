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
  class UpdateServiceLevelObjectiveRequest : public ApplicationSignalsRequest
  {
  public:
    AWS_APPLICATIONSIGNALS_API UpdateServiceLevelObjectiveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceLevelObjective"; }

    AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or name of the service level objective that
     * you want to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateServiceLevelObjectiveRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateServiceLevelObjectiveRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateServiceLevelObjectiveRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for the SLO.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateServiceLevelObjectiveRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateServiceLevelObjectiveRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateServiceLevelObjectiveRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this SLO is a period-based SLO, this structure defines the information
     * about what performance metric this SLO will monitor.</p>
     */
    inline const ServiceLevelIndicatorConfig& GetSliConfig() const{ return m_sliConfig; }
    inline bool SliConfigHasBeenSet() const { return m_sliConfigHasBeenSet; }
    inline void SetSliConfig(const ServiceLevelIndicatorConfig& value) { m_sliConfigHasBeenSet = true; m_sliConfig = value; }
    inline void SetSliConfig(ServiceLevelIndicatorConfig&& value) { m_sliConfigHasBeenSet = true; m_sliConfig = std::move(value); }
    inline UpdateServiceLevelObjectiveRequest& WithSliConfig(const ServiceLevelIndicatorConfig& value) { SetSliConfig(value); return *this;}
    inline UpdateServiceLevelObjectiveRequest& WithSliConfig(ServiceLevelIndicatorConfig&& value) { SetSliConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this SLO is a request-based SLO, this structure defines the information
     * about what performance metric this SLO will monitor.</p> <p>You can't specify
     * both <code>SliConfig</code> and <code>RequestBasedSliConfig</code> in the same
     * operation.</p>
     */
    inline const RequestBasedServiceLevelIndicatorConfig& GetRequestBasedSliConfig() const{ return m_requestBasedSliConfig; }
    inline bool RequestBasedSliConfigHasBeenSet() const { return m_requestBasedSliConfigHasBeenSet; }
    inline void SetRequestBasedSliConfig(const RequestBasedServiceLevelIndicatorConfig& value) { m_requestBasedSliConfigHasBeenSet = true; m_requestBasedSliConfig = value; }
    inline void SetRequestBasedSliConfig(RequestBasedServiceLevelIndicatorConfig&& value) { m_requestBasedSliConfigHasBeenSet = true; m_requestBasedSliConfig = std::move(value); }
    inline UpdateServiceLevelObjectiveRequest& WithRequestBasedSliConfig(const RequestBasedServiceLevelIndicatorConfig& value) { SetRequestBasedSliConfig(value); return *this;}
    inline UpdateServiceLevelObjectiveRequest& WithRequestBasedSliConfig(RequestBasedServiceLevelIndicatorConfig&& value) { SetRequestBasedSliConfig(std::move(value)); return *this;}
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
    inline UpdateServiceLevelObjectiveRequest& WithGoal(const Goal& value) { SetGoal(value); return *this;}
    inline UpdateServiceLevelObjectiveRequest& WithGoal(Goal&& value) { SetGoal(std::move(value)); return *this;}
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
    inline UpdateServiceLevelObjectiveRequest& WithBurnRateConfigurations(const Aws::Vector<BurnRateConfiguration>& value) { SetBurnRateConfigurations(value); return *this;}
    inline UpdateServiceLevelObjectiveRequest& WithBurnRateConfigurations(Aws::Vector<BurnRateConfiguration>&& value) { SetBurnRateConfigurations(std::move(value)); return *this;}
    inline UpdateServiceLevelObjectiveRequest& AddBurnRateConfigurations(const BurnRateConfiguration& value) { m_burnRateConfigurationsHasBeenSet = true; m_burnRateConfigurations.push_back(value); return *this; }
    inline UpdateServiceLevelObjectiveRequest& AddBurnRateConfigurations(BurnRateConfiguration&& value) { m_burnRateConfigurationsHasBeenSet = true; m_burnRateConfigurations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ServiceLevelIndicatorConfig m_sliConfig;
    bool m_sliConfigHasBeenSet = false;

    RequestBasedServiceLevelIndicatorConfig m_requestBasedSliConfig;
    bool m_requestBasedSliConfigHasBeenSet = false;

    Goal m_goal;
    bool m_goalHasBeenSet = false;

    Aws::Vector<BurnRateConfiguration> m_burnRateConfigurations;
    bool m_burnRateConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
