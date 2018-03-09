﻿/*
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
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * An object containing the unprocessed account and a result string explaining why
   * it was unprocessed.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UnprocessedAccount">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API UnprocessedAccount
  {
  public:
    UnprocessedAccount();
    UnprocessedAccount(const Aws::Utils::Json::JsonValue& jsonValue);
    UnprocessedAccount& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * AWS Account ID.
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * AWS Account ID.
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * AWS Account ID.
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * AWS Account ID.
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * AWS Account ID.
     */
    inline UnprocessedAccount& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * AWS Account ID.
     */
    inline UnprocessedAccount& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * AWS Account ID.
     */
    inline UnprocessedAccount& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * A reason why the account hasn't been processed.
     */
    inline const Aws::String& GetResult() const{ return m_result; }

    /**
     * A reason why the account hasn't been processed.
     */
    inline void SetResult(const Aws::String& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * A reason why the account hasn't been processed.
     */
    inline void SetResult(Aws::String&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * A reason why the account hasn't been processed.
     */
    inline void SetResult(const char* value) { m_resultHasBeenSet = true; m_result.assign(value); }

    /**
     * A reason why the account hasn't been processed.
     */
    inline UnprocessedAccount& WithResult(const Aws::String& value) { SetResult(value); return *this;}

    /**
     * A reason why the account hasn't been processed.
     */
    inline UnprocessedAccount& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}

    /**
     * A reason why the account hasn't been processed.
     */
    inline UnprocessedAccount& WithResult(const char* value) { SetResult(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_result;
    bool m_resultHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
