/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/VpcEndpoint.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains the configuration and status of the VPC endpoint being
   * updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdateVpcEndpointResponse">AWS
   * API Reference</a></p>
   */
  class UpdateVpcEndpointResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API UpdateVpcEndpointResult() = default;
    AWS_ELASTICSEARCHSERVICE_API UpdateVpcEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API UpdateVpcEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The endpoint to be updated.</p>
     */
    inline const VpcEndpoint& GetVpcEndpoint() const { return m_vpcEndpoint; }
    template<typename VpcEndpointT = VpcEndpoint>
    void SetVpcEndpoint(VpcEndpointT&& value) { m_vpcEndpointHasBeenSet = true; m_vpcEndpoint = std::forward<VpcEndpointT>(value); }
    template<typename VpcEndpointT = VpcEndpoint>
    UpdateVpcEndpointResult& WithVpcEndpoint(VpcEndpointT&& value) { SetVpcEndpoint(std::forward<VpcEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateVpcEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VpcEndpoint m_vpcEndpoint;
    bool m_vpcEndpointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
