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
     * <p>Your agent activation key. You can get the activation key either by sending
     * an HTTP GET request with redirects that enable you to get the agent IP address
     * (port 80). Alternatively, you can get it from the DataSync console.</p> <p>The
     * redirect URL returned in the response provides you the activation key for your
     * agent in the query string parameter <code>activationKey</code>. It might also
     * include other activation-related parameters; however, these are merely defaults.
     * The arguments you pass to this API call determine the actual configuration of
     * your agent.</p> <p>For more information, see Activating an Agent in the
     * <i>DataSync User Guide.</i> </p>
     */
    inline const Aws::String& GetActivationKey() const{ return m_activationKey; }

    /**
     * <p>Your agent activation key. You can get the activation key either by sending
     * an HTTP GET request with redirects that enable you to get the agent IP address
     * (port 80). Alternatively, you can get it from the DataSync console.</p> <p>The
     * redirect URL returned in the response provides you the activation key for your
     * agent in the query string parameter <code>activationKey</code>. It might also
     * include other activation-related parameters; however, these are merely defaults.
     * The arguments you pass to this API call determine the actual configuration of
     * your agent.</p> <p>For more information, see Activating an Agent in the
     * <i>DataSync User Guide.</i> </p>
     */
    inline bool ActivationKeyHasBeenSet() const { return m_activationKeyHasBeenSet; }

    /**
     * <p>Your agent activation key. You can get the activation key either by sending
     * an HTTP GET request with redirects that enable you to get the agent IP address
     * (port 80). Alternatively, you can get it from the DataSync console.</p> <p>The
     * redirect URL returned in the response provides you the activation key for your
     * agent in the query string parameter <code>activationKey</code>. It might also
     * include other activation-related parameters; however, these are merely defaults.
     * The arguments you pass to this API call determine the actual configuration of
     * your agent.</p> <p>For more information, see Activating an Agent in the
     * <i>DataSync User Guide.</i> </p>
     */
    inline void SetActivationKey(const Aws::String& value) { m_activationKeyHasBeenSet = true; m_activationKey = value; }

    /**
     * <p>Your agent activation key. You can get the activation key either by sending
     * an HTTP GET request with redirects that enable you to get the agent IP address
     * (port 80). Alternatively, you can get it from the DataSync console.</p> <p>The
     * redirect URL returned in the response provides you the activation key for your
     * agent in the query string parameter <code>activationKey</code>. It might also
     * include other activation-related parameters; however, these are merely defaults.
     * The arguments you pass to this API call determine the actual configuration of
     * your agent.</p> <p>For more information, see Activating an Agent in the
     * <i>DataSync User Guide.</i> </p>
     */
    inline void SetActivationKey(Aws::String&& value) { m_activationKeyHasBeenSet = true; m_activationKey = std::move(value); }

    /**
     * <p>Your agent activation key. You can get the activation key either by sending
     * an HTTP GET request with redirects that enable you to get the agent IP address
     * (port 80). Alternatively, you can get it from the DataSync console.</p> <p>The
     * redirect URL returned in the response provides you the activation key for your
     * agent in the query string parameter <code>activationKey</code>. It might also
     * include other activation-related parameters; however, these are merely defaults.
     * The arguments you pass to this API call determine the actual configuration of
     * your agent.</p> <p>For more information, see Activating an Agent in the
     * <i>DataSync User Guide.</i> </p>
     */
    inline void SetActivationKey(const char* value) { m_activationKeyHasBeenSet = true; m_activationKey.assign(value); }

    /**
     * <p>Your agent activation key. You can get the activation key either by sending
     * an HTTP GET request with redirects that enable you to get the agent IP address
     * (port 80). Alternatively, you can get it from the DataSync console.</p> <p>The
     * redirect URL returned in the response provides you the activation key for your
     * agent in the query string parameter <code>activationKey</code>. It might also
     * include other activation-related parameters; however, these are merely defaults.
     * The arguments you pass to this API call determine the actual configuration of
     * your agent.</p> <p>For more information, see Activating an Agent in the
     * <i>DataSync User Guide.</i> </p>
     */
    inline CreateAgentRequest& WithActivationKey(const Aws::String& value) { SetActivationKey(value); return *this;}

    /**
     * <p>Your agent activation key. You can get the activation key either by sending
     * an HTTP GET request with redirects that enable you to get the agent IP address
     * (port 80). Alternatively, you can get it from the DataSync console.</p> <p>The
     * redirect URL returned in the response provides you the activation key for your
     * agent in the query string parameter <code>activationKey</code>. It might also
     * include other activation-related parameters; however, these are merely defaults.
     * The arguments you pass to this API call determine the actual configuration of
     * your agent.</p> <p>For more information, see Activating an Agent in the
     * <i>DataSync User Guide.</i> </p>
     */
    inline CreateAgentRequest& WithActivationKey(Aws::String&& value) { SetActivationKey(std::move(value)); return *this;}

    /**
     * <p>Your agent activation key. You can get the activation key either by sending
     * an HTTP GET request with redirects that enable you to get the agent IP address
     * (port 80). Alternatively, you can get it from the DataSync console.</p> <p>The
     * redirect URL returned in the response provides you the activation key for your
     * agent in the query string parameter <code>activationKey</code>. It might also
     * include other activation-related parameters; however, these are merely defaults.
     * The arguments you pass to this API call determine the actual configuration of
     * your agent.</p> <p>For more information, see Activating an Agent in the
     * <i>DataSync User Guide.</i> </p>
     */
    inline CreateAgentRequest& WithActivationKey(const char* value) { SetActivationKey(value); return *this;}


    /**
     * <p>The name you configured for your agent. This value is a text reference that
     * is used to identify the agent in the console.</p>
     */
    inline const Aws::String& GetAgentName() const{ return m_agentName; }

    /**
     * <p>The name you configured for your agent. This value is a text reference that
     * is used to identify the agent in the console.</p>
     */
    inline bool AgentNameHasBeenSet() const { return m_agentNameHasBeenSet; }

    /**
     * <p>The name you configured for your agent. This value is a text reference that
     * is used to identify the agent in the console.</p>
     */
    inline void SetAgentName(const Aws::String& value) { m_agentNameHasBeenSet = true; m_agentName = value; }

    /**
     * <p>The name you configured for your agent. This value is a text reference that
     * is used to identify the agent in the console.</p>
     */
    inline void SetAgentName(Aws::String&& value) { m_agentNameHasBeenSet = true; m_agentName = std::move(value); }

    /**
     * <p>The name you configured for your agent. This value is a text reference that
     * is used to identify the agent in the console.</p>
     */
    inline void SetAgentName(const char* value) { m_agentNameHasBeenSet = true; m_agentName.assign(value); }

    /**
     * <p>The name you configured for your agent. This value is a text reference that
     * is used to identify the agent in the console.</p>
     */
    inline CreateAgentRequest& WithAgentName(const Aws::String& value) { SetAgentName(value); return *this;}

    /**
     * <p>The name you configured for your agent. This value is a text reference that
     * is used to identify the agent in the console.</p>
     */
    inline CreateAgentRequest& WithAgentName(Aws::String&& value) { SetAgentName(std::move(value)); return *this;}

    /**
     * <p>The name you configured for your agent. This value is a text reference that
     * is used to identify the agent in the console.</p>
     */
    inline CreateAgentRequest& WithAgentName(const char* value) { SetAgentName(value); return *this;}


    /**
     * <p>The key-value pair that represents the tag that you want to associate with
     * the agent. The value can be an empty string. This value helps you manage,
     * filter, and search for your agents.</p>  <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. </p> 
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pair that represents the tag that you want to associate with
     * the agent. The value can be an empty string. This value helps you manage,
     * filter, and search for your agents.</p>  <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. </p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pair that represents the tag that you want to associate with
     * the agent. The value can be an empty string. This value helps you manage,
     * filter, and search for your agents.</p>  <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. </p> 
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pair that represents the tag that you want to associate with
     * the agent. The value can be an empty string. This value helps you manage,
     * filter, and search for your agents.</p>  <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. </p> 
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pair that represents the tag that you want to associate with
     * the agent. The value can be an empty string. This value helps you manage,
     * filter, and search for your agents.</p>  <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. </p> 
     */
    inline CreateAgentRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pair that represents the tag that you want to associate with
     * the agent. The value can be an empty string. This value helps you manage,
     * filter, and search for your agents.</p>  <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. </p> 
     */
    inline CreateAgentRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pair that represents the tag that you want to associate with
     * the agent. The value can be an empty string. This value helps you manage,
     * filter, and search for your agents.</p>  <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. </p> 
     */
    inline CreateAgentRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key-value pair that represents the tag that you want to associate with
     * the agent. The value can be an empty string. This value helps you manage,
     * filter, and search for your agents.</p>  <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @. </p> 
     */
    inline CreateAgentRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the VPC (virtual private cloud) endpoint that the agent has access
     * to. This is the client-side VPC endpoint, also called a PrivateLink. If you
     * don't have a PrivateLink VPC endpoint, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html#create-endpoint-service">Creating
     * a VPC Endpoint Service Configuration</a> in the Amazon VPC User Guide.</p>
     * <p>VPC endpoint ID looks like this: <code>vpce-01234d5aff67890e1</code>.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The ID of the VPC (virtual private cloud) endpoint that the agent has access
     * to. This is the client-side VPC endpoint, also called a PrivateLink. If you
     * don't have a PrivateLink VPC endpoint, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html#create-endpoint-service">Creating
     * a VPC Endpoint Service Configuration</a> in the Amazon VPC User Guide.</p>
     * <p>VPC endpoint ID looks like this: <code>vpce-01234d5aff67890e1</code>.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the VPC (virtual private cloud) endpoint that the agent has access
     * to. This is the client-side VPC endpoint, also called a PrivateLink. If you
     * don't have a PrivateLink VPC endpoint, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html#create-endpoint-service">Creating
     * a VPC Endpoint Service Configuration</a> in the Amazon VPC User Guide.</p>
     * <p>VPC endpoint ID looks like this: <code>vpce-01234d5aff67890e1</code>.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The ID of the VPC (virtual private cloud) endpoint that the agent has access
     * to. This is the client-side VPC endpoint, also called a PrivateLink. If you
     * don't have a PrivateLink VPC endpoint, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html#create-endpoint-service">Creating
     * a VPC Endpoint Service Configuration</a> in the Amazon VPC User Guide.</p>
     * <p>VPC endpoint ID looks like this: <code>vpce-01234d5aff67890e1</code>.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The ID of the VPC (virtual private cloud) endpoint that the agent has access
     * to. This is the client-side VPC endpoint, also called a PrivateLink. If you
     * don't have a PrivateLink VPC endpoint, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html#create-endpoint-service">Creating
     * a VPC Endpoint Service Configuration</a> in the Amazon VPC User Guide.</p>
     * <p>VPC endpoint ID looks like this: <code>vpce-01234d5aff67890e1</code>.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The ID of the VPC (virtual private cloud) endpoint that the agent has access
     * to. This is the client-side VPC endpoint, also called a PrivateLink. If you
     * don't have a PrivateLink VPC endpoint, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html#create-endpoint-service">Creating
     * a VPC Endpoint Service Configuration</a> in the Amazon VPC User Guide.</p>
     * <p>VPC endpoint ID looks like this: <code>vpce-01234d5aff67890e1</code>.</p>
     */
    inline CreateAgentRequest& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The ID of the VPC (virtual private cloud) endpoint that the agent has access
     * to. This is the client-side VPC endpoint, also called a PrivateLink. If you
     * don't have a PrivateLink VPC endpoint, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html#create-endpoint-service">Creating
     * a VPC Endpoint Service Configuration</a> in the Amazon VPC User Guide.</p>
     * <p>VPC endpoint ID looks like this: <code>vpce-01234d5aff67890e1</code>.</p>
     */
    inline CreateAgentRequest& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC (virtual private cloud) endpoint that the agent has access
     * to. This is the client-side VPC endpoint, also called a PrivateLink. If you
     * don't have a PrivateLink VPC endpoint, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/endpoint-service.html#create-endpoint-service">Creating
     * a VPC Endpoint Service Configuration</a> in the Amazon VPC User Guide.</p>
     * <p>VPC endpoint ID looks like this: <code>vpce-01234d5aff67890e1</code>.</p>
     */
    inline CreateAgentRequest& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets in which DataSync will create
     * elastic network interfaces for each data transfer task. The agent that runs a
     * task must be private. When you start a task that is associated with an agent
     * created in a VPC, or one that has access to an IP address in a VPC, then the
     * task is also private. In this case, DataSync creates four network interfaces for
     * each task in your subnet. For a data transfer to work, the agent must be able to
     * route to all these four network interfaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetArns() const{ return m_subnetArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets in which DataSync will create
     * elastic network interfaces for each data transfer task. The agent that runs a
     * task must be private. When you start a task that is associated with an agent
     * created in a VPC, or one that has access to an IP address in a VPC, then the
     * task is also private. In this case, DataSync creates four network interfaces for
     * each task in your subnet. For a data transfer to work, the agent must be able to
     * route to all these four network interfaces.</p>
     */
    inline bool SubnetArnsHasBeenSet() const { return m_subnetArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets in which DataSync will create
     * elastic network interfaces for each data transfer task. The agent that runs a
     * task must be private. When you start a task that is associated with an agent
     * created in a VPC, or one that has access to an IP address in a VPC, then the
     * task is also private. In this case, DataSync creates four network interfaces for
     * each task in your subnet. For a data transfer to work, the agent must be able to
     * route to all these four network interfaces.</p>
     */
    inline void SetSubnetArns(const Aws::Vector<Aws::String>& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets in which DataSync will create
     * elastic network interfaces for each data transfer task. The agent that runs a
     * task must be private. When you start a task that is associated with an agent
     * created in a VPC, or one that has access to an IP address in a VPC, then the
     * task is also private. In this case, DataSync creates four network interfaces for
     * each task in your subnet. For a data transfer to work, the agent must be able to
     * route to all these four network interfaces.</p>
     */
    inline void SetSubnetArns(Aws::Vector<Aws::String>&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets in which DataSync will create
     * elastic network interfaces for each data transfer task. The agent that runs a
     * task must be private. When you start a task that is associated with an agent
     * created in a VPC, or one that has access to an IP address in a VPC, then the
     * task is also private. In this case, DataSync creates four network interfaces for
     * each task in your subnet. For a data transfer to work, the agent must be able to
     * route to all these four network interfaces.</p>
     */
    inline CreateAgentRequest& WithSubnetArns(const Aws::Vector<Aws::String>& value) { SetSubnetArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets in which DataSync will create
     * elastic network interfaces for each data transfer task. The agent that runs a
     * task must be private. When you start a task that is associated with an agent
     * created in a VPC, or one that has access to an IP address in a VPC, then the
     * task is also private. In this case, DataSync creates four network interfaces for
     * each task in your subnet. For a data transfer to work, the agent must be able to
     * route to all these four network interfaces.</p>
     */
    inline CreateAgentRequest& WithSubnetArns(Aws::Vector<Aws::String>&& value) { SetSubnetArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets in which DataSync will create
     * elastic network interfaces for each data transfer task. The agent that runs a
     * task must be private. When you start a task that is associated with an agent
     * created in a VPC, or one that has access to an IP address in a VPC, then the
     * task is also private. In this case, DataSync creates four network interfaces for
     * each task in your subnet. For a data transfer to work, the agent must be able to
     * route to all these four network interfaces.</p>
     */
    inline CreateAgentRequest& AddSubnetArns(const Aws::String& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets in which DataSync will create
     * elastic network interfaces for each data transfer task. The agent that runs a
     * task must be private. When you start a task that is associated with an agent
     * created in a VPC, or one that has access to an IP address in a VPC, then the
     * task is also private. In this case, DataSync creates four network interfaces for
     * each task in your subnet. For a data transfer to work, the agent must be able to
     * route to all these four network interfaces.</p>
     */
    inline CreateAgentRequest& AddSubnetArns(Aws::String&& value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the subnets in which DataSync will create
     * elastic network interfaces for each data transfer task. The agent that runs a
     * task must be private. When you start a task that is associated with an agent
     * created in a VPC, or one that has access to an IP address in a VPC, then the
     * task is also private. In this case, DataSync creates four network interfaces for
     * each task in your subnet. For a data transfer to work, the agent must be able to
     * route to all these four network interfaces.</p>
     */
    inline CreateAgentRequest& AddSubnetArns(const char* value) { m_subnetArnsHasBeenSet = true; m_subnetArns.push_back(value); return *this; }


    /**
     * <p>The ARNs of the security groups used to protect your data transfer task
     * subnets. See <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Ec2Config.html#DataSync-Type-Ec2Config-SecurityGroupArns">SecurityGroupArns</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupArns() const{ return m_securityGroupArns; }

    /**
     * <p>The ARNs of the security groups used to protect your data transfer task
     * subnets. See <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Ec2Config.html#DataSync-Type-Ec2Config-SecurityGroupArns">SecurityGroupArns</a>.</p>
     */
    inline bool SecurityGroupArnsHasBeenSet() const { return m_securityGroupArnsHasBeenSet; }

    /**
     * <p>The ARNs of the security groups used to protect your data transfer task
     * subnets. See <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Ec2Config.html#DataSync-Type-Ec2Config-SecurityGroupArns">SecurityGroupArns</a>.</p>
     */
    inline void SetSecurityGroupArns(const Aws::Vector<Aws::String>& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = value; }

    /**
     * <p>The ARNs of the security groups used to protect your data transfer task
     * subnets. See <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Ec2Config.html#DataSync-Type-Ec2Config-SecurityGroupArns">SecurityGroupArns</a>.</p>
     */
    inline void SetSecurityGroupArns(Aws::Vector<Aws::String>&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns = std::move(value); }

    /**
     * <p>The ARNs of the security groups used to protect your data transfer task
     * subnets. See <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Ec2Config.html#DataSync-Type-Ec2Config-SecurityGroupArns">SecurityGroupArns</a>.</p>
     */
    inline CreateAgentRequest& WithSecurityGroupArns(const Aws::Vector<Aws::String>& value) { SetSecurityGroupArns(value); return *this;}

    /**
     * <p>The ARNs of the security groups used to protect your data transfer task
     * subnets. See <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Ec2Config.html#DataSync-Type-Ec2Config-SecurityGroupArns">SecurityGroupArns</a>.</p>
     */
    inline CreateAgentRequest& WithSecurityGroupArns(Aws::Vector<Aws::String>&& value) { SetSecurityGroupArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the security groups used to protect your data transfer task
     * subnets. See <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Ec2Config.html#DataSync-Type-Ec2Config-SecurityGroupArns">SecurityGroupArns</a>.</p>
     */
    inline CreateAgentRequest& AddSecurityGroupArns(const Aws::String& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the security groups used to protect your data transfer task
     * subnets. See <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Ec2Config.html#DataSync-Type-Ec2Config-SecurityGroupArns">SecurityGroupArns</a>.</p>
     */
    inline CreateAgentRequest& AddSecurityGroupArns(Aws::String&& value) { m_securityGroupArnsHasBeenSet = true; m_securityGroupArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the security groups used to protect your data transfer task
     * subnets. See <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_Ec2Config.html#DataSync-Type-Ec2Config-SecurityGroupArns">SecurityGroupArns</a>.</p>
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
