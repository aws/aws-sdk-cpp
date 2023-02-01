/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/VpcEndpoint.h>
#include <aws/es/model/VpcEndpointError.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>Container for response parameters to the
   * <code><a>DescribeVpcEndpoints</a></code> operation. Returns a list containing
   * configuration details and status of the VPC Endpoints as well as a list
   * containing error responses of the endpoints that could not be
   * described</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeVpcEndpointsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeVpcEndpointsResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribeVpcEndpointsResult();
    AWS_ELASTICSEARCHSERVICE_API DescribeVpcEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribeVpcEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about each requested VPC endpoint.</p>
     */
    inline const Aws::Vector<VpcEndpoint>& GetVpcEndpoints() const{ return m_vpcEndpoints; }

    /**
     * <p>Information about each requested VPC endpoint.</p>
     */
    inline void SetVpcEndpoints(const Aws::Vector<VpcEndpoint>& value) { m_vpcEndpoints = value; }

    /**
     * <p>Information about each requested VPC endpoint.</p>
     */
    inline void SetVpcEndpoints(Aws::Vector<VpcEndpoint>&& value) { m_vpcEndpoints = std::move(value); }

    /**
     * <p>Information about each requested VPC endpoint.</p>
     */
    inline DescribeVpcEndpointsResult& WithVpcEndpoints(const Aws::Vector<VpcEndpoint>& value) { SetVpcEndpoints(value); return *this;}

    /**
     * <p>Information about each requested VPC endpoint.</p>
     */
    inline DescribeVpcEndpointsResult& WithVpcEndpoints(Aws::Vector<VpcEndpoint>&& value) { SetVpcEndpoints(std::move(value)); return *this;}

    /**
     * <p>Information about each requested VPC endpoint.</p>
     */
    inline DescribeVpcEndpointsResult& AddVpcEndpoints(const VpcEndpoint& value) { m_vpcEndpoints.push_back(value); return *this; }

    /**
     * <p>Information about each requested VPC endpoint.</p>
     */
    inline DescribeVpcEndpointsResult& AddVpcEndpoints(VpcEndpoint&& value) { m_vpcEndpoints.push_back(std::move(value)); return *this; }


    /**
     * <p>Any errors associated with the request.</p>
     */
    inline const Aws::Vector<VpcEndpointError>& GetVpcEndpointErrors() const{ return m_vpcEndpointErrors; }

    /**
     * <p>Any errors associated with the request.</p>
     */
    inline void SetVpcEndpointErrors(const Aws::Vector<VpcEndpointError>& value) { m_vpcEndpointErrors = value; }

    /**
     * <p>Any errors associated with the request.</p>
     */
    inline void SetVpcEndpointErrors(Aws::Vector<VpcEndpointError>&& value) { m_vpcEndpointErrors = std::move(value); }

    /**
     * <p>Any errors associated with the request.</p>
     */
    inline DescribeVpcEndpointsResult& WithVpcEndpointErrors(const Aws::Vector<VpcEndpointError>& value) { SetVpcEndpointErrors(value); return *this;}

    /**
     * <p>Any errors associated with the request.</p>
     */
    inline DescribeVpcEndpointsResult& WithVpcEndpointErrors(Aws::Vector<VpcEndpointError>&& value) { SetVpcEndpointErrors(std::move(value)); return *this;}

    /**
     * <p>Any errors associated with the request.</p>
     */
    inline DescribeVpcEndpointsResult& AddVpcEndpointErrors(const VpcEndpointError& value) { m_vpcEndpointErrors.push_back(value); return *this; }

    /**
     * <p>Any errors associated with the request.</p>
     */
    inline DescribeVpcEndpointsResult& AddVpcEndpointErrors(VpcEndpointError&& value) { m_vpcEndpointErrors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<VpcEndpoint> m_vpcEndpoints;

    Aws::Vector<VpcEndpointError> m_vpcEndpointErrors;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
