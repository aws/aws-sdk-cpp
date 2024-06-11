﻿/**
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
    AWS_CHIME_API UpdateUserRequestItem();
    AWS_CHIME_API UpdateUserRequestItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API UpdateUserRequestItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user ID.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline UpdateUserRequestItem& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline UpdateUserRequestItem& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline UpdateUserRequestItem& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user license type.</p>
     */
    inline const License& GetLicenseType() const{ return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    inline void SetLicenseType(const License& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }
    inline void SetLicenseType(License&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }
    inline UpdateUserRequestItem& WithLicenseType(const License& value) { SetLicenseType(value); return *this;}
    inline UpdateUserRequestItem& WithLicenseType(License&& value) { SetLicenseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user type.</p>
     */
    inline const UserType& GetUserType() const{ return m_userType; }
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }
    inline void SetUserType(const UserType& value) { m_userTypeHasBeenSet = true; m_userType = value; }
    inline void SetUserType(UserType&& value) { m_userTypeHasBeenSet = true; m_userType = std::move(value); }
    inline UpdateUserRequestItem& WithUserType(const UserType& value) { SetUserType(value); return *this;}
    inline UpdateUserRequestItem& WithUserType(UserType&& value) { SetUserType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Alexa for Business metadata.</p>
     */
    inline const AlexaForBusinessMetadata& GetAlexaForBusinessMetadata() const{ return m_alexaForBusinessMetadata; }
    inline bool AlexaForBusinessMetadataHasBeenSet() const { return m_alexaForBusinessMetadataHasBeenSet; }
    inline void SetAlexaForBusinessMetadata(const AlexaForBusinessMetadata& value) { m_alexaForBusinessMetadataHasBeenSet = true; m_alexaForBusinessMetadata = value; }
    inline void SetAlexaForBusinessMetadata(AlexaForBusinessMetadata&& value) { m_alexaForBusinessMetadataHasBeenSet = true; m_alexaForBusinessMetadata = std::move(value); }
    inline UpdateUserRequestItem& WithAlexaForBusinessMetadata(const AlexaForBusinessMetadata& value) { SetAlexaForBusinessMetadata(value); return *this;}
    inline UpdateUserRequestItem& WithAlexaForBusinessMetadata(AlexaForBusinessMetadata&& value) { SetAlexaForBusinessMetadata(std::move(value)); return *this;}
    ///@}
  private:

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
