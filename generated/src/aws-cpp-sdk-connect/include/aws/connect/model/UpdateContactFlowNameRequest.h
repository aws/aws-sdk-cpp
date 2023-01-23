/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateContactFlowNameRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateContactFlowNameRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContactFlowName"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline UpdateContactFlowNameRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline UpdateContactFlowNameRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline UpdateContactFlowNameRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the flow.</p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = value; }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::move(value); }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetContactFlowId(const char* value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId.assign(value); }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline UpdateContactFlowNameRequest& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}

    /**
     * <p>The identifier of the flow.</p>
     */
    inline UpdateContactFlowNameRequest& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the flow.</p>
     */
    inline UpdateContactFlowNameRequest& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}


    /**
     * <p>The name of the flow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the flow.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the flow.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the flow.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the flow.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the flow.</p>
     */
    inline UpdateContactFlowNameRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the flow.</p>
     */
    inline UpdateContactFlowNameRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the flow.</p>
     */
    inline UpdateContactFlowNameRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the flow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the flow.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the flow.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the flow.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the flow.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the flow.</p>
     */
    inline UpdateContactFlowNameRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the flow.</p>
     */
    inline UpdateContactFlowNameRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the flow.</p>
     */
    inline UpdateContactFlowNameRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
