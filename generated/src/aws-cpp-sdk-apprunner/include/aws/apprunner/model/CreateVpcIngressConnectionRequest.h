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
    AWS_APPRUNNER_API CreateVpcIngressConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcIngressConnection"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for this App Runner service that is used to
     * create the VPC Ingress Connection resource.</p>
     */
    inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    template<typename ServiceArnT = Aws::String>
    void SetServiceArn(ServiceArnT&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::forward<ServiceArnT>(value); }
    template<typename ServiceArnT = Aws::String>
    CreateVpcIngressConnectionRequest& WithServiceArn(ServiceArnT&& value) { SetServiceArn(std::forward<ServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the VPC Ingress Connection resource. It must be unique across all
     * the active VPC Ingress Connections in your Amazon Web Services account in the
     * Amazon Web Services Region. </p>
     */
    inline const Aws::String& GetVpcIngressConnectionName() const { return m_vpcIngressConnectionName; }
    inline bool VpcIngressConnectionNameHasBeenSet() const { return m_vpcIngressConnectionNameHasBeenSet; }
    template<typename VpcIngressConnectionNameT = Aws::String>
    void SetVpcIngressConnectionName(VpcIngressConnectionNameT&& value) { m_vpcIngressConnectionNameHasBeenSet = true; m_vpcIngressConnectionName = std::forward<VpcIngressConnectionNameT>(value); }
    template<typename VpcIngressConnectionNameT = Aws::String>
    CreateVpcIngressConnectionRequest& WithVpcIngressConnectionName(VpcIngressConnectionNameT&& value) { SetVpcIngressConnectionName(std::forward<VpcIngressConnectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifications for the customer’s Amazon VPC and the related Amazon Web
     * Services PrivateLink VPC endpoint that are used to create the VPC Ingress
     * Connection resource.</p>
     */
    inline const IngressVpcConfiguration& GetIngressVpcConfiguration() const { return m_ingressVpcConfiguration; }
    inline bool IngressVpcConfigurationHasBeenSet() const { return m_ingressVpcConfigurationHasBeenSet; }
    template<typename IngressVpcConfigurationT = IngressVpcConfiguration>
    void SetIngressVpcConfiguration(IngressVpcConfigurationT&& value) { m_ingressVpcConfigurationHasBeenSet = true; m_ingressVpcConfiguration = std::forward<IngressVpcConfigurationT>(value); }
    template<typename IngressVpcConfigurationT = IngressVpcConfiguration>
    CreateVpcIngressConnectionRequest& WithIngressVpcConfiguration(IngressVpcConfigurationT&& value) { SetIngressVpcConfiguration(std::forward<IngressVpcConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of metadata items that you can associate with the VPC
     * Ingress Connection resource. A tag is a key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateVpcIngressConnectionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateVpcIngressConnectionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
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
