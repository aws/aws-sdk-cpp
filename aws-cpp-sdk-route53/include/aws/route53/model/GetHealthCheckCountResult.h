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
#include <aws/route53/Route53_EXPORTS.h>

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
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the response to a
   * <code>GetHealthCheckCount</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHealthCheckCountResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API GetHealthCheckCountResult
  {
  public:
    GetHealthCheckCountResult();
    GetHealthCheckCountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetHealthCheckCountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The number of health checks associated with the current AWS account.</p>
     */
    inline long long GetHealthCheckCount() const{ return m_healthCheckCount; }

    /**
     * <p>The number of health checks associated with the current AWS account.</p>
     */
    inline void SetHealthCheckCount(long long value) { m_healthCheckCount = value; }

    /**
     * <p>The number of health checks associated with the current AWS account.</p>
     */
    inline GetHealthCheckCountResult& WithHealthCheckCount(long long value) { SetHealthCheckCount(value); return *this;}

  private:

    long long m_healthCheckCount;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
