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
  class AWS_CONNECT_API UserIdentityInfoLite
  {
  public:
    UserIdentityInfoLite();
    UserIdentityInfoLite(Aws::Utils::Json::JsonView jsonValue);
    UserIdentityInfoLite& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user's first name.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>The user's first name.</p>
     */
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }

    /**
     * <p>The user's first name.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    /**
     * <p>The user's first name.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }

    /**
     * <p>The user's first name.</p>
     */
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    /**
     * <p>The user's first name.</p>
     */
    inline UserIdentityInfoLite& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The user's first name.</p>
     */
    inline UserIdentityInfoLite& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The user's first name.</p>
     */
    inline UserIdentityInfoLite& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>The user's last name.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>The user's last name.</p>
     */
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }

    /**
     * <p>The user's last name.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    /**
     * <p>The user's last name.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }

    /**
     * <p>The user's last name.</p>
     */
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    /**
     * <p>The user's last name.</p>
     */
    inline UserIdentityInfoLite& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The user's last name.</p>
     */
    inline UserIdentityInfoLite& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The user's last name.</p>
     */
    inline UserIdentityInfoLite& WithLastName(const char* value) { SetLastName(value); return *this;}

  private:

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
