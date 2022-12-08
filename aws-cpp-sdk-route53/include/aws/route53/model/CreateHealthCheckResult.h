/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HealthCheck.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type containing the response information for the new health
   * check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateHealthCheckResponse">AWS
   * API Reference</a></p>
   */
  class CreateHealthCheckResult
  {
  public:
    AWS_ROUTE53_API CreateHealthCheckResult();
    AWS_ROUTE53_API CreateHealthCheckResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API CreateHealthCheckResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains identifying information about the health
     * check.</p>
     */
    inline const HealthCheck& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p>A complex type that contains identifying information about the health
     * check.</p>
     */
    inline void SetHealthCheck(const HealthCheck& value) { m_healthCheck = value; }

    /**
     * <p>A complex type that contains identifying information about the health
     * check.</p>
     */
    inline void SetHealthCheck(HealthCheck&& value) { m_healthCheck = std::move(value); }

    /**
     * <p>A complex type that contains identifying information about the health
     * check.</p>
     */
    inline CreateHealthCheckResult& WithHealthCheck(const HealthCheck& value) { SetHealthCheck(value); return *this;}

    /**
     * <p>A complex type that contains identifying information about the health
     * check.</p>
     */
    inline CreateHealthCheckResult& WithHealthCheck(HealthCheck&& value) { SetHealthCheck(std::move(value)); return *this;}


    /**
     * <p>The unique URL representing the new health check.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The unique URL representing the new health check.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The unique URL representing the new health check.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The unique URL representing the new health check.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The unique URL representing the new health check.</p>
     */
    inline CreateHealthCheckResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The unique URL representing the new health check.</p>
     */
    inline CreateHealthCheckResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The unique URL representing the new health check.</p>
     */
    inline CreateHealthCheckResult& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    HealthCheck m_healthCheck;

    Aws::String m_location;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
