/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/HomogeneousTargetDatabaseEngine.h>
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
   * <p> The object containing details about homogeneous database preferences.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/Homogeneous">AWS
   * API Reference</a></p>
   */
  class Homogeneous
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Homogeneous();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Homogeneous(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Homogeneous& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The target database engine for homogeneous database migration preferences.
     * </p>
     */
    inline const Aws::Vector<HomogeneousTargetDatabaseEngine>& GetTargetDatabaseEngine() const{ return m_targetDatabaseEngine; }

    /**
     * <p> The target database engine for homogeneous database migration preferences.
     * </p>
     */
    inline bool TargetDatabaseEngineHasBeenSet() const { return m_targetDatabaseEngineHasBeenSet; }

    /**
     * <p> The target database engine for homogeneous database migration preferences.
     * </p>
     */
    inline void SetTargetDatabaseEngine(const Aws::Vector<HomogeneousTargetDatabaseEngine>& value) { m_targetDatabaseEngineHasBeenSet = true; m_targetDatabaseEngine = value; }

    /**
     * <p> The target database engine for homogeneous database migration preferences.
     * </p>
     */
    inline void SetTargetDatabaseEngine(Aws::Vector<HomogeneousTargetDatabaseEngine>&& value) { m_targetDatabaseEngineHasBeenSet = true; m_targetDatabaseEngine = std::move(value); }

    /**
     * <p> The target database engine for homogeneous database migration preferences.
     * </p>
     */
    inline Homogeneous& WithTargetDatabaseEngine(const Aws::Vector<HomogeneousTargetDatabaseEngine>& value) { SetTargetDatabaseEngine(value); return *this;}

    /**
     * <p> The target database engine for homogeneous database migration preferences.
     * </p>
     */
    inline Homogeneous& WithTargetDatabaseEngine(Aws::Vector<HomogeneousTargetDatabaseEngine>&& value) { SetTargetDatabaseEngine(std::move(value)); return *this;}

    /**
     * <p> The target database engine for homogeneous database migration preferences.
     * </p>
     */
    inline Homogeneous& AddTargetDatabaseEngine(const HomogeneousTargetDatabaseEngine& value) { m_targetDatabaseEngineHasBeenSet = true; m_targetDatabaseEngine.push_back(value); return *this; }

    /**
     * <p> The target database engine for homogeneous database migration preferences.
     * </p>
     */
    inline Homogeneous& AddTargetDatabaseEngine(HomogeneousTargetDatabaseEngine&& value) { m_targetDatabaseEngineHasBeenSet = true; m_targetDatabaseEngine.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<HomogeneousTargetDatabaseEngine> m_targetDatabaseEngine;
    bool m_targetDatabaseEngineHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
