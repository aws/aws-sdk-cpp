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
  class UpdateQuickConnectNameRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateQuickConnectNameRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQuickConnectName"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


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
    inline UpdateQuickConnectNameRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateQuickConnectNameRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateQuickConnectNameRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline const Aws::String& GetQuickConnectId() const{ return m_quickConnectId; }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline bool QuickConnectIdHasBeenSet() const { return m_quickConnectIdHasBeenSet; }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline void SetQuickConnectId(const Aws::String& value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId = value; }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline void SetQuickConnectId(Aws::String&& value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId = std::move(value); }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline void SetQuickConnectId(const char* value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId.assign(value); }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline UpdateQuickConnectNameRequest& WithQuickConnectId(const Aws::String& value) { SetQuickConnectId(value); return *this;}

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline UpdateQuickConnectNameRequest& WithQuickConnectId(Aws::String&& value) { SetQuickConnectId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline UpdateQuickConnectNameRequest& WithQuickConnectId(const char* value) { SetQuickConnectId(value); return *this;}


    /**
     * <p>The name of the quick connect.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the quick connect.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the quick connect.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the quick connect.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the quick connect.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the quick connect.</p>
     */
    inline UpdateQuickConnectNameRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the quick connect.</p>
     */
    inline UpdateQuickConnectNameRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the quick connect.</p>
     */
    inline UpdateQuickConnectNameRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the quick connect.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the quick connect.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the quick connect.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the quick connect.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the quick connect.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the quick connect.</p>
     */
    inline UpdateQuickConnectNameRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the quick connect.</p>
     */
    inline UpdateQuickConnectNameRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the quick connect.</p>
     */
    inline UpdateQuickConnectNameRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_quickConnectId;
    bool m_quickConnectIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
