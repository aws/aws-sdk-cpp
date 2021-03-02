/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/UpdateWirelessGatewayTaskCreate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class AWS_IOTWIRELESS_API CreateWirelessGatewayTaskDefinitionRequest : public IoTWirelessRequest
  {
  public:
    CreateWirelessGatewayTaskDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWirelessGatewayTaskDefinition"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Whether to automatically create tasks using this task definition for all
     * gateways with the specified current version. If <code>false</code>, the task
     * must me created by calling <code>CreateWirelessGatewayTask</code>.</p>
     */
    inline bool GetAutoCreateTasks() const{ return m_autoCreateTasks; }

    /**
     * <p>Whether to automatically create tasks using this task definition for all
     * gateways with the specified current version. If <code>false</code>, the task
     * must me created by calling <code>CreateWirelessGatewayTask</code>.</p>
     */
    inline bool AutoCreateTasksHasBeenSet() const { return m_autoCreateTasksHasBeenSet; }

    /**
     * <p>Whether to automatically create tasks using this task definition for all
     * gateways with the specified current version. If <code>false</code>, the task
     * must me created by calling <code>CreateWirelessGatewayTask</code>.</p>
     */
    inline void SetAutoCreateTasks(bool value) { m_autoCreateTasksHasBeenSet = true; m_autoCreateTasks = value; }

    /**
     * <p>Whether to automatically create tasks using this task definition for all
     * gateways with the specified current version. If <code>false</code>, the task
     * must me created by calling <code>CreateWirelessGatewayTask</code>.</p>
     */
    inline CreateWirelessGatewayTaskDefinitionRequest& WithAutoCreateTasks(bool value) { SetAutoCreateTasks(value); return *this;}


    /**
     * <p>The name of the new resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the new resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the new resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the new resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the new resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the new resource.</p>
     */
    inline CreateWirelessGatewayTaskDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the new resource.</p>
     */
    inline CreateWirelessGatewayTaskDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the new resource.</p>
     */
    inline CreateWirelessGatewayTaskDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Information about the gateways to update.</p>
     */
    inline const UpdateWirelessGatewayTaskCreate& GetUpdate() const{ return m_update; }

    /**
     * <p>Information about the gateways to update.</p>
     */
    inline bool UpdateHasBeenSet() const { return m_updateHasBeenSet; }

    /**
     * <p>Information about the gateways to update.</p>
     */
    inline void SetUpdate(const UpdateWirelessGatewayTaskCreate& value) { m_updateHasBeenSet = true; m_update = value; }

    /**
     * <p>Information about the gateways to update.</p>
     */
    inline void SetUpdate(UpdateWirelessGatewayTaskCreate&& value) { m_updateHasBeenSet = true; m_update = std::move(value); }

    /**
     * <p>Information about the gateways to update.</p>
     */
    inline CreateWirelessGatewayTaskDefinitionRequest& WithUpdate(const UpdateWirelessGatewayTaskCreate& value) { SetUpdate(value); return *this;}

    /**
     * <p>Information about the gateways to update.</p>
     */
    inline CreateWirelessGatewayTaskDefinitionRequest& WithUpdate(UpdateWirelessGatewayTaskCreate&& value) { SetUpdate(std::move(value)); return *this;}


    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline CreateWirelessGatewayTaskDefinitionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline CreateWirelessGatewayTaskDefinitionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Each resource must have a unique client request token. If you try to create a
     * new resource with the same token as a resource that already exists, an exception
     * occurs. If you omit this value, AWS SDKs will automatically generate a unique
     * client request. </p>
     */
    inline CreateWirelessGatewayTaskDefinitionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The tags attached to the specified resource. Tags are metadata that can be
     * used to manage a resource</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags attached to the specified resource. Tags are metadata that can be
     * used to manage a resource</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags attached to the specified resource. Tags are metadata that can be
     * used to manage a resource</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags attached to the specified resource. Tags are metadata that can be
     * used to manage a resource</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags attached to the specified resource. Tags are metadata that can be
     * used to manage a resource</p>
     */
    inline CreateWirelessGatewayTaskDefinitionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags attached to the specified resource. Tags are metadata that can be
     * used to manage a resource</p>
     */
    inline CreateWirelessGatewayTaskDefinitionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags attached to the specified resource. Tags are metadata that can be
     * used to manage a resource</p>
     */
    inline CreateWirelessGatewayTaskDefinitionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags attached to the specified resource. Tags are metadata that can be
     * used to manage a resource</p>
     */
    inline CreateWirelessGatewayTaskDefinitionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    bool m_autoCreateTasks;
    bool m_autoCreateTasksHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    UpdateWirelessGatewayTaskCreate m_update;
    bool m_updateHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
