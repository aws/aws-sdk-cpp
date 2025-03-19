/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_ELASTICSEARCHSERVICE_API DescribeVpcEndpointsResult() = default;
    AWS_ELASTICSEARCHSERVICE_API DescribeVpcEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DescribeVpcEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about each requested VPC endpoint.</p>
     */
    inline const Aws::Vector<VpcEndpoint>& GetVpcEndpoints() const { return m_vpcEndpoints; }
    template<typename VpcEndpointsT = Aws::Vector<VpcEndpoint>>
    void SetVpcEndpoints(VpcEndpointsT&& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints = std::forward<VpcEndpointsT>(value); }
    template<typename VpcEndpointsT = Aws::Vector<VpcEndpoint>>
    DescribeVpcEndpointsResult& WithVpcEndpoints(VpcEndpointsT&& value) { SetVpcEndpoints(std::forward<VpcEndpointsT>(value)); return *this;}
    template<typename VpcEndpointsT = VpcEndpoint>
    DescribeVpcEndpointsResult& AddVpcEndpoints(VpcEndpointsT&& value) { m_vpcEndpointsHasBeenSet = true; m_vpcEndpoints.emplace_back(std::forward<VpcEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any errors associated with the request.</p>
     */
    inline const Aws::Vector<VpcEndpointError>& GetVpcEndpointErrors() const { return m_vpcEndpointErrors; }
    template<typename VpcEndpointErrorsT = Aws::Vector<VpcEndpointError>>
    void SetVpcEndpointErrors(VpcEndpointErrorsT&& value) { m_vpcEndpointErrorsHasBeenSet = true; m_vpcEndpointErrors = std::forward<VpcEndpointErrorsT>(value); }
    template<typename VpcEndpointErrorsT = Aws::Vector<VpcEndpointError>>
    DescribeVpcEndpointsResult& WithVpcEndpointErrors(VpcEndpointErrorsT&& value) { SetVpcEndpointErrors(std::forward<VpcEndpointErrorsT>(value)); return *this;}
    template<typename VpcEndpointErrorsT = VpcEndpointError>
    DescribeVpcEndpointsResult& AddVpcEndpointErrors(VpcEndpointErrorsT&& value) { m_vpcEndpointErrorsHasBeenSet = true; m_vpcEndpointErrors.emplace_back(std::forward<VpcEndpointErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeVpcEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpcEndpoint> m_vpcEndpoints;
    bool m_vpcEndpointsHasBeenSet = false;

    Aws::Vector<VpcEndpointError> m_vpcEndpointErrors;
    bool m_vpcEndpointErrorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
