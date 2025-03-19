/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/EnvironmentHealth.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ApplicationMetrics.h>
#include <aws/elasticbeanstalk/model/InstanceHealthSummary.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElasticBeanstalk
{
namespace Model
{
  /**
   * <p>Health details for an AWS Elastic Beanstalk environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentHealthResult">AWS
   * API Reference</a></p>
   */
  class DescribeEnvironmentHealthResult
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentHealthResult() = default;
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The environment's name.</p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    DescribeEnvironmentHealthResult& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * status</a> of the environment. For example, <code>Ok</code>.</p>
     */
    inline const Aws::String& GetHealthStatus() const { return m_healthStatus; }
    template<typename HealthStatusT = Aws::String>
    void SetHealthStatus(HealthStatusT&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::forward<HealthStatusT>(value); }
    template<typename HealthStatusT = Aws::String>
    DescribeEnvironmentHealthResult& WithHealthStatus(HealthStatusT&& value) { SetHealthStatus(std::forward<HealthStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment's operational status. <code>Ready</code>,
     * <code>Launching</code>, <code>Updating</code>, <code>Terminating</code>, or
     * <code>Terminated</code>.</p>
     */
    inline EnvironmentHealth GetStatus() const { return m_status; }
    inline void SetStatus(EnvironmentHealth value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeEnvironmentHealthResult& WithStatus(EnvironmentHealth value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * color</a> of the environment.</p>
     */
    inline const Aws::String& GetColor() const { return m_color; }
    template<typename ColorT = Aws::String>
    void SetColor(ColorT&& value) { m_colorHasBeenSet = true; m_color = std::forward<ColorT>(value); }
    template<typename ColorT = Aws::String>
    DescribeEnvironmentHealthResult& WithColor(ColorT&& value) { SetColor(std::forward<ColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Descriptions of the data that contributed to the environment's current health
     * status.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCauses() const { return m_causes; }
    template<typename CausesT = Aws::Vector<Aws::String>>
    void SetCauses(CausesT&& value) { m_causesHasBeenSet = true; m_causes = std::forward<CausesT>(value); }
    template<typename CausesT = Aws::Vector<Aws::String>>
    DescribeEnvironmentHealthResult& WithCauses(CausesT&& value) { SetCauses(std::forward<CausesT>(value)); return *this;}
    template<typename CausesT = Aws::String>
    DescribeEnvironmentHealthResult& AddCauses(CausesT&& value) { m_causesHasBeenSet = true; m_causes.emplace_back(std::forward<CausesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Application request metrics for the environment.</p>
     */
    inline const ApplicationMetrics& GetApplicationMetrics() const { return m_applicationMetrics; }
    template<typename ApplicationMetricsT = ApplicationMetrics>
    void SetApplicationMetrics(ApplicationMetricsT&& value) { m_applicationMetricsHasBeenSet = true; m_applicationMetrics = std::forward<ApplicationMetricsT>(value); }
    template<typename ApplicationMetricsT = ApplicationMetrics>
    DescribeEnvironmentHealthResult& WithApplicationMetrics(ApplicationMetricsT&& value) { SetApplicationMetrics(std::forward<ApplicationMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary health information for the instances in the environment.</p>
     */
    inline const InstanceHealthSummary& GetInstancesHealth() const { return m_instancesHealth; }
    template<typename InstancesHealthT = InstanceHealthSummary>
    void SetInstancesHealth(InstancesHealthT&& value) { m_instancesHealthHasBeenSet = true; m_instancesHealth = std::forward<InstancesHealthT>(value); }
    template<typename InstancesHealthT = InstanceHealthSummary>
    DescribeEnvironmentHealthResult& WithInstancesHealth(InstancesHealthT&& value) { SetInstancesHealth(std::forward<InstancesHealthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the health information was retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetRefreshedAt() const { return m_refreshedAt; }
    template<typename RefreshedAtT = Aws::Utils::DateTime>
    void SetRefreshedAt(RefreshedAtT&& value) { m_refreshedAtHasBeenSet = true; m_refreshedAt = std::forward<RefreshedAtT>(value); }
    template<typename RefreshedAtT = Aws::Utils::DateTime>
    DescribeEnvironmentHealthResult& WithRefreshedAt(RefreshedAtT&& value) { SetRefreshedAt(std::forward<RefreshedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeEnvironmentHealthResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_healthStatus;
    bool m_healthStatusHasBeenSet = false;

    EnvironmentHealth m_status{EnvironmentHealth::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_color;
    bool m_colorHasBeenSet = false;

    Aws::Vector<Aws::String> m_causes;
    bool m_causesHasBeenSet = false;

    ApplicationMetrics m_applicationMetrics;
    bool m_applicationMetricsHasBeenSet = false;

    InstanceHealthSummary m_instancesHealth;
    bool m_instancesHealthHasBeenSet = false;

    Aws::Utils::DateTime m_refreshedAt{};
    bool m_refreshedAtHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
