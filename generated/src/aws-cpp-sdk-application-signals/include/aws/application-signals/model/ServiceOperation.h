/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-signals/model/MetricReference.h>
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
   * <p>This structure contains information about an operation discovered by
   * Application Signals. An operation is a specific function performed by a service
   * that was discovered by Application Signals, and is often an API that is called
   * by an upstream dependent. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceOperation">AWS
   * API Reference</a></p>
   */
  class ServiceOperation
  {
  public:
    AWS_APPLICATIONSIGNALS_API ServiceOperation() = default;
    AWS_APPLICATIONSIGNALS_API ServiceOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the operation, discovered by Application Signals.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ServiceOperation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that each contain information about one metric
     * associated with this service operation that was discovered by Application
     * Signals.</p>
     */
    inline const Aws::Vector<MetricReference>& GetMetricReferences() const { return m_metricReferences; }
    inline bool MetricReferencesHasBeenSet() const { return m_metricReferencesHasBeenSet; }
    template<typename MetricReferencesT = Aws::Vector<MetricReference>>
    void SetMetricReferences(MetricReferencesT&& value) { m_metricReferencesHasBeenSet = true; m_metricReferences = std::forward<MetricReferencesT>(value); }
    template<typename MetricReferencesT = Aws::Vector<MetricReference>>
    ServiceOperation& WithMetricReferences(MetricReferencesT&& value) { SetMetricReferences(std::forward<MetricReferencesT>(value)); return *this;}
    template<typename MetricReferencesT = MetricReference>
    ServiceOperation& AddMetricReferences(MetricReferencesT&& value) { m_metricReferencesHasBeenSet = true; m_metricReferences.emplace_back(std::forward<MetricReferencesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<MetricReference> m_metricReferences;
    bool m_metricReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
