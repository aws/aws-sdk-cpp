/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/Logging.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/b2bi/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class CreateProfileRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API CreateProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProfile"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the name of the profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies the name of the profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies the name of the profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the name of the profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies the name of the profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies the name of the profile.</p>
     */
    inline CreateProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the name of the profile.</p>
     */
    inline CreateProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the profile.</p>
     */
    inline CreateProfileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the email address associated with this customer profile.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>Specifies the email address associated with this customer profile.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>Specifies the email address associated with this customer profile.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>Specifies the email address associated with this customer profile.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>Specifies the email address associated with this customer profile.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>Specifies the email address associated with this customer profile.</p>
     */
    inline CreateProfileRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>Specifies the email address associated with this customer profile.</p>
     */
    inline CreateProfileRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>Specifies the email address associated with this customer profile.</p>
     */
    inline CreateProfileRequest& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>Specifies the phone number associated with the profile.</p>
     */
    inline const Aws::String& GetPhone() const{ return m_phone; }

    /**
     * <p>Specifies the phone number associated with the profile.</p>
     */
    inline bool PhoneHasBeenSet() const { return m_phoneHasBeenSet; }

    /**
     * <p>Specifies the phone number associated with the profile.</p>
     */
    inline void SetPhone(const Aws::String& value) { m_phoneHasBeenSet = true; m_phone = value; }

    /**
     * <p>Specifies the phone number associated with the profile.</p>
     */
    inline void SetPhone(Aws::String&& value) { m_phoneHasBeenSet = true; m_phone = std::move(value); }

    /**
     * <p>Specifies the phone number associated with the profile.</p>
     */
    inline void SetPhone(const char* value) { m_phoneHasBeenSet = true; m_phone.assign(value); }

    /**
     * <p>Specifies the phone number associated with the profile.</p>
     */
    inline CreateProfileRequest& WithPhone(const Aws::String& value) { SetPhone(value); return *this;}

    /**
     * <p>Specifies the phone number associated with the profile.</p>
     */
    inline CreateProfileRequest& WithPhone(Aws::String&& value) { SetPhone(std::move(value)); return *this;}

    /**
     * <p>Specifies the phone number associated with the profile.</p>
     */
    inline CreateProfileRequest& WithPhone(const char* value) { SetPhone(value); return *this;}


    /**
     * <p>Specifies the name for the business associated with this profile.</p>
     */
    inline const Aws::String& GetBusinessName() const{ return m_businessName; }

    /**
     * <p>Specifies the name for the business associated with this profile.</p>
     */
    inline bool BusinessNameHasBeenSet() const { return m_businessNameHasBeenSet; }

    /**
     * <p>Specifies the name for the business associated with this profile.</p>
     */
    inline void SetBusinessName(const Aws::String& value) { m_businessNameHasBeenSet = true; m_businessName = value; }

    /**
     * <p>Specifies the name for the business associated with this profile.</p>
     */
    inline void SetBusinessName(Aws::String&& value) { m_businessNameHasBeenSet = true; m_businessName = std::move(value); }

    /**
     * <p>Specifies the name for the business associated with this profile.</p>
     */
    inline void SetBusinessName(const char* value) { m_businessNameHasBeenSet = true; m_businessName.assign(value); }

    /**
     * <p>Specifies the name for the business associated with this profile.</p>
     */
    inline CreateProfileRequest& WithBusinessName(const Aws::String& value) { SetBusinessName(value); return *this;}

    /**
     * <p>Specifies the name for the business associated with this profile.</p>
     */
    inline CreateProfileRequest& WithBusinessName(Aws::String&& value) { SetBusinessName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name for the business associated with this profile.</p>
     */
    inline CreateProfileRequest& WithBusinessName(const char* value) { SetBusinessName(value); return *this;}


    /**
     * <p>Specifies whether or not logging is enabled for this profile.</p>
     */
    inline const Logging& GetLogging() const{ return m_logging; }

    /**
     * <p>Specifies whether or not logging is enabled for this profile.</p>
     */
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }

    /**
     * <p>Specifies whether or not logging is enabled for this profile.</p>
     */
    inline void SetLogging(const Logging& value) { m_loggingHasBeenSet = true; m_logging = value; }

    /**
     * <p>Specifies whether or not logging is enabled for this profile.</p>
     */
    inline void SetLogging(Logging&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }

    /**
     * <p>Specifies whether or not logging is enabled for this profile.</p>
     */
    inline CreateProfileRequest& WithLogging(const Logging& value) { SetLogging(value); return *this;}

    /**
     * <p>Specifies whether or not logging is enabled for this profile.</p>
     */
    inline CreateProfileRequest& WithLogging(Logging&& value) { SetLogging(std::move(value)); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline CreateProfileRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline CreateProfileRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline CreateProfileRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline CreateProfileRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline CreateProfileRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline CreateProfileRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline CreateProfileRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_phone;
    bool m_phoneHasBeenSet = false;

    Aws::String m_businessName;
    bool m_businessNameHasBeenSet = false;

    Logging m_logging;
    bool m_loggingHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
