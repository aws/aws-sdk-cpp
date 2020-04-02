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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class AWS_GAMELIFT_API RegisterGameServerRequest : public GameLiftRequest
  {
  public:
    RegisterGameServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterGameServer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An identifier for the game server group where the game server is running. You
     * can use either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }

    /**
     * <p>An identifier for the game server group where the game server is running. You
     * can use either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }

    /**
     * <p>An identifier for the game server group where the game server is running. You
     * can use either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }

    /**
     * <p>An identifier for the game server group where the game server is running. You
     * can use either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }

    /**
     * <p>An identifier for the game server group where the game server is running. You
     * can use either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }

    /**
     * <p>An identifier for the game server group where the game server is running. You
     * can use either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline RegisterGameServerRequest& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}

    /**
     * <p>An identifier for the game server group where the game server is running. You
     * can use either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline RegisterGameServerRequest& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}

    /**
     * <p>An identifier for the game server group where the game server is running. You
     * can use either the <a>GameServerGroup</a> name or ARN value.</p>
     */
    inline RegisterGameServerRequest& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}


    /**
     * <p>A custom string that uniquely identifies the new game server. Game server IDs
     * are developer-defined and must be unique across all game server groups in your
     * AWS account.</p>
     */
    inline const Aws::String& GetGameServerId() const{ return m_gameServerId; }

    /**
     * <p>A custom string that uniquely identifies the new game server. Game server IDs
     * are developer-defined and must be unique across all game server groups in your
     * AWS account.</p>
     */
    inline bool GameServerIdHasBeenSet() const { return m_gameServerIdHasBeenSet; }

    /**
     * <p>A custom string that uniquely identifies the new game server. Game server IDs
     * are developer-defined and must be unique across all game server groups in your
     * AWS account.</p>
     */
    inline void SetGameServerId(const Aws::String& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = value; }

    /**
     * <p>A custom string that uniquely identifies the new game server. Game server IDs
     * are developer-defined and must be unique across all game server groups in your
     * AWS account.</p>
     */
    inline void SetGameServerId(Aws::String&& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = std::move(value); }

    /**
     * <p>A custom string that uniquely identifies the new game server. Game server IDs
     * are developer-defined and must be unique across all game server groups in your
     * AWS account.</p>
     */
    inline void SetGameServerId(const char* value) { m_gameServerIdHasBeenSet = true; m_gameServerId.assign(value); }

    /**
     * <p>A custom string that uniquely identifies the new game server. Game server IDs
     * are developer-defined and must be unique across all game server groups in your
     * AWS account.</p>
     */
    inline RegisterGameServerRequest& WithGameServerId(const Aws::String& value) { SetGameServerId(value); return *this;}

    /**
     * <p>A custom string that uniquely identifies the new game server. Game server IDs
     * are developer-defined and must be unique across all game server groups in your
     * AWS account.</p>
     */
    inline RegisterGameServerRequest& WithGameServerId(Aws::String&& value) { SetGameServerId(std::move(value)); return *this;}

    /**
     * <p>A custom string that uniquely identifies the new game server. Game server IDs
     * are developer-defined and must be unique across all game server groups in your
     * AWS account.</p>
     */
    inline RegisterGameServerRequest& WithGameServerId(const char* value) { SetGameServerId(value); return *this;}


    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata.</p>
     */
    inline RegisterGameServerRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata.</p>
     */
    inline RegisterGameServerRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the instance where the game server is running. This
     * ID is available in the instance metadata.</p>
     */
    inline RegisterGameServerRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>Information needed to make inbound client connections to the game server.
     * This might include IP address and port, DNS name, etc.</p>
     */
    inline const Aws::String& GetConnectionInfo() const{ return m_connectionInfo; }

    /**
     * <p>Information needed to make inbound client connections to the game server.
     * This might include IP address and port, DNS name, etc.</p>
     */
    inline bool ConnectionInfoHasBeenSet() const { return m_connectionInfoHasBeenSet; }

    /**
     * <p>Information needed to make inbound client connections to the game server.
     * This might include IP address and port, DNS name, etc.</p>
     */
    inline void SetConnectionInfo(const Aws::String& value) { m_connectionInfoHasBeenSet = true; m_connectionInfo = value; }

    /**
     * <p>Information needed to make inbound client connections to the game server.
     * This might include IP address and port, DNS name, etc.</p>
     */
    inline void SetConnectionInfo(Aws::String&& value) { m_connectionInfoHasBeenSet = true; m_connectionInfo = std::move(value); }

    /**
     * <p>Information needed to make inbound client connections to the game server.
     * This might include IP address and port, DNS name, etc.</p>
     */
    inline void SetConnectionInfo(const char* value) { m_connectionInfoHasBeenSet = true; m_connectionInfo.assign(value); }

    /**
     * <p>Information needed to make inbound client connections to the game server.
     * This might include IP address and port, DNS name, etc.</p>
     */
    inline RegisterGameServerRequest& WithConnectionInfo(const Aws::String& value) { SetConnectionInfo(value); return *this;}

    /**
     * <p>Information needed to make inbound client connections to the game server.
     * This might include IP address and port, DNS name, etc.</p>
     */
    inline RegisterGameServerRequest& WithConnectionInfo(Aws::String&& value) { SetConnectionInfo(std::move(value)); return *this;}

    /**
     * <p>Information needed to make inbound client connections to the game server.
     * This might include IP address and port, DNS name, etc.</p>
     */
    inline RegisterGameServerRequest& WithConnectionInfo(const char* value) { SetConnectionInfo(value); return *this;}


    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * a game servers using <a>ListGameServers</a> or <a>ClaimGameServer</a>. </p>
     */
    inline const Aws::String& GetGameServerData() const{ return m_gameServerData; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * a game servers using <a>ListGameServers</a> or <a>ClaimGameServer</a>. </p>
     */
    inline bool GameServerDataHasBeenSet() const { return m_gameServerDataHasBeenSet; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * a game servers using <a>ListGameServers</a> or <a>ClaimGameServer</a>. </p>
     */
    inline void SetGameServerData(const Aws::String& value) { m_gameServerDataHasBeenSet = true; m_gameServerData = value; }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * a game servers using <a>ListGameServers</a> or <a>ClaimGameServer</a>. </p>
     */
    inline void SetGameServerData(Aws::String&& value) { m_gameServerDataHasBeenSet = true; m_gameServerData = std::move(value); }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * a game servers using <a>ListGameServers</a> or <a>ClaimGameServer</a>. </p>
     */
    inline void SetGameServerData(const char* value) { m_gameServerDataHasBeenSet = true; m_gameServerData.assign(value); }

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * a game servers using <a>ListGameServers</a> or <a>ClaimGameServer</a>. </p>
     */
    inline RegisterGameServerRequest& WithGameServerData(const Aws::String& value) { SetGameServerData(value); return *this;}

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * a game servers using <a>ListGameServers</a> or <a>ClaimGameServer</a>. </p>
     */
    inline RegisterGameServerRequest& WithGameServerData(Aws::String&& value) { SetGameServerData(std::move(value)); return *this;}

    /**
     * <p>A set of custom game server properties, formatted as a single string value.
     * This data is passed to a game client or service when it requests information on
     * a game servers using <a>ListGameServers</a> or <a>ClaimGameServer</a>. </p>
     */
    inline RegisterGameServerRequest& WithGameServerData(const char* value) { SetGameServerData(value); return *this;}


    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * using <a>ListGameServers</a>. Custom sort keys are developer-defined based on
     * how you want to organize the retrieved game server information.</p>
     */
    inline const Aws::String& GetCustomSortKey() const{ return m_customSortKey; }

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * using <a>ListGameServers</a>. Custom sort keys are developer-defined based on
     * how you want to organize the retrieved game server information.</p>
     */
    inline bool CustomSortKeyHasBeenSet() const { return m_customSortKeyHasBeenSet; }

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * using <a>ListGameServers</a>. Custom sort keys are developer-defined based on
     * how you want to organize the retrieved game server information.</p>
     */
    inline void SetCustomSortKey(const Aws::String& value) { m_customSortKeyHasBeenSet = true; m_customSortKey = value; }

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * using <a>ListGameServers</a>. Custom sort keys are developer-defined based on
     * how you want to organize the retrieved game server information.</p>
     */
    inline void SetCustomSortKey(Aws::String&& value) { m_customSortKeyHasBeenSet = true; m_customSortKey = std::move(value); }

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * using <a>ListGameServers</a>. Custom sort keys are developer-defined based on
     * how you want to organize the retrieved game server information.</p>
     */
    inline void SetCustomSortKey(const char* value) { m_customSortKeyHasBeenSet = true; m_customSortKey.assign(value); }

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * using <a>ListGameServers</a>. Custom sort keys are developer-defined based on
     * how you want to organize the retrieved game server information.</p>
     */
    inline RegisterGameServerRequest& WithCustomSortKey(const Aws::String& value) { SetCustomSortKey(value); return *this;}

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * using <a>ListGameServers</a>. Custom sort keys are developer-defined based on
     * how you want to organize the retrieved game server information.</p>
     */
    inline RegisterGameServerRequest& WithCustomSortKey(Aws::String&& value) { SetCustomSortKey(std::move(value)); return *this;}

    /**
     * <p>A game server tag that can be used to request sorted lists of game servers
     * using <a>ListGameServers</a>. Custom sort keys are developer-defined based on
     * how you want to organize the retrieved game server information.</p>
     */
    inline RegisterGameServerRequest& WithCustomSortKey(const char* value) { SetCustomSortKey(value); return *this;}


    /**
     * <p>A list of labels to assign to the new game server resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management, and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of labels to assign to the new game server resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management, and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of labels to assign to the new game server resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management, and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of labels to assign to the new game server resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management, and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of labels to assign to the new game server resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management, and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline RegisterGameServerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of labels to assign to the new game server resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management, and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline RegisterGameServerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of labels to assign to the new game server resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management, and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline RegisterGameServerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of labels to assign to the new game server resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management, and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline RegisterGameServerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet;

    Aws::String m_gameServerId;
    bool m_gameServerIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_connectionInfo;
    bool m_connectionInfoHasBeenSet;

    Aws::String m_gameServerData;
    bool m_gameServerDataHasBeenSet;

    Aws::String m_customSortKey;
    bool m_customSortKeyHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
