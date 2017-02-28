/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/CreateAccountState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/organizations/model/CreateAccountFailureReason.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains the status about a <a>CreateAccount</a> request to create an AWS
   * account in an organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateAccountStatus">AWS
   * API Reference</a></p>
   */
  class AWS_ORGANIZATIONS_API CreateAccountStatus
  {
  public:
    CreateAccountStatus();
    CreateAccountStatus(const Aws::Utils::Json::JsonValue& jsonValue);
    CreateAccountStatus& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique identifier (ID) that references this request. You get this value
     * from the response of the initial <a>CreateAccount</a> request to create the
     * account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for an create account request ID string requires "car-" followed by from 8 to 32
     * lower-case letters or digits.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier (ID) that references this request. You get this value
     * from the response of the initial <a>CreateAccount</a> request to create the
     * account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for an create account request ID string requires "car-" followed by from 8 to 32
     * lower-case letters or digits.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier (ID) that references this request. You get this value
     * from the response of the initial <a>CreateAccount</a> request to create the
     * account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for an create account request ID string requires "car-" followed by from 8 to 32
     * lower-case letters or digits.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier (ID) that references this request. You get this value
     * from the response of the initial <a>CreateAccount</a> request to create the
     * account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for an create account request ID string requires "car-" followed by from 8 to 32
     * lower-case letters or digits.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier (ID) that references this request. You get this value
     * from the response of the initial <a>CreateAccount</a> request to create the
     * account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for an create account request ID string requires "car-" followed by from 8 to 32
     * lower-case letters or digits.</p>
     */
    inline CreateAccountStatus& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) that references this request. You get this value
     * from the response of the initial <a>CreateAccount</a> request to create the
     * account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for an create account request ID string requires "car-" followed by from 8 to 32
     * lower-case letters or digits.</p>
     */
    inline CreateAccountStatus& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) that references this request. You get this value
     * from the response of the initial <a>CreateAccount</a> request to create the
     * account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for an create account request ID string requires "car-" followed by from 8 to 32
     * lower-case letters or digits.</p>
     */
    inline CreateAccountStatus& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The account name given to the account when it was created.</p>
     */
    inline const Aws::String& GetAccountName() const{ return m_accountName; }

    /**
     * <p>The account name given to the account when it was created.</p>
     */
    inline void SetAccountName(const Aws::String& value) { m_accountNameHasBeenSet = true; m_accountName = value; }

    /**
     * <p>The account name given to the account when it was created.</p>
     */
    inline void SetAccountName(Aws::String&& value) { m_accountNameHasBeenSet = true; m_accountName = value; }

    /**
     * <p>The account name given to the account when it was created.</p>
     */
    inline void SetAccountName(const char* value) { m_accountNameHasBeenSet = true; m_accountName.assign(value); }

    /**
     * <p>The account name given to the account when it was created.</p>
     */
    inline CreateAccountStatus& WithAccountName(const Aws::String& value) { SetAccountName(value); return *this;}

    /**
     * <p>The account name given to the account when it was created.</p>
     */
    inline CreateAccountStatus& WithAccountName(Aws::String&& value) { SetAccountName(value); return *this;}

    /**
     * <p>The account name given to the account when it was created.</p>
     */
    inline CreateAccountStatus& WithAccountName(const char* value) { SetAccountName(value); return *this;}

    /**
     * <p>The status of the request.</p>
     */
    inline const CreateAccountState& GetState() const{ return m_state; }

    /**
     * <p>The status of the request.</p>
     */
    inline void SetState(const CreateAccountState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The status of the request.</p>
     */
    inline void SetState(CreateAccountState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The status of the request.</p>
     */
    inline CreateAccountStatus& WithState(const CreateAccountState& value) { SetState(value); return *this;}

    /**
     * <p>The status of the request.</p>
     */
    inline CreateAccountStatus& WithState(CreateAccountState&& value) { SetState(value); return *this;}

    /**
     * <p>The date and time that the request was made for the account creation.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedTimestamp() const{ return m_requestedTimestamp; }

    /**
     * <p>The date and time that the request was made for the account creation.</p>
     */
    inline void SetRequestedTimestamp(const Aws::Utils::DateTime& value) { m_requestedTimestampHasBeenSet = true; m_requestedTimestamp = value; }

    /**
     * <p>The date and time that the request was made for the account creation.</p>
     */
    inline void SetRequestedTimestamp(Aws::Utils::DateTime&& value) { m_requestedTimestampHasBeenSet = true; m_requestedTimestamp = value; }

    /**
     * <p>The date and time that the request was made for the account creation.</p>
     */
    inline CreateAccountStatus& WithRequestedTimestamp(const Aws::Utils::DateTime& value) { SetRequestedTimestamp(value); return *this;}

    /**
     * <p>The date and time that the request was made for the account creation.</p>
     */
    inline CreateAccountStatus& WithRequestedTimestamp(Aws::Utils::DateTime&& value) { SetRequestedTimestamp(value); return *this;}

    /**
     * <p>The date and time that the account was created and the request completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedTimestamp() const{ return m_completedTimestamp; }

    /**
     * <p>The date and time that the account was created and the request completed.</p>
     */
    inline void SetCompletedTimestamp(const Aws::Utils::DateTime& value) { m_completedTimestampHasBeenSet = true; m_completedTimestamp = value; }

    /**
     * <p>The date and time that the account was created and the request completed.</p>
     */
    inline void SetCompletedTimestamp(Aws::Utils::DateTime&& value) { m_completedTimestampHasBeenSet = true; m_completedTimestamp = value; }

    /**
     * <p>The date and time that the account was created and the request completed.</p>
     */
    inline CreateAccountStatus& WithCompletedTimestamp(const Aws::Utils::DateTime& value) { SetCompletedTimestamp(value); return *this;}

    /**
     * <p>The date and time that the account was created and the request completed.</p>
     */
    inline CreateAccountStatus& WithCompletedTimestamp(Aws::Utils::DateTime&& value) { SetCompletedTimestamp(value); return *this;}

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline CreateAccountStatus& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline CreateAccountStatus& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    /**
     * <p>If the account was created successfully, the unique identifier (ID) of the
     * new account.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a> for an account ID string requires exactly 12 digits.</p>
     */
    inline CreateAccountStatus& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    /**
     * <p>If the request failed, a description of the reason for the failure.</p>
     */
    inline const CreateAccountFailureReason& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the request failed, a description of the reason for the failure.</p>
     */
    inline void SetFailureReason(const CreateAccountFailureReason& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the request failed, a description of the reason for the failure.</p>
     */
    inline void SetFailureReason(CreateAccountFailureReason&& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the request failed, a description of the reason for the failure.</p>
     */
    inline CreateAccountStatus& WithFailureReason(const CreateAccountFailureReason& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the request failed, a description of the reason for the failure.</p>
     */
    inline CreateAccountStatus& WithFailureReason(CreateAccountFailureReason&& value) { SetFailureReason(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_accountName;
    bool m_accountNameHasBeenSet;
    CreateAccountState m_state;
    bool m_stateHasBeenSet;
    Aws::Utils::DateTime m_requestedTimestamp;
    bool m_requestedTimestampHasBeenSet;
    Aws::Utils::DateTime m_completedTimestamp;
    bool m_completedTimestampHasBeenSet;
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    CreateAccountFailureReason m_failureReason;
    bool m_failureReasonHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
