/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/SelfManageTargetDestination.h>
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
   * <p> Self-managed resources. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/SelfManageResources">AWS
   * API Reference</a></p>
   */
  class SelfManageResources
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SelfManageResources();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SelfManageResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API SelfManageResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Self-managed resources target destination. </p>
     */
    inline const Aws::Vector<SelfManageTargetDestination>& GetTargetDestination() const{ return m_targetDestination; }

    /**
     * <p> Self-managed resources target destination. </p>
     */
    inline bool TargetDestinationHasBeenSet() const { return m_targetDestinationHasBeenSet; }

    /**
     * <p> Self-managed resources target destination. </p>
     */
    inline void SetTargetDestination(const Aws::Vector<SelfManageTargetDestination>& value) { m_targetDestinationHasBeenSet = true; m_targetDestination = value; }

    /**
     * <p> Self-managed resources target destination. </p>
     */
    inline void SetTargetDestination(Aws::Vector<SelfManageTargetDestination>&& value) { m_targetDestinationHasBeenSet = true; m_targetDestination = std::move(value); }

    /**
     * <p> Self-managed resources target destination. </p>
     */
    inline SelfManageResources& WithTargetDestination(const Aws::Vector<SelfManageTargetDestination>& value) { SetTargetDestination(value); return *this;}

    /**
     * <p> Self-managed resources target destination. </p>
     */
    inline SelfManageResources& WithTargetDestination(Aws::Vector<SelfManageTargetDestination>&& value) { SetTargetDestination(std::move(value)); return *this;}

    /**
     * <p> Self-managed resources target destination. </p>
     */
    inline SelfManageResources& AddTargetDestination(const SelfManageTargetDestination& value) { m_targetDestinationHasBeenSet = true; m_targetDestination.push_back(value); return *this; }

    /**
     * <p> Self-managed resources target destination. </p>
     */
    inline SelfManageResources& AddTargetDestination(SelfManageTargetDestination&& value) { m_targetDestinationHasBeenSet = true; m_targetDestination.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SelfManageTargetDestination> m_targetDestination;
    bool m_targetDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
