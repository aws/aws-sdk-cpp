/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactFlowType.h>
#include <aws/connect/model/ContactFlowStatus.h>
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
  class CreateContactFlowRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreateContactFlowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContactFlow"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline CreateContactFlowRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline CreateContactFlowRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline CreateContactFlowRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the flow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateContactFlowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateContactFlowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateContactFlowRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the flow. For descriptions of the available types, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/create-contact-flow.html#contact-flow-types">Choose
     * a flow type</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline const ContactFlowType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ContactFlowType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ContactFlowType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateContactFlowRequest& WithType(const ContactFlowType& value) { SetType(value); return *this;}
    inline CreateContactFlowRequest& WithType(ContactFlowType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the flow. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateContactFlowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateContactFlowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateContactFlowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON string that represents the content of the flow. For an example, see
     * <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/flow-language-example.html">Example
     * flow in Amazon Connect Flow language</a>. </p> <p>Length Constraints: Minimum
     * length of 1. Maximum length of 256000.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline CreateContactFlowRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline CreateContactFlowRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline CreateContactFlowRequest& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the flow status as either <code>SAVED</code> or
     * <code>PUBLISHED</code>. The <code>PUBLISHED</code> status will initiate
     * validation on the content. the <code>SAVED</code> status does not initiate
     * validation of the content. <code>SAVED</code> | <code>PUBLISHED</code>.</p>
     */
    inline const ContactFlowStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ContactFlowStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ContactFlowStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CreateContactFlowRequest& WithStatus(const ContactFlowStatus& value) { SetStatus(value); return *this;}
    inline CreateContactFlowRequest& WithStatus(ContactFlowStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateContactFlowRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateContactFlowRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateContactFlowRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateContactFlowRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateContactFlowRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateContactFlowRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateContactFlowRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateContactFlowRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateContactFlowRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ContactFlowType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    ContactFlowStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
