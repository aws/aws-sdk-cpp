/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/MonitorCapability.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class MonitorContactRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API MonitorContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MonitorContact"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline MonitorContactRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline MonitorContactRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline MonitorContactRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the contact.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }
    inline MonitorContactRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}
    inline MonitorContactRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}
    inline MonitorContactRequest& WithContactId(const char* value) { SetContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user account.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline MonitorContactRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline MonitorContactRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline MonitorContactRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify which monitoring actions the user is allowed to take. For example,
     * whether the user is allowed to escalate from silent monitoring to barge.
     * AllowedMonitorCapabilities is required if barge is enabled.</p>
     */
    inline const Aws::Vector<MonitorCapability>& GetAllowedMonitorCapabilities() const{ return m_allowedMonitorCapabilities; }
    inline bool AllowedMonitorCapabilitiesHasBeenSet() const { return m_allowedMonitorCapabilitiesHasBeenSet; }
    inline void SetAllowedMonitorCapabilities(const Aws::Vector<MonitorCapability>& value) { m_allowedMonitorCapabilitiesHasBeenSet = true; m_allowedMonitorCapabilities = value; }
    inline void SetAllowedMonitorCapabilities(Aws::Vector<MonitorCapability>&& value) { m_allowedMonitorCapabilitiesHasBeenSet = true; m_allowedMonitorCapabilities = std::move(value); }
    inline MonitorContactRequest& WithAllowedMonitorCapabilities(const Aws::Vector<MonitorCapability>& value) { SetAllowedMonitorCapabilities(value); return *this;}
    inline MonitorContactRequest& WithAllowedMonitorCapabilities(Aws::Vector<MonitorCapability>&& value) { SetAllowedMonitorCapabilities(std::move(value)); return *this;}
    inline MonitorContactRequest& AddAllowedMonitorCapabilities(const MonitorCapability& value) { m_allowedMonitorCapabilitiesHasBeenSet = true; m_allowedMonitorCapabilities.push_back(value); return *this; }
    inline MonitorContactRequest& AddAllowedMonitorCapabilities(MonitorCapability&& value) { m_allowedMonitorCapabilitiesHasBeenSet = true; m_allowedMonitorCapabilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline MonitorContactRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline MonitorContactRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline MonitorContactRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Vector<MonitorCapability> m_allowedMonitorCapabilities;
    bool m_allowedMonitorCapabilitiesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
