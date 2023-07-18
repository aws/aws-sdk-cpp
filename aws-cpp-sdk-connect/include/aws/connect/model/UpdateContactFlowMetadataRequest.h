﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactFlowState.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API UpdateContactFlowMetadataRequest : public ConnectRequest
  {
  public:
    UpdateContactFlowMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContactFlowMetadata"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateContactFlowMetadataRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateContactFlowMetadataRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateContactFlowMetadataRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the contact flow.</p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }

    /**
     * <p>The identifier of the contact flow.</p>
     */
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }

    /**
     * <p>The identifier of the contact flow.</p>
     */
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = value; }

    /**
     * <p>The identifier of the contact flow.</p>
     */
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::move(value); }

    /**
     * <p>The identifier of the contact flow.</p>
     */
    inline void SetContactFlowId(const char* value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId.assign(value); }

    /**
     * <p>The identifier of the contact flow.</p>
     */
    inline UpdateContactFlowMetadataRequest& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}

    /**
     * <p>The identifier of the contact flow.</p>
     */
    inline UpdateContactFlowMetadataRequest& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the contact flow.</p>
     */
    inline UpdateContactFlowMetadataRequest& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}


    /**
     * <p>TThe name of the contact flow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>TThe name of the contact flow.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>TThe name of the contact flow.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>TThe name of the contact flow.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>TThe name of the contact flow.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>TThe name of the contact flow.</p>
     */
    inline UpdateContactFlowMetadataRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>TThe name of the contact flow.</p>
     */
    inline UpdateContactFlowMetadataRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>TThe name of the contact flow.</p>
     */
    inline UpdateContactFlowMetadataRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the contact flow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the contact flow.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the contact flow.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the contact flow.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the contact flow.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the contact flow.</p>
     */
    inline UpdateContactFlowMetadataRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the contact flow.</p>
     */
    inline UpdateContactFlowMetadataRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the contact flow.</p>
     */
    inline UpdateContactFlowMetadataRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The state of contact flow.</p>
     */
    inline const ContactFlowState& GetContactFlowState() const{ return m_contactFlowState; }

    /**
     * <p>The state of contact flow.</p>
     */
    inline bool ContactFlowStateHasBeenSet() const { return m_contactFlowStateHasBeenSet; }

    /**
     * <p>The state of contact flow.</p>
     */
    inline void SetContactFlowState(const ContactFlowState& value) { m_contactFlowStateHasBeenSet = true; m_contactFlowState = value; }

    /**
     * <p>The state of contact flow.</p>
     */
    inline void SetContactFlowState(ContactFlowState&& value) { m_contactFlowStateHasBeenSet = true; m_contactFlowState = std::move(value); }

    /**
     * <p>The state of contact flow.</p>
     */
    inline UpdateContactFlowMetadataRequest& WithContactFlowState(const ContactFlowState& value) { SetContactFlowState(value); return *this;}

    /**
     * <p>The state of contact flow.</p>
     */
    inline UpdateContactFlowMetadataRequest& WithContactFlowState(ContactFlowState&& value) { SetContactFlowState(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ContactFlowState m_contactFlowState;
    bool m_contactFlowStateHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
