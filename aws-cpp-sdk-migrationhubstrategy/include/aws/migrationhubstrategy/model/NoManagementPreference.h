/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/NoPreferenceTargetDestination.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Object containing the choice of application destination that you specify.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/NoManagementPreference">AWS
   * API Reference</a></p>
   */
  class NoManagementPreference
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NoManagementPreference();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NoManagementPreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NoManagementPreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The choice of application destination that you specify. </p>
     */
    inline const Aws::Vector<NoPreferenceTargetDestination>& GetTargetDestination() const{ return m_targetDestination; }

    /**
     * <p> The choice of application destination that you specify. </p>
     */
    inline bool TargetDestinationHasBeenSet() const { return m_targetDestinationHasBeenSet; }

    /**
     * <p> The choice of application destination that you specify. </p>
     */
    inline void SetTargetDestination(const Aws::Vector<NoPreferenceTargetDestination>& value) { m_targetDestinationHasBeenSet = true; m_targetDestination = value; }

    /**
     * <p> The choice of application destination that you specify. </p>
     */
    inline void SetTargetDestination(Aws::Vector<NoPreferenceTargetDestination>&& value) { m_targetDestinationHasBeenSet = true; m_targetDestination = std::move(value); }

    /**
     * <p> The choice of application destination that you specify. </p>
     */
    inline NoManagementPreference& WithTargetDestination(const Aws::Vector<NoPreferenceTargetDestination>& value) { SetTargetDestination(value); return *this;}

    /**
     * <p> The choice of application destination that you specify. </p>
     */
    inline NoManagementPreference& WithTargetDestination(Aws::Vector<NoPreferenceTargetDestination>&& value) { SetTargetDestination(std::move(value)); return *this;}

    /**
     * <p> The choice of application destination that you specify. </p>
     */
    inline NoManagementPreference& AddTargetDestination(const NoPreferenceTargetDestination& value) { m_targetDestinationHasBeenSet = true; m_targetDestination.push_back(value); return *this; }

    /**
     * <p> The choice of application destination that you specify. </p>
     */
    inline NoManagementPreference& AddTargetDestination(NoPreferenceTargetDestination&& value) { m_targetDestinationHasBeenSet = true; m_targetDestination.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<NoPreferenceTargetDestination> m_targetDestination;
    bool m_targetDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
