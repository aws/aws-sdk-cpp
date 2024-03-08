/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreatePartnershipRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API CreatePartnershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePartnership"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the unique, system-generated identifier for the profile connected
     * to this partnership.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p>Specifies the unique, system-generated identifier for the profile connected
     * to this partnership.</p>
     */
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }

    /**
     * <p>Specifies the unique, system-generated identifier for the profile connected
     * to this partnership.</p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }

    /**
     * <p>Specifies the unique, system-generated identifier for the profile connected
     * to this partnership.</p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }

    /**
     * <p>Specifies the unique, system-generated identifier for the profile connected
     * to this partnership.</p>
     */
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }

    /**
     * <p>Specifies the unique, system-generated identifier for the profile connected
     * to this partnership.</p>
     */
    inline CreatePartnershipRequest& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p>Specifies the unique, system-generated identifier for the profile connected
     * to this partnership.</p>
     */
    inline CreatePartnershipRequest& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique, system-generated identifier for the profile connected
     * to this partnership.</p>
     */
    inline CreatePartnershipRequest& WithProfileId(const char* value) { SetProfileId(value); return *this;}


    /**
     * <p>Specifies a descriptive name for the partnership.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies a descriptive name for the partnership.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies a descriptive name for the partnership.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies a descriptive name for the partnership.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies a descriptive name for the partnership.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies a descriptive name for the partnership.</p>
     */
    inline CreatePartnershipRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies a descriptive name for the partnership.</p>
     */
    inline CreatePartnershipRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies a descriptive name for the partnership.</p>
     */
    inline CreatePartnershipRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the email address associated with this trading partner.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>Specifies the email address associated with this trading partner.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>Specifies the email address associated with this trading partner.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>Specifies the email address associated with this trading partner.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>Specifies the email address associated with this trading partner.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>Specifies the email address associated with this trading partner.</p>
     */
    inline CreatePartnershipRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>Specifies the email address associated with this trading partner.</p>
     */
    inline CreatePartnershipRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>Specifies the email address associated with this trading partner.</p>
     */
    inline CreatePartnershipRequest& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>Specifies the phone number associated with the partnership.</p>
     */
    inline const Aws::String& GetPhone() const{ return m_phone; }

    /**
     * <p>Specifies the phone number associated with the partnership.</p>
     */
    inline bool PhoneHasBeenSet() const { return m_phoneHasBeenSet; }

    /**
     * <p>Specifies the phone number associated with the partnership.</p>
     */
    inline void SetPhone(const Aws::String& value) { m_phoneHasBeenSet = true; m_phone = value; }

    /**
     * <p>Specifies the phone number associated with the partnership.</p>
     */
    inline void SetPhone(Aws::String&& value) { m_phoneHasBeenSet = true; m_phone = std::move(value); }

    /**
     * <p>Specifies the phone number associated with the partnership.</p>
     */
    inline void SetPhone(const char* value) { m_phoneHasBeenSet = true; m_phone.assign(value); }

    /**
     * <p>Specifies the phone number associated with the partnership.</p>
     */
    inline CreatePartnershipRequest& WithPhone(const Aws::String& value) { SetPhone(value); return *this;}

    /**
     * <p>Specifies the phone number associated with the partnership.</p>
     */
    inline CreatePartnershipRequest& WithPhone(Aws::String&& value) { SetPhone(std::move(value)); return *this;}

    /**
     * <p>Specifies the phone number associated with the partnership.</p>
     */
    inline CreatePartnershipRequest& WithPhone(const char* value) { SetPhone(value); return *this;}


    /**
     * <p>Specifies a list of the capabilities associated with this partnership.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>Specifies a list of the capabilities associated with this partnership.</p>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>Specifies a list of the capabilities associated with this partnership.</p>
     */
    inline void SetCapabilities(const Aws::Vector<Aws::String>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>Specifies a list of the capabilities associated with this partnership.</p>
     */
    inline void SetCapabilities(Aws::Vector<Aws::String>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>Specifies a list of the capabilities associated with this partnership.</p>
     */
    inline CreatePartnershipRequest& WithCapabilities(const Aws::Vector<Aws::String>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>Specifies a list of the capabilities associated with this partnership.</p>
     */
    inline CreatePartnershipRequest& WithCapabilities(Aws::Vector<Aws::String>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of the capabilities associated with this partnership.</p>
     */
    inline CreatePartnershipRequest& AddCapabilities(const Aws::String& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>Specifies a list of the capabilities associated with this partnership.</p>
     */
    inline CreatePartnershipRequest& AddCapabilities(Aws::String&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a list of the capabilities associated with this partnership.</p>
     */
    inline CreatePartnershipRequest& AddCapabilities(const char* value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }


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
    inline CreatePartnershipRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline CreatePartnershipRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline CreatePartnershipRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


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
    inline CreatePartnershipRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline CreatePartnershipRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline CreatePartnershipRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies the key-value pairs assigned to ARNs that you can use to group and
     * search for resources by type. You can attach this metadata to resources
     * (capabilities, partnerships, and so on) for any purpose.</p>
     */
    inline CreatePartnershipRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_phone;
    bool m_phoneHasBeenSet = false;

    Aws::Vector<Aws::String> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
