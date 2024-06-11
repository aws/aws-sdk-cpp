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
  class UpdateVpcLinkResult
  {
  public:
    AWS_APIGATEWAYV2_API UpdateVpcLinkResult();
    AWS_APIGATEWAYV2_API UpdateVpcLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API UpdateVpcLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp when the VPC link was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline UpdateVpcLinkResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline UpdateVpcLinkResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VPC link.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateVpcLinkResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateVpcLinkResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateVpcLinkResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of security group IDs for the VPC link.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIds = std::move(value); }
    inline UpdateVpcLinkResult& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline UpdateVpcLinkResult& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline UpdateVpcLinkResult& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIds.push_back(value); return *this; }
    inline UpdateVpcLinkResult& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline UpdateVpcLinkResult& AddSecurityGroupIds(const char* value) { m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of subnet IDs to include in the VPC link.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIds = std::move(value); }
    inline UpdateVpcLinkResult& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline UpdateVpcLinkResult& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline UpdateVpcLinkResult& AddSubnetIds(const Aws::String& value) { m_subnetIds.push_back(value); return *this; }
    inline UpdateVpcLinkResult& AddSubnetIds(Aws::String&& value) { m_subnetIds.push_back(std::move(value)); return *this; }
    inline UpdateVpcLinkResult& AddSubnetIds(const char* value) { m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags for the VPC link.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline UpdateVpcLinkResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline UpdateVpcLinkResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateVpcLinkResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline UpdateVpcLinkResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateVpcLinkResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateVpcLinkResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateVpcLinkResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateVpcLinkResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateVpcLinkResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC link.</p>
     */
    inline const Aws::String& GetVpcLinkId() const{ return m_vpcLinkId; }
    inline void SetVpcLinkId(const Aws::String& value) { m_vpcLinkId = value; }
    inline void SetVpcLinkId(Aws::String&& value) { m_vpcLinkId = std::move(value); }
    inline void SetVpcLinkId(const char* value) { m_vpcLinkId.assign(value); }
    inline UpdateVpcLinkResult& WithVpcLinkId(const Aws::String& value) { SetVpcLinkId(value); return *this;}
    inline UpdateVpcLinkResult& WithVpcLinkId(Aws::String&& value) { SetVpcLinkId(std::move(value)); return *this;}
    inline UpdateVpcLinkResult& WithVpcLinkId(const char* value) { SetVpcLinkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the VPC link.</p>
     */
    inline const VpcLinkStatus& GetVpcLinkStatus() const{ return m_vpcLinkStatus; }
    inline void SetVpcLinkStatus(const VpcLinkStatus& value) { m_vpcLinkStatus = value; }
    inline void SetVpcLinkStatus(VpcLinkStatus&& value) { m_vpcLinkStatus = std::move(value); }
    inline UpdateVpcLinkResult& WithVpcLinkStatus(const VpcLinkStatus& value) { SetVpcLinkStatus(value); return *this;}
    inline UpdateVpcLinkResult& WithVpcLinkStatus(VpcLinkStatus&& value) { SetVpcLinkStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message summarizing the cause of the status of the VPC link.</p>
     */
    inline const Aws::String& GetVpcLinkStatusMessage() const{ return m_vpcLinkStatusMessage; }
    inline void SetVpcLinkStatusMessage(const Aws::String& value) { m_vpcLinkStatusMessage = value; }
    inline void SetVpcLinkStatusMessage(Aws::String&& value) { m_vpcLinkStatusMessage = std::move(value); }
    inline void SetVpcLinkStatusMessage(const char* value) { m_vpcLinkStatusMessage.assign(value); }
    inline UpdateVpcLinkResult& WithVpcLinkStatusMessage(const Aws::String& value) { SetVpcLinkStatusMessage(value); return *this;}
    inline UpdateVpcLinkResult& WithVpcLinkStatusMessage(Aws::String&& value) { SetVpcLinkStatusMessage(std::move(value)); return *this;}
    inline UpdateVpcLinkResult& WithVpcLinkStatusMessage(const char* value) { SetVpcLinkStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the VPC link.</p>
     */
    inline const VpcLinkVersion& GetVpcLinkVersion() const{ return m_vpcLinkVersion; }
    inline void SetVpcLinkVersion(const VpcLinkVersion& value) { m_vpcLinkVersion = value; }
    inline void SetVpcLinkVersion(VpcLinkVersion&& value) { m_vpcLinkVersion = std::move(value); }
    inline UpdateVpcLinkResult& WithVpcLinkVersion(const VpcLinkVersion& value) { SetVpcLinkVersion(value); return *this;}
    inline UpdateVpcLinkResult& WithVpcLinkVersion(VpcLinkVersion&& value) { SetVpcLinkVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateVpcLinkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateVpcLinkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateVpcLinkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
