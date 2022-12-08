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
   * <p>Contains the configuration and status of the VPC endpoint being
   * updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdateVpcEndpointResponse">AWS
   * API Reference</a></p>
   */
  class UpdateVpcEndpointResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API UpdateVpcEndpointResult();
    AWS_ELASTICSEARCHSERVICE_API UpdateVpcEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API UpdateVpcEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The endpoint to be updated.</p>
     */
    inline const VpcEndpoint& GetVpcEndpoint() const{ return m_vpcEndpoint; }

    /**
     * <p>The endpoint to be updated.</p>
     */
    inline void SetVpcEndpoint(const VpcEndpoint& value) { m_vpcEndpoint = value; }

    /**
     * <p>The endpoint to be updated.</p>
     */
    inline void SetVpcEndpoint(VpcEndpoint&& value) { m_vpcEndpoint = std::move(value); }

    /**
     * <p>The endpoint to be updated.</p>
     */
    inline UpdateVpcEndpointResult& WithVpcEndpoint(const VpcEndpoint& value) { SetVpcEndpoint(value); return *this;}

    /**
     * <p>The endpoint to be updated.</p>
     */
    inline UpdateVpcEndpointResult& WithVpcEndpoint(VpcEndpoint&& value) { SetVpcEndpoint(std::move(value)); return *this;}

  private:

    VpcEndpoint m_vpcEndpoint;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
