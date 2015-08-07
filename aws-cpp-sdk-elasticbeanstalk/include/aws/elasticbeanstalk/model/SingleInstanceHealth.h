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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ApplicationMetrics.h>
#include <aws/elasticbeanstalk/model/SystemStatus.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticBeanstalk
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_ELASTICBEANSTALK_API SingleInstanceHealth
  {
  public:
    SingleInstanceHealth();
    SingleInstanceHealth(const Aws::Utils::Xml::XmlNode& xmlNode);
    SingleInstanceHealth& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    
    inline SingleInstanceHealth&  WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    
    inline SingleInstanceHealth& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    
    inline const Aws::String& GetHealthStatus() const{ return m_healthStatus; }
    
    inline void SetHealthStatus(const Aws::String& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }

    
    inline void SetHealthStatus(const char* value) { m_healthStatusHasBeenSet = true; m_healthStatus.assign(value); }

    
    inline SingleInstanceHealth&  WithHealthStatus(const Aws::String& value) { SetHealthStatus(value); return *this;}

    
    inline SingleInstanceHealth& WithHealthStatus(const char* value) { SetHealthStatus(value); return *this;}

    
    inline const Aws::String& GetColor() const{ return m_color; }
    
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }

    
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }

    
    inline SingleInstanceHealth&  WithColor(const Aws::String& value) { SetColor(value); return *this;}

    
    inline SingleInstanceHealth& WithColor(const char* value) { SetColor(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetCauses() const{ return m_causes; }
    
    inline void SetCauses(const Aws::Vector<Aws::String>& value) { m_causesHasBeenSet = true; m_causes = value; }

    
    inline SingleInstanceHealth&  WithCauses(const Aws::Vector<Aws::String>& value) { SetCauses(value); return *this;}

    
    inline SingleInstanceHealth& AddCauses(const Aws::String& value) { m_causesHasBeenSet = true; m_causes.push_back(value); return *this; }

    
    inline SingleInstanceHealth& AddCauses(const char* value) { m_causesHasBeenSet = true; m_causes.push_back(value); return *this; }

    
    inline double GetLaunchedAt() const{ return m_launchedAt; }
    
    inline void SetLaunchedAt(double value) { m_launchedAtHasBeenSet = true; m_launchedAt = value; }

    
    inline SingleInstanceHealth&  WithLaunchedAt(double value) { SetLaunchedAt(value); return *this;}

    
    inline const ApplicationMetrics& GetApplicationMetrics() const{ return m_applicationMetrics; }
    
    inline void SetApplicationMetrics(const ApplicationMetrics& value) { m_applicationMetricsHasBeenSet = true; m_applicationMetrics = value; }

    
    inline SingleInstanceHealth&  WithApplicationMetrics(const ApplicationMetrics& value) { SetApplicationMetrics(value); return *this;}

    
    inline const SystemStatus& GetSystem() const{ return m_system; }
    
    inline void SetSystem(const SystemStatus& value) { m_systemHasBeenSet = true; m_system = value; }

    
    inline SingleInstanceHealth&  WithSystem(const SystemStatus& value) { SetSystem(value); return *this;}

  private:
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::String m_healthStatus;
    bool m_healthStatusHasBeenSet;
    Aws::String m_color;
    bool m_colorHasBeenSet;
    Aws::Vector<Aws::String> m_causes;
    bool m_causesHasBeenSet;
    double m_launchedAt;
    bool m_launchedAtHasBeenSet;
    ApplicationMetrics m_applicationMetrics;
    bool m_applicationMetricsHasBeenSet;
    SystemStatus m_system;
    bool m_systemHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
