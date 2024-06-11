/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/VpcConnectionState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Kafka
{
namespace Model
{
  class CreateVpcConnectionResult
  {
  public:
    AWS_KAFKA_API CreateVpcConnectionResult();
    AWS_KAFKA_API CreateVpcConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API CreateVpcConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>The VPC connection ARN.</p>
         
     */
    inline const Aws::String& GetVpcConnectionArn() const{ return m_vpcConnectionArn; }
    inline void SetVpcConnectionArn(const Aws::String& value) { m_vpcConnectionArn = value; }
    inline void SetVpcConnectionArn(Aws::String&& value) { m_vpcConnectionArn = std::move(value); }
    inline void SetVpcConnectionArn(const char* value) { m_vpcConnectionArn.assign(value); }
    inline CreateVpcConnectionResult& WithVpcConnectionArn(const Aws::String& value) { SetVpcConnectionArn(value); return *this;}
    inline CreateVpcConnectionResult& WithVpcConnectionArn(Aws::String&& value) { SetVpcConnectionArn(std::move(value)); return *this;}
    inline CreateVpcConnectionResult& WithVpcConnectionArn(const char* value) { SetVpcConnectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The State of Vpc Connection.</p>
         
     */
    inline const VpcConnectionState& GetState() const{ return m_state; }
    inline void SetState(const VpcConnectionState& value) { m_state = value; }
    inline void SetState(VpcConnectionState&& value) { m_state = std::move(value); }
    inline CreateVpcConnectionResult& WithState(const VpcConnectionState& value) { SetState(value); return *this;}
    inline CreateVpcConnectionResult& WithState(VpcConnectionState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The authentication type of VPC connection.</p>
         
     */
    inline const Aws::String& GetAuthentication() const{ return m_authentication; }
    inline void SetAuthentication(const Aws::String& value) { m_authentication = value; }
    inline void SetAuthentication(Aws::String&& value) { m_authentication = std::move(value); }
    inline void SetAuthentication(const char* value) { m_authentication.assign(value); }
    inline CreateVpcConnectionResult& WithAuthentication(const Aws::String& value) { SetAuthentication(value); return *this;}
    inline CreateVpcConnectionResult& WithAuthentication(Aws::String&& value) { SetAuthentication(std::move(value)); return *this;}
    inline CreateVpcConnectionResult& WithAuthentication(const char* value) { SetAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The VPC ID of the VPC connection.</p>
         
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }
    inline CreateVpcConnectionResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline CreateVpcConnectionResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline CreateVpcConnectionResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The list of client subnets.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetClientSubnets() const{ return m_clientSubnets; }
    inline void SetClientSubnets(const Aws::Vector<Aws::String>& value) { m_clientSubnets = value; }
    inline void SetClientSubnets(Aws::Vector<Aws::String>&& value) { m_clientSubnets = std::move(value); }
    inline CreateVpcConnectionResult& WithClientSubnets(const Aws::Vector<Aws::String>& value) { SetClientSubnets(value); return *this;}
    inline CreateVpcConnectionResult& WithClientSubnets(Aws::Vector<Aws::String>&& value) { SetClientSubnets(std::move(value)); return *this;}
    inline CreateVpcConnectionResult& AddClientSubnets(const Aws::String& value) { m_clientSubnets.push_back(value); return *this; }
    inline CreateVpcConnectionResult& AddClientSubnets(Aws::String&& value) { m_clientSubnets.push_back(std::move(value)); return *this; }
    inline CreateVpcConnectionResult& AddClientSubnets(const char* value) { m_clientSubnets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The list of security groups.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroups = std::move(value); }
    inline CreateVpcConnectionResult& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline CreateVpcConnectionResult& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline CreateVpcConnectionResult& AddSecurityGroups(const Aws::String& value) { m_securityGroups.push_back(value); return *this; }
    inline CreateVpcConnectionResult& AddSecurityGroups(Aws::String&& value) { m_securityGroups.push_back(std::move(value)); return *this; }
    inline CreateVpcConnectionResult& AddSecurityGroups(const char* value) { m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The creation time of VPC connection.</p>
         
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline CreateVpcConnectionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline CreateVpcConnectionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A map of tags for the VPC connection.</p>
         
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateVpcConnectionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateVpcConnectionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateVpcConnectionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateVpcConnectionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateVpcConnectionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateVpcConnectionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateVpcConnectionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateVpcConnectionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateVpcConnectionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateVpcConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateVpcConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateVpcConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcConnectionArn;

    VpcConnectionState m_state;

    Aws::String m_authentication;

    Aws::String m_vpcId;

    Aws::Vector<Aws::String> m_clientSubnets;

    Aws::Vector<Aws::String> m_securityGroups;

    Aws::Utils::DateTime m_creationTime;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
