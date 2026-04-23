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
  class AWS_ELASTICBEANSTALK_API DescribeEnvironmentHealthResult
  {
  public:
    DescribeEnvironmentHealthResult();
    DescribeEnvironmentHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeEnvironmentHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The environment's name.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The environment's name.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentName = value; }

    /**
     * <p>The environment's name.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentName = std::move(value); }

    /**
     * <p>The environment's name.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentName.assign(value); }

    /**
     * <p>The environment's name.</p>
     */
    inline DescribeEnvironmentHealthResult& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The environment's name.</p>
     */
    inline DescribeEnvironmentHealthResult& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The environment's name.</p>
     */
    inline DescribeEnvironmentHealthResult& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * status</a> of the environment. For example, <code>Ok</code>.</p>
     */
    inline const Aws::String& GetHealthStatus() const{ return m_healthStatus; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * status</a> of the environment. For example, <code>Ok</code>.</p>
     */
    inline void SetHealthStatus(const Aws::String& value) { m_healthStatus = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * status</a> of the environment. For example, <code>Ok</code>.</p>
     */
    inline void SetHealthStatus(Aws::String&& value) { m_healthStatus = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * status</a> of the environment. For example, <code>Ok</code>.</p>
     */
    inline void SetHealthStatus(const char* value) { m_healthStatus.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * status</a> of the environment. For example, <code>Ok</code>.</p>
     */
    inline DescribeEnvironmentHealthResult& WithHealthStatus(const Aws::String& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * status</a> of the environment. For example, <code>Ok</code>.</p>
     */
    inline DescribeEnvironmentHealthResult& WithHealthStatus(Aws::String&& value) { SetHealthStatus(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * status</a> of the environment. For example, <code>Ok</code>.</p>
     */
    inline DescribeEnvironmentHealthResult& WithHealthStatus(const char* value) { SetHealthStatus(value); return *this;}


    /**
     * <p>The environment's operational status. <code>Ready</code>,
     * <code>Launching</code>, <code>Updating</code>, <code>Terminating</code>, or
     * <code>Terminated</code>.</p>
     */
    inline const EnvironmentHealth& GetStatus() const{ return m_status; }

    /**
     * <p>The environment's operational status. <code>Ready</code>,
     * <code>Launching</code>, <code>Updating</code>, <code>Terminating</code>, or
     * <code>Terminated</code>.</p>
     */
    inline void SetStatus(const EnvironmentHealth& value) { m_status = value; }

    /**
     * <p>The environment's operational status. <code>Ready</code>,
     * <code>Launching</code>, <code>Updating</code>, <code>Terminating</code>, or
     * <code>Terminated</code>.</p>
     */
    inline void SetStatus(EnvironmentHealth&& value) { m_status = std::move(value); }

    /**
     * <p>The environment's operational status. <code>Ready</code>,
     * <code>Launching</code>, <code>Updating</code>, <code>Terminating</code>, or
     * <code>Terminated</code>.</p>
     */
    inline DescribeEnvironmentHealthResult& WithStatus(const EnvironmentHealth& value) { SetStatus(value); return *this;}

    /**
     * <p>The environment's operational status. <code>Ready</code>,
     * <code>Launching</code>, <code>Updating</code>, <code>Terminating</code>, or
     * <code>Terminated</code>.</p>
     */
    inline DescribeEnvironmentHealthResult& WithStatus(EnvironmentHealth&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * color</a> of the environment.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * color</a> of the environment.</p>
     */
    inline void SetColor(const Aws::String& value) { m_color = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * color</a> of the environment.</p>
     */
    inline void SetColor(Aws::String&& value) { m_color = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * color</a> of the environment.</p>
     */
    inline void SetColor(const char* value) { m_color.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * color</a> of the environment.</p>
     */
    inline DescribeEnvironmentHealthResult& WithColor(const Aws::String& value) { SetColor(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * color</a> of the environment.</p>
     */
    inline DescribeEnvironmentHealthResult& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">health
     * color</a> of the environment.</p>
     */
    inline DescribeEnvironmentHealthResult& WithColor(const char* value) { SetColor(value); return *this;}


    /**
     * <p>Descriptions of the data that contributed to the environment's current health
     * status.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCauses() const{ return m_causes; }

    /**
     * <p>Descriptions of the data that contributed to the environment's current health
     * status.</p>
     */
    inline void SetCauses(const Aws::Vector<Aws::String>& value) { m_causes = value; }

    /**
     * <p>Descriptions of the data that contributed to the environment's current health
     * status.</p>
     */
    inline void SetCauses(Aws::Vector<Aws::String>&& value) { m_causes = std::move(value); }

    /**
     * <p>Descriptions of the data that contributed to the environment's current health
     * status.</p>
     */
    inline DescribeEnvironmentHealthResult& WithCauses(const Aws::Vector<Aws::String>& value) { SetCauses(value); return *this;}

    /**
     * <p>Descriptions of the data that contributed to the environment's current health
     * status.</p>
     */
    inline DescribeEnvironmentHealthResult& WithCauses(Aws::Vector<Aws::String>&& value) { SetCauses(std::move(value)); return *this;}

    /**
     * <p>Descriptions of the data that contributed to the environment's current health
     * status.</p>
     */
    inline DescribeEnvironmentHealthResult& AddCauses(const Aws::String& value) { m_causes.push_back(value); return *this; }

    /**
     * <p>Descriptions of the data that contributed to the environment's current health
     * status.</p>
     */
    inline DescribeEnvironmentHealthResult& AddCauses(Aws::String&& value) { m_causes.push_back(std::move(value)); return *this; }

    /**
     * <p>Descriptions of the data that contributed to the environment's current health
     * status.</p>
     */
    inline DescribeEnvironmentHealthResult& AddCauses(const char* value) { m_causes.push_back(value); return *this; }


    /**
     * <p>Application request metrics for the environment.</p>
     */
    inline const ApplicationMetrics& GetApplicationMetrics() const{ return m_applicationMetrics; }

    /**
     * <p>Application request metrics for the environment.</p>
     */
    inline void SetApplicationMetrics(const ApplicationMetrics& value) { m_applicationMetrics = value; }

    /**
     * <p>Application request metrics for the environment.</p>
     */
    inline void SetApplicationMetrics(ApplicationMetrics&& value) { m_applicationMetrics = std::move(value); }

    /**
     * <p>Application request metrics for the environment.</p>
     */
    inline DescribeEnvironmentHealthResult& WithApplicationMetrics(const ApplicationMetrics& value) { SetApplicationMetrics(value); return *this;}

    /**
     * <p>Application request metrics for the environment.</p>
     */
    inline DescribeEnvironmentHealthResult& WithApplicationMetrics(ApplicationMetrics&& value) { SetApplicationMetrics(std::move(value)); return *this;}


    /**
     * <p>Summary health information for the instances in the environment.</p>
     */
    inline const InstanceHealthSummary& GetInstancesHealth() const{ return m_instancesHealth; }

    /**
     * <p>Summary health information for the instances in the environment.</p>
     */
    inline void SetInstancesHealth(const InstanceHealthSummary& value) { m_instancesHealth = value; }

    /**
     * <p>Summary health information for the instances in the environment.</p>
     */
    inline void SetInstancesHealth(InstanceHealthSummary&& value) { m_instancesHealth = std::move(value); }

    /**
     * <p>Summary health information for the instances in the environment.</p>
     */
    inline DescribeEnvironmentHealthResult& WithInstancesHealth(const InstanceHealthSummary& value) { SetInstancesHealth(value); return *this;}

    /**
     * <p>Summary health information for the instances in the environment.</p>
     */
    inline DescribeEnvironmentHealthResult& WithInstancesHealth(InstanceHealthSummary&& value) { SetInstancesHealth(std::move(value)); return *this;}


    /**
     * <p>The date and time that the health information was retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetRefreshedAt() const{ return m_refreshedAt; }

    /**
     * <p>The date and time that the health information was retrieved.</p>
     */
    inline void SetRefreshedAt(const Aws::Utils::DateTime& value) { m_refreshedAt = value; }

    /**
     * <p>The date and time that the health information was retrieved.</p>
     */
    inline void SetRefreshedAt(Aws::Utils::DateTime&& value) { m_refreshedAt = std::move(value); }

    /**
     * <p>The date and time that the health information was retrieved.</p>
     */
    inline DescribeEnvironmentHealthResult& WithRefreshedAt(const Aws::Utils::DateTime& value) { SetRefreshedAt(value); return *this;}

    /**
     * <p>The date and time that the health information was retrieved.</p>
     */
    inline DescribeEnvironmentHealthResult& WithRefreshedAt(Aws::Utils::DateTime&& value) { SetRefreshedAt(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeEnvironmentHealthResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeEnvironmentHealthResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

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
