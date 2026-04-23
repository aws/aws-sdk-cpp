/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COSTEXPLORER_API Group
  {
  public:
    Group();
    Group(Aws::Utils::Json::JsonView jsonValue);
    Group& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The keys that are included in this group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeys() const{ return m_keys; }

    /**
     * <p>The keys that are included in this group.</p>
     */
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }

    /**
     * <p>The keys that are included in this group.</p>
     */
    inline void SetKeys(const Aws::Vector<Aws::String>& value) { m_keysHasBeenSet = true; m_keys = value; }

    /**
     * <p>The keys that are included in this group.</p>
     */
    inline void SetKeys(Aws::Vector<Aws::String>&& value) { m_keysHasBeenSet = true; m_keys = std::move(value); }

    /**
     * <p>The keys that are included in this group.</p>
     */
    inline Group& WithKeys(const Aws::Vector<Aws::String>& value) { SetKeys(value); return *this;}

    /**
     * <p>The keys that are included in this group.</p>
     */
    inline Group& WithKeys(Aws::Vector<Aws::String>&& value) { SetKeys(std::move(value)); return *this;}

    /**
     * <p>The keys that are included in this group.</p>
     */
    inline Group& AddKeys(const Aws::String& value) { m_keysHasBeenSet = true; m_keys.push_back(value); return *this; }

    /**
     * <p>The keys that are included in this group.</p>
     */
    inline Group& AddKeys(Aws::String&& value) { m_keysHasBeenSet = true; m_keys.push_back(std::move(value)); return *this; }

    /**
     * <p>The keys that are included in this group.</p>
     */
    inline Group& AddKeys(const char* value) { m_keysHasBeenSet = true; m_keys.push_back(value); return *this; }


    /**
     * <p>The metrics that are included in this group.</p>
     */
    inline const Aws::Map<Aws::String, MetricValue>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>The metrics that are included in this group.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>The metrics that are included in this group.</p>
     */
    inline void SetMetrics(const Aws::Map<Aws::String, MetricValue>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>The metrics that are included in this group.</p>
     */
    inline void SetMetrics(Aws::Map<Aws::String, MetricValue>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>The metrics that are included in this group.</p>
     */
    inline Group& WithMetrics(const Aws::Map<Aws::String, MetricValue>& value) { SetMetrics(value); return *this;}

    /**
     * <p>The metrics that are included in this group.</p>
     */
    inline Group& WithMetrics(Aws::Map<Aws::String, MetricValue>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>The metrics that are included in this group.</p>
     */
    inline Group& AddMetrics(const Aws::String& key, const MetricValue& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }

    /**
     * <p>The metrics that are included in this group.</p>
     */
    inline Group& AddMetrics(Aws::String&& key, const MetricValue& value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metrics that are included in this group.</p>
     */
    inline Group& AddMetrics(const Aws::String& key, MetricValue&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metrics that are included in this group.</p>
     */
    inline Group& AddMetrics(Aws::String&& key, MetricValue&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metrics that are included in this group.</p>
     */
    inline Group& AddMetrics(const char* key, MetricValue&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metrics that are included in this group.</p>
     */
    inline Group& AddMetrics(const char* key, const MetricValue& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_keys;
    bool m_keysHasBeenSet;

    Aws::Map<Aws::String, MetricValue> m_metrics;
    bool m_metricsHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
