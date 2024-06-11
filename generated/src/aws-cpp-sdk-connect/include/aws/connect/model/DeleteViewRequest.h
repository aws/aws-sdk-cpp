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
  class DeleteViewRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DeleteViewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteView"; }

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
    inline DeleteViewRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DeleteViewRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DeleteViewRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the view. Both <code>ViewArn</code> and <code>ViewId</code>
     * can be used.</p>
     */
    inline const Aws::String& GetViewId() const{ return m_viewId; }
    inline bool ViewIdHasBeenSet() const { return m_viewIdHasBeenSet; }
    inline void SetViewId(const Aws::String& value) { m_viewIdHasBeenSet = true; m_viewId = value; }
    inline void SetViewId(Aws::String&& value) { m_viewIdHasBeenSet = true; m_viewId = std::move(value); }
    inline void SetViewId(const char* value) { m_viewIdHasBeenSet = true; m_viewId.assign(value); }
    inline DeleteViewRequest& WithViewId(const Aws::String& value) { SetViewId(value); return *this;}
    inline DeleteViewRequest& WithViewId(Aws::String&& value) { SetViewId(std::move(value)); return *this;}
    inline DeleteViewRequest& WithViewId(const char* value) { SetViewId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_viewId;
    bool m_viewIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
