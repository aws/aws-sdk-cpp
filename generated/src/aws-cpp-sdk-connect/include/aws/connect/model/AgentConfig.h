/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/Distribution.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The distribution of agents between the instance and its
   * replica(s).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AgentConfig">AWS
   * API Reference</a></p>
   */
  class AgentConfig
  {
  public:
    AWS_CONNECT_API AgentConfig() = default;
    AWS_CONNECT_API AgentConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about traffic distributions.</p>
     */
    inline const Aws::Vector<Distribution>& GetDistributions() const { return m_distributions; }
    inline bool DistributionsHasBeenSet() const { return m_distributionsHasBeenSet; }
    template<typename DistributionsT = Aws::Vector<Distribution>>
    void SetDistributions(DistributionsT&& value) { m_distributionsHasBeenSet = true; m_distributions = std::forward<DistributionsT>(value); }
    template<typename DistributionsT = Aws::Vector<Distribution>>
    AgentConfig& WithDistributions(DistributionsT&& value) { SetDistributions(std::forward<DistributionsT>(value)); return *this;}
    template<typename DistributionsT = Distribution>
    AgentConfig& AddDistributions(DistributionsT&& value) { m_distributionsHasBeenSet = true; m_distributions.emplace_back(std::forward<DistributionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Distribution> m_distributions;
    bool m_distributionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
