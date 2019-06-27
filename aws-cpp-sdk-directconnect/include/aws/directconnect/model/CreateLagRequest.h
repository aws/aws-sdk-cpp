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
  class AWS_DIRECTCONNECT_API CreateLagRequest : public DirectConnectRequest
  {
  public:
    CreateLagRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLag"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The number of physical connections initially provisioned and bundled by the
     * LAG.</p>
     */
    inline int GetNumberOfConnections() const{ return m_numberOfConnections; }

    /**
     * <p>The number of physical connections initially provisioned and bundled by the
     * LAG.</p>
     */
    inline bool NumberOfConnectionsHasBeenSet() const { return m_numberOfConnectionsHasBeenSet; }

    /**
     * <p>The number of physical connections initially provisioned and bundled by the
     * LAG.</p>
     */
    inline void SetNumberOfConnections(int value) { m_numberOfConnectionsHasBeenSet = true; m_numberOfConnections = value; }

    /**
     * <p>The number of physical connections initially provisioned and bundled by the
     * LAG.</p>
     */
    inline CreateLagRequest& WithNumberOfConnections(int value) { SetNumberOfConnections(value); return *this;}


    /**
     * <p>The location for the LAG.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The location for the LAG.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The location for the LAG.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The location for the LAG.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The location for the LAG.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The location for the LAG.</p>
     */
    inline CreateLagRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The location for the LAG.</p>
     */
    inline CreateLagRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The location for the LAG.</p>
     */
    inline CreateLagRequest& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The bandwidth of the individual physical connections bundled by the LAG. The
     * possible values are 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, 500Mbps, 1Gbps,
     * 2Gbps, 5Gbps, and 10Gbps. </p>
     */
    inline const Aws::String& GetConnectionsBandwidth() const{ return m_connectionsBandwidth; }

    /**
     * <p>The bandwidth of the individual physical connections bundled by the LAG. The
     * possible values are 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, 500Mbps, 1Gbps,
     * 2Gbps, 5Gbps, and 10Gbps. </p>
     */
    inline bool ConnectionsBandwidthHasBeenSet() const { return m_connectionsBandwidthHasBeenSet; }

    /**
     * <p>The bandwidth of the individual physical connections bundled by the LAG. The
     * possible values are 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, 500Mbps, 1Gbps,
     * 2Gbps, 5Gbps, and 10Gbps. </p>
     */
    inline void SetConnectionsBandwidth(const Aws::String& value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth = value; }

    /**
     * <p>The bandwidth of the individual physical connections bundled by the LAG. The
     * possible values are 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, 500Mbps, 1Gbps,
     * 2Gbps, 5Gbps, and 10Gbps. </p>
     */
    inline void SetConnectionsBandwidth(Aws::String&& value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth = std::move(value); }

    /**
     * <p>The bandwidth of the individual physical connections bundled by the LAG. The
     * possible values are 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, 500Mbps, 1Gbps,
     * 2Gbps, 5Gbps, and 10Gbps. </p>
     */
    inline void SetConnectionsBandwidth(const char* value) { m_connectionsBandwidthHasBeenSet = true; m_connectionsBandwidth.assign(value); }

    /**
     * <p>The bandwidth of the individual physical connections bundled by the LAG. The
     * possible values are 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, 500Mbps, 1Gbps,
     * 2Gbps, 5Gbps, and 10Gbps. </p>
     */
    inline CreateLagRequest& WithConnectionsBandwidth(const Aws::String& value) { SetConnectionsBandwidth(value); return *this;}

    /**
     * <p>The bandwidth of the individual physical connections bundled by the LAG. The
     * possible values are 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, 500Mbps, 1Gbps,
     * 2Gbps, 5Gbps, and 10Gbps. </p>
     */
    inline CreateLagRequest& WithConnectionsBandwidth(Aws::String&& value) { SetConnectionsBandwidth(std::move(value)); return *this;}

    /**
     * <p>The bandwidth of the individual physical connections bundled by the LAG. The
     * possible values are 50Mbps, 100Mbps, 200Mbps, 300Mbps, 400Mbps, 500Mbps, 1Gbps,
     * 2Gbps, 5Gbps, and 10Gbps. </p>
     */
    inline CreateLagRequest& WithConnectionsBandwidth(const char* value) { SetConnectionsBandwidth(value); return *this;}


    /**
     * <p>The name of the LAG.</p>
     */
    inline const Aws::String& GetLagName() const{ return m_lagName; }

    /**
     * <p>The name of the LAG.</p>
     */
    inline bool LagNameHasBeenSet() const { return m_lagNameHasBeenSet; }

    /**
     * <p>The name of the LAG.</p>
     */
    inline void SetLagName(const Aws::String& value) { m_lagNameHasBeenSet = true; m_lagName = value; }

    /**
     * <p>The name of the LAG.</p>
     */
    inline void SetLagName(Aws::String&& value) { m_lagNameHasBeenSet = true; m_lagName = std::move(value); }

    /**
     * <p>The name of the LAG.</p>
     */
    inline void SetLagName(const char* value) { m_lagNameHasBeenSet = true; m_lagName.assign(value); }

    /**
     * <p>The name of the LAG.</p>
     */
    inline CreateLagRequest& WithLagName(const Aws::String& value) { SetLagName(value); return *this;}

    /**
     * <p>The name of the LAG.</p>
     */
    inline CreateLagRequest& WithLagName(Aws::String&& value) { SetLagName(std::move(value)); return *this;}

    /**
     * <p>The name of the LAG.</p>
     */
    inline CreateLagRequest& WithLagName(const char* value) { SetLagName(value); return *this;}


    /**
     * <p>The ID of an existing connection to migrate to the LAG.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of an existing connection to migrate to the LAG.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The ID of an existing connection to migrate to the LAG.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of an existing connection to migrate to the LAG.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The ID of an existing connection to migrate to the LAG.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of an existing connection to migrate to the LAG.</p>
     */
    inline CreateLagRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of an existing connection to migrate to the LAG.</p>
     */
    inline CreateLagRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of an existing connection to migrate to the LAG.</p>
     */
    inline CreateLagRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The tags to assign to the link aggregation group (LAG).</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the link aggregation group (LAG).</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the link aggregation group (LAG).</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the link aggregation group (LAG).</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the link aggregation group (LAG).</p>
     */
    inline CreateLagRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the link aggregation group (LAG).</p>
     */
    inline CreateLagRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the link aggregation group (LAG).</p>
     */
    inline CreateLagRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the link aggregation group (LAG).</p>
     */
    inline CreateLagRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags to assign to the child connections of the LAG. Only newly created
     * child connections as the result of creating a LAG connection are assigned the
     * provided tags. The tags are not assigned to an existing connection that is
     * provided via the “connectionId” parameter that will be migrated to the LAG.</p>
     */
    inline const Aws::Vector<Tag>& GetChildConnectionTags() const{ return m_childConnectionTags; }

    /**
     * <p>The tags to assign to the child connections of the LAG. Only newly created
     * child connections as the result of creating a LAG connection are assigned the
     * provided tags. The tags are not assigned to an existing connection that is
     * provided via the “connectionId” parameter that will be migrated to the LAG.</p>
     */
    inline bool ChildConnectionTagsHasBeenSet() const { return m_childConnectionTagsHasBeenSet; }

    /**
     * <p>The tags to assign to the child connections of the LAG. Only newly created
     * child connections as the result of creating a LAG connection are assigned the
     * provided tags. The tags are not assigned to an existing connection that is
     * provided via the “connectionId” parameter that will be migrated to the LAG.</p>
     */
    inline void SetChildConnectionTags(const Aws::Vector<Tag>& value) { m_childConnectionTagsHasBeenSet = true; m_childConnectionTags = value; }

    /**
     * <p>The tags to assign to the child connections of the LAG. Only newly created
     * child connections as the result of creating a LAG connection are assigned the
     * provided tags. The tags are not assigned to an existing connection that is
     * provided via the “connectionId” parameter that will be migrated to the LAG.</p>
     */
    inline void SetChildConnectionTags(Aws::Vector<Tag>&& value) { m_childConnectionTagsHasBeenSet = true; m_childConnectionTags = std::move(value); }

    /**
     * <p>The tags to assign to the child connections of the LAG. Only newly created
     * child connections as the result of creating a LAG connection are assigned the
     * provided tags. The tags are not assigned to an existing connection that is
     * provided via the “connectionId” parameter that will be migrated to the LAG.</p>
     */
    inline CreateLagRequest& WithChildConnectionTags(const Aws::Vector<Tag>& value) { SetChildConnectionTags(value); return *this;}

    /**
     * <p>The tags to assign to the child connections of the LAG. Only newly created
     * child connections as the result of creating a LAG connection are assigned the
     * provided tags. The tags are not assigned to an existing connection that is
     * provided via the “connectionId” parameter that will be migrated to the LAG.</p>
     */
    inline CreateLagRequest& WithChildConnectionTags(Aws::Vector<Tag>&& value) { SetChildConnectionTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the child connections of the LAG. Only newly created
     * child connections as the result of creating a LAG connection are assigned the
     * provided tags. The tags are not assigned to an existing connection that is
     * provided via the “connectionId” parameter that will be migrated to the LAG.</p>
     */
    inline CreateLagRequest& AddChildConnectionTags(const Tag& value) { m_childConnectionTagsHasBeenSet = true; m_childConnectionTags.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the child connections of the LAG. Only newly created
     * child connections as the result of creating a LAG connection are assigned the
     * provided tags. The tags are not assigned to an existing connection that is
     * provided via the “connectionId” parameter that will be migrated to the LAG.</p>
     */
    inline CreateLagRequest& AddChildConnectionTags(Tag&& value) { m_childConnectionTagsHasBeenSet = true; m_childConnectionTags.push_back(std::move(value)); return *this; }

  private:

    int m_numberOfConnections;
    bool m_numberOfConnectionsHasBeenSet;

    Aws::String m_location;
    bool m_locationHasBeenSet;

    Aws::String m_connectionsBandwidth;
    bool m_connectionsBandwidthHasBeenSet;

    Aws::String m_lagName;
    bool m_lagNameHasBeenSet;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Vector<Tag> m_childConnectionTags;
    bool m_childConnectionTagsHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
