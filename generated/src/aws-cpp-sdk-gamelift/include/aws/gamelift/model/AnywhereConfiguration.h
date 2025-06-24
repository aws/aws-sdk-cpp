/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>Amazon GameLift Servers configuration options for your Anywhere
   * fleets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/AnywhereConfiguration">AWS
   * API Reference</a></p>
   */
  class AnywhereConfiguration
  {
  public:
    AWS_GAMELIFT_API AnywhereConfiguration() = default;
    AWS_GAMELIFT_API AnywhereConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API AnywhereConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cost to run your fleet per hour. Amazon GameLift Servers uses the
     * provided cost of your fleet to balance usage in queues. For more information
     * about queues, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-intro.html">Setting
     * up queues</a> in the <i>Amazon GameLift Servers Developer Guide</i>.</p>
     */
    inline const Aws::String& GetCost() const { return m_cost; }
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }
    template<typename CostT = Aws::String>
    void SetCost(CostT&& value) { m_costHasBeenSet = true; m_cost = std::forward<CostT>(value); }
    template<typename CostT = Aws::String>
    AnywhereConfiguration& WithCost(CostT&& value) { SetCost(std::forward<CostT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cost;
    bool m_costHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
