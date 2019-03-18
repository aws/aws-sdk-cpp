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

  /**
   * <p>Represents the percentage of requests over the last 10 seconds that resulted
   * in each type of status code response. For more information, see <a
   * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec10.html">Status Code
   * Definitions</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/StatusCodes">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API StatusCodes
  {
  public:
    StatusCodes();
    StatusCodes(const Aws::Utils::Xml::XmlNode& xmlNode);
    StatusCodes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The percentage of requests over the last 10 seconds that resulted in a 2xx
     * (200, 201, etc.) status code.</p>
     */
    inline int GetStatus2xx() const{ return m_status2xx; }

    /**
     * <p>The percentage of requests over the last 10 seconds that resulted in a 2xx
     * (200, 201, etc.) status code.</p>
     */
    inline bool Status2xxHasBeenSet() const { return m_status2xxHasBeenSet; }

    /**
     * <p>The percentage of requests over the last 10 seconds that resulted in a 2xx
     * (200, 201, etc.) status code.</p>
     */
    inline void SetStatus2xx(int value) { m_status2xxHasBeenSet = true; m_status2xx = value; }

    /**
     * <p>The percentage of requests over the last 10 seconds that resulted in a 2xx
     * (200, 201, etc.) status code.</p>
     */
    inline StatusCodes& WithStatus2xx(int value) { SetStatus2xx(value); return *this;}


    /**
     * <p>The percentage of requests over the last 10 seconds that resulted in a 3xx
     * (300, 301, etc.) status code.</p>
     */
    inline int GetStatus3xx() const{ return m_status3xx; }

    /**
     * <p>The percentage of requests over the last 10 seconds that resulted in a 3xx
     * (300, 301, etc.) status code.</p>
     */
    inline bool Status3xxHasBeenSet() const { return m_status3xxHasBeenSet; }

    /**
     * <p>The percentage of requests over the last 10 seconds that resulted in a 3xx
     * (300, 301, etc.) status code.</p>
     */
    inline void SetStatus3xx(int value) { m_status3xxHasBeenSet = true; m_status3xx = value; }

    /**
     * <p>The percentage of requests over the last 10 seconds that resulted in a 3xx
     * (300, 301, etc.) status code.</p>
     */
    inline StatusCodes& WithStatus3xx(int value) { SetStatus3xx(value); return *this;}


    /**
     * <p>The percentage of requests over the last 10 seconds that resulted in a 4xx
     * (400, 401, etc.) status code.</p>
     */
    inline int GetStatus4xx() const{ return m_status4xx; }

    /**
     * <p>The percentage of requests over the last 10 seconds that resulted in a 4xx
     * (400, 401, etc.) status code.</p>
     */
    inline bool Status4xxHasBeenSet() const { return m_status4xxHasBeenSet; }

    /**
     * <p>The percentage of requests over the last 10 seconds that resulted in a 4xx
     * (400, 401, etc.) status code.</p>
     */
    inline void SetStatus4xx(int value) { m_status4xxHasBeenSet = true; m_status4xx = value; }

    /**
     * <p>The percentage of requests over the last 10 seconds that resulted in a 4xx
     * (400, 401, etc.) status code.</p>
     */
    inline StatusCodes& WithStatus4xx(int value) { SetStatus4xx(value); return *this;}


    /**
     * <p>The percentage of requests over the last 10 seconds that resulted in a 5xx
     * (500, 501, etc.) status code.</p>
     */
    inline int GetStatus5xx() const{ return m_status5xx; }

    /**
     * <p>The percentage of requests over the last 10 seconds that resulted in a 5xx
     * (500, 501, etc.) status code.</p>
     */
    inline bool Status5xxHasBeenSet() const { return m_status5xxHasBeenSet; }

    /**
     * <p>The percentage of requests over the last 10 seconds that resulted in a 5xx
     * (500, 501, etc.) status code.</p>
     */
    inline void SetStatus5xx(int value) { m_status5xxHasBeenSet = true; m_status5xx = value; }

    /**
     * <p>The percentage of requests over the last 10 seconds that resulted in a 5xx
     * (500, 501, etc.) status code.</p>
     */
    inline StatusCodes& WithStatus5xx(int value) { SetStatus5xx(value); return *this;}

  private:

    int m_status2xx;
    bool m_status2xxHasBeenSet;

    int m_status3xx;
    bool m_status3xxHasBeenSet;

    int m_status4xx;
    bool m_status4xxHasBeenSet;

    int m_status5xx;
    bool m_status5xxHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
