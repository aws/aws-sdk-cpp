/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/VPCOptions.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the
   * <code><a>CreateVpcEndpointRequest</a></code> operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CreateVpcEndpointRequest">AWS
   * API Reference</a></p>
   */
  class CreateVpcEndpointRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API CreateVpcEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcEndpoint"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the domain to grant access to.</p>
     */
    inline const Aws::String& GetDomainArn() const{ return m_domainArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain to grant access to.</p>
     */
    inline bool DomainArnHasBeenSet() const { return m_domainArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain to grant access to.</p>
     */
    inline void SetDomainArn(const Aws::String& value) { m_domainArnHasBeenSet = true; m_domainArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain to grant access to.</p>
     */
    inline void SetDomainArn(Aws::String&& value) { m_domainArnHasBeenSet = true; m_domainArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain to grant access to.</p>
     */
    inline void SetDomainArn(const char* value) { m_domainArnHasBeenSet = true; m_domainArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain to grant access to.</p>
     */
    inline CreateVpcEndpointRequest& WithDomainArn(const Aws::String& value) { SetDomainArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the domain to grant access to.</p>
     */
    inline CreateVpcEndpointRequest& WithDomainArn(Aws::String&& value) { SetDomainArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the domain to grant access to.</p>
     */
    inline CreateVpcEndpointRequest& WithDomainArn(const char* value) { SetDomainArn(value); return *this;}


    /**
     * <p>Options to specify the subnets and security groups for the endpoint.</p>
     */
    inline const VPCOptions& GetVpcOptions() const{ return m_vpcOptions; }

    /**
     * <p>Options to specify the subnets and security groups for the endpoint.</p>
     */
    inline bool VpcOptionsHasBeenSet() const { return m_vpcOptionsHasBeenSet; }

    /**
     * <p>Options to specify the subnets and security groups for the endpoint.</p>
     */
    inline void SetVpcOptions(const VPCOptions& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = value; }

    /**
     * <p>Options to specify the subnets and security groups for the endpoint.</p>
     */
    inline void SetVpcOptions(VPCOptions&& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = std::move(value); }

    /**
     * <p>Options to specify the subnets and security groups for the endpoint.</p>
     */
    inline CreateVpcEndpointRequest& WithVpcOptions(const VPCOptions& value) { SetVpcOptions(value); return *this;}

    /**
     * <p>Options to specify the subnets and security groups for the endpoint.</p>
     */
    inline CreateVpcEndpointRequest& WithVpcOptions(VPCOptions&& value) { SetVpcOptions(std::move(value)); return *this;}


    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline CreateVpcEndpointRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline CreateVpcEndpointRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline CreateVpcEndpointRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_domainArn;
    bool m_domainArnHasBeenSet = false;

    VPCOptions m_vpcOptions;
    bool m_vpcOptionsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
