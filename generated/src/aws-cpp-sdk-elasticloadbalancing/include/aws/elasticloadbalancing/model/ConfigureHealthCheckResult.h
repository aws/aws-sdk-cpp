/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/model/HealthCheck.h>
#include <aws/elasticloadbalancing/model/ResponseMetadata.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{
  /**
   * <p>Contains the output of ConfigureHealthCheck.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/ConfigureHealthCheckOutput">AWS
   * API Reference</a></p>
   */
  class ConfigureHealthCheckResult
  {
  public:
    AWS_ELASTICLOADBALANCING_API ConfigureHealthCheckResult();
    AWS_ELASTICLOADBALANCING_API ConfigureHealthCheckResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCING_API ConfigureHealthCheckResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The updated health check.</p>
     */
    inline const HealthCheck& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p>The updated health check.</p>
     */
    inline void SetHealthCheck(const HealthCheck& value) { m_healthCheck = value; }

    /**
     * <p>The updated health check.</p>
     */
    inline void SetHealthCheck(HealthCheck&& value) { m_healthCheck = std::move(value); }

    /**
     * <p>The updated health check.</p>
     */
    inline ConfigureHealthCheckResult& WithHealthCheck(const HealthCheck& value) { SetHealthCheck(value); return *this;}

    /**
     * <p>The updated health check.</p>
     */
    inline ConfigureHealthCheckResult& WithHealthCheck(HealthCheck&& value) { SetHealthCheck(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ConfigureHealthCheckResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ConfigureHealthCheckResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    HealthCheck m_healthCheck;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
