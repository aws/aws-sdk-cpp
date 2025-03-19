/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/RdsRecommendation.h>
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
   * <p>Provides information about the target engine for the specified source
   * database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RecommendationData">AWS
   * API Reference</a></p>
   */
  class RecommendationData
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API RecommendationData() = default;
    AWS_DATABASEMIGRATIONSERVICE_API RecommendationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API RecommendationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The recommendation of a target Amazon RDS database engine.</p>
     */
    inline const RdsRecommendation& GetRdsEngine() const { return m_rdsEngine; }
    inline bool RdsEngineHasBeenSet() const { return m_rdsEngineHasBeenSet; }
    template<typename RdsEngineT = RdsRecommendation>
    void SetRdsEngine(RdsEngineT&& value) { m_rdsEngineHasBeenSet = true; m_rdsEngine = std::forward<RdsEngineT>(value); }
    template<typename RdsEngineT = RdsRecommendation>
    RecommendationData& WithRdsEngine(RdsEngineT&& value) { SetRdsEngine(std::forward<RdsEngineT>(value)); return *this;}
    ///@}
  private:

    RdsRecommendation m_rdsEngine;
    bool m_rdsEngineHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
