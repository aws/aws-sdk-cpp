/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/License.h>
#include <aws/chime/model/UserType.h>
#include <aws/chime/model/AlexaForBusinessMetadata.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The user ID and user fields to update, used with the <a>BatchUpdateUser</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateUserRequestItem">AWS
   * API Reference</a></p>
   */
  class UpdateUserRequestItem
  {
  public:
    AWS_CHIME_API UpdateUserRequestItem() = default;
    AWS_CHIME_API UpdateUserRequestItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API UpdateUserRequestItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user ID.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    UpdateUserRequestItem& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user license type.</p>
     */
    inline License GetLicenseType() const { return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    inline void SetLicenseType(License value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }
    inline UpdateUserRequestItem& WithLicenseType(License value) { SetLicenseType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user type.</p>
     */
    inline UserType GetUserType() const { return m_userType; }
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }
    inline void SetUserType(UserType value) { m_userTypeHasBeenSet = true; m_userType = value; }
    inline UpdateUserRequestItem& WithUserType(UserType value) { SetUserType(value); return *this;}
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
    UpdateUserRequestItem& WithAlexaForBusinessMetadata(AlexaForBusinessMetadataT&& value) { SetAlexaForBusinessMetadata(std::forward<AlexaForBusinessMetadataT>(value)); return *this;}
    ///@}
  private:

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
