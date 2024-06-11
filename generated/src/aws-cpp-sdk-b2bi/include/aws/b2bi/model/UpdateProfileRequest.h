/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class UpdateProfileRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API UpdateProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProfile"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the unique, system-generated identifier for the profile.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline UpdateProfileRequest& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline UpdateProfileRequest& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline UpdateProfileRequest& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the profile, used to identify it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateProfileRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the email address associated with this customer profile.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline UpdateProfileRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline UpdateProfileRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline UpdateProfileRequest& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the phone number associated with the profile.</p>
     */
    inline const Aws::String& GetPhone() const{ return m_phone; }
    inline bool PhoneHasBeenSet() const { return m_phoneHasBeenSet; }
    inline void SetPhone(const Aws::String& value) { m_phoneHasBeenSet = true; m_phone = value; }
    inline void SetPhone(Aws::String&& value) { m_phoneHasBeenSet = true; m_phone = std::move(value); }
    inline void SetPhone(const char* value) { m_phoneHasBeenSet = true; m_phone.assign(value); }
    inline UpdateProfileRequest& WithPhone(const Aws::String& value) { SetPhone(value); return *this;}
    inline UpdateProfileRequest& WithPhone(Aws::String&& value) { SetPhone(std::move(value)); return *this;}
    inline UpdateProfileRequest& WithPhone(const char* value) { SetPhone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name for the business associated with this profile.</p>
     */
    inline const Aws::String& GetBusinessName() const{ return m_businessName; }
    inline bool BusinessNameHasBeenSet() const { return m_businessNameHasBeenSet; }
    inline void SetBusinessName(const Aws::String& value) { m_businessNameHasBeenSet = true; m_businessName = value; }
    inline void SetBusinessName(Aws::String&& value) { m_businessNameHasBeenSet = true; m_businessName = std::move(value); }
    inline void SetBusinessName(const char* value) { m_businessNameHasBeenSet = true; m_businessName.assign(value); }
    inline UpdateProfileRequest& WithBusinessName(const Aws::String& value) { SetBusinessName(value); return *this;}
    inline UpdateProfileRequest& WithBusinessName(Aws::String&& value) { SetBusinessName(std::move(value)); return *this;}
    inline UpdateProfileRequest& WithBusinessName(const char* value) { SetBusinessName(value); return *this;}
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_phone;
    bool m_phoneHasBeenSet = false;

    Aws::String m_businessName;
    bool m_businessNameHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
