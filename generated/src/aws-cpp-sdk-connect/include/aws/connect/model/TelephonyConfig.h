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
   * <p>The distribution of traffic between the instance and its
   * replicas.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TelephonyConfig">AWS
   * API Reference</a></p>
   */
  class TelephonyConfig
  {
  public:
    AWS_CONNECT_API TelephonyConfig() = default;
    AWS_CONNECT_API TelephonyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TelephonyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    TelephonyConfig& WithDistributions(DistributionsT&& value) { SetDistributions(std::forward<DistributionsT>(value)); return *this;}
    template<typename DistributionsT = Distribution>
    TelephonyConfig& AddDistributions(DistributionsT&& value) { m_distributionsHasBeenSet = true; m_distributions.emplace_back(std::forward<DistributionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Distribution> m_distributions;
    bool m_distributionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
