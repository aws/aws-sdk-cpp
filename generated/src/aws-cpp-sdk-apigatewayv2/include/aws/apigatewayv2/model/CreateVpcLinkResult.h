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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApiGatewayV2
{
namespace Model
{
  class CreateVpcLinkResult
  {
  public:
    AWS_APIGATEWAYV2_API CreateVpcLinkResult();
    AWS_APIGATEWAYV2_API CreateVpcLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API CreateVpcLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp when the VPC link was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The timestamp when the VPC link was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The timestamp when the VPC link was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The timestamp when the VPC link was created.</p>
     */
    inline CreateVpcLinkResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The timestamp when the VPC link was created.</p>
     */
    inline CreateVpcLinkResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The name of the VPC link.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the VPC link.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the VPC link.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the VPC link.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIds = value; }

    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIds = std::move(value); }

    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline CreateVpcLinkResult& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline CreateVpcLinkResult& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline CreateVpcLinkResult& AddSecurityGroupIds(const char* value) { m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIds = value; }

    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIds = std::move(value); }

    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline CreateVpcLinkResult& AddSubnetIds(const Aws::String& value) { m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline CreateVpcLinkResult& AddSubnetIds(Aws::String&& value) { m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline CreateVpcLinkResult& AddSubnetIds(const char* value) { m_subnetIds.push_back(value); return *this; }


    /**
     * <p>Tags for the VPC link.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline CreateVpcLinkResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline CreateVpcLinkResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline CreateVpcLinkResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline CreateVpcLinkResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline CreateVpcLinkResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline CreateVpcLinkResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags for the VPC link.</p>
     */
    inline CreateVpcLinkResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The ID of the VPC link.</p>
     */
    inline const Aws::String& GetVpcLinkId() const{ return m_vpcLinkId; }

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline void SetVpcLinkId(const Aws::String& value) { m_vpcLinkId = value; }

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline void SetVpcLinkId(Aws::String&& value) { m_vpcLinkId = std::move(value); }

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline void SetVpcLinkId(const char* value) { m_vpcLinkId.assign(value); }

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithVpcLinkId(const Aws::String& value) { SetVpcLinkId(value); return *this;}

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithVpcLinkId(Aws::String&& value) { SetVpcLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithVpcLinkId(const char* value) { SetVpcLinkId(value); return *this;}


    /**
     * <p>The status of the VPC link.</p>
     */
    inline const VpcLinkStatus& GetVpcLinkStatus() const{ return m_vpcLinkStatus; }

    /**
     * <p>The status of the VPC link.</p>
     */
    inline void SetVpcLinkStatus(const VpcLinkStatus& value) { m_vpcLinkStatus = value; }

    /**
     * <p>The status of the VPC link.</p>
     */
    inline void SetVpcLinkStatus(VpcLinkStatus&& value) { m_vpcLinkStatus = std::move(value); }

    /**
     * <p>The status of the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithVpcLinkStatus(const VpcLinkStatus& value) { SetVpcLinkStatus(value); return *this;}

    /**
     * <p>The status of the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithVpcLinkStatus(VpcLinkStatus&& value) { SetVpcLinkStatus(std::move(value)); return *this;}


    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline const Aws::String& GetVpcLinkStatusMessage() const{ return m_vpcLinkStatusMessage; }

    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline void SetVpcLinkStatusMessage(const Aws::String& value) { m_vpcLinkStatusMessage = value; }

    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline void SetVpcLinkStatusMessage(Aws::String&& value) { m_vpcLinkStatusMessage = std::move(value); }

    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline void SetVpcLinkStatusMessage(const char* value) { m_vpcLinkStatusMessage.assign(value); }

    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithVpcLinkStatusMessage(const Aws::String& value) { SetVpcLinkStatusMessage(value); return *this;}

    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithVpcLinkStatusMessage(Aws::String&& value) { SetVpcLinkStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithVpcLinkStatusMessage(const char* value) { SetVpcLinkStatusMessage(value); return *this;}


    /**
     * <p>The version of the VPC link.</p>
     */
    inline const VpcLinkVersion& GetVpcLinkVersion() const{ return m_vpcLinkVersion; }

    /**
     * <p>The version of the VPC link.</p>
     */
    inline void SetVpcLinkVersion(const VpcLinkVersion& value) { m_vpcLinkVersion = value; }

    /**
     * <p>The version of the VPC link.</p>
     */
    inline void SetVpcLinkVersion(VpcLinkVersion&& value) { m_vpcLinkVersion = std::move(value); }

    /**
     * <p>The version of the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithVpcLinkVersion(const VpcLinkVersion& value) { SetVpcLinkVersion(value); return *this;}

    /**
     * <p>The version of the VPC link.</p>
     */
    inline CreateVpcLinkResult& WithVpcLinkVersion(VpcLinkVersion&& value) { SetVpcLinkVersion(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_name;

    Aws::Vector<Aws::String> m_securityGroupIds;

    Aws::Vector<Aws::String> m_subnetIds;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_vpcLinkId;

    VpcLinkStatus m_vpcLinkStatus;

    Aws::String m_vpcLinkStatusMessage;

    VpcLinkVersion m_vpcLinkVersion;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
