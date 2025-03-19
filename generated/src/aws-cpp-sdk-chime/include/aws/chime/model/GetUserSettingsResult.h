/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/UserSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetUserSettingsResult
  {
  public:
    AWS_CHIME_API GetUserSettingsResult() = default;
    AWS_CHIME_API GetUserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetUserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user settings.</p>
     */
    inline const UserSettings& GetUserSettings() const { return m_userSettings; }
    template<typename UserSettingsT = UserSettings>
    void SetUserSettings(UserSettingsT&& value) { m_userSettingsHasBeenSet = true; m_userSettings = std::forward<UserSettingsT>(value); }
    template<typename UserSettingsT = UserSettings>
    GetUserSettingsResult& WithUserSettings(UserSettingsT&& value) { SetUserSettings(std::forward<UserSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUserSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    UserSettings m_userSettings;
    bool m_userSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
