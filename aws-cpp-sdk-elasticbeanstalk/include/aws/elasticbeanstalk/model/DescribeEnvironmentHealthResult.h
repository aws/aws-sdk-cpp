/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>

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
  /*
    $shape.documentation
  */
  class AWS_ELASTICBEANSTALK_API DescribeEnvironmentHealthResult
  {
  public:
    DescribeEnvironmentHealthResult();
    DescribeEnvironmentHealthResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeEnvironmentHealthResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentName = value; }

    
    inline void SetEnvironmentName(const char* value) { m_environmentName.assign(value); }

    
    inline DescribeEnvironmentHealthResult&  WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    
    inline DescribeEnvironmentHealthResult& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}

    
    inline const Aws::String& GetHealthStatus() const{ return m_healthStatus; }
    
    inline void SetHealthStatus(const Aws::String& value) { m_healthStatus = value; }

    
    inline void SetHealthStatus(const char* value) { m_healthStatus.assign(value); }

    
    inline DescribeEnvironmentHealthResult&  WithHealthStatus(const Aws::String& value) { SetHealthStatus(value); return *this;}

    
    inline DescribeEnvironmentHealthResult& WithHealthStatus(const char* value) { SetHealthStatus(value); return *this;}

    
    inline const EnvironmentHealth& GetStatus() const{ return m_status; }
    
    inline void SetStatus(const EnvironmentHealth& value) { m_status = value; }

    
    inline DescribeEnvironmentHealthResult&  WithStatus(const EnvironmentHealth& value) { SetStatus(value); return *this;}

    
    inline const Aws::String& GetColor() const{ return m_color; }
    
    inline void SetColor(const Aws::String& value) { m_color = value; }

    
    inline void SetColor(const char* value) { m_color.assign(value); }

    
    inline DescribeEnvironmentHealthResult&  WithColor(const Aws::String& value) { SetColor(value); return *this;}

    
    inline DescribeEnvironmentHealthResult& WithColor(const char* value) { SetColor(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetCauses() const{ return m_causes; }
    
    inline void SetCauses(const Aws::Vector<Aws::String>& value) { m_causes = value; }

    
    inline DescribeEnvironmentHealthResult&  WithCauses(const Aws::Vector<Aws::String>& value) { SetCauses(value); return *this;}

    
    inline DescribeEnvironmentHealthResult& AddCauses(const Aws::String& value) { m_causes.push_back(value); return *this; }

    
    inline DescribeEnvironmentHealthResult& AddCauses(const char* value) { m_causes.push_back(value); return *this; }

    
    inline const ApplicationMetrics& GetApplicationMetrics() const{ return m_applicationMetrics; }
    
    inline void SetApplicationMetrics(const ApplicationMetrics& value) { m_applicationMetrics = value; }

    
    inline DescribeEnvironmentHealthResult&  WithApplicationMetrics(const ApplicationMetrics& value) { SetApplicationMetrics(value); return *this;}

    
    inline const InstanceHealthSummary& GetInstancesHealth() const{ return m_instancesHealth; }
    
    inline void SetInstancesHealth(const InstanceHealthSummary& value) { m_instancesHealth = value; }

    
    inline DescribeEnvironmentHealthResult&  WithInstancesHealth(const InstanceHealthSummary& value) { SetInstancesHealth(value); return *this;}

    
    inline double GetRefreshedAt() const{ return m_refreshedAt; }
    
    inline void SetRefreshedAt(double value) { m_refreshedAt = value; }

    
    inline DescribeEnvironmentHealthResult&  WithRefreshedAt(double value) { SetRefreshedAt(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline DescribeEnvironmentHealthResult&  WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_environmentName;
    Aws::String m_healthStatus;
    EnvironmentHealth m_status;
    Aws::String m_color;
    Aws::Vector<Aws::String> m_causes;
    ApplicationMetrics m_applicationMetrics;
    InstanceHealthSummary m_instancesHealth;
    double m_refreshedAt;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws