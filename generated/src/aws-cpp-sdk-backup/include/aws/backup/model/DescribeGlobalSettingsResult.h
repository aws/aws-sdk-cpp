/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Backup
{
namespace Model
{
  class DescribeGlobalSettingsResult
  {
  public:
    AWS_BACKUP_API DescribeGlobalSettingsResult() = default;
    AWS_BACKUP_API DescribeGlobalSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeGlobalSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the flag <code>isCrossAccountBackupEnabled</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetGlobalSettings() const { return m_globalSettings; }
    template<typename GlobalSettingsT = Aws::Map<Aws::String, Aws::String>>
    void SetGlobalSettings(GlobalSettingsT&& value) { m_globalSettingsHasBeenSet = true; m_globalSettings = std::forward<GlobalSettingsT>(value); }
    template<typename GlobalSettingsT = Aws::Map<Aws::String, Aws::String>>
    DescribeGlobalSettingsResult& WithGlobalSettings(GlobalSettingsT&& value) { SetGlobalSettings(std::forward<GlobalSettingsT>(value)); return *this;}
    template<typename GlobalSettingsKeyT = Aws::String, typename GlobalSettingsValueT = Aws::String>
    DescribeGlobalSettingsResult& AddGlobalSettings(GlobalSettingsKeyT&& key, GlobalSettingsValueT&& value) {
      m_globalSettingsHasBeenSet = true; m_globalSettings.emplace(std::forward<GlobalSettingsKeyT>(key), std::forward<GlobalSettingsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The date and time that the flag <code>isCrossAccountBackupEnabled</code> was
     * last updated. This update is in Unix format and Coordinated Universal Time
     * (UTC). The value of <code>LastUpdateTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    DescribeGlobalSettingsResult& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeGlobalSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_globalSettings;
    bool m_globalSettingsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
