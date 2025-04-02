/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/ServiceLevelIndicatorMetricType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-signals/model/DependencyConfig.h>
#include <aws/application-signals/model/MetricDataQuery.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>Use this structure to specify the information for the metric that a
   * period-based SLO will monitor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceLevelIndicatorMetricConfig">AWS
   * API Reference</a></p>
   */
  class ServiceLevelIndicatorMetricConfig
  {
  public:
    AWS_APPLICATIONSIGNALS_API ServiceLevelIndicatorMetricConfig() = default;
    AWS_APPLICATIONSIGNALS_API ServiceLevelIndicatorMetricConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceLevelIndicatorMetricConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If this SLO is related to a metric collected by Application Signals, you must
     * use this field to specify which service the SLO metric is related to. To do so,
     * you must specify at least the <code>Type</code>, <code>Name</code>, and
     * <code>Environment</code> attributes.</p> <p>This is a string-to-string map. It
     * can include the following fields.</p> <ul> <li> <p> <code>Type</code> designates
     * the type of object this is.</p> </li> <li> <p> <code>ResourceType</code>
     * specifies the type of the resource. This field is used only when the value of
     * the <code>Type</code> field is <code>Resource</code> or
     * <code>AWS::Resource</code>.</p> </li> <li> <p> <code>Name</code> specifies the
     * name of the object. This is used only if the value of the <code>Type</code>
     * field is <code>Service</code>, <code>RemoteService</code>, or
     * <code>AWS::Service</code>.</p> </li> <li> <p> <code>Identifier</code> identifies
     * the resource objects of this resource. This is used only if the value of the
     * <code>Type</code> field is <code>Resource</code> or
     * <code>AWS::Resource</code>.</p> </li> <li> <p> <code>Environment</code>
     * specifies the location where this object is hosted, or what it belongs to.</p>
     * </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetKeyAttributes() const { return m_keyAttributes; }
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }
    template<typename KeyAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetKeyAttributes(KeyAttributesT&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::forward<KeyAttributesT>(value); }
    template<typename KeyAttributesT = Aws::Map<Aws::String, Aws::String>>
    ServiceLevelIndicatorMetricConfig& WithKeyAttributes(KeyAttributesT&& value) { SetKeyAttributes(std::forward<KeyAttributesT>(value)); return *this;}
    template<typename KeyAttributesKeyT = Aws::String, typename KeyAttributesValueT = Aws::String>
    ServiceLevelIndicatorMetricConfig& AddKeyAttributes(KeyAttributesKeyT&& key, KeyAttributesValueT&& value) {
      m_keyAttributesHasBeenSet = true; m_keyAttributes.emplace(std::forward<KeyAttributesKeyT>(key), std::forward<KeyAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>If the SLO is to monitor a specific operation of the service, use this field
     * to specify the name of that operation.</p>
     */
    inline const Aws::String& GetOperationName() const { return m_operationName; }
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
    template<typename OperationNameT = Aws::String>
    void SetOperationName(OperationNameT&& value) { m_operationNameHasBeenSet = true; m_operationName = std::forward<OperationNameT>(value); }
    template<typename OperationNameT = Aws::String>
    ServiceLevelIndicatorMetricConfig& WithOperationName(OperationNameT&& value) { SetOperationName(std::forward<OperationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the SLO is to monitor either the <code>LATENCY</code> or
     * <code>AVAILABILITY</code> metric that Application Signals collects, use this
     * field to specify which of those metrics is used.</p>
     */
    inline ServiceLevelIndicatorMetricType GetMetricType() const { return m_metricType; }
    inline bool MetricTypeHasBeenSet() const { return m_metricTypeHasBeenSet; }
    inline void SetMetricType(ServiceLevelIndicatorMetricType value) { m_metricTypeHasBeenSet = true; m_metricType = value; }
    inline ServiceLevelIndicatorMetricConfig& WithMetricType(ServiceLevelIndicatorMetricType value) { SetMetricType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic to use for comparison to the threshold. It can be any
     * CloudWatch statistic or extended statistic. For more information about
     * statistics, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Statistics-definitions.html">CloudWatch
     * statistics definitions</a>.</p>
     */
    inline const Aws::String& GetStatistic() const { return m_statistic; }
    inline bool StatisticHasBeenSet() const { return m_statisticHasBeenSet; }
    template<typename StatisticT = Aws::String>
    void SetStatistic(StatisticT&& value) { m_statisticHasBeenSet = true; m_statistic = std::forward<StatisticT>(value); }
    template<typename StatisticT = Aws::String>
    ServiceLevelIndicatorMetricConfig& WithStatistic(StatisticT&& value) { SetStatistic(std::forward<StatisticT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds to use as the period for SLO evaluation. Your
     * application's performance is compared to the SLI during each period. For each
     * period, the application is determined to have either achieved or not achieved
     * the necessary performance.</p>
     */
    inline int GetPeriodSeconds() const { return m_periodSeconds; }
    inline bool PeriodSecondsHasBeenSet() const { return m_periodSecondsHasBeenSet; }
    inline void SetPeriodSeconds(int value) { m_periodSecondsHasBeenSet = true; m_periodSeconds = value; }
    inline ServiceLevelIndicatorMetricConfig& WithPeriodSeconds(int value) { SetPeriodSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this SLO monitors a CloudWatch metric or the result of a CloudWatch metric
     * math expression, use this structure to specify that metric or expression. </p>
     */
    inline const Aws::Vector<MetricDataQuery>& GetMetricDataQueries() const { return m_metricDataQueries; }
    inline bool MetricDataQueriesHasBeenSet() const { return m_metricDataQueriesHasBeenSet; }
    template<typename MetricDataQueriesT = Aws::Vector<MetricDataQuery>>
    void SetMetricDataQueries(MetricDataQueriesT&& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries = std::forward<MetricDataQueriesT>(value); }
    template<typename MetricDataQueriesT = Aws::Vector<MetricDataQuery>>
    ServiceLevelIndicatorMetricConfig& WithMetricDataQueries(MetricDataQueriesT&& value) { SetMetricDataQueries(std::forward<MetricDataQueriesT>(value)); return *this;}
    template<typename MetricDataQueriesT = MetricDataQuery>
    ServiceLevelIndicatorMetricConfig& AddMetricDataQueries(MetricDataQueriesT&& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries.emplace_back(std::forward<MetricDataQueriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the dependency using the <code>DependencyKeyAttributes</code> and
     * <code>DependencyOperationName</code>. </p>
     */
    inline const DependencyConfig& GetDependencyConfig() const { return m_dependencyConfig; }
    inline bool DependencyConfigHasBeenSet() const { return m_dependencyConfigHasBeenSet; }
    template<typename DependencyConfigT = DependencyConfig>
    void SetDependencyConfig(DependencyConfigT&& value) { m_dependencyConfigHasBeenSet = true; m_dependencyConfig = std::forward<DependencyConfigT>(value); }
    template<typename DependencyConfigT = DependencyConfig>
    ServiceLevelIndicatorMetricConfig& WithDependencyConfig(DependencyConfigT&& value) { SetDependencyConfig(std::forward<DependencyConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    Aws::String m_operationName;
    bool m_operationNameHasBeenSet = false;

    ServiceLevelIndicatorMetricType m_metricType{ServiceLevelIndicatorMetricType::NOT_SET};
    bool m_metricTypeHasBeenSet = false;

    Aws::String m_statistic;
    bool m_statisticHasBeenSet = false;

    int m_periodSeconds{0};
    bool m_periodSecondsHasBeenSet = false;

    Aws::Vector<MetricDataQuery> m_metricDataQueries;
    bool m_metricDataQueriesHasBeenSet = false;

    DependencyConfig m_dependencyConfig;
    bool m_dependencyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
