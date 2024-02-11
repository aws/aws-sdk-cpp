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
    AWS_DATASYNC_API CreateAgentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAgent"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies your DataSync agent's activation key. If you don't have an
     * activation key, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/activate-agent.html">Activate
     * your agent</a>.</p>
     */
    inline const Aws::String& GetActivationKey() const{ return m_activationKey; }

    /**
     * <p>Specifies your DataSync agent's activation key. If you don't have an
     * activation key, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/activate-agent.html">Activate
     * your agent</a>.</p>
     */
    inline bool ActivationKeyHasBeenSet() const { return m_activationKeyHasBeenSet; }

    /**
     * <p>Specifies your DataSync agent's activation key. If you don't have an
     * activation key, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/activate-agent.html">Activate
     * your agent</a>.</p>
     */
    inline void SetActivationKey(const Aws::String& value) { m_activationKeyHasBeenSet = true; m_activationKey = value; }

    /**
     * <p>Specifies your DataSync agent's activation key. If you don't have an
     * activation key, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/activate-agent.html">Activate
     * your agent</a>.</p>
     */
    inline void SetActivationKey(Aws::String&& value) { m_activationKeyHasBeenSet = true; m_activationKey = std::move(value); }

    /**
     * <p>Specifies your DataSync agent's activation key. If you don't have an
     * activation key, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/activate-agent.html">Activate
     * your agent</a>.</p>
     */
    inline void SetActivationKey(const char* value) { m_activationKeyHasBeenSet = true; m_activationKey.assign(value); }

    /**
     * <p>Specifies your DataSync agent's activation key. If you don't have an
     * activation key, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/activate-agent.html">Activate
     * your agent</a>.</p>
     */
    inline CreateAgentRequest& WithActivationKey(const Aws::String& value) { SetActivationKey(value); return *this;}

    /**
     * <p>Specifies your DataSync agent's activation key. If you don't have an
     * activation key, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/activate-agent.html">Activate
     * your agent</a>.</p>
     */
    inline CreateAgentRequest& WithActivationKey(Aws::String&& value) { SetActivationKey(std::move(value)); return *this;}

    /**
     * <p>Specifies your DataSync agent's activation key. If you don't have an
     * activation key, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/activate-agent.html">Activate
     * your agent</a>.</p>
     */
    inline CreateAgentRequest& WithActivationKey(const char* value) { SetActivationKey(value); return *this;}


    /**
     * <p>Specifies a name for your agent. You can see this name in the DataSync
     * console.</p>
     */
    inline const Aws::String& GetAgentName() const{ return m_agentName; }

    /**
     * <p>Specifies a name for your agent. You can see this name in the DataSync
     * console.</p>
     */
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }

    /**
     * <p>Specifies a name for your agent. You can see this name in the DataSync
     * console.</p>
     */
    inline void SetAgentName(const Aws::String& value) { m_agentNameHasBeenSet = true; m_agentName = value; }

    /**
     * <p>Specifies a name for your agent. You can see this name in the DataSync
     * console.</p>
     */
    inline void SetAgentName(Aws::String&& value) { m_agentNameHasBeenSet = true; m_agentName = std::move(value); }

    /**
     * <p>Specifies a name for your agent. You can see this name in the DataSync
     * console.</p>
     */
    inline void SetAgentName(const char* value) { m_agentNameHasBeenSet = true; m_agentName.assign(value); }

    /**
     * <p>Specifies a name for your agent. You can see this name in the DataSync
     * console.</p>
     */
    inline CreateAgentRequest& WithAgentName(const Aws::String& value) { SetAgentName(value); return *this;}

    /**
     * <p>Specifies a name for your agent. You can see this name in the DataSync
     * console.</p>
     */
    inline CreateAgentRequest& WithAgentName(Aws::String&& value) { SetAgentName(std::move(value)); return *this;}

    /**
     * <p>Specifies a name for your agent. You can see this name in the DataSync
     * console.</p>
     */
    inline CreateAgentRequest& WithAgentName(const char* value) { SetAgentName(value); return *this;}


    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least one tag for your
     * agent.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least one tag for your
     * agent.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least one tag for your
     * agent.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least one tag for your
     * agent.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least one tag for your
     * agent.</p>
     */
    inline CreateAgentRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least one tag for your
     * agent.</p>
     */
    inline CreateAgentRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least one tag for your
     * agent.</p>
     */
    inline CreateAgentRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least one tag for your
     * agent.</p>
     */
    inline CreateAgentRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the ID of the VPC endpoint that you want your agent to connect to.
     * For example, a VPC endpoint ID looks like
     * <code>vpce-01234d5aff67890e1</code>.</p>  <p>The VPC endpoint you use
     * must include the DataSync service name (for example,
     * <code>com.amazonaws.us-east-2.datasync</code>).</p> 
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>Specifies the ID of the VPC endpoint that you want your agent to connect to.
     * For example, a VPC endpoint ID looks like
     * <code>vpce-01234d5aff67890e1</code>.</p>  <p>The VPC endpoint you use
     * must include the DataSync service name (for example,
     * <code>com.amazonaws.us-east-2.datasync</code>).</p> 
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the VPC endpoint that you want your agent to connect to.
     * For example, a VPC endpoint ID looks like
     * <code>vpce-01234d5aff67890e1</code>.</p>  <p>The VPC endpoint you use
     * must include the DataSync service name (for example,
     * <code>com.amazonaws.us-east-2.datasync</code>).</p> 
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>Specifies the ID of the VPC endpoint that you want your agent to connect to.
     * For example, a VPC endpoint ID looks like
     * <code>vpce-01234d5aff67890e1</code>.</p>  <p>The VPC endpoint you use
     * must include the DataSync service name (for example,
     * <code>com.amazonaws.us-east-2.datasync</code>).</p> 
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>Specifies the ID of the VPC endpoint that you want your agent to connect to.
     * For example, a VPC endpoint ID looks like
     * <code>vpce-01234d5aff67890e1</code>.</p>  <p>The VPC endpoint you use
     * must include the DataSync service name (for example,
     * <code>com.amazonaws.us-east-2.datasync</code>).</p> 
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>Specifies the ID of the VPC endpoint that you want your agent to connect to.
     * For example, a VPC endpoint ID looks like
     * <code>vpce-01234d5aff67890e1</code>.</p>  <p>The VPC endpoint you use
     * must include the DataSync service name (for example,
     * <code>com.amazonaws.us-east-2.datasync</code>).</p> 
     */
    inline CreateAgentRequest& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>Specifies the ID of the VPC endpoint that you want your agent to connect to.
     * For example, a VPC endpoint ID looks like
     * <code>vpce-01234d5aff67890e1</code>.</p>  <p>The VPC endpoint you use
     * must include the DataSync service name (for example,
     * <code>com.amazonaws.us-east-2.datasync</code>).</p> 
     */
    inline CreateAgentRequest& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the VPC endpoint that you want your agent to connect to.
     * For example, a VPC endpoint ID looks like
     * <code>vpce-01234d5aff67890e1</code>.</p>  <p>The VPC endpoint you use
     * must include the DataSync service name (for example,
     * <code>com.amazonaws.us-east-2.datasync</code>).</p> 
     */
    inline CreateAgentRequest& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>Specifies the ARN of the subnet where you want to run your DataSync task when
     * using a VPC endpoint. This is the subnet where DataSync creates and manages the
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for your transfer. You can only specify one ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetArns() const{ return m_subnetArns; }

    /**
     * <p>Specifies the ARN of the subnet where you want to run your DataSync task when
     * using a VPC endpoint. This is the subnet where DataSync creates and manages the
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for your transfer. You can only specify one ARN.</p>
     */
    inline bool SubnetArnsHasBeenSet() const { return m_subnetArnsHasBeenSet; }

    /**
     * <p>Specifies the ARN of the subnet where you want to run your DataSync task when
     * using a VPC endpoint. This is the subnet where DataSync creates and manages the
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for your transfer. You can only specify one ARN.</p>
     */
    inline void SetSubnetArns(const Aws::Vector<Aws::String>& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = value; }

    /**
     * <p>Specifies the ARN of the subnet where you want to run your DataSync task when
     * using a VPC endpoint. This is the subnet where DataSync creates and manages the
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for your transfer. You can only specify one ARN.</p>
     */
    inline void SetSubnetArns(Aws::Vector<Aws::String>&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = std::move(value); }

    /**
     * <p>Specifies the ARN of the subnet where you want to run your DataSync task when
     * using a VPC endpoint. This is the subnet where DataSync creates and manages the
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for your transfer. You can only specify one ARN.</p>
     */
    inline CreateAgentRequest& WithSubnetArns(const Aws::Vector<Aws::String>& value) { SetSubnetArns(value); return *this;}

    /**
     * <p>Specifies the ARN of the subnet where you want to run your DataSync task when
     * using a VPC endpoint. This is the subnet where DataSync creates and manages the
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for your transfer. You can only specify one ARN.</p>
     */
    inline CreateAgentRequest& WithSubnetArns(Aws::Vector<Aws::String>&& value) { SetSubnetArns(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the subnet where you want to run your DataSync task when
     * using a VPC endpoint. This is the subnet where DataSync creates and manages the
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for your transfer. You can only specify one ARN.</p>
     */
    inline CreateAgentRequest& AddSubnetArns(const Aws::String& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(value); return *this; }

    /**
     * <p>Specifies the ARN of the subnet where you want to run your DataSync task when
     * using a VPC endpoint. This is the subnet where DataSync creates and manages the
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for your transfer. You can only specify one ARN.</p>
     */
    inline CreateAgentRequest& AddSubnetArns(Aws::String&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the ARN of the subnet where you want to run your DataSync task when
     * using a VPC endpoint. This is the subnet where DataSync creates and manages the
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> for your transfer. You can only specify one ARN.</p>
     */
    inline CreateAgentRequest& AddSubnetArns(const char* value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(value); return *this; }


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the security group that protects
     * your task's <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> when <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#choose-service-endpoint-vpc">using
     * a virtual private cloud (VPC) endpoint</a>. You can only specify one ARN.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const{ return m_securityGroupArns; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the security group that protects
     * your task's <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> when <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#choose-service-endpoint-vpc">using
     * a virtual private cloud (VPC) endpoint</a>. You can only specify one ARN.</p>
     */
    inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the security group that protects
     * your task's <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> when <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#choose-service-endpoint-vpc">using
     * a virtual private cloud (VPC) endpoint</a>. You can only specify one ARN.</p>
     */
    inline void SetSecurityGroupArns(const Aws::Vector<Aws::String>& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the security group that protects
     * your task's <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> when <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#choose-service-endpoint-vpc">using
     * a virtual private cloud (VPC) endpoint</a>. You can only specify one ARN.</p>
     */
    inline void SetSecurityGroupArns(Aws::Vector<Aws::String>&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the security group that protects
     * your task's <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> when <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#choose-service-endpoint-vpc">using
     * a virtual private cloud (VPC) endpoint</a>. You can only specify one ARN.</p>
     */
    inline CreateAgentRequest& WithSecurityGroupArns(const Aws::Vector<Aws::String>& value) { SetSecurityGroupArns(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the security group that protects
     * your task's <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> when <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#choose-service-endpoint-vpc">using
     * a virtual private cloud (VPC) endpoint</a>. You can only specify one ARN.</p>
     */
    inline CreateAgentRequest& WithSecurityGroupArns(Aws::Vector<Aws::String>&& value) { SetSecurityGroupArns(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the security group that protects
     * your task's <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> when <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#choose-service-endpoint-vpc">using
     * a virtual private cloud (VPC) endpoint</a>. You can only specify one ARN.</p>
     */
    inline CreateAgentRequest& AddSecurityGroupArns(const Aws::String& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the security group that protects
     * your task's <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> when <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#choose-service-endpoint-vpc">using
     * a virtual private cloud (VPC) endpoint</a>. You can only specify one ARN.</p>
     */
    inline CreateAgentRequest& AddSecurityGroupArns(Aws::String&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the security group that protects
     * your task's <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/datasync-network.html#required-network-interfaces">network
     * interfaces</a> when <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choose-service-endpoint.html#choose-service-endpoint-vpc">using
     * a virtual private cloud (VPC) endpoint</a>. You can only specify one ARN.</p>
     */
    inline CreateAgentRequest& AddSecurityGroupArns(const char* value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }

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
