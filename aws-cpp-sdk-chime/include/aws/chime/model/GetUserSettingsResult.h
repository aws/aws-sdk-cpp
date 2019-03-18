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
#include <aws/chime/model/UserSettings.h>
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
  class AWS_CHIME_API GetUserSettingsResult
  {
  public:
    GetUserSettingsResult();
    GetUserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetUserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user settings.</p>
     */
    inline const UserSettings& GetUserSettings() const{ return m_userSettings; }

    /**
     * <p>The user settings.</p>
     */
    inline void SetUserSettings(const UserSettings& value) { m_userSettings = value; }

    /**
     * <p>The user settings.</p>
     */
    inline void SetUserSettings(UserSettings&& value) { m_userSettings = std::move(value); }

    /**
     * <p>The user settings.</p>
     */
    inline GetUserSettingsResult& WithUserSettings(const UserSettings& value) { SetUserSettings(value); return *this;}

    /**
     * <p>The user settings.</p>
     */
    inline GetUserSettingsResult& WithUserSettings(UserSettings&& value) { SetUserSettings(std::move(value)); return *this;}

  private:

    UserSettings m_userSettings;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
