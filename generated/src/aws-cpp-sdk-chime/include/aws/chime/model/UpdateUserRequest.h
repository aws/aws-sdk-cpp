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
    AWS_CHIME_API UpdateUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    UpdateUserRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    UpdateUserRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user license type to update. This must be a supported license type for
     * the Amazon Chime account that the user belongs to.</p>
     */
    inline License GetLicenseType() const { return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    inline void SetLicenseType(License value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }
    inline UpdateUserRequest& WithLicenseType(License value) { SetLicenseType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user type.</p>
     */
    inline UserType GetUserType() const { return m_userType; }
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }
    inline void SetUserType(UserType value) { m_userTypeHasBeenSet = true; m_userType = value; }
    inline UpdateUserRequest& WithUserType(UserType value) { SetUserType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Alexa for Business metadata.</p>
     */
    inline const AlexaForBusinessMetadata& GetAlexaForBusinessMetadata() const { return m_alexaForBusinessMetadata; }
    inline bool AlexaForBusinessMetadataHasBeenSet() const { return m_alexaForBusinessMetadataHasBeenSet; }
    template<typename AlexaForBusinessMetadataT = AlexaForBusinessMetadata>
    void SetAlexaForBusinessMetadata(AlexaForBusinessMetadataT&& value) { m_alexaForBusinessMetadataHasBeenSet = true; m_alexaForBusinessMetadata = std::forward<AlexaForBusinessMetadataT>(value); }
    template<typename AlexaForBusinessMetadataT = AlexaForBusinessMetadata>
    UpdateUserRequest& WithAlexaForBusinessMetadata(AlexaForBusinessMetadataT&& value) { SetAlexaForBusinessMetadata(std::forward<AlexaForBusinessMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    License m_licenseType{License::NOT_SET};
    bool m_licenseTypeHasBeenSet = false;

    UserType m_userType{UserType::NOT_SET};
    bool m_userTypeHasBeenSet = false;

    AlexaForBusinessMetadata m_alexaForBusinessMetadata;
    bool m_alexaForBusinessMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
