﻿/**
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
  class CreateWirelessGatewayTaskDefinitionRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API CreateWirelessGatewayTaskDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWirelessGatewayTaskDefinition"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Whether to automatically create tasks using this task definition for all
     * gateways with the specified current version. If <code>false</code>, the task
     * must me created by calling <code>CreateWirelessGatewayTask</code>.</p>
     */
    inline bool GetAutoCreateTasks() const{ return m_autoCreateTasks; }
    inline bool AutoCreateTasksHasBeenSet() const { return m_autoCreateTasksHasBeenSet; }
    inline void SetAutoCreateTasks(bool value) { m_autoCreateTasksHasBeenSet = true; m_autoCreateTasks = value; }
    inline CreateWirelessGatewayTaskDefinitionRequest& WithAutoCreateTasks(bool value) { SetAutoCreateTasks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateWirelessGatewayTaskDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateWirelessGatewayTaskDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateWirelessGatewayTaskDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the gateways to update.</p>
     */
    inline const UpdateWirelessGatewayTaskCreate& GetUpdate() const{ return m_update; }
    inline bool UpdateHasBeenSet() const { return m_updateHasBeenSet; }
    inline void SetUpdate(const UpdateWirelessGatewayTaskCreate& value) { m_updateHasBeenSet = true; m_update = value; }
    inline void SetUpdate(UpdateWirelessGatewayTaskCreate&& value) { m_updateHasBeenSet = true; m_update = std::move(value); }
    inline CreateWirelessGatewayTaskDefinitionRequest& WithUpdate(const UpdateWirelessGatewayTaskCreate& value) { SetUpdate(value); return *this;}
    inline CreateWirelessGatewayTaskDefinitionRequest& WithUpdate(UpdateWirelessGatewayTaskCreate&& value) { SetUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each resource must have a unique client request token. The client token is
     * used to implement idempotency. It ensures that the request completes no more
     * than one time. If you retry a request with the same token and the same
     * parameters, the request will complete successfully. However, if you try to
     * create a new resource using the same token but different parameters, an HTTP 409
     * conflict occurs. If you omit this value, AWS SDKs will automatically generate a
     * unique client request. For more information about idempotency, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency in Amazon EC2 API requests</a>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateWirelessGatewayTaskDefinitionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateWirelessGatewayTaskDefinitionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateWirelessGatewayTaskDefinitionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to attach to the specified resource. Tags are metadata that you can
     * use to manage a resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateWirelessGatewayTaskDefinitionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateWirelessGatewayTaskDefinitionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateWirelessGatewayTaskDefinitionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateWirelessGatewayTaskDefinitionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_autoCreateTasks;
    bool m_autoCreateTasksHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    UpdateWirelessGatewayTaskCreate m_update;
    bool m_updateHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
