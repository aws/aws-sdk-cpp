/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/AppInstanceRetentionSettings.h>
#include <aws/core/utils/DateTime.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{
  class GetAppInstanceRetentionSettingsResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API GetAppInstanceRetentionSettingsResult() = default;
    AWS_CHIMESDKIDENTITY_API GetAppInstanceRetentionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API GetAppInstanceRetentionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The retention settings for the <code>AppInstance</code>.</p>
     */
    inline const AppInstanceRetentionSettings& GetAppInstanceRetentionSettings() const { return m_appInstanceRetentionSettings; }
    template<typename AppInstanceRetentionSettingsT = AppInstanceRetentionSettings>
    void SetAppInstanceRetentionSettings(AppInstanceRetentionSettingsT&& value) { m_appInstanceRetentionSettingsHasBeenSet = true; m_appInstanceRetentionSettings = std::forward<AppInstanceRetentionSettingsT>(value); }
    template<typename AppInstanceRetentionSettingsT = AppInstanceRetentionSettings>
    GetAppInstanceRetentionSettingsResult& WithAppInstanceRetentionSettings(AppInstanceRetentionSettingsT&& value) { SetAppInstanceRetentionSettings(std::forward<AppInstanceRetentionSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp representing the time at which the specified items are
     * retained, in Epoch Seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiateDeletionTimestamp() const { return m_initiateDeletionTimestamp; }
    template<typename InitiateDeletionTimestampT = Aws::Utils::DateTime>
    void SetInitiateDeletionTimestamp(InitiateDeletionTimestampT&& value) { m_initiateDeletionTimestampHasBeenSet = true; m_initiateDeletionTimestamp = std::forward<InitiateDeletionTimestampT>(value); }
    template<typename InitiateDeletionTimestampT = Aws::Utils::DateTime>
    GetAppInstanceRetentionSettingsResult& WithInitiateDeletionTimestamp(InitiateDeletionTimestampT&& value) { SetInitiateDeletionTimestamp(std::forward<InitiateDeletionTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAppInstanceRetentionSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AppInstanceRetentionSettings m_appInstanceRetentionSettings;
    bool m_appInstanceRetentionSettingsHasBeenSet = false;

    Aws::Utils::DateTime m_initiateDeletionTimestamp{};
    bool m_initiateDeletionTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
