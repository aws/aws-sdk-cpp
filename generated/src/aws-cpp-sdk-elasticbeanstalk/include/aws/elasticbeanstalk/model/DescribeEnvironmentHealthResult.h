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
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentHealthResult();
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The environment's name.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentName.assign(value); }
    inline DescribeEnvironmentHealthResult& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline DescribeEnvironmentHealthResult& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline DescribeEnvironmentHealthResult& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * status</a> of the environment. For example, <code>Ok</code>.</p>
     */
    inline const Aws::String& GetHealthStatus() const{ return m_healthStatus; }
    inline void SetHealthStatus(const Aws::String& value) { m_healthStatus = value; }
    inline void SetHealthStatus(Aws::String&& value) { m_healthStatus = std::move(value); }
    inline void SetHealthStatus(const char* value) { m_healthStatus.assign(value); }
    inline DescribeEnvironmentHealthResult& WithHealthStatus(const Aws::String& value) { SetHealthStatus(value); return *this;}
    inline DescribeEnvironmentHealthResult& WithHealthStatus(Aws::String&& value) { SetHealthStatus(std::move(value)); return *this;}
    inline DescribeEnvironmentHealthResult& WithHealthStatus(const char* value) { SetHealthStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment's operational status. <code>Ready</code>,
     * <code>Launching</code>, <code>Updating</code>, <code>Terminating</code>, or
     * <code>Terminated</code>.</p>
     */
    inline const EnvironmentHealth& GetStatus() const{ return m_status; }
    inline void SetStatus(const EnvironmentHealth& value) { m_status = value; }
    inline void SetStatus(EnvironmentHealth&& value) { m_status = std::move(value); }
    inline DescribeEnvironmentHealthResult& WithStatus(const EnvironmentHealth& value) { SetStatus(value); return *this;}
    inline DescribeEnvironmentHealthResult& WithStatus(EnvironmentHealth&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * color</a> of the environment.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }
    inline void SetColor(const Aws::String& value) { m_color = value; }
    inline void SetColor(Aws::String&& value) { m_color = std::move(value); }
    inline void SetColor(const char* value) { m_color.assign(value); }
    inline DescribeEnvironmentHealthResult& WithColor(const Aws::String& value) { SetColor(value); return *this;}
    inline DescribeEnvironmentHealthResult& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}
    inline DescribeEnvironmentHealthResult& WithColor(const char* value) { SetColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Descriptions of the data that contributed to the environment's current health
     * status.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCauses() const{ return m_causes; }
    inline void SetCauses(const Aws::Vector<Aws::String>& value) { m_causes = value; }
    inline void SetCauses(Aws::Vector<Aws::String>&& value) { m_causes = std::move(value); }
    inline DescribeEnvironmentHealthResult& WithCauses(const Aws::Vector<Aws::String>& value) { SetCauses(value); return *this;}
    inline DescribeEnvironmentHealthResult& WithCauses(Aws::Vector<Aws::String>&& value) { SetCauses(std::move(value)); return *this;}
    inline DescribeEnvironmentHealthResult& AddCauses(const Aws::String& value) { m_causes.push_back(value); return *this; }
    inline DescribeEnvironmentHealthResult& AddCauses(Aws::String&& value) { m_causes.push_back(std::move(value)); return *this; }
    inline DescribeEnvironmentHealthResult& AddCauses(const char* value) { m_causes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Application request metrics for the environment.</p>
     */
    inline const ApplicationMetrics& GetApplicationMetrics() const{ return m_applicationMetrics; }
    inline void SetApplicationMetrics(const ApplicationMetrics& value) { m_applicationMetrics = value; }
    inline void SetApplicationMetrics(ApplicationMetrics&& value) { m_applicationMetrics = std::move(value); }
    inline DescribeEnvironmentHealthResult& WithApplicationMetrics(const ApplicationMetrics& value) { SetApplicationMetrics(value); return *this;}
    inline DescribeEnvironmentHealthResult& WithApplicationMetrics(ApplicationMetrics&& value) { SetApplicationMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary health information for the instances in the environment.</p>
     */
    inline const InstanceHealthSummary& GetInstancesHealth() const{ return m_instancesHealth; }
    inline void SetInstancesHealth(const InstanceHealthSummary& value) { m_instancesHealth = value; }
    inline void SetInstancesHealth(InstanceHealthSummary&& value) { m_instancesHealth = std::move(value); }
    inline DescribeEnvironmentHealthResult& WithInstancesHealth(const InstanceHealthSummary& value) { SetInstancesHealth(value); return *this;}
    inline DescribeEnvironmentHealthResult& WithInstancesHealth(InstanceHealthSummary&& value) { SetInstancesHealth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the health information was retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetRefreshedAt() const{ return m_refreshedAt; }
    inline void SetRefreshedAt(const Aws::Utils::DateTime& value) { m_refreshedAt = value; }
    inline void SetRefreshedAt(Aws::Utils::DateTime&& value) { m_refreshedAt = std::move(value); }
    inline DescribeEnvironmentHealthResult& WithRefreshedAt(const Aws::Utils::DateTime& value) { SetRefreshedAt(value); return *this;}
    inline DescribeEnvironmentHealthResult& WithRefreshedAt(Aws::Utils::DateTime&& value) { SetRefreshedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeEnvironmentHealthResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeEnvironmentHealthResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentName;

    Aws::String m_healthStatus;

    EnvironmentHealth m_status;

    Aws::String m_color;

    Aws::Vector<Aws::String> m_causes;

    ApplicationMetrics m_applicationMetrics;

    InstanceHealthSummary m_instancesHealth;

    Aws::Utils::DateTime m_refreshedAt;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
