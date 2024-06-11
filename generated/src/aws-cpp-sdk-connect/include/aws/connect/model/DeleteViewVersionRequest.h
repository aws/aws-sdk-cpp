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
  class DeleteViewVersionRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DeleteViewVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteViewVersion"; }

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
    inline DeleteViewVersionRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DeleteViewVersionRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DeleteViewVersionRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
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
    inline DeleteViewVersionRequest& WithViewId(const Aws::String& value) { SetViewId(value); return *this;}
    inline DeleteViewVersionRequest& WithViewId(Aws::String&& value) { SetViewId(std::move(value)); return *this;}
    inline DeleteViewVersionRequest& WithViewId(const char* value) { SetViewId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the view.</p>
     */
    inline int GetViewVersion() const{ return m_viewVersion; }
    inline bool ViewVersionHasBeenSet() const { return m_viewVersionHasBeenSet; }
    inline void SetViewVersion(int value) { m_viewVersionHasBeenSet = true; m_viewVersion = value; }
    inline DeleteViewVersionRequest& WithViewVersion(int value) { SetViewVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_viewId;
    bool m_viewIdHasBeenSet = false;

    int m_viewVersion;
    bool m_viewVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
