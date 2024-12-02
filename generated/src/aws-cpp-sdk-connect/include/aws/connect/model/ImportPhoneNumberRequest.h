/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class ImportPhoneNumberRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API ImportPhoneNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportPhoneNumber"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline ImportPhoneNumberRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline ImportPhoneNumberRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline ImportPhoneNumberRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The claimed phone number ARN being imported from the external service, such
     * as Amazon Web Services End User Messaging. If it is from Amazon Web Services End
     * User Messaging, it looks like the ARN of the phone number to import from Amazon
     * Web Services End User Messaging.</p>
     */
    inline const Aws::String& GetSourcePhoneNumberArn() const{ return m_sourcePhoneNumberArn; }
    inline bool SourcePhoneNumberArnHasBeenSet() const { return m_sourcePhoneNumberArnHasBeenSet; }
    inline void SetSourcePhoneNumberArn(const Aws::String& value) { m_sourcePhoneNumberArnHasBeenSet = true; m_sourcePhoneNumberArn = value; }
    inline void SetSourcePhoneNumberArn(Aws::String&& value) { m_sourcePhoneNumberArnHasBeenSet = true; m_sourcePhoneNumberArn = std::move(value); }
    inline void SetSourcePhoneNumberArn(const char* value) { m_sourcePhoneNumberArnHasBeenSet = true; m_sourcePhoneNumberArn.assign(value); }
    inline ImportPhoneNumberRequest& WithSourcePhoneNumberArn(const Aws::String& value) { SetSourcePhoneNumberArn(value); return *this;}
    inline ImportPhoneNumberRequest& WithSourcePhoneNumberArn(Aws::String&& value) { SetSourcePhoneNumberArn(std::move(value)); return *this;}
    inline ImportPhoneNumberRequest& WithSourcePhoneNumberArn(const char* value) { SetSourcePhoneNumberArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberDescription() const{ return m_phoneNumberDescription; }
    inline bool PhoneNumberDescriptionHasBeenSet() const { return m_phoneNumberDescriptionHasBeenSet; }
    inline void SetPhoneNumberDescription(const Aws::String& value) { m_phoneNumberDescriptionHasBeenSet = true; m_phoneNumberDescription = value; }
    inline void SetPhoneNumberDescription(Aws::String&& value) { m_phoneNumberDescriptionHasBeenSet = true; m_phoneNumberDescription = std::move(value); }
    inline void SetPhoneNumberDescription(const char* value) { m_phoneNumberDescriptionHasBeenSet = true; m_phoneNumberDescription.assign(value); }
    inline ImportPhoneNumberRequest& WithPhoneNumberDescription(const Aws::String& value) { SetPhoneNumberDescription(value); return *this;}
    inline ImportPhoneNumberRequest& WithPhoneNumberDescription(Aws::String&& value) { SetPhoneNumberDescription(std::move(value)); return *this;}
    inline ImportPhoneNumberRequest& WithPhoneNumberDescription(const char* value) { SetPhoneNumberDescription(value); return *this;}
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
    inline ImportPhoneNumberRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ImportPhoneNumberRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ImportPhoneNumberRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ImportPhoneNumberRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ImportPhoneNumberRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ImportPhoneNumberRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ImportPhoneNumberRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ImportPhoneNumberRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ImportPhoneNumberRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline ImportPhoneNumberRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ImportPhoneNumberRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ImportPhoneNumberRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_sourcePhoneNumberArn;
    bool m_sourcePhoneNumberArnHasBeenSet = false;

    Aws::String m_phoneNumberDescription;
    bool m_phoneNumberDescriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
