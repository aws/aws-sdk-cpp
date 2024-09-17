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
  class CreateViewVersionRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreateViewVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateViewVersion"; }

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
    inline CreateViewVersionRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline CreateViewVersionRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline CreateViewVersionRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
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
    inline CreateViewVersionRequest& WithViewId(const Aws::String& value) { SetViewId(value); return *this;}
    inline CreateViewVersionRequest& WithViewId(Aws::String&& value) { SetViewId(std::move(value)); return *this;}
    inline CreateViewVersionRequest& WithViewId(const char* value) { SetViewId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the version being published.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }
    inline CreateViewVersionRequest& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}
    inline CreateViewVersionRequest& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}
    inline CreateViewVersionRequest& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the checksum value of the latest published view content.</p>
     */
    inline const Aws::String& GetViewContentSha256() const{ return m_viewContentSha256; }
    inline bool ViewContentSha256HasBeenSet() const { return m_viewContentSha256HasBeenSet; }
    inline void SetViewContentSha256(const Aws::String& value) { m_viewContentSha256HasBeenSet = true; m_viewContentSha256 = value; }
    inline void SetViewContentSha256(Aws::String&& value) { m_viewContentSha256HasBeenSet = true; m_viewContentSha256 = std::move(value); }
    inline void SetViewContentSha256(const char* value) { m_viewContentSha256HasBeenSet = true; m_viewContentSha256.assign(value); }
    inline CreateViewVersionRequest& WithViewContentSha256(const Aws::String& value) { SetViewContentSha256(value); return *this;}
    inline CreateViewVersionRequest& WithViewContentSha256(Aws::String&& value) { SetViewContentSha256(std::move(value)); return *this;}
    inline CreateViewVersionRequest& WithViewContentSha256(const char* value) { SetViewContentSha256(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_viewId;
    bool m_viewIdHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    Aws::String m_viewContentSha256;
    bool m_viewContentSha256HasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
