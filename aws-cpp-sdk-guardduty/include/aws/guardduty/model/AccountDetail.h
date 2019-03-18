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
   * An object containing the member's accountId and email address.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AccountDetail">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API AccountDetail
  {
  public:
    AccountDetail();
    AccountDetail(Aws::Utils::Json::JsonView jsonValue);
    AccountDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Member account ID.
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * Member account ID.
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * Member account ID.
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * Member account ID.
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * Member account ID.
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * Member account ID.
     */
    inline AccountDetail& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * Member account ID.
     */
    inline AccountDetail& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * Member account ID.
     */
    inline AccountDetail& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * Member account's email address.
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * Member account's email address.
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * Member account's email address.
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * Member account's email address.
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * Member account's email address.
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * Member account's email address.
     */
    inline AccountDetail& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * Member account's email address.
     */
    inline AccountDetail& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * Member account's email address.
     */
    inline AccountDetail& WithEmail(const char* value) { SetEmail(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_email;
    bool m_emailHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
