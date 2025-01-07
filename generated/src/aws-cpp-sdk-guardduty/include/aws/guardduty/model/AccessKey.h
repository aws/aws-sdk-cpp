/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the access keys.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AccessKey">AWS
   * API Reference</a></p>
   */
  class AccessKey
  {
  public:
    AWS_GUARDDUTY_API AccessKey();
    AWS_GUARDDUTY_API AccessKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AccessKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Principal ID of the user.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }
    inline AccessKey& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline AccessKey& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline AccessKey& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the user.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline AccessKey& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline AccessKey& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline AccessKey& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the user.</p>
     */
    inline const Aws::String& GetUserType() const{ return m_userType; }
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }
    inline void SetUserType(const Aws::String& value) { m_userTypeHasBeenSet = true; m_userType = value; }
    inline void SetUserType(Aws::String&& value) { m_userTypeHasBeenSet = true; m_userType = std::move(value); }
    inline void SetUserType(const char* value) { m_userTypeHasBeenSet = true; m_userType.assign(value); }
    inline AccessKey& WithUserType(const Aws::String& value) { SetUserType(value); return *this;}
    inline AccessKey& WithUserType(Aws::String&& value) { SetUserType(std::move(value)); return *this;}
    inline AccessKey& WithUserType(const char* value) { SetUserType(value); return *this;}
    ///@}
  private:

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_userType;
    bool m_userTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
