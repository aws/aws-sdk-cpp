/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/RdsRequirements.h>
#include <aws/dms/model/RdsConfiguration.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that describes a recommendation of a target engine on
   * Amazon RDS.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RdsRecommendation">AWS
   * API Reference</a></p>
   */
  class RdsRecommendation
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API RdsRecommendation() = default;
    AWS_DATABASEMIGRATIONSERVICE_API RdsRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API RdsRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Supplemental information about the requirements to the recommended target
     * database on Amazon RDS.</p>
     */
    inline const RdsRequirements& GetRequirementsToTarget() const { return m_requirementsToTarget; }
    inline bool RequirementsToTargetHasBeenSet() const { return m_requirementsToTargetHasBeenSet; }
    template<typename RequirementsToTargetT = RdsRequirements>
    void SetRequirementsToTarget(RequirementsToTargetT&& value) { m_requirementsToTargetHasBeenSet = true; m_requirementsToTarget = std::forward<RequirementsToTargetT>(value); }
    template<typename RequirementsToTargetT = RdsRequirements>
    RdsRecommendation& WithRequirementsToTarget(RequirementsToTargetT&& value) { SetRequirementsToTarget(std::forward<RequirementsToTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supplemental information about the configuration of the recommended target
     * database on Amazon RDS.</p>
     */
    inline const RdsConfiguration& GetTargetConfiguration() const { return m_targetConfiguration; }
    inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }
    template<typename TargetConfigurationT = RdsConfiguration>
    void SetTargetConfiguration(TargetConfigurationT&& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = std::forward<TargetConfigurationT>(value); }
    template<typename TargetConfigurationT = RdsConfiguration>
    RdsRecommendation& WithTargetConfiguration(TargetConfigurationT&& value) { SetTargetConfiguration(std::forward<TargetConfigurationT>(value)); return *this;}
    ///@}
  private:

    RdsRequirements m_requirementsToTarget;
    bool m_requirementsToTargetHasBeenSet = false;

    RdsConfiguration m_targetConfiguration;
    bool m_targetConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
