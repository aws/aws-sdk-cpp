/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/TagListEntry.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>CreateAgentRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateAgentRequest">AWS
   * API Reference</a></p>
   */
  class CreateAgentRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API CreateAgentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAgent"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies your DataSync agent's activation key. If you don't have an
     * activation key, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/activate-agent.html">Activating
     * your agent</a>.</p>
     */
    inline const Aws::String& GetActivationKey() const { return m_activationKey; }
    inline bool ActivationKeyHasBeenSet() const { return m_activationKeyHasBeenSet; }
    template<typename ActivationKeyT = Aws::String>
    void SetActivationKey(ActivationKeyT&& value) { m_activationKeyHasBeenSet = true; m_activationKey = std::forward<ActivationKeyT>(value); }
    template<typename ActivationKeyT = Aws::String>
    CreateAgentRequest& WithActivationKey(ActivationKeyT&& value) { SetActivationKey(std::forward<ActivationKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a name for your agent. We recommend specifying a name that you can
     * remember.</p>
     */
    inline const Aws::String& GetAgentName() const { return m_agentName; }
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }
    template<typename AgentNameT = Aws::String>
    void SetAgentName(AgentNameT&& value) { m_agentNameHasBeenSet = true; m_agentName = std::forward<AgentNameT>(value); }
    template<typename AgentNameT = Aws::String>
    CreateAgentRequest& WithAgentName(AgentNameT&& value) { SetAgentName(std::forward<AgentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least one tag for your
     * agent.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    CreateAgentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagListEntry>
    CreateAgentRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the ID of the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#datasync-in-vpc">VPC
     * service endpoint</a> that you're using. For example, a VPC endpoint ID looks
     * like <code>vpce-01234d5aff67890e1</code>.</p>  <p>The VPC service
     * endpoint you use must include the DataSync service name (for example,
     * <code>com.amazonaws.us-east-2.datasync</code>).</p> 
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    CreateAgentRequest& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the subnet where your VPC service endpoint is located.
     * You can only specify one ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetArns() const { return m_subnetArns; }
    inline bool SubnetArnsHasBeenSet() const { return m_subnetArnsHasBeenSet; }
    template<typename SubnetArnsT = Aws::Vector<Aws::String>>
    void SetSubnetArns(SubnetArnsT&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = std::forward<SubnetArnsT>(value); }
    template<typename SubnetArnsT = Aws::Vector<Aws::String>>
    CreateAgentRequest& WithSubnetArns(SubnetArnsT&& value) { SetSubnetArns(std::forward<SubnetArnsT>(value)); return *this;}
    template<typename SubnetArnsT = Aws::String>
    CreateAgentRequest& AddSubnetArns(SubnetArnsT&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.emplace_back(std::forward<SubnetArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the security group that allows
     * traffic between your agent and VPC service endpoint. You can only specify one
     * ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const { return m_securityGroupArns; }
    inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }
    template<typename SecurityGroupArnsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupArns(SecurityGroupArnsT&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::forward<SecurityGroupArnsT>(value); }
    template<typename SecurityGroupArnsT = Aws::Vector<Aws::String>>
    CreateAgentRequest& WithSecurityGroupArns(SecurityGroupArnsT&& value) { SetSecurityGroupArns(std::forward<SecurityGroupArnsT>(value)); return *this;}
    template<typename SecurityGroupArnsT = Aws::String>
    CreateAgentRequest& AddSecurityGroupArns(SecurityGroupArnsT&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.emplace_back(std::forward<SecurityGroupArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_activationKey;
    bool m_activationKeyHasBeenSet = false;

    Aws::String m_agentName;
    bool m_agentNameHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetArns;
    bool m_subnetArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupArns;
    bool m_securityGroupArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
