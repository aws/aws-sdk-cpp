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
    AWS_DATABASEMIGRATIONSERVICE_API RdsRecommendation();
    AWS_DATABASEMIGRATIONSERVICE_API RdsRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API RdsRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Supplemental information about the requirements to the recommended target
     * database on Amazon RDS.</p>
     */
    inline const RdsRequirements& GetRequirementsToTarget() const{ return m_requirementsToTarget; }

    /**
     * <p>Supplemental information about the requirements to the recommended target
     * database on Amazon RDS.</p>
     */
    inline bool RequirementsToTargetHasBeenSet() const { return m_requirementsToTargetHasBeenSet; }

    /**
     * <p>Supplemental information about the requirements to the recommended target
     * database on Amazon RDS.</p>
     */
    inline void SetRequirementsToTarget(const RdsRequirements& value) { m_requirementsToTargetHasBeenSet = true; m_requirementsToTarget = value; }

    /**
     * <p>Supplemental information about the requirements to the recommended target
     * database on Amazon RDS.</p>
     */
    inline void SetRequirementsToTarget(RdsRequirements&& value) { m_requirementsToTargetHasBeenSet = true; m_requirementsToTarget = std::move(value); }

    /**
     * <p>Supplemental information about the requirements to the recommended target
     * database on Amazon RDS.</p>
     */
    inline RdsRecommendation& WithRequirementsToTarget(const RdsRequirements& value) { SetRequirementsToTarget(value); return *this;}

    /**
     * <p>Supplemental information about the requirements to the recommended target
     * database on Amazon RDS.</p>
     */
    inline RdsRecommendation& WithRequirementsToTarget(RdsRequirements&& value) { SetRequirementsToTarget(std::move(value)); return *this;}


    /**
     * <p>Supplemental information about the configuration of the recommended target
     * database on Amazon RDS.</p>
     */
    inline const RdsConfiguration& GetTargetConfiguration() const{ return m_targetConfiguration; }

    /**
     * <p>Supplemental information about the configuration of the recommended target
     * database on Amazon RDS.</p>
     */
    inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }

    /**
     * <p>Supplemental information about the configuration of the recommended target
     * database on Amazon RDS.</p>
     */
    inline void SetTargetConfiguration(const RdsConfiguration& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = value; }

    /**
     * <p>Supplemental information about the configuration of the recommended target
     * database on Amazon RDS.</p>
     */
    inline void SetTargetConfiguration(RdsConfiguration&& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = std::move(value); }

    /**
     * <p>Supplemental information about the configuration of the recommended target
     * database on Amazon RDS.</p>
     */
    inline RdsRecommendation& WithTargetConfiguration(const RdsConfiguration& value) { SetTargetConfiguration(value); return *this;}

    /**
     * <p>Supplemental information about the configuration of the recommended target
     * database on Amazon RDS.</p>
     */
    inline RdsRecommendation& WithTargetConfiguration(RdsConfiguration&& value) { SetTargetConfiguration(std::move(value)); return *this;}

  private:

    RdsRequirements m_requirementsToTarget;
    bool m_requirementsToTargetHasBeenSet = false;

    RdsConfiguration m_targetConfiguration;
    bool m_targetConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
