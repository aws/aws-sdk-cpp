/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Deletes an Amazon OpenSearch Service-managed interface VPC
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteVpcEndpointRequest">AWS
   * API Reference</a></p>
   */
  class DeleteVpcEndpointRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DeleteVpcEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVpcEndpoint"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the endpoint to be deleted.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The unique identifier of the endpoint to be deleted.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>The unique identifier of the endpoint to be deleted.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The unique identifier of the endpoint to be deleted.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The unique identifier of the endpoint to be deleted.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The unique identifier of the endpoint to be deleted.</p>
     */
    inline DeleteVpcEndpointRequest& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The unique identifier of the endpoint to be deleted.</p>
     */
    inline DeleteVpcEndpointRequest& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the endpoint to be deleted.</p>
     */
    inline DeleteVpcEndpointRequest& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}

  private:

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
