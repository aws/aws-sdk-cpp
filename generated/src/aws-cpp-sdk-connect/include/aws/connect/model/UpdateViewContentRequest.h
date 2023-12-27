/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ViewStatus.h>
#include <aws/connect/model/ViewInputContent.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateViewContentRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateViewContentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateViewContent"; }

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
    inline UpdateViewContentRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateViewContentRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateViewContentRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the view. Both <code>ViewArn</code> and <code>ViewId</code>
     * can be used.</p>
     */
    inline const Aws::String& GetViewId() const{ return m_viewId; }

    /**
     * <p>The identifier of the view. Both <code>ViewArn</code> and <code>ViewId</code>
     * can be used.</p>
     */
    inline bool ViewIdHasBeenSet() const { return m_viewIdHasBeenSet; }

    /**
     * <p>The identifier of the view. Both <code>ViewArn</code> and <code>ViewId</code>
     * can be used.</p>
     */
    inline void SetViewId(const Aws::String& value) { m_viewIdHasBeenSet = true; m_viewId = value; }

    /**
     * <p>The identifier of the view. Both <code>ViewArn</code> and <code>ViewId</code>
     * can be used.</p>
     */
    inline void SetViewId(Aws::String&& value) { m_viewIdHasBeenSet = true; m_viewId = std::move(value); }

    /**
     * <p>The identifier of the view. Both <code>ViewArn</code> and <code>ViewId</code>
     * can be used.</p>
     */
    inline void SetViewId(const char* value) { m_viewIdHasBeenSet = true; m_viewId.assign(value); }

    /**
     * <p>The identifier of the view. Both <code>ViewArn</code> and <code>ViewId</code>
     * can be used.</p>
     */
    inline UpdateViewContentRequest& WithViewId(const Aws::String& value) { SetViewId(value); return *this;}

    /**
     * <p>The identifier of the view. Both <code>ViewArn</code> and <code>ViewId</code>
     * can be used.</p>
     */
    inline UpdateViewContentRequest& WithViewId(Aws::String&& value) { SetViewId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the view. Both <code>ViewArn</code> and <code>ViewId</code>
     * can be used.</p>
     */
    inline UpdateViewContentRequest& WithViewId(const char* value) { SetViewId(value); return *this;}


    /**
     * <p>Indicates the view status as either <code>SAVED</code> or
     * <code>PUBLISHED</code>. The <code>PUBLISHED</code> status will initiate
     * validation on the content.</p>
     */
    inline const ViewStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the view status as either <code>SAVED</code> or
     * <code>PUBLISHED</code>. The <code>PUBLISHED</code> status will initiate
     * validation on the content.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates the view status as either <code>SAVED</code> or
     * <code>PUBLISHED</code>. The <code>PUBLISHED</code> status will initiate
     * validation on the content.</p>
     */
    inline void SetStatus(const ViewStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates the view status as either <code>SAVED</code> or
     * <code>PUBLISHED</code>. The <code>PUBLISHED</code> status will initiate
     * validation on the content.</p>
     */
    inline void SetStatus(ViewStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates the view status as either <code>SAVED</code> or
     * <code>PUBLISHED</code>. The <code>PUBLISHED</code> status will initiate
     * validation on the content.</p>
     */
    inline UpdateViewContentRequest& WithStatus(const ViewStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the view status as either <code>SAVED</code> or
     * <code>PUBLISHED</code>. The <code>PUBLISHED</code> status will initiate
     * validation on the content.</p>
     */
    inline UpdateViewContentRequest& WithStatus(ViewStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data and the runtime input schema, which is auto-generated by this
     * operation.</p> <p>The total uncompressed content has a maximum file size of
     * 400kB.</p>
     */
    inline const ViewInputContent& GetContent() const{ return m_content; }

    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data and the runtime input schema, which is auto-generated by this
     * operation.</p> <p>The total uncompressed content has a maximum file size of
     * 400kB.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data and the runtime input schema, which is auto-generated by this
     * operation.</p> <p>The total uncompressed content has a maximum file size of
     * 400kB.</p>
     */
    inline void SetContent(const ViewInputContent& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data and the runtime input schema, which is auto-generated by this
     * operation.</p> <p>The total uncompressed content has a maximum file size of
     * 400kB.</p>
     */
    inline void SetContent(ViewInputContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data and the runtime input schema, which is auto-generated by this
     * operation.</p> <p>The total uncompressed content has a maximum file size of
     * 400kB.</p>
     */
    inline UpdateViewContentRequest& WithContent(const ViewInputContent& value) { SetContent(value); return *this;}

    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data and the runtime input schema, which is auto-generated by this
     * operation.</p> <p>The total uncompressed content has a maximum file size of
     * 400kB.</p>
     */
    inline UpdateViewContentRequest& WithContent(ViewInputContent&& value) { SetContent(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_viewId;
    bool m_viewIdHasBeenSet = false;

    ViewStatus m_status;
    bool m_statusHasBeenSet = false;

    ViewInputContent m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
