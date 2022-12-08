/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/VpcEndpointSummary.h>
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
    AWS_ELASTICSEARCHSERVICE_API DeleteVpcEndpointResult();
    AWS_ELASTICSEARCHSERVICE_API DeleteVpcEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DeleteVpcEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the deleted endpoint, including its current status
     * (<code>DELETING</code> or <code>DELETE_FAILED</code>).</p>
     */
    inline const VpcEndpointSummary& GetVpcEndpointSummary() const{ return m_vpcEndpointSummary; }

    /**
     * <p>Information about the deleted endpoint, including its current status
     * (<code>DELETING</code> or <code>DELETE_FAILED</code>).</p>
     */
    inline void SetVpcEndpointSummary(const VpcEndpointSummary& value) { m_vpcEndpointSummary = value; }

    /**
     * <p>Information about the deleted endpoint, including its current status
     * (<code>DELETING</code> or <code>DELETE_FAILED</code>).</p>
     */
    inline void SetVpcEndpointSummary(VpcEndpointSummary&& value) { m_vpcEndpointSummary = std::move(value); }

    /**
     * <p>Information about the deleted endpoint, including its current status
     * (<code>DELETING</code> or <code>DELETE_FAILED</code>).</p>
     */
    inline DeleteVpcEndpointResult& WithVpcEndpointSummary(const VpcEndpointSummary& value) { SetVpcEndpointSummary(value); return *this;}

    /**
     * <p>Information about the deleted endpoint, including its current status
     * (<code>DELETING</code> or <code>DELETE_FAILED</code>).</p>
     */
    inline DeleteVpcEndpointResult& WithVpcEndpointSummary(VpcEndpointSummary&& value) { SetVpcEndpointSummary(std::move(value)); return *this;}

  private:

    VpcEndpointSummary m_vpcEndpointSummary;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
