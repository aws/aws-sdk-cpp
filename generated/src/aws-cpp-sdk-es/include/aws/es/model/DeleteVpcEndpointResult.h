/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/VpcEndpointSummary.h>
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
   * <p>Container for response parameters to the
   * <code><a>DeleteVpcEndpoint</a></code> operation. Contains the summarized detail
   * of the VPC Endpoint being deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteVpcEndpointResponse">AWS
   * API Reference</a></p>
   */
  class DeleteVpcEndpointResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DeleteVpcEndpointResult() = default;
    AWS_ELASTICSEARCHSERVICE_API DeleteVpcEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DeleteVpcEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the deleted endpoint, including its current status
     * (<code>DELETING</code> or <code>DELETE_FAILED</code>).</p>
     */
    inline const VpcEndpointSummary& GetVpcEndpointSummary() const { return m_vpcEndpointSummary; }
    template<typename VpcEndpointSummaryT = VpcEndpointSummary>
    void SetVpcEndpointSummary(VpcEndpointSummaryT&& value) { m_vpcEndpointSummaryHasBeenSet = true; m_vpcEndpointSummary = std::forward<VpcEndpointSummaryT>(value); }
    template<typename VpcEndpointSummaryT = VpcEndpointSummary>
    DeleteVpcEndpointResult& WithVpcEndpointSummary(VpcEndpointSummaryT&& value) { SetVpcEndpointSummary(std::forward<VpcEndpointSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteVpcEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VpcEndpointSummary m_vpcEndpointSummary;
    bool m_vpcEndpointSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
