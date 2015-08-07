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
  class AWS_ELASTICBEANSTALK_API StatusCodes
  {
  public:
    StatusCodes();
    StatusCodes(const Aws::Utils::Xml::XmlNode& xmlNode);
    StatusCodes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline long GetStatus2xx() const{ return m_status2xx; }
    
    inline void SetStatus2xx(long value) { m_status2xxHasBeenSet = true; m_status2xx = value; }

    
    inline StatusCodes&  WithStatus2xx(long value) { SetStatus2xx(value); return *this;}

    
    inline long GetStatus3xx() const{ return m_status3xx; }
    
    inline void SetStatus3xx(long value) { m_status3xxHasBeenSet = true; m_status3xx = value; }

    
    inline StatusCodes&  WithStatus3xx(long value) { SetStatus3xx(value); return *this;}

    
    inline long GetStatus4xx() const{ return m_status4xx; }
    
    inline void SetStatus4xx(long value) { m_status4xxHasBeenSet = true; m_status4xx = value; }

    
    inline StatusCodes&  WithStatus4xx(long value) { SetStatus4xx(value); return *this;}

    
    inline long GetStatus5xx() const{ return m_status5xx; }
    
    inline void SetStatus5xx(long value) { m_status5xxHasBeenSet = true; m_status5xx = value; }

    
    inline StatusCodes&  WithStatus5xx(long value) { SetStatus5xx(value); return *this;}

  private:
    long m_status2xx;
    bool m_status2xxHasBeenSet;
    long m_status3xx;
    bool m_status3xxHasBeenSet;
    long m_status4xx;
    bool m_status4xxHasBeenSet;
    long m_status5xx;
    bool m_status5xxHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
