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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/AccountSettings.h>

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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the account settings return values from the
   * <code>GetAccountSettings</code> request.</p>
   */
  class AWS_DEVICEFARM_API GetAccountSettingsResult
  {
  public:
    GetAccountSettingsResult();
    GetAccountSettingsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAccountSettingsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const AccountSettings& GetAccountSettings() const{ return m_accountSettings; }

    
    inline void SetAccountSettings(const AccountSettings& value) { m_accountSettings = value; }

    
    inline void SetAccountSettings(AccountSettings&& value) { m_accountSettings = value; }

    
    inline GetAccountSettingsResult& WithAccountSettings(const AccountSettings& value) { SetAccountSettings(value); return *this;}

    
    inline GetAccountSettingsResult& WithAccountSettings(AccountSettings&& value) { SetAccountSettings(value); return *this;}

  private:
    AccountSettings m_accountSettings;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
