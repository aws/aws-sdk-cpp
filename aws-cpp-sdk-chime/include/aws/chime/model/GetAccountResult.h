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
#include <aws/chime/model/Account.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API GetAccountResult
  {
  public:
    GetAccountResult();
    GetAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Chime account details.</p>
     */
    inline const Account& GetAccount() const{ return m_account; }

    /**
     * <p>The Amazon Chime account details.</p>
     */
    inline void SetAccount(const Account& value) { m_account = value; }

    /**
     * <p>The Amazon Chime account details.</p>
     */
    inline void SetAccount(Account&& value) { m_account = std::move(value); }

    /**
     * <p>The Amazon Chime account details.</p>
     */
    inline GetAccountResult& WithAccount(const Account& value) { SetAccount(value); return *this;}

    /**
     * <p>The Amazon Chime account details.</p>
     */
    inline GetAccountResult& WithAccount(Account&& value) { SetAccount(std::move(value)); return *this;}

  private:

    Account m_account;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
