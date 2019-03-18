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
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Encryption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaConnect
{
namespace Model
{

  /**
   * The entitlements that you want to grant on a flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GrantEntitlementRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API GrantEntitlementRequest
  {
  public:
    GrantEntitlementRequest();
    GrantEntitlementRequest(Aws::Utils::Json::JsonView jsonValue);
    GrantEntitlementRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A description of the entitlement. This description appears only on the AWS
     * Elemental MediaConnect console and will not be seen by the subscriber or end
     * user.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A description of the entitlement. This description appears only on the AWS
     * Elemental MediaConnect console and will not be seen by the subscriber or end
     * user.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A description of the entitlement. This description appears only on the AWS
     * Elemental MediaConnect console and will not be seen by the subscriber or end
     * user.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A description of the entitlement. This description appears only on the AWS
     * Elemental MediaConnect console and will not be seen by the subscriber or end
     * user.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A description of the entitlement. This description appears only on the AWS
     * Elemental MediaConnect console and will not be seen by the subscriber or end
     * user.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A description of the entitlement. This description appears only on the AWS
     * Elemental MediaConnect console and will not be seen by the subscriber or end
     * user.
     */
    inline GrantEntitlementRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A description of the entitlement. This description appears only on the AWS
     * Elemental MediaConnect console and will not be seen by the subscriber or end
     * user.
     */
    inline GrantEntitlementRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A description of the entitlement. This description appears only on the AWS
     * Elemental MediaConnect console and will not be seen by the subscriber or end
     * user.
     */
    inline GrantEntitlementRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The type of encryption that will be used on the output that is associated with
     * this entitlement.
     */
    inline const Encryption& GetEncryption() const{ return m_encryption; }

    /**
     * The type of encryption that will be used on the output that is associated with
     * this entitlement.
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * The type of encryption that will be used on the output that is associated with
     * this entitlement.
     */
    inline void SetEncryption(const Encryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * The type of encryption that will be used on the output that is associated with
     * this entitlement.
     */
    inline void SetEncryption(Encryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * The type of encryption that will be used on the output that is associated with
     * this entitlement.
     */
    inline GrantEntitlementRequest& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}

    /**
     * The type of encryption that will be used on the output that is associated with
     * this entitlement.
     */
    inline GrantEntitlementRequest& WithEncryption(Encryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * The name of the entitlement. This value must be unique within the current flow.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the entitlement. This value must be unique within the current flow.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the entitlement. This value must be unique within the current flow.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the entitlement. This value must be unique within the current flow.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the entitlement. This value must be unique within the current flow.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the entitlement. This value must be unique within the current flow.
     */
    inline GrantEntitlementRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the entitlement. This value must be unique within the current flow.
     */
    inline GrantEntitlementRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the entitlement. This value must be unique within the current flow.
     */
    inline GrantEntitlementRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flows using your
     * content as the source.
     */
    inline const Aws::Vector<Aws::String>& GetSubscribers() const{ return m_subscribers; }

    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flows using your
     * content as the source.
     */
    inline bool SubscribersHasBeenSet() const { return m_subscribersHasBeenSet; }

    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flows using your
     * content as the source.
     */
    inline void SetSubscribers(const Aws::Vector<Aws::String>& value) { m_subscribersHasBeenSet = true; m_subscribers = value; }

    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flows using your
     * content as the source.
     */
    inline void SetSubscribers(Aws::Vector<Aws::String>&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::move(value); }

    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flows using your
     * content as the source.
     */
    inline GrantEntitlementRequest& WithSubscribers(const Aws::Vector<Aws::String>& value) { SetSubscribers(value); return *this;}

    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flows using your
     * content as the source.
     */
    inline GrantEntitlementRequest& WithSubscribers(Aws::Vector<Aws::String>&& value) { SetSubscribers(std::move(value)); return *this;}

    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flows using your
     * content as the source.
     */
    inline GrantEntitlementRequest& AddSubscribers(const Aws::String& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(value); return *this; }

    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flows using your
     * content as the source.
     */
    inline GrantEntitlementRequest& AddSubscribers(Aws::String&& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(std::move(value)); return *this; }

    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flows using your
     * content as the source.
     */
    inline GrantEntitlementRequest& AddSubscribers(const char* value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(value); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_subscribers;
    bool m_subscribersHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
