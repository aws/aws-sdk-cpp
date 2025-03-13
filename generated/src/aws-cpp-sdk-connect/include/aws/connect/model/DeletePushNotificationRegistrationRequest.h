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
namespace Http
{
    class URI;
} //namespace Http
namespace Connect
{
namespace Model
{

  /**
   */
  class DeletePushNotificationRegistrationRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DeletePushNotificationRegistrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePushNotificationRegistration"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;

    AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DeletePushNotificationRegistrationRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
    template<typename RegistrationIdT = Aws::String>
    void SetRegistrationId(RegistrationIdT&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::forward<RegistrationIdT>(value); }
    template<typename RegistrationIdT = Aws::String>
    DeletePushNotificationRegistrationRequest& WithRegistrationId(RegistrationIdT&& value) { SetRegistrationId(std::forward<RegistrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the contact within the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetContactId() const { return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    DeletePushNotificationRegistrationRequest& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
