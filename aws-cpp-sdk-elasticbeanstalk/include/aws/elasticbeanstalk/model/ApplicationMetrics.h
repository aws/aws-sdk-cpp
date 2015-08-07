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
#include <aws/elasticbeanstalk/model/StatusCodes.h>
#include <aws/elasticbeanstalk/model/Latency.h>

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
  class AWS_ELASTICBEANSTALK_API ApplicationMetrics
  {
  public:
    ApplicationMetrics();
    ApplicationMetrics(const Aws::Utils::Xml::XmlNode& xmlNode);
    ApplicationMetrics& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline long GetDuration() const{ return m_duration; }
    
    inline void SetDuration(long value) { m_durationHasBeenSet = true; m_duration = value; }

    
    inline ApplicationMetrics&  WithDuration(long value) { SetDuration(value); return *this;}

    
    inline long GetRequestCount() const{ return m_requestCount; }
    
    inline void SetRequestCount(long value) { m_requestCountHasBeenSet = true; m_requestCount = value; }

    
    inline ApplicationMetrics&  WithRequestCount(long value) { SetRequestCount(value); return *this;}

    
    inline const StatusCodes& GetStatusCodes() const{ return m_statusCodes; }
    
    inline void SetStatusCodes(const StatusCodes& value) { m_statusCodesHasBeenSet = true; m_statusCodes = value; }

    
    inline ApplicationMetrics&  WithStatusCodes(const StatusCodes& value) { SetStatusCodes(value); return *this;}

    
    inline const Latency& GetLatency() const{ return m_latency; }
    
    inline void SetLatency(const Latency& value) { m_latencyHasBeenSet = true; m_latency = value; }

    
    inline ApplicationMetrics&  WithLatency(const Latency& value) { SetLatency(value); return *this;}

  private:
    long m_duration;
    bool m_durationHasBeenSet;
    long m_requestCount;
    bool m_requestCountHasBeenSet;
    StatusCodes m_statusCodes;
    bool m_statusCodesHasBeenSet;
    Latency m_latency;
    bool m_latencyHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
