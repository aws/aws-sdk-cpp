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
    AWS_APPLICATIONSIGNALS_API ServiceOperation();
    AWS_APPLICATIONSIGNALS_API ServiceOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API ServiceOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the operation, discovered by Application Signals.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ServiceOperation& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ServiceOperation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ServiceOperation& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that each contain information about one metric
     * associated with this service operation that was discovered by Application
     * Signals.</p>
     */
    inline const Aws::Vector<MetricReference>& GetMetricReferences() const{ return m_metricReferences; }
    inline bool MetricReferencesHasBeenSet() const { return m_metricReferencesHasBeenSet; }
    inline void SetMetricReferences(const Aws::Vector<MetricReference>& value) { m_metricReferencesHasBeenSet = true; m_metricReferences = value; }
    inline void SetMetricReferences(Aws::Vector<MetricReference>&& value) { m_metricReferencesHasBeenSet = true; m_metricReferences = std::move(value); }
    inline ServiceOperation& WithMetricReferences(const Aws::Vector<MetricReference>& value) { SetMetricReferences(value); return *this;}
    inline ServiceOperation& WithMetricReferences(Aws::Vector<MetricReference>&& value) { SetMetricReferences(std::move(value)); return *this;}
    inline ServiceOperation& AddMetricReferences(const MetricReference& value) { m_metricReferencesHasBeenSet = true; m_metricReferences.push_back(value); return *this; }
    inline ServiceOperation& AddMetricReferences(MetricReference&& value) { m_metricReferencesHasBeenSet = true; m_metricReferences.push_back(std::move(value)); return *this; }
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
