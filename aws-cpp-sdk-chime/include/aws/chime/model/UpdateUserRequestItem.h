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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/License.h>
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
  class AWS_CHIME_API UpdateUserRequestItem
  {
  public:
    UpdateUserRequestItem();
    UpdateUserRequestItem(Aws::Utils::Json::JsonView jsonValue);
    UpdateUserRequestItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline UpdateUserRequestItem& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The user ID.</p>
     */
    inline UpdateUserRequestItem& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The user ID.</p>
     */
    inline UpdateUserRequestItem& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The user license type.</p>
     */
    inline const License& GetLicenseType() const{ return m_licenseType; }

    /**
     * <p>The user license type.</p>
     */
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }

    /**
     * <p>The user license type.</p>
     */
    inline void SetLicenseType(const License& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }

    /**
     * <p>The user license type.</p>
     */
    inline void SetLicenseType(License&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }

    /**
     * <p>The user license type.</p>
     */
    inline UpdateUserRequestItem& WithLicenseType(const License& value) { SetLicenseType(value); return *this;}

    /**
     * <p>The user license type.</p>
     */
    inline UpdateUserRequestItem& WithLicenseType(License&& value) { SetLicenseType(std::move(value)); return *this;}

  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet;

    License m_licenseType;
    bool m_licenseTypeHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
