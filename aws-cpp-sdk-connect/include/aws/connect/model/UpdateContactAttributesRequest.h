/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_CONNECT_API UpdateContactAttributesRequest : public ConnectRequest
  {
  public:
    UpdateContactAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContactAttributes"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the contact for which to update attributes. This is
     * the identifier for the contact associated with the first interaction with the
     * contact center.</p>
     */
    inline const Aws::String& GetInitialContactId() const{ return m_initialContactId; }

    /**
     * <p>The unique identifier of the contact for which to update attributes. This is
     * the identifier for the contact associated with the first interaction with the
     * contact center.</p>
     */
    inline bool InitialContactIdHasBeenSet() const { return m_initialContactIdHasBeenSet; }

    /**
     * <p>The unique identifier of the contact for which to update attributes. This is
     * the identifier for the contact associated with the first interaction with the
     * contact center.</p>
     */
    inline void SetInitialContactId(const Aws::String& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = value; }

    /**
     * <p>The unique identifier of the contact for which to update attributes. This is
     * the identifier for the contact associated with the first interaction with the
     * contact center.</p>
     */
    inline void SetInitialContactId(Aws::String&& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = std::move(value); }

    /**
     * <p>The unique identifier of the contact for which to update attributes. This is
     * the identifier for the contact associated with the first interaction with the
     * contact center.</p>
     */
    inline void SetInitialContactId(const char* value) { m_initialContactIdHasBeenSet = true; m_initialContactId.assign(value); }

    /**
     * <p>The unique identifier of the contact for which to update attributes. This is
     * the identifier for the contact associated with the first interaction with the
     * contact center.</p>
     */
    inline UpdateContactAttributesRequest& WithInitialContactId(const Aws::String& value) { SetInitialContactId(value); return *this;}

    /**
     * <p>The unique identifier of the contact for which to update attributes. This is
     * the identifier for the contact associated with the first interaction with the
     * contact center.</p>
     */
    inline UpdateContactAttributesRequest& WithInitialContactId(Aws::String&& value) { SetInitialContactId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the contact for which to update attributes. This is
     * the identifier for the contact associated with the first interaction with the
     * contact center.</p>
     */
    inline UpdateContactAttributesRequest& WithInitialContactId(const char* value) { SetInitialContactId(value); return *this;}


    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline UpdateContactAttributesRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline UpdateContactAttributesRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline UpdateContactAttributesRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs per contact. Attribute keys can include only
     * alphanumeric, dash, and underscore characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs per contact. Attribute keys can include only
     * alphanumeric, dash, and underscore characters.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs per contact. Attribute keys can include only
     * alphanumeric, dash, and underscore characters.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs per contact. Attribute keys can include only
     * alphanumeric, dash, and underscore characters.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs per contact. Attribute keys can include only
     * alphanumeric, dash, and underscore characters.</p>
     */
    inline UpdateContactAttributesRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs per contact. Attribute keys can include only
     * alphanumeric, dash, and underscore characters.</p>
     */
    inline UpdateContactAttributesRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs per contact. Attribute keys can include only
     * alphanumeric, dash, and underscore characters.</p>
     */
    inline UpdateContactAttributesRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs per contact. Attribute keys can include only
     * alphanumeric, dash, and underscore characters.</p>
     */
    inline UpdateContactAttributesRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs per contact. Attribute keys can include only
     * alphanumeric, dash, and underscore characters.</p>
     */
    inline UpdateContactAttributesRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs per contact. Attribute keys can include only
     * alphanumeric, dash, and underscore characters.</p>
     */
    inline UpdateContactAttributesRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs per contact. Attribute keys can include only
     * alphanumeric, dash, and underscore characters.</p>
     */
    inline UpdateContactAttributesRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs per contact. Attribute keys can include only
     * alphanumeric, dash, and underscore characters.</p>
     */
    inline UpdateContactAttributesRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specify a custom key-value pair using an attribute map. The attributes are
     * standard Amazon Connect attributes, and can be accessed in contact flows just
     * like any other contact attributes.</p> <p>There can be up to 32,768 UTF-8 bytes
     * across all key-value pairs per contact. Attribute keys can include only
     * alphanumeric, dash, and underscore characters.</p>
     */
    inline UpdateContactAttributesRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_initialContactId;
    bool m_initialContactIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
