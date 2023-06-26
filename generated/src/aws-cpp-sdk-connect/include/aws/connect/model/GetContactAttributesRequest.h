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
  class GetContactAttributesRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API GetContactAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetContactAttributes"; }

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
    inline GetContactAttributesRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline GetContactAttributesRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline GetContactAttributesRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the initial contact.</p>
     */
    inline const Aws::String& GetInitialContactId() const{ return m_initialContactId; }

    /**
     * <p>The identifier of the initial contact.</p>
     */
    inline bool InitialContactIdHasBeenSet() const { return m_initialContactIdHasBeenSet; }

    /**
     * <p>The identifier of the initial contact.</p>
     */
    inline void SetInitialContactId(const Aws::String& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = value; }

    /**
     * <p>The identifier of the initial contact.</p>
     */
    inline void SetInitialContactId(Aws::String&& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = std::move(value); }

    /**
     * <p>The identifier of the initial contact.</p>
     */
    inline void SetInitialContactId(const char* value) { m_initialContactIdHasBeenSet = true; m_initialContactId.assign(value); }

    /**
     * <p>The identifier of the initial contact.</p>
     */
    inline GetContactAttributesRequest& WithInitialContactId(const Aws::String& value) { SetInitialContactId(value); return *this;}

    /**
     * <p>The identifier of the initial contact.</p>
     */
    inline GetContactAttributesRequest& WithInitialContactId(Aws::String&& value) { SetInitialContactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the initial contact.</p>
     */
    inline GetContactAttributesRequest& WithInitialContactId(const char* value) { SetInitialContactId(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_initialContactId;
    bool m_initialContactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
