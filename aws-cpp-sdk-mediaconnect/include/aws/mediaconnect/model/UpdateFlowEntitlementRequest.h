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
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/UpdateEncryption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * The entitlement fields that you want to update.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowEntitlementRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API UpdateFlowEntitlementRequest : public MediaConnectRequest
  {
  public:
    UpdateFlowEntitlementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFlowEntitlement"; }

    Aws::String SerializePayload() const override;


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
    inline UpdateFlowEntitlementRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A description of the entitlement. This description appears only on the AWS
     * Elemental MediaConnect console and will not be seen by the subscriber or end
     * user.
     */
    inline UpdateFlowEntitlementRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A description of the entitlement. This description appears only on the AWS
     * Elemental MediaConnect console and will not be seen by the subscriber or end
     * user.
     */
    inline UpdateFlowEntitlementRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The type of encryption that will be used on the output associated with this
     * entitlement.
     */
    inline const UpdateEncryption& GetEncryption() const{ return m_encryption; }

    /**
     * The type of encryption that will be used on the output associated with this
     * entitlement.
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * The type of encryption that will be used on the output associated with this
     * entitlement.
     */
    inline void SetEncryption(const UpdateEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * The type of encryption that will be used on the output associated with this
     * entitlement.
     */
    inline void SetEncryption(UpdateEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * The type of encryption that will be used on the output associated with this
     * entitlement.
     */
    inline UpdateFlowEntitlementRequest& WithEncryption(const UpdateEncryption& value) { SetEncryption(value); return *this;}

    /**
     * The type of encryption that will be used on the output associated with this
     * entitlement.
     */
    inline UpdateFlowEntitlementRequest& WithEncryption(UpdateEncryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * The ARN of the entitlement that you want to update.
     */
    inline const Aws::String& GetEntitlementArn() const{ return m_entitlementArn; }

    /**
     * The ARN of the entitlement that you want to update.
     */
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }

    /**
     * The ARN of the entitlement that you want to update.
     */
    inline void SetEntitlementArn(const Aws::String& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = value; }

    /**
     * The ARN of the entitlement that you want to update.
     */
    inline void SetEntitlementArn(Aws::String&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::move(value); }

    /**
     * The ARN of the entitlement that you want to update.
     */
    inline void SetEntitlementArn(const char* value) { m_entitlementArnHasBeenSet = true; m_entitlementArn.assign(value); }

    /**
     * The ARN of the entitlement that you want to update.
     */
    inline UpdateFlowEntitlementRequest& WithEntitlementArn(const Aws::String& value) { SetEntitlementArn(value); return *this;}

    /**
     * The ARN of the entitlement that you want to update.
     */
    inline UpdateFlowEntitlementRequest& WithEntitlementArn(Aws::String&& value) { SetEntitlementArn(std::move(value)); return *this;}

    /**
     * The ARN of the entitlement that you want to update.
     */
    inline UpdateFlowEntitlementRequest& WithEntitlementArn(const char* value) { SetEntitlementArn(value); return *this;}


    /**
     * The flow that is associated with the entitlement that you want to update.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The flow that is associated with the entitlement that you want to update.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The flow that is associated with the entitlement that you want to update.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The flow that is associated with the entitlement that you want to update.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The flow that is associated with the entitlement that you want to update.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The flow that is associated with the entitlement that you want to update.
     */
    inline UpdateFlowEntitlementRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The flow that is associated with the entitlement that you want to update.
     */
    inline UpdateFlowEntitlementRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The flow that is associated with the entitlement that you want to update.
     */
    inline UpdateFlowEntitlementRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flow using your
     * content as the source.
     */
    inline const Aws::Vector<Aws::String>& GetSubscribers() const{ return m_subscribers; }

    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flow using your
     * content as the source.
     */
    inline bool SubscribersHasBeenSet() const { return m_subscribersHasBeenSet; }

    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flow using your
     * content as the source.
     */
    inline void SetSubscribers(const Aws::Vector<Aws::String>& value) { m_subscribersHasBeenSet = true; m_subscribers = value; }

    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flow using your
     * content as the source.
     */
    inline void SetSubscribers(Aws::Vector<Aws::String>&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::move(value); }

    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flow using your
     * content as the source.
     */
    inline UpdateFlowEntitlementRequest& WithSubscribers(const Aws::Vector<Aws::String>& value) { SetSubscribers(value); return *this;}

    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flow using your
     * content as the source.
     */
    inline UpdateFlowEntitlementRequest& WithSubscribers(Aws::Vector<Aws::String>&& value) { SetSubscribers(std::move(value)); return *this;}

    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flow using your
     * content as the source.
     */
    inline UpdateFlowEntitlementRequest& AddSubscribers(const Aws::String& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(value); return *this; }

    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flow using your
     * content as the source.
     */
    inline UpdateFlowEntitlementRequest& AddSubscribers(Aws::String&& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(std::move(value)); return *this; }

    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flow using your
     * content as the source.
     */
    inline UpdateFlowEntitlementRequest& AddSubscribers(const char* value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(value); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    UpdateEncryption m_encryption;
    bool m_encryptionHasBeenSet;

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet;

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet;

    Aws::Vector<Aws::String> m_subscribers;
    bool m_subscribersHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
