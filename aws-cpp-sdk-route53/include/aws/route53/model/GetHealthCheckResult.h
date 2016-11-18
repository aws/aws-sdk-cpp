/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/route53/model/HealthCheck.h>

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
   * <p>A complex type that contains the response to a <code>GetHealthCheck</code>
   * request.</p>
   */
  class AWS_ROUTE53_API GetHealthCheckResult
  {
  public:
    GetHealthCheckResult();
    GetHealthCheckResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetHealthCheckResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A complex type that contains information about one health check that is
     * associated with the current AWS account.</p>
     */
    inline const HealthCheck& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p>A complex type that contains information about one health check that is
     * associated with the current AWS account.</p>
     */
    inline void SetHealthCheck(const HealthCheck& value) { m_healthCheck = value; }

    /**
     * <p>A complex type that contains information about one health check that is
     * associated with the current AWS account.</p>
     */
    inline void SetHealthCheck(HealthCheck&& value) { m_healthCheck = value; }

    /**
     * <p>A complex type that contains information about one health check that is
     * associated with the current AWS account.</p>
     */
    inline GetHealthCheckResult& WithHealthCheck(const HealthCheck& value) { SetHealthCheck(value); return *this;}

    /**
     * <p>A complex type that contains information about one health check that is
     * associated with the current AWS account.</p>
     */
    inline GetHealthCheckResult& WithHealthCheck(HealthCheck&& value) { SetHealthCheck(value); return *this;}

  private:
    HealthCheck m_healthCheck;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws