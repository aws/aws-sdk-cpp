/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigatewayv2/model/VpcLinkStatus.h>
#include <aws/apigatewayv2/model/VpcLinkVersion.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Represents a VPC link.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/VpcLink">AWS
   * API Reference</a></p>
   */
  class VpcLink
  {
  public:
    AWS_APIGATEWAYV2_API VpcLink() = default;
    AWS_APIGATEWAYV2_API VpcLink(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API VpcLink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp when the VPC link was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    VpcLink& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VPC link.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    VpcLink& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    VpcLink& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    VpcLink& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    VpcLink& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    VpcLink& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags for the VPC link.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    VpcLink& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    VpcLink& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC link.</p>
     */
    inline const Aws::String& GetVpcLinkId() const { return m_vpcLinkId; }
    inline bool VpcLinkIdHasBeenSet() const { return m_vpcLinkIdHasBeenSet; }
    template<typename VpcLinkIdT = Aws::String>
    void SetVpcLinkId(VpcLinkIdT&& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = std::forward<VpcLinkIdT>(value); }
    template<typename VpcLinkIdT = Aws::String>
    VpcLink& WithVpcLinkId(VpcLinkIdT&& value) { SetVpcLinkId(std::forward<VpcLinkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the VPC link.</p>
     */
    inline VpcLinkStatus GetVpcLinkStatus() const { return m_vpcLinkStatus; }
    inline bool VpcLinkStatusHasBeenSet() const { return m_vpcLinkStatusHasBeenSet; }
    inline void SetVpcLinkStatus(VpcLinkStatus value) { m_vpcLinkStatusHasBeenSet = true; m_vpcLinkStatus = value; }
    inline VpcLink& WithVpcLinkStatus(VpcLinkStatus value) { SetVpcLinkStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline const Aws::String& GetVpcLinkStatusMessage() const { return m_vpcLinkStatusMessage; }
    inline bool VpcLinkStatusMessageHasBeenSet() const { return m_vpcLinkStatusMessageHasBeenSet; }
    template<typename VpcLinkStatusMessageT = Aws::String>
    void SetVpcLinkStatusMessage(VpcLinkStatusMessageT&& value) { m_vpcLinkStatusMessageHasBeenSet = true; m_vpcLinkStatusMessage = std::forward<VpcLinkStatusMessageT>(value); }
    template<typename VpcLinkStatusMessageT = Aws::String>
    VpcLink& WithVpcLinkStatusMessage(VpcLinkStatusMessageT&& value) { SetVpcLinkStatusMessage(std::forward<VpcLinkStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the VPC link.</p>
     */
    inline VpcLinkVersion GetVpcLinkVersion() const { return m_vpcLinkVersion; }
    inline bool VpcLinkVersionHasBeenSet() const { return m_vpcLinkVersionHasBeenSet; }
    inline void SetVpcLinkVersion(VpcLinkVersion value) { m_vpcLinkVersionHasBeenSet = true; m_vpcLinkVersion = value; }
    inline VpcLink& WithVpcLinkVersion(VpcLinkVersion value) { SetVpcLinkVersion(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vpcLinkId;
    bool m_vpcLinkIdHasBeenSet = false;

    VpcLinkStatus m_vpcLinkStatus{VpcLinkStatus::NOT_SET};
    bool m_vpcLinkStatusHasBeenSet = false;

    Aws::String m_vpcLinkStatusMessage;
    bool m_vpcLinkStatusMessageHasBeenSet = false;

    VpcLinkVersion m_vpcLinkVersion{VpcLinkVersion::NOT_SET};
    bool m_vpcLinkVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
