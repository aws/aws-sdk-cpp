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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class CreateViewRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreateViewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateView"; }

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
    inline CreateViewRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline CreateViewRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline CreateViewRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>A unique Id for each create view request to avoid duplicate view creation.
     * For example, the view is idempotent ClientToken is provided.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique Id for each create view request to avoid duplicate view creation.
     * For example, the view is idempotent ClientToken is provided.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique Id for each create view request to avoid duplicate view creation.
     * For example, the view is idempotent ClientToken is provided.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique Id for each create view request to avoid duplicate view creation.
     * For example, the view is idempotent ClientToken is provided.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique Id for each create view request to avoid duplicate view creation.
     * For example, the view is idempotent ClientToken is provided.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique Id for each create view request to avoid duplicate view creation.
     * For example, the view is idempotent ClientToken is provided.</p>
     */
    inline CreateViewRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique Id for each create view request to avoid duplicate view creation.
     * For example, the view is idempotent ClientToken is provided.</p>
     */
    inline CreateViewRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique Id for each create view request to avoid duplicate view creation.
     * For example, the view is idempotent ClientToken is provided.</p>
     */
    inline CreateViewRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


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
    inline CreateViewRequest& WithStatus(const ViewStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the view status as either <code>SAVED</code> or
     * <code>PUBLISHED</code>. The <code>PUBLISHED</code> status will initiate
     * validation on the content.</p>
     */
    inline CreateViewRequest& WithStatus(ViewStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data.</p> <p>The total uncompressed content has a maximum file
     * size of 400kB.</p>
     */
    inline const ViewInputContent& GetContent() const{ return m_content; }

    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data.</p> <p>The total uncompressed content has a maximum file
     * size of 400kB.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data.</p> <p>The total uncompressed content has a maximum file
     * size of 400kB.</p>
     */
    inline void SetContent(const ViewInputContent& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data.</p> <p>The total uncompressed content has a maximum file
     * size of 400kB.</p>
     */
    inline void SetContent(ViewInputContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data.</p> <p>The total uncompressed content has a maximum file
     * size of 400kB.</p>
     */
    inline CreateViewRequest& WithContent(const ViewInputContent& value) { SetContent(value); return *this;}

    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data.</p> <p>The total uncompressed content has a maximum file
     * size of 400kB.</p>
     */
    inline CreateViewRequest& WithContent(ViewInputContent&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>The description of the view.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the view.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the view.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the view.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the view.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the view.</p>
     */
    inline CreateViewRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the view.</p>
     */
    inline CreateViewRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the view.</p>
     */
    inline CreateViewRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the view.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the view.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the view.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the view.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the view.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the view.</p>
     */
    inline CreateViewRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the view.</p>
     */
    inline CreateViewRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the view.</p>
     */
    inline CreateViewRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The tags associated with the view resource (not specific to view
     * version).These tags can be used to organize, track, or control access for this
     * resource. For example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the view resource (not specific to view
     * version).These tags can be used to organize, track, or control access for this
     * resource. For example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the view resource (not specific to view
     * version).These tags can be used to organize, track, or control access for this
     * resource. For example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the view resource (not specific to view
     * version).These tags can be used to organize, track, or control access for this
     * resource. For example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the view resource (not specific to view
     * version).These tags can be used to organize, track, or control access for this
     * resource. For example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateViewRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the view resource (not specific to view
     * version).These tags can be used to organize, track, or control access for this
     * resource. For example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateViewRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the view resource (not specific to view
     * version).These tags can be used to organize, track, or control access for this
     * resource. For example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateViewRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags associated with the view resource (not specific to view
     * version).These tags can be used to organize, track, or control access for this
     * resource. For example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateViewRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the view resource (not specific to view
     * version).These tags can be used to organize, track, or control access for this
     * resource. For example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateViewRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the view resource (not specific to view
     * version).These tags can be used to organize, track, or control access for this
     * resource. For example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateViewRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags associated with the view resource (not specific to view
     * version).These tags can be used to organize, track, or control access for this
     * resource. For example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateViewRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the view resource (not specific to view
     * version).These tags can be used to organize, track, or control access for this
     * resource. For example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateViewRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the view resource (not specific to view
     * version).These tags can be used to organize, track, or control access for this
     * resource. For example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateViewRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ViewStatus m_status;
    bool m_statusHasBeenSet = false;

    ViewInputContent m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
