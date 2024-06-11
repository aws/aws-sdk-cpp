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
    AWS_COSTEXPLORER_API Group();
    AWS_COSTEXPLORER_API Group(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Group& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The keys that are included in this group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeys() const{ return m_keys; }
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
    inline void SetKeys(const Aws::Vector<Aws::String>& value) { m_keysHasBeenSet = true; m_keys = value; }
    inline void SetKeys(Aws::Vector<Aws::String>&& value) { m_keysHasBeenSet = true; m_keys = std::move(value); }
    inline Group& WithKeys(const Aws::Vector<Aws::String>& value) { SetKeys(value); return *this;}
    inline Group& WithKeys(Aws::Vector<Aws::String>&& value) { SetKeys(std::move(value)); return *this;}
    inline Group& AddKeys(const Aws::String& value) { m_keysHasBeenSet = true; m_keys.push_back(value); return *this; }
    inline Group& AddKeys(Aws::String&& value) { m_keysHasBeenSet = true; m_keys.push_back(std::move(value)); return *this; }
    inline Group& AddKeys(const char* value) { m_keysHasBeenSet = true; m_keys.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metrics that are included in this group.</p>
     */
    inline const Aws::Map<Aws::String, MetricValue>& GetMetrics() const{ return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    inline void SetMetrics(const Aws::Map<Aws::String, MetricValue>& value) { m_metricsHasBeenSet = true; m_metrics = value; }
    inline void SetMetrics(Aws::Map<Aws::String, MetricValue>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }
    inline Group& WithMetrics(const Aws::Map<Aws::String, MetricValue>& value) { SetMetrics(value); return *this;}
    inline Group& WithMetrics(Aws::Map<Aws::String, MetricValue>&& value) { SetMetrics(std::move(value)); return *this;}
    inline Group& AddMetrics(const Aws::String& key, const MetricValue& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }
    inline Group& AddMetrics(Aws::String&& key, const MetricValue& value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }
    inline Group& AddMetrics(const Aws::String& key, MetricValue&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, std::move(value)); return *this; }
    inline Group& AddMetrics(Aws::String&& key, MetricValue&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), std::move(value)); return *this; }
    inline Group& AddMetrics(const char* key, MetricValue&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, std::move(value)); return *this; }
    inline Group& AddMetrics(const char* key, const MetricValue& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }
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
