/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/IngressVpcConfiguration.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class UpdateVpcIngressConnectionRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API UpdateVpcIngressConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVpcIngressConnection"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (Arn) for the App Runner VPC Ingress Connection
     * resource that you want to update.</p>
     */
    inline const Aws::String& GetVpcIngressConnectionArn() const{ return m_vpcIngressConnectionArn; }

    /**
     * <p>The Amazon Resource Name (Arn) for the App Runner VPC Ingress Connection
     * resource that you want to update.</p>
     */
    inline bool VpcIngressConnectionArnHasBeenSet() const { return m_vpcIngressConnectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (Arn) for the App Runner VPC Ingress Connection
     * resource that you want to update.</p>
     */
    inline void SetVpcIngressConnectionArn(const Aws::String& value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn = value; }

    /**
     * <p>The Amazon Resource Name (Arn) for the App Runner VPC Ingress Connection
     * resource that you want to update.</p>
     */
    inline void SetVpcIngressConnectionArn(Aws::String&& value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (Arn) for the App Runner VPC Ingress Connection
     * resource that you want to update.</p>
     */
    inline void SetVpcIngressConnectionArn(const char* value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (Arn) for the App Runner VPC Ingress Connection
     * resource that you want to update.</p>
     */
    inline UpdateVpcIngressConnectionRequest& WithVpcIngressConnectionArn(const Aws::String& value) { SetVpcIngressConnectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (Arn) for the App Runner VPC Ingress Connection
     * resource that you want to update.</p>
     */
    inline UpdateVpcIngressConnectionRequest& WithVpcIngressConnectionArn(Aws::String&& value) { SetVpcIngressConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (Arn) for the App Runner VPC Ingress Connection
     * resource that you want to update.</p>
     */
    inline UpdateVpcIngressConnectionRequest& WithVpcIngressConnectionArn(const char* value) { SetVpcIngressConnectionArn(value); return *this;}


    /**
     * <p>Specifications for the customer’s Amazon VPC and the related Amazon Web
     * Services PrivateLink VPC endpoint that are used to update the VPC Ingress
     * Connection resource.</p>
     */
    inline const IngressVpcConfiguration& GetIngressVpcConfiguration() const{ return m_ingressVpcConfiguration; }

    /**
     * <p>Specifications for the customer’s Amazon VPC and the related Amazon Web
     * Services PrivateLink VPC endpoint that are used to update the VPC Ingress
     * Connection resource.</p>
     */
    inline bool IngressVpcConfigurationHasBeenSet() const { return m_ingressVpcConfigurationHasBeenSet; }

    /**
     * <p>Specifications for the customer’s Amazon VPC and the related Amazon Web
     * Services PrivateLink VPC endpoint that are used to update the VPC Ingress
     * Connection resource.</p>
     */
    inline void SetIngressVpcConfiguration(const IngressVpcConfiguration& value) { m_ingressVpcConfigurationHasBeenSet = true; m_ingressVpcConfiguration = value; }

    /**
     * <p>Specifications for the customer’s Amazon VPC and the related Amazon Web
     * Services PrivateLink VPC endpoint that are used to update the VPC Ingress
     * Connection resource.</p>
     */
    inline void SetIngressVpcConfiguration(IngressVpcConfiguration&& value) { m_ingressVpcConfigurationHasBeenSet = true; m_ingressVpcConfiguration = std::move(value); }

    /**
     * <p>Specifications for the customer’s Amazon VPC and the related Amazon Web
     * Services PrivateLink VPC endpoint that are used to update the VPC Ingress
     * Connection resource.</p>
     */
    inline UpdateVpcIngressConnectionRequest& WithIngressVpcConfiguration(const IngressVpcConfiguration& value) { SetIngressVpcConfiguration(value); return *this;}

    /**
     * <p>Specifications for the customer’s Amazon VPC and the related Amazon Web
     * Services PrivateLink VPC endpoint that are used to update the VPC Ingress
     * Connection resource.</p>
     */
    inline UpdateVpcIngressConnectionRequest& WithIngressVpcConfiguration(IngressVpcConfiguration&& value) { SetIngressVpcConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_vpcIngressConnectionArn;
    bool m_vpcIngressConnectionArnHasBeenSet = false;

    IngressVpcConfiguration m_ingressVpcConfiguration;
    bool m_ingressVpcConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
