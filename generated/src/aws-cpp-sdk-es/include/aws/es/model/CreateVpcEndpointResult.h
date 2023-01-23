/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/VpcEndpoint.h>
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
   * <code><a>CreateVpcEndpoint</a></code> operation. Contains the configuration and
   * status of the VPC Endpoint being created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreateVpcEndpointResponse">AWS
   * API Reference</a></p>
   */
  class CreateVpcEndpointResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API CreateVpcEndpointResult();
    AWS_ELASTICSEARCHSERVICE_API CreateVpcEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API CreateVpcEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the newly created VPC endpoint.</p>
     */
    inline const VpcEndpoint& GetVpcEndpoint() const{ return m_vpcEndpoint; }

    /**
     * <p>Information about the newly created VPC endpoint.</p>
     */
    inline void SetVpcEndpoint(const VpcEndpoint& value) { m_vpcEndpoint = value; }

    /**
     * <p>Information about the newly created VPC endpoint.</p>
     */
    inline void SetVpcEndpoint(VpcEndpoint&& value) { m_vpcEndpoint = std::move(value); }

    /**
     * <p>Information about the newly created VPC endpoint.</p>
     */
    inline CreateVpcEndpointResult& WithVpcEndpoint(const VpcEndpoint& value) { SetVpcEndpoint(value); return *this;}

    /**
     * <p>Information about the newly created VPC endpoint.</p>
     */
    inline CreateVpcEndpointResult& WithVpcEndpoint(VpcEndpoint&& value) { SetVpcEndpoint(std::move(value)); return *this;}

  private:

    VpcEndpoint m_vpcEndpoint;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
