/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfig/model/GrowthType.h>
#include <aws/appconfig/model/ReplicateTo.h>
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
namespace AppConfig
{
namespace Model
{

  class DeploymentStrategy
  {
  public:
    AWS_APPCONFIG_API DeploymentStrategy() = default;
    AWS_APPCONFIG_API DeploymentStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API DeploymentStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The deployment strategy ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DeploymentStrategy& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the deployment strategy.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DeploymentStrategy& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the deployment strategy.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DeploymentStrategy& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total amount of time the deployment lasted.</p>
     */
    inline int GetDeploymentDurationInMinutes() const { return m_deploymentDurationInMinutes; }
    inline bool DeploymentDurationInMinutesHasBeenSet() const { return m_deploymentDurationInMinutesHasBeenSet; }
    inline void SetDeploymentDurationInMinutes(int value) { m_deploymentDurationInMinutesHasBeenSet = true; m_deploymentDurationInMinutes = value; }
    inline DeploymentStrategy& WithDeploymentDurationInMinutes(int value) { SetDeploymentDurationInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm used to define how percentage grew over time.</p>
     */
    inline GrowthType GetGrowthType() const { return m_growthType; }
    inline bool GrowthTypeHasBeenSet() const { return m_growthTypeHasBeenSet; }
    inline void SetGrowthType(GrowthType value) { m_growthTypeHasBeenSet = true; m_growthType = value; }
    inline DeploymentStrategy& WithGrowthType(GrowthType value) { SetGrowthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of targets that received a deployed configuration during each
     * interval.</p>
     */
    inline double GetGrowthFactor() const { return m_growthFactor; }
    inline bool GrowthFactorHasBeenSet() const { return m_growthFactorHasBeenSet; }
    inline void SetGrowthFactor(double value) { m_growthFactorHasBeenSet = true; m_growthFactor = value; }
    inline DeploymentStrategy& WithGrowthFactor(double value) { SetGrowthFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that AppConfig monitored for alarms before considering the
     * deployment to be complete and no longer eligible for automatic rollback.</p>
     */
    inline int GetFinalBakeTimeInMinutes() const { return m_finalBakeTimeInMinutes; }
    inline bool FinalBakeTimeInMinutesHasBeenSet() const { return m_finalBakeTimeInMinutesHasBeenSet; }
    inline void SetFinalBakeTimeInMinutes(int value) { m_finalBakeTimeInMinutesHasBeenSet = true; m_finalBakeTimeInMinutes = value; }
    inline DeploymentStrategy& WithFinalBakeTimeInMinutes(int value) { SetFinalBakeTimeInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Save the deployment strategy to a Systems Manager (SSM) document.</p>
     */
    inline ReplicateTo GetReplicateTo() const { return m_replicateTo; }
    inline bool ReplicateToHasBeenSet() const { return m_replicateToHasBeenSet; }
    inline void SetReplicateTo(ReplicateTo value) { m_replicateToHasBeenSet = true; m_replicateTo = value; }
    inline DeploymentStrategy& WithReplicateTo(ReplicateTo value) { SetReplicateTo(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeploymentStrategy& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_deploymentDurationInMinutes{0};
    bool m_deploymentDurationInMinutesHasBeenSet = false;

    GrowthType m_growthType{GrowthType::NOT_SET};
    bool m_growthTypeHasBeenSet = false;

    double m_growthFactor{0.0};
    bool m_growthFactorHasBeenSet = false;

    int m_finalBakeTimeInMinutes{0};
    bool m_finalBakeTimeInMinutesHasBeenSet = false;

    ReplicateTo m_replicateTo{ReplicateTo::NOT_SET};
    bool m_replicateToHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
