﻿/*
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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/AccountLimit.h>
#include <aws/lambda/model/AccountUsage.h>

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
namespace Lambda
{
namespace Model
{
  class AWS_LAMBDA_API GetAccountSettingsResult
  {
  public:
    GetAccountSettingsResult();
    GetAccountSettingsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAccountSettingsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const AccountLimit& GetAccountLimit() const{ return m_accountLimit; }

    
    inline void SetAccountLimit(const AccountLimit& value) { m_accountLimit = value; }

    
    inline void SetAccountLimit(AccountLimit&& value) { m_accountLimit = value; }

    
    inline GetAccountSettingsResult& WithAccountLimit(const AccountLimit& value) { SetAccountLimit(value); return *this;}

    
    inline GetAccountSettingsResult& WithAccountLimit(AccountLimit&& value) { SetAccountLimit(value); return *this;}

    
    inline const AccountUsage& GetAccountUsage() const{ return m_accountUsage; }

    
    inline void SetAccountUsage(const AccountUsage& value) { m_accountUsage = value; }

    
    inline void SetAccountUsage(AccountUsage&& value) { m_accountUsage = value; }

    
    inline GetAccountSettingsResult& WithAccountUsage(const AccountUsage& value) { SetAccountUsage(value); return *this;}

    
    inline GetAccountSettingsResult& WithAccountUsage(AccountUsage&& value) { SetAccountUsage(value); return *this;}

  private:
    AccountLimit m_accountLimit;
    AccountUsage m_accountUsage;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
