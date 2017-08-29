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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/HealthCheckObservation.h>
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
   * <p>A complex type that contains the response to a
   * <code>GetHealthCheckLastFailureReason</code> request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHealthCheckLastFailureReasonResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API GetHealthCheckLastFailureReasonResult
  {
  public:
    GetHealthCheckLastFailureReasonResult();
    GetHealthCheckLastFailureReasonResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetHealthCheckLastFailureReasonResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list that contains one <code>Observation</code> element for each Amazon
     * Route 53 health checker that is reporting a last failure reason. </p>
     */
    inline const Aws::Vector<HealthCheckObservation>& GetHealthCheckObservations() const{ return m_healthCheckObservations; }

    /**
     * <p>A list that contains one <code>Observation</code> element for each Amazon
     * Route 53 health checker that is reporting a last failure reason. </p>
     */
    inline void SetHealthCheckObservations(const Aws::Vector<HealthCheckObservation>& value) { m_healthCheckObservations = value; }

    /**
     * <p>A list that contains one <code>Observation</code> element for each Amazon
     * Route 53 health checker that is reporting a last failure reason. </p>
     */
    inline void SetHealthCheckObservations(Aws::Vector<HealthCheckObservation>&& value) { m_healthCheckObservations = std::move(value); }

    /**
     * <p>A list that contains one <code>Observation</code> element for each Amazon
     * Route 53 health checker that is reporting a last failure reason. </p>
     */
    inline GetHealthCheckLastFailureReasonResult& WithHealthCheckObservations(const Aws::Vector<HealthCheckObservation>& value) { SetHealthCheckObservations(value); return *this;}

    /**
     * <p>A list that contains one <code>Observation</code> element for each Amazon
     * Route 53 health checker that is reporting a last failure reason. </p>
     */
    inline GetHealthCheckLastFailureReasonResult& WithHealthCheckObservations(Aws::Vector<HealthCheckObservation>&& value) { SetHealthCheckObservations(std::move(value)); return *this;}

    /**
     * <p>A list that contains one <code>Observation</code> element for each Amazon
     * Route 53 health checker that is reporting a last failure reason. </p>
     */
    inline GetHealthCheckLastFailureReasonResult& AddHealthCheckObservations(const HealthCheckObservation& value) { m_healthCheckObservations.push_back(value); return *this; }

    /**
     * <p>A list that contains one <code>Observation</code> element for each Amazon
     * Route 53 health checker that is reporting a last failure reason. </p>
     */
    inline GetHealthCheckLastFailureReasonResult& AddHealthCheckObservations(HealthCheckObservation&& value) { m_healthCheckObservations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<HealthCheckObservation> m_healthCheckObservations;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
