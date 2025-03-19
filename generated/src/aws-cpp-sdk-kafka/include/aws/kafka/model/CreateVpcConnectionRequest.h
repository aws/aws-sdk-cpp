/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   */
  class CreateVpcConnectionRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API CreateVpcConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcConnection"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * 
            <p>The cluster Amazon Resource Name (ARN) for the VPC
     * connection.</p>
         
     */
    inline const Aws::String& GetTargetClusterArn() const { return m_targetClusterArn; }
    inline bool TargetClusterArnHasBeenSet() const { return m_targetClusterArnHasBeenSet; }
    template<typename TargetClusterArnT = Aws::String>
    void SetTargetClusterArn(TargetClusterArnT&& value) { m_targetClusterArnHasBeenSet = true; m_targetClusterArn = std::forward<TargetClusterArnT>(value); }
    template<typename TargetClusterArnT = Aws::String>
    CreateVpcConnectionRequest& WithTargetClusterArn(TargetClusterArnT&& value) { SetTargetClusterArn(std::forward<TargetClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The authentication type of VPC connection.</p>
         
     */
    inline const Aws::String& GetAuthentication() const { return m_authentication; }
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }
    template<typename AuthenticationT = Aws::String>
    void SetAuthentication(AuthenticationT&& value) { m_authenticationHasBeenSet = true; m_authentication = std::forward<AuthenticationT>(value); }
    template<typename AuthenticationT = Aws::String>
    CreateVpcConnectionRequest& WithAuthentication(AuthenticationT&& value) { SetAuthentication(std::forward<AuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The VPC ID of VPC connection.</p>
         
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    CreateVpcConnectionRequest& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The list of client subnets.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetClientSubnets() const { return m_clientSubnets; }
    inline bool ClientSubnetsHasBeenSet() const { return m_clientSubnetsHasBeenSet; }
    template<typename ClientSubnetsT = Aws::Vector<Aws::String>>
    void SetClientSubnets(ClientSubnetsT&& value) { m_clientSubnetsHasBeenSet = true; m_clientSubnets = std::forward<ClientSubnetsT>(value); }
    template<typename ClientSubnetsT = Aws::Vector<Aws::String>>
    CreateVpcConnectionRequest& WithClientSubnets(ClientSubnetsT&& value) { SetClientSubnets(std::forward<ClientSubnetsT>(value)); return *this;}
    template<typename ClientSubnetsT = Aws::String>
    CreateVpcConnectionRequest& AddClientSubnets(ClientSubnetsT&& value) { m_clientSubnetsHasBeenSet = true; m_clientSubnets.emplace_back(std::forward<ClientSubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The list of security groups.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    CreateVpcConnectionRequest& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    CreateVpcConnectionRequest& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>A map of tags for the VPC connection.</p>
         
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateVpcConnectionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateVpcConnectionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_targetClusterArn;
    bool m_targetClusterArnHasBeenSet = false;

    Aws::String m_authentication;
    bool m_authenticationHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_clientSubnets;
    bool m_clientSubnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
