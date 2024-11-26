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
  class DeleteEmailAddressRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DeleteEmailAddressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteEmailAddress"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline DeleteEmailAddressRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DeleteEmailAddressRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DeleteEmailAddressRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the email address.</p>
     */
    inline const Aws::String& GetEmailAddressId() const{ return m_emailAddressId; }
    inline bool EmailAddressIdHasBeenSet() const { return m_emailAddressIdHasBeenSet; }
    inline void SetEmailAddressId(const Aws::String& value) { m_emailAddressIdHasBeenSet = true; m_emailAddressId = value; }
    inline void SetEmailAddressId(Aws::String&& value) { m_emailAddressIdHasBeenSet = true; m_emailAddressId = std::move(value); }
    inline void SetEmailAddressId(const char* value) { m_emailAddressIdHasBeenSet = true; m_emailAddressId.assign(value); }
    inline DeleteEmailAddressRequest& WithEmailAddressId(const Aws::String& value) { SetEmailAddressId(value); return *this;}
    inline DeleteEmailAddressRequest& WithEmailAddressId(Aws::String&& value) { SetEmailAddressId(std::move(value)); return *this;}
    inline DeleteEmailAddressRequest& WithEmailAddressId(const char* value) { SetEmailAddressId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_emailAddressId;
    bool m_emailAddressIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
