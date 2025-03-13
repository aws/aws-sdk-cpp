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
    AWS_KAFKA_API CreateVpcConnectionResult() = default;
    AWS_KAFKA_API CreateVpcConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API CreateVpcConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>The VPC connection ARN.</p>
         
     */
    inline const Aws::String& GetVpcConnectionArn() const { return m_vpcConnectionArn; }
    template<typename VpcConnectionArnT = Aws::String>
    void SetVpcConnectionArn(VpcConnectionArnT&& value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn = std::forward<VpcConnectionArnT>(value); }
    template<typename VpcConnectionArnT = Aws::String>
    CreateVpcConnectionResult& WithVpcConnectionArn(VpcConnectionArnT&& value) { SetVpcConnectionArn(std::forward<VpcConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The State of Vpc Connection.</p>
         
     */
    inline VpcConnectionState GetState() const { return m_state; }
    inline void SetState(VpcConnectionState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CreateVpcConnectionResult& WithState(VpcConnectionState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The authentication type of VPC connection.</p>
         
     */
    inline const Aws::String& GetAuthentication() const { return m_authentication; }
    template<typename AuthenticationT = Aws::String>
    void SetAuthentication(AuthenticationT&& value) { m_authenticationHasBeenSet = true; m_authentication = std::forward<AuthenticationT>(value); }
    template<typename AuthenticationT = Aws::String>
    CreateVpcConnectionResult& WithAuthentication(AuthenticationT&& value) { SetAuthentication(std::forward<AuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The VPC ID of the VPC connection.</p>
         
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    CreateVpcConnectionResult& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The list of client subnets.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetClientSubnets() const { return m_clientSubnets; }
    template<typename ClientSubnetsT = Aws::Vector<Aws::String>>
    void SetClientSubnets(ClientSubnetsT&& value) { m_clientSubnetsHasBeenSet = true; m_clientSubnets = std::forward<ClientSubnetsT>(value); }
    template<typename ClientSubnetsT = Aws::Vector<Aws::String>>
    CreateVpcConnectionResult& WithClientSubnets(ClientSubnetsT&& value) { SetClientSubnets(std::forward<ClientSubnetsT>(value)); return *this;}
    template<typename ClientSubnetsT = Aws::String>
    CreateVpcConnectionResult& AddClientSubnets(ClientSubnetsT&& value) { m_clientSubnetsHasBeenSet = true; m_clientSubnets.emplace_back(std::forward<ClientSubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The list of security groups.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    CreateVpcConnectionResult& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    CreateVpcConnectionResult& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The creation time of VPC connection.</p>
         
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CreateVpcConnectionResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A map of tags for the VPC connection.</p>
         
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateVpcConnectionResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateVpcConnectionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateVpcConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcConnectionArn;
    bool m_vpcConnectionArnHasBeenSet = false;

    VpcConnectionState m_state{VpcConnectionState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_authentication;
    bool m_authenticationHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_clientSubnets;
    bool m_clientSubnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
