﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Information about the user entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/EntityDisplayData">AWS
   * API Reference</a></p>
   */
  class EntityDisplayData
  {
  public:
    AWS_KENDRA_API EntityDisplayData();
    AWS_KENDRA_API EntityDisplayData(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API EntityDisplayData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the user.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline EntityDisplayData& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline EntityDisplayData& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline EntityDisplayData& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline EntityDisplayData& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline EntityDisplayData& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline EntityDisplayData& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name of the user.</p>
     */
    inline const Aws::String& GetIdentifiedUserName() const{ return m_identifiedUserName; }
    inline bool IdentifiedUserNameHasBeenSet() const { return m_identifiedUserNameHasBeenSet; }
    inline void SetIdentifiedUserName(const Aws::String& value) { m_identifiedUserNameHasBeenSet = true; m_identifiedUserName = value; }
    inline void SetIdentifiedUserName(Aws::String&& value) { m_identifiedUserNameHasBeenSet = true; m_identifiedUserName = std::move(value); }
    inline void SetIdentifiedUserName(const char* value) { m_identifiedUserNameHasBeenSet = true; m_identifiedUserName.assign(value); }
    inline EntityDisplayData& WithIdentifiedUserName(const Aws::String& value) { SetIdentifiedUserName(value); return *this;}
    inline EntityDisplayData& WithIdentifiedUserName(Aws::String&& value) { SetIdentifiedUserName(std::move(value)); return *this;}
    inline EntityDisplayData& WithIdentifiedUserName(const char* value) { SetIdentifiedUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first name of the user.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }
    inline EntityDisplayData& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}
    inline EntityDisplayData& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}
    inline EntityDisplayData& WithFirstName(const char* value) { SetFirstName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last name of the user.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }
    inline EntityDisplayData& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}
    inline EntityDisplayData& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}
    inline EntityDisplayData& WithLastName(const char* value) { SetLastName(value); return *this;}
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_identifiedUserName;
    bool m_identifiedUserNameHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
