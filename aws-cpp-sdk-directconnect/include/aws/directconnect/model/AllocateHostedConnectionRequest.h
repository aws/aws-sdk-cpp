/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class AWS_DIRECTCONNECT_API AllocateHostedConnectionRequest : public DirectConnectRequest
  {
  public:
    AllocateHostedConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AllocateHostedConnection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the interconnect or LAG.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the interconnect or LAG.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The ID of the interconnect or LAG.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the interconnect or LAG.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The ID of the interconnect or LAG.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of the interconnect or LAG.</p>
     */
    inline AllocateHostedConnectionRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the interconnect or LAG.</p>
     */
    inline AllocateHostedConnectionRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the interconnect or LAG.</p>
     */
    inline AllocateHostedConnectionRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The ID of the AWS account ID of the customer for the connection.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The ID of the AWS account ID of the customer for the connection.</p>
     */
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }

    /**
     * <p>The ID of the AWS account ID of the customer for the connection.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The ID of the AWS account ID of the customer for the connection.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }

    /**
     * <p>The ID of the AWS account ID of the customer for the connection.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The ID of the AWS account ID of the customer for the connection.</p>
     */
    inline AllocateHostedConnectionRequest& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The ID of the AWS account ID of the customer for the connection.</p>
     */
    inline AllocateHostedConnectionRequest& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account ID of the customer for the connection.</p>
     */
    inline AllocateHostedConnectionRequest& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    /**
     * <p>The bandwidth of the connection. The possible values are 50Mbps, 100Mbps,
     * 200Mbps, 300Mbps, 400Mbps, 500Mbps, 1Gbps, 2Gbps, 5Gbps, and 10Gbps. Note that
     * only those AWS Direct Connect Partners who have met specific requirements are
     * allowed to create a 1Gbps, 2Gbps, 5Gbps or 10Gbps hosted connection. </p>
     */
    inline const Aws::String& GetBandwidth() const{ return m_bandwidth; }

    /**
     * <p>The bandwidth of the connection. The possible values are 50Mbps, 100Mbps,
     * 200Mbps, 300Mbps, 400Mbps, 500Mbps, 1Gbps, 2Gbps, 5Gbps, and 10Gbps. Note that
     * only those AWS Direct Connect Partners who have met specific requirements are
     * allowed to create a 1Gbps, 2Gbps, 5Gbps or 10Gbps hosted connection. </p>
     */
    inline bool BandwidthHasBeenSet() const { return m_bandwidthHasBeenSet; }

    /**
     * <p>The bandwidth of the connection. The possible values are 50Mbps, 100Mbps,
     * 200Mbps, 300Mbps, 400Mbps, 500Mbps, 1Gbps, 2Gbps, 5Gbps, and 10Gbps. Note that
     * only those AWS Direct Connect Partners who have met specific requirements are
     * allowed to create a 1Gbps, 2Gbps, 5Gbps or 10Gbps hosted connection. </p>
     */
    inline void SetBandwidth(const Aws::String& value) { m_bandwidthHasBeenSet = true; m_bandwidth = value; }

    /**
     * <p>The bandwidth of the connection. The possible values are 50Mbps, 100Mbps,
     * 200Mbps, 300Mbps, 400Mbps, 500Mbps, 1Gbps, 2Gbps, 5Gbps, and 10Gbps. Note that
     * only those AWS Direct Connect Partners who have met specific requirements are
     * allowed to create a 1Gbps, 2Gbps, 5Gbps or 10Gbps hosted connection. </p>
     */
    inline void SetBandwidth(Aws::String&& value) { m_bandwidthHasBeenSet = true; m_bandwidth = std::move(value); }

    /**
     * <p>The bandwidth of the connection. The possible values are 50Mbps, 100Mbps,
     * 200Mbps, 300Mbps, 400Mbps, 500Mbps, 1Gbps, 2Gbps, 5Gbps, and 10Gbps. Note that
     * only those AWS Direct Connect Partners who have met specific requirements are
     * allowed to create a 1Gbps, 2Gbps, 5Gbps or 10Gbps hosted connection. </p>
     */
    inline void SetBandwidth(const char* value) { m_bandwidthHasBeenSet = true; m_bandwidth.assign(value); }

    /**
     * <p>The bandwidth of the connection. The possible values are 50Mbps, 100Mbps,
     * 200Mbps, 300Mbps, 400Mbps, 500Mbps, 1Gbps, 2Gbps, 5Gbps, and 10Gbps. Note that
     * only those AWS Direct Connect Partners who have met specific requirements are
     * allowed to create a 1Gbps, 2Gbps, 5Gbps or 10Gbps hosted connection. </p>
     */
    inline AllocateHostedConnectionRequest& WithBandwidth(const Aws::String& value) { SetBandwidth(value); return *this;}

    /**
     * <p>The bandwidth of the connection. The possible values are 50Mbps, 100Mbps,
     * 200Mbps, 300Mbps, 400Mbps, 500Mbps, 1Gbps, 2Gbps, 5Gbps, and 10Gbps. Note that
     * only those AWS Direct Connect Partners who have met specific requirements are
     * allowed to create a 1Gbps, 2Gbps, 5Gbps or 10Gbps hosted connection. </p>
     */
    inline AllocateHostedConnectionRequest& WithBandwidth(Aws::String&& value) { SetBandwidth(std::move(value)); return *this;}

    /**
     * <p>The bandwidth of the connection. The possible values are 50Mbps, 100Mbps,
     * 200Mbps, 300Mbps, 400Mbps, 500Mbps, 1Gbps, 2Gbps, 5Gbps, and 10Gbps. Note that
     * only those AWS Direct Connect Partners who have met specific requirements are
     * allowed to create a 1Gbps, 2Gbps, 5Gbps or 10Gbps hosted connection. </p>
     */
    inline AllocateHostedConnectionRequest& WithBandwidth(const char* value) { SetBandwidth(value); return *this;}


    /**
     * <p>The name of the hosted connection.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>The name of the hosted connection.</p>
     */
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }

    /**
     * <p>The name of the hosted connection.</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>The name of the hosted connection.</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }

    /**
     * <p>The name of the hosted connection.</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>The name of the hosted connection.</p>
     */
    inline AllocateHostedConnectionRequest& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The name of the hosted connection.</p>
     */
    inline AllocateHostedConnectionRequest& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the hosted connection.</p>
     */
    inline AllocateHostedConnectionRequest& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}


    /**
     * <p>The dedicated VLAN provisioned to the hosted connection.</p>
     */
    inline int GetVlan() const{ return m_vlan; }

    /**
     * <p>The dedicated VLAN provisioned to the hosted connection.</p>
     */
    inline bool VlanHasBeenSet() const { return m_vlanHasBeenSet; }

    /**
     * <p>The dedicated VLAN provisioned to the hosted connection.</p>
     */
    inline void SetVlan(int value) { m_vlanHasBeenSet = true; m_vlan = value; }

    /**
     * <p>The dedicated VLAN provisioned to the hosted connection.</p>
     */
    inline AllocateHostedConnectionRequest& WithVlan(int value) { SetVlan(value); return *this;}


    /**
     * <p>The tags to assign to the hosted connection.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the hosted connection.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the hosted connection.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the hosted connection.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the hosted connection.</p>
     */
    inline AllocateHostedConnectionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the hosted connection.</p>
     */
    inline AllocateHostedConnectionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the hosted connection.</p>
     */
    inline AllocateHostedConnectionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the hosted connection.</p>
     */
    inline AllocateHostedConnectionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet;

    Aws::String m_bandwidth;
    bool m_bandwidthHasBeenSet;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet;

    int m_vlan;
    bool m_vlanHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
