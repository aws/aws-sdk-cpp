/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The user's first name and last name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserIdentityInfoLite">AWS
   * API Reference</a></p>
   */
  class UserIdentityInfoLite
  {
  public:
    AWS_CONNECT_API UserIdentityInfoLite();
    AWS_CONNECT_API UserIdentityInfoLite(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserIdentityInfoLite& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user's first name.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }
    inline UserIdentityInfoLite& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}
    inline UserIdentityInfoLite& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}
    inline UserIdentityInfoLite& WithFirstName(const char* value) { SetFirstName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's last name.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }
    inline UserIdentityInfoLite& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}
    inline UserIdentityInfoLite& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}
    inline UserIdentityInfoLite& WithLastName(const char* value) { SetLastName(value); return *this;}
    ///@}
  private:

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
