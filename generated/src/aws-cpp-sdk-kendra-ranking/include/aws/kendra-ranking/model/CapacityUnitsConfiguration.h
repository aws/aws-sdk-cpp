/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>

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
namespace KendraRanking
{
namespace Model
{

  /**
   * <p>Sets additional capacity units configured for your rescore execution plan. A
   * rescore execution plan is an Amazon Kendra Intelligent Ranking resource used for
   * provisioning the <code>Rescore</code> API. You can add and remove capacity units
   * to fit your usage requirements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-ranking-2022-10-19/CapacityUnitsConfiguration">AWS
   * API Reference</a></p>
   */
  class CapacityUnitsConfiguration
  {
  public:
    AWS_KENDRARANKING_API CapacityUnitsConfiguration();
    AWS_KENDRARANKING_API CapacityUnitsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRARANKING_API CapacityUnitsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRARANKING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of extra capacity for your rescore execution plan.</p> <p>A single
     * extra capacity unit for a rescore execution plan provides 0.01 rescore requests
     * per second. You can add up to 1000 extra capacity units.</p>
     */
    inline int GetRescoreCapacityUnits() const{ return m_rescoreCapacityUnits; }

    /**
     * <p>The amount of extra capacity for your rescore execution plan.</p> <p>A single
     * extra capacity unit for a rescore execution plan provides 0.01 rescore requests
     * per second. You can add up to 1000 extra capacity units.</p>
     */
    inline bool RescoreCapacityUnitsHasBeenSet() const { return m_rescoreCapacityUnitsHasBeenSet; }

    /**
     * <p>The amount of extra capacity for your rescore execution plan.</p> <p>A single
     * extra capacity unit for a rescore execution plan provides 0.01 rescore requests
     * per second. You can add up to 1000 extra capacity units.</p>
     */
    inline void SetRescoreCapacityUnits(int value) { m_rescoreCapacityUnitsHasBeenSet = true; m_rescoreCapacityUnits = value; }

    /**
     * <p>The amount of extra capacity for your rescore execution plan.</p> <p>A single
     * extra capacity unit for a rescore execution plan provides 0.01 rescore requests
     * per second. You can add up to 1000 extra capacity units.</p>
     */
    inline CapacityUnitsConfiguration& WithRescoreCapacityUnits(int value) { SetRescoreCapacityUnits(value); return *this;}

  private:

    int m_rescoreCapacityUnits;
    bool m_rescoreCapacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
