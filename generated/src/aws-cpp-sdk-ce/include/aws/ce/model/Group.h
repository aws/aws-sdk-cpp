/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/MetricValue.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>One level of grouped data in the results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/Group">AWS API
   * Reference</a></p>
   */
  class Group
  {
  public:
    AWS_COSTEXPLORER_API Group() = default;
    AWS_COSTEXPLORER_API Group(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Group& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The keys that are included in this group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeys() const { return m_keys; }
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
    template<typename KeysT = Aws::Vector<Aws::String>>
    void SetKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys = std::forward<KeysT>(value); }
    template<typename KeysT = Aws::Vector<Aws::String>>
    Group& WithKeys(KeysT&& value) { SetKeys(std::forward<KeysT>(value)); return *this;}
    template<typename KeysT = Aws::String>
    Group& AddKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys.emplace_back(std::forward<KeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metrics that are included in this group.</p>
     */
    inline const Aws::Map<Aws::String, MetricValue>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Map<Aws::String, MetricValue>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Map<Aws::String, MetricValue>>
    Group& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsKeyT = Aws::String, typename MetricsValueT = MetricValue>
    Group& AddMetrics(MetricsKeyT&& key, MetricsValueT&& value) {
      m_metricsHasBeenSet = true; m_metrics.emplace(std::forward<MetricsKeyT>(key), std::forward<MetricsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<Aws::String> m_keys;
    bool m_keysHasBeenSet = false;

    Aws::Map<Aws::String, MetricValue> m_metrics;
    bool m_metricsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
