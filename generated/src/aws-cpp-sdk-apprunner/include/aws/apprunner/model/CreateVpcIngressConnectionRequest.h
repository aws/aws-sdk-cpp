/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/IngressVpcConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apprunner/model/Tag.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class CreateVpcIngressConnectionRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API CreateVpcIngressConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcIngressConnection"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) for this App Runner service that is used to
     * create the VPC Ingress Connection resource.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for this App Runner service that is used to
     * create the VPC Ingress Connection resource.</p>
     */
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for this App Runner service that is used to
     * create the VPC Ingress Connection resource.</p>
     */
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for this App Runner service that is used to
     * create the VPC Ingress Connection resource.</p>
     */
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for this App Runner service that is used to
     * create the VPC Ingress Connection resource.</p>
     */
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for this App Runner service that is used to
     * create the VPC Ingress Connection resource.</p>
     */
    inline CreateVpcIngressConnectionRequest& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for this App Runner service that is used to
     * create the VPC Ingress Connection resource.</p>
     */
    inline CreateVpcIngressConnectionRequest& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for this App Runner service that is used to
     * create the VPC Ingress Connection resource.</p>
     */
    inline CreateVpcIngressConnectionRequest& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}


    /**
     * <p>A name for the VPC Ingress Connection resource. It must be unique across all
     * the active VPC Ingress Connections in your Amazon Web Services account in the
     * Amazon Web Services Region. </p>
     */
    inline const Aws::String& GetVpcIngressConnectionName() const{ return m_vpcIngressConnectionName; }

    /**
     * <p>A name for the VPC Ingress Connection resource. It must be unique across all
     * the active VPC Ingress Connections in your Amazon Web Services account in the
     * Amazon Web Services Region. </p>
     */
    inline bool VpcIngressConnectionNameHasBeenSet() const { return m_vpcIngressConnectionNameHasBeenSet; }

    /**
     * <p>A name for the VPC Ingress Connection resource. It must be unique across all
     * the active VPC Ingress Connections in your Amazon Web Services account in the
     * Amazon Web Services Region. </p>
     */
    inline void SetVpcIngressConnectionName(const Aws::String& value) { m_vpcIngressConnectionNameHasBeenSet = true; m_vpcIngressConnectionName = value; }

    /**
     * <p>A name for the VPC Ingress Connection resource. It must be unique across all
     * the active VPC Ingress Connections in your Amazon Web Services account in the
     * Amazon Web Services Region. </p>
     */
    inline void SetVpcIngressConnectionName(Aws::String&& value) { m_vpcIngressConnectionNameHasBeenSet = true; m_vpcIngressConnectionName = std::move(value); }

    /**
     * <p>A name for the VPC Ingress Connection resource. It must be unique across all
     * the active VPC Ingress Connections in your Amazon Web Services account in the
     * Amazon Web Services Region. </p>
     */
    inline void SetVpcIngressConnectionName(const char* value) { m_vpcIngressConnectionNameHasBeenSet = true; m_vpcIngressConnectionName.assign(value); }

    /**
     * <p>A name for the VPC Ingress Connection resource. It must be unique across all
     * the active VPC Ingress Connections in your Amazon Web Services account in the
     * Amazon Web Services Region. </p>
     */
    inline CreateVpcIngressConnectionRequest& WithVpcIngressConnectionName(const Aws::String& value) { SetVpcIngressConnectionName(value); return *this;}

    /**
     * <p>A name for the VPC Ingress Connection resource. It must be unique across all
     * the active VPC Ingress Connections in your Amazon Web Services account in the
     * Amazon Web Services Region. </p>
     */
    inline CreateVpcIngressConnectionRequest& WithVpcIngressConnectionName(Aws::String&& value) { SetVpcIngressConnectionName(std::move(value)); return *this;}

    /**
     * <p>A name for the VPC Ingress Connection resource. It must be unique across all
     * the active VPC Ingress Connections in your Amazon Web Services account in the
     * Amazon Web Services Region. </p>
     */
    inline CreateVpcIngressConnectionRequest& WithVpcIngressConnectionName(const char* value) { SetVpcIngressConnectionName(value); return *this;}


    /**
     * <p>Specifications for the customer’s Amazon VPC and the related Amazon Web
     * Services PrivateLink VPC endpoint that are used to create the VPC Ingress
     * Connection resource.</p>
     */
    inline const IngressVpcConfiguration& GetIngressVpcConfiguration() const{ return m_ingressVpcConfiguration; }

    /**
     * <p>Specifications for the customer’s Amazon VPC and the related Amazon Web
     * Services PrivateLink VPC endpoint that are used to create the VPC Ingress
     * Connection resource.</p>
     */
    inline bool IngressVpcConfigurationHasBeenSet() const { return m_ingressVpcConfigurationHasBeenSet; }

    /**
     * <p>Specifications for the customer’s Amazon VPC and the related Amazon Web
     * Services PrivateLink VPC endpoint that are used to create the VPC Ingress
     * Connection resource.</p>
     */
    inline void SetIngressVpcConfiguration(const IngressVpcConfiguration& value) { m_ingressVpcConfigurationHasBeenSet = true; m_ingressVpcConfiguration = value; }

    /**
     * <p>Specifications for the customer’s Amazon VPC and the related Amazon Web
     * Services PrivateLink VPC endpoint that are used to create the VPC Ingress
     * Connection resource.</p>
     */
    inline void SetIngressVpcConfiguration(IngressVpcConfiguration&& value) { m_ingressVpcConfigurationHasBeenSet = true; m_ingressVpcConfiguration = std::move(value); }

    /**
     * <p>Specifications for the customer’s Amazon VPC and the related Amazon Web
     * Services PrivateLink VPC endpoint that are used to create the VPC Ingress
     * Connection resource.</p>
     */
    inline CreateVpcIngressConnectionRequest& WithIngressVpcConfiguration(const IngressVpcConfiguration& value) { SetIngressVpcConfiguration(value); return *this;}

    /**
     * <p>Specifications for the customer’s Amazon VPC and the related Amazon Web
     * Services PrivateLink VPC endpoint that are used to create the VPC Ingress
     * Connection resource.</p>
     */
    inline CreateVpcIngressConnectionRequest& WithIngressVpcConfiguration(IngressVpcConfiguration&& value) { SetIngressVpcConfiguration(std::move(value)); return *this;}


    /**
     * <p>An optional list of metadata items that you can associate with the VPC
     * Ingress Connection resource. A tag is a key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An optional list of metadata items that you can associate with the VPC
     * Ingress Connection resource. A tag is a key-value pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An optional list of metadata items that you can associate with the VPC
     * Ingress Connection resource. A tag is a key-value pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An optional list of metadata items that you can associate with the VPC
     * Ingress Connection resource. A tag is a key-value pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An optional list of metadata items that you can associate with the VPC
     * Ingress Connection resource. A tag is a key-value pair.</p>
     */
    inline CreateVpcIngressConnectionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An optional list of metadata items that you can associate with the VPC
     * Ingress Connection resource. A tag is a key-value pair.</p>
     */
    inline CreateVpcIngressConnectionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An optional list of metadata items that you can associate with the VPC
     * Ingress Connection resource. A tag is a key-value pair.</p>
     */
    inline CreateVpcIngressConnectionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An optional list of metadata items that you can associate with the VPC
     * Ingress Connection resource. A tag is a key-value pair.</p>
     */
    inline CreateVpcIngressConnectionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_vpcIngressConnectionName;
    bool m_vpcIngressConnectionNameHasBeenSet = false;

    IngressVpcConfiguration m_ingressVpcConfiguration;
    bool m_ingressVpcConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
