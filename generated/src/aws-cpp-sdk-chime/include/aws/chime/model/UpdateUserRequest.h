/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/License.h>
#include <aws/chime/model/UserType.h>
#include <aws/chime/model/AlexaForBusinessMetadata.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class UpdateUserRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API UpdateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline UpdateUserRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline UpdateUserRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline UpdateUserRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The user ID.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The user ID.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The user ID.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The user ID.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The user ID.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The user ID.</p>
     */
    inline UpdateUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The user ID.</p>
     */
    inline UpdateUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The user ID.</p>
     */
    inline UpdateUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The user license type to update. This must be a supported license type for
     * the Amazon Chime account that the user belongs to.</p>
     */
    inline const License& GetLicenseType() const{ return m_licenseType; }

    /**
     * <p>The user license type to update. This must be a supported license type for
     * the Amazon Chime account that the user belongs to.</p>
     */
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }

    /**
     * <p>The user license type to update. This must be a supported license type for
     * the Amazon Chime account that the user belongs to.</p>
     */
    inline void SetLicenseType(const License& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }

    /**
     * <p>The user license type to update. This must be a supported license type for
     * the Amazon Chime account that the user belongs to.</p>
     */
    inline void SetLicenseType(License&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }

    /**
     * <p>The user license type to update. This must be a supported license type for
     * the Amazon Chime account that the user belongs to.</p>
     */
    inline UpdateUserRequest& WithLicenseType(const License& value) { SetLicenseType(value); return *this;}

    /**
     * <p>The user license type to update. This must be a supported license type for
     * the Amazon Chime account that the user belongs to.</p>
     */
    inline UpdateUserRequest& WithLicenseType(License&& value) { SetLicenseType(std::move(value)); return *this;}


    /**
     * <p>The user type.</p>
     */
    inline const UserType& GetUserType() const{ return m_userType; }

    /**
     * <p>The user type.</p>
     */
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }

    /**
     * <p>The user type.</p>
     */
    inline void SetUserType(const UserType& value) { m_userTypeHasBeenSet = true; m_userType = value; }

    /**
     * <p>The user type.</p>
     */
    inline void SetUserType(UserType&& value) { m_userTypeHasBeenSet = true; m_userType = std::move(value); }

    /**
     * <p>The user type.</p>
     */
    inline UpdateUserRequest& WithUserType(const UserType& value) { SetUserType(value); return *this;}

    /**
     * <p>The user type.</p>
     */
    inline UpdateUserRequest& WithUserType(UserType&& value) { SetUserType(std::move(value)); return *this;}


    /**
     * <p>The Alexa for Business metadata.</p>
     */
    inline const AlexaForBusinessMetadata& GetAlexaForBusinessMetadata() const{ return m_alexaForBusinessMetadata; }

    /**
     * <p>The Alexa for Business metadata.</p>
     */
    inline bool AlexaForBusinessMetadataHasBeenSet() const { return m_alexaForBusinessMetadataHasBeenSet; }

    /**
     * <p>The Alexa for Business metadata.</p>
     */
    inline void SetAlexaForBusinessMetadata(const AlexaForBusinessMetadata& value) { m_alexaForBusinessMetadataHasBeenSet = true; m_alexaForBusinessMetadata = value; }

    /**
     * <p>The Alexa for Business metadata.</p>
     */
    inline void SetAlexaForBusinessMetadata(AlexaForBusinessMetadata&& value) { m_alexaForBusinessMetadataHasBeenSet = true; m_alexaForBusinessMetadata = std::move(value); }

    /**
     * <p>The Alexa for Business metadata.</p>
     */
    inline UpdateUserRequest& WithAlexaForBusinessMetadata(const AlexaForBusinessMetadata& value) { SetAlexaForBusinessMetadata(value); return *this;}

    /**
     * <p>The Alexa for Business metadata.</p>
     */
    inline UpdateUserRequest& WithAlexaForBusinessMetadata(AlexaForBusinessMetadata&& value) { SetAlexaForBusinessMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    License m_licenseType;
    bool m_licenseTypeHasBeenSet = false;

    UserType m_userType;
    bool m_userTypeHasBeenSet = false;

    AlexaForBusinessMetadata m_alexaForBusinessMetadata;
    bool m_alexaForBusinessMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
