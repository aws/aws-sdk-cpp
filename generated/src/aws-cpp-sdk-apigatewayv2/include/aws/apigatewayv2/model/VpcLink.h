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
    AWS_APIGATEWAYV2_API VpcLink();
    AWS_APIGATEWAYV2_API VpcLink(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API VpcLink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp when the VPC link was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The timestamp when the VPC link was created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The timestamp when the VPC link was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The timestamp when the VPC link was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The timestamp when the VPC link was created.</p>
     */
    inline VpcLink& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The timestamp when the VPC link was created.</p>
     */
    inline VpcLink& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The name of the VPC link.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the VPC link.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the VPC link.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the VPC link.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the VPC link.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the VPC link.</p>
     */
    inline VpcLink& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the VPC link.</p>
     */
    inline VpcLink& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the VPC link.</p>
     */
    inline VpcLink& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline VpcLink& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline VpcLink& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline VpcLink& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline VpcLink& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline VpcLink& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline VpcLink& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline VpcLink& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline VpcLink& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline VpcLink& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline VpcLink& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>Tags for the VPC link.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline VpcLink& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline VpcLink& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline VpcLink& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline VpcLink& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline VpcLink& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline VpcLink& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline VpcLink& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline VpcLink& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline VpcLink& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The ID of the VPC link.</p>
     */
    inline const Aws::String& GetVpcLinkId() const{ return m_vpcLinkId; }

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline bool VpcLinkIdHasBeenSet() const { return m_vpcLinkIdHasBeenSet; }

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline void SetVpcLinkId(const Aws::String& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = value; }

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline void SetVpcLinkId(Aws::String&& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = std::move(value); }

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline void SetVpcLinkId(const char* value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId.assign(value); }

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline VpcLink& WithVpcLinkId(const Aws::String& value) { SetVpcLinkId(value); return *this;}

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline VpcLink& WithVpcLinkId(Aws::String&& value) { SetVpcLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline VpcLink& WithVpcLinkId(const char* value) { SetVpcLinkId(value); return *this;}


    /**
     * <p>The status of the VPC link.</p>
     */
    inline const VpcLinkStatus& GetVpcLinkStatus() const{ return m_vpcLinkStatus; }

    /**
     * <p>The status of the VPC link.</p>
     */
    inline bool VpcLinkStatusHasBeenSet() const { return m_vpcLinkStatusHasBeenSet; }

    /**
     * <p>The status of the VPC link.</p>
     */
    inline void SetVpcLinkStatus(const VpcLinkStatus& value) { m_vpcLinkStatusHasBeenSet = true; m_vpcLinkStatus = value; }

    /**
     * <p>The status of the VPC link.</p>
     */
    inline void SetVpcLinkStatus(VpcLinkStatus&& value) { m_vpcLinkStatusHasBeenSet = true; m_vpcLinkStatus = std::move(value); }

    /**
     * <p>The status of the VPC link.</p>
     */
    inline VpcLink& WithVpcLinkStatus(const VpcLinkStatus& value) { SetVpcLinkStatus(value); return *this;}

    /**
     * <p>The status of the VPC link.</p>
     */
    inline VpcLink& WithVpcLinkStatus(VpcLinkStatus&& value) { SetVpcLinkStatus(std::move(value)); return *this;}


    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline const Aws::String& GetVpcLinkStatusMessage() const{ return m_vpcLinkStatusMessage; }

    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline bool VpcLinkStatusMessageHasBeenSet() const { return m_vpcLinkStatusMessageHasBeenSet; }

    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline void SetVpcLinkStatusMessage(const Aws::String& value) { m_vpcLinkStatusMessageHasBeenSet = true; m_vpcLinkStatusMessage = value; }

    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline void SetVpcLinkStatusMessage(Aws::String&& value) { m_vpcLinkStatusMessageHasBeenSet = true; m_vpcLinkStatusMessage = std::move(value); }

    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline void SetVpcLinkStatusMessage(const char* value) { m_vpcLinkStatusMessageHasBeenSet = true; m_vpcLinkStatusMessage.assign(value); }

    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline VpcLink& WithVpcLinkStatusMessage(const Aws::String& value) { SetVpcLinkStatusMessage(value); return *this;}

    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline VpcLink& WithVpcLinkStatusMessage(Aws::String&& value) { SetVpcLinkStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline VpcLink& WithVpcLinkStatusMessage(const char* value) { SetVpcLinkStatusMessage(value); return *this;}


    /**
     * <p>The version of the VPC link.</p>
     */
    inline const VpcLinkVersion& GetVpcLinkVersion() const{ return m_vpcLinkVersion; }

    /**
     * <p>The version of the VPC link.</p>
     */
    inline bool VpcLinkVersionHasBeenSet() const { return m_vpcLinkVersionHasBeenSet; }

    /**
     * <p>The version of the VPC link.</p>
     */
    inline void SetVpcLinkVersion(const VpcLinkVersion& value) { m_vpcLinkVersionHasBeenSet = true; m_vpcLinkVersion = value; }

    /**
     * <p>The version of the VPC link.</p>
     */
    inline void SetVpcLinkVersion(VpcLinkVersion&& value) { m_vpcLinkVersionHasBeenSet = true; m_vpcLinkVersion = std::move(value); }

    /**
     * <p>The version of the VPC link.</p>
     */
    inline VpcLink& WithVpcLinkVersion(const VpcLinkVersion& value) { SetVpcLinkVersion(value); return *this;}

    /**
     * <p>The version of the VPC link.</p>
     */
    inline VpcLink& WithVpcLinkVersion(VpcLinkVersion&& value) { SetVpcLinkVersion(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdDate;
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

    VpcLinkStatus m_vpcLinkStatus;
    bool m_vpcLinkStatusHasBeenSet = false;

    Aws::String m_vpcLinkStatusMessage;
    bool m_vpcLinkStatusMessageHasBeenSet = false;

    VpcLinkVersion m_vpcLinkVersion;
    bool m_vpcLinkVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
