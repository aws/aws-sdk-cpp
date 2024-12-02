/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/Account.h>
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
   * <p>Contains information about the user involved in the attack
   * sequence.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/User">AWS API
   * Reference</a></p>
   */
  class User
  {
  public:
    AWS_GUARDDUTY_API User();
    AWS_GUARDDUTY_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the user.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline User& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline User& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline User& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the user.</p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }
    inline User& WithUid(const Aws::String& value) { SetUid(value); return *this;}
    inline User& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}
    inline User& WithUid(const char* value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the user.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline User& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline User& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline User& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials of the user ID.</p>
     */
    inline const Aws::String& GetCredentialUid() const{ return m_credentialUid; }
    inline bool CredentialUidHasBeenSet() const { return m_credentialUidHasBeenSet; }
    inline void SetCredentialUid(const Aws::String& value) { m_credentialUidHasBeenSet = true; m_credentialUid = value; }
    inline void SetCredentialUid(Aws::String&& value) { m_credentialUidHasBeenSet = true; m_credentialUid = std::move(value); }
    inline void SetCredentialUid(const char* value) { m_credentialUidHasBeenSet = true; m_credentialUid.assign(value); }
    inline User& WithCredentialUid(const Aws::String& value) { SetCredentialUid(value); return *this;}
    inline User& WithCredentialUid(Aws::String&& value) { SetCredentialUid(std::move(value)); return *this;}
    inline User& WithCredentialUid(const char* value) { SetCredentialUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the Amazon Web Services account.</p>
     */
    inline const Account& GetAccount() const{ return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    inline void SetAccount(const Account& value) { m_accountHasBeenSet = true; m_account = value; }
    inline void SetAccount(Account&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }
    inline User& WithAccount(const Account& value) { SetAccount(value); return *this;}
    inline User& WithAccount(Account&& value) { SetAccount(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_credentialUid;
    bool m_credentialUidHasBeenSet = false;

    Account m_account;
    bool m_accountHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
