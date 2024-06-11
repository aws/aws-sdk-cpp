﻿/**
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
  class DescribeVpcConnectionResult
  {
  public:
    AWS_KAFKA_API DescribeVpcConnectionResult();
    AWS_KAFKA_API DescribeVpcConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API DescribeVpcConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies a MSK
     * VPC connection.</p>
   
     */
    inline const Aws::String& GetVpcConnectionArn() const{ return m_vpcConnectionArn; }
    inline void SetVpcConnectionArn(const Aws::String& value) { m_vpcConnectionArn = value; }
    inline void SetVpcConnectionArn(Aws::String&& value) { m_vpcConnectionArn = std::move(value); }
    inline void SetVpcConnectionArn(const char* value) { m_vpcConnectionArn.assign(value); }
    inline DescribeVpcConnectionResult& WithVpcConnectionArn(const Aws::String& value) { SetVpcConnectionArn(value); return *this;}
    inline DescribeVpcConnectionResult& WithVpcConnectionArn(Aws::String&& value) { SetVpcConnectionArn(std::move(value)); return *this;}
    inline DescribeVpcConnectionResult& WithVpcConnectionArn(const char* value) { SetVpcConnectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * cluster.</p>
   
     */
    inline const Aws::String& GetTargetClusterArn() const{ return m_targetClusterArn; }
    inline void SetTargetClusterArn(const Aws::String& value) { m_targetClusterArn = value; }
    inline void SetTargetClusterArn(Aws::String&& value) { m_targetClusterArn = std::move(value); }
    inline void SetTargetClusterArn(const char* value) { m_targetClusterArn.assign(value); }
    inline DescribeVpcConnectionResult& WithTargetClusterArn(const Aws::String& value) { SetTargetClusterArn(value); return *this;}
    inline DescribeVpcConnectionResult& WithTargetClusterArn(Aws::String&& value) { SetTargetClusterArn(std::move(value)); return *this;}
    inline DescribeVpcConnectionResult& WithTargetClusterArn(const char* value) { SetTargetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The state of VPC connection.</p>
   
     */
    inline const VpcConnectionState& GetState() const{ return m_state; }
    inline void SetState(const VpcConnectionState& value) { m_state = value; }
    inline void SetState(VpcConnectionState&& value) { m_state = std::move(value); }
    inline DescribeVpcConnectionResult& WithState(const VpcConnectionState& value) { SetState(value); return *this;}
    inline DescribeVpcConnectionResult& WithState(VpcConnectionState&& value) { SetState(std::move(value)); return *this;}
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
    inline DescribeVpcConnectionResult& WithAuthentication(const Aws::String& value) { SetAuthentication(value); return *this;}
    inline DescribeVpcConnectionResult& WithAuthentication(Aws::String&& value) { SetAuthentication(std::move(value)); return *this;}
    inline DescribeVpcConnectionResult& WithAuthentication(const char* value) { SetAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The VPC Id for the VPC connection.</p>
   
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }
    inline DescribeVpcConnectionResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline DescribeVpcConnectionResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline DescribeVpcConnectionResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The list of subnets for the VPC connection.</p>
   
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnets = value; }
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnets = std::move(value); }
    inline DescribeVpcConnectionResult& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}
    inline DescribeVpcConnectionResult& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}
    inline DescribeVpcConnectionResult& AddSubnets(const Aws::String& value) { m_subnets.push_back(value); return *this; }
    inline DescribeVpcConnectionResult& AddSubnets(Aws::String&& value) { m_subnets.push_back(std::move(value)); return *this; }
    inline DescribeVpcConnectionResult& AddSubnets(const char* value) { m_subnets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The list of security groups for the VPC connection.</p>
   
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroups = std::move(value); }
    inline DescribeVpcConnectionResult& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline DescribeVpcConnectionResult& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline DescribeVpcConnectionResult& AddSecurityGroups(const Aws::String& value) { m_securityGroups.push_back(value); return *this; }
    inline DescribeVpcConnectionResult& AddSecurityGroups(Aws::String&& value) { m_securityGroups.push_back(std::move(value)); return *this; }
    inline DescribeVpcConnectionResult& AddSecurityGroups(const char* value) { m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The creation time of the VPC connection.</p>
   
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeVpcConnectionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeVpcConnectionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A map of tags for the VPC connection.</p>
         
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeVpcConnectionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeVpcConnectionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeVpcConnectionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeVpcConnectionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeVpcConnectionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeVpcConnectionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeVpcConnectionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeVpcConnectionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeVpcConnectionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeVpcConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeVpcConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeVpcConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcConnectionArn;

    Aws::String m_targetClusterArn;

    VpcConnectionState m_state;

    Aws::String m_authentication;

    Aws::String m_vpcId;

    Aws::Vector<Aws::String> m_subnets;

    Aws::Vector<Aws::String> m_securityGroups;

    Aws::Utils::DateTime m_creationTime;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
