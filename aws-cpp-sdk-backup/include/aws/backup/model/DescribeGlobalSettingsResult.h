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
    AWS_BACKUP_API DescribeGlobalSettingsResult();
    AWS_BACKUP_API DescribeGlobalSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeGlobalSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the flag <code>isCrossAccountBackupEnabled</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetGlobalSettings() const{ return m_globalSettings; }

    /**
     * <p>The status of the flag <code>isCrossAccountBackupEnabled</code>.</p>
     */
    inline void SetGlobalSettings(const Aws::Map<Aws::String, Aws::String>& value) { m_globalSettings = value; }

    /**
     * <p>The status of the flag <code>isCrossAccountBackupEnabled</code>.</p>
     */
    inline void SetGlobalSettings(Aws::Map<Aws::String, Aws::String>&& value) { m_globalSettings = std::move(value); }

    /**
     * <p>The status of the flag <code>isCrossAccountBackupEnabled</code>.</p>
     */
    inline DescribeGlobalSettingsResult& WithGlobalSettings(const Aws::Map<Aws::String, Aws::String>& value) { SetGlobalSettings(value); return *this;}

    /**
     * <p>The status of the flag <code>isCrossAccountBackupEnabled</code>.</p>
     */
    inline DescribeGlobalSettingsResult& WithGlobalSettings(Aws::Map<Aws::String, Aws::String>&& value) { SetGlobalSettings(std::move(value)); return *this;}

    /**
     * <p>The status of the flag <code>isCrossAccountBackupEnabled</code>.</p>
     */
    inline DescribeGlobalSettingsResult& AddGlobalSettings(const Aws::String& key, const Aws::String& value) { m_globalSettings.emplace(key, value); return *this; }

    /**
     * <p>The status of the flag <code>isCrossAccountBackupEnabled</code>.</p>
     */
    inline DescribeGlobalSettingsResult& AddGlobalSettings(Aws::String&& key, const Aws::String& value) { m_globalSettings.emplace(std::move(key), value); return *this; }

    /**
     * <p>The status of the flag <code>isCrossAccountBackupEnabled</code>.</p>
     */
    inline DescribeGlobalSettingsResult& AddGlobalSettings(const Aws::String& key, Aws::String&& value) { m_globalSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The status of the flag <code>isCrossAccountBackupEnabled</code>.</p>
     */
    inline DescribeGlobalSettingsResult& AddGlobalSettings(Aws::String&& key, Aws::String&& value) { m_globalSettings.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The status of the flag <code>isCrossAccountBackupEnabled</code>.</p>
     */
    inline DescribeGlobalSettingsResult& AddGlobalSettings(const char* key, Aws::String&& value) { m_globalSettings.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The status of the flag <code>isCrossAccountBackupEnabled</code>.</p>
     */
    inline DescribeGlobalSettingsResult& AddGlobalSettings(Aws::String&& key, const char* value) { m_globalSettings.emplace(std::move(key), value); return *this; }

    /**
     * <p>The status of the flag <code>isCrossAccountBackupEnabled</code>.</p>
     */
    inline DescribeGlobalSettingsResult& AddGlobalSettings(const char* key, const char* value) { m_globalSettings.emplace(key, value); return *this; }


    /**
     * <p>The date and time that the flag <code>isCrossAccountBackupEnabled</code> was
     * last updated. This update is in Unix format and Coordinated Universal Time
     * (UTC). The value of <code>LastUpdateTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The date and time that the flag <code>isCrossAccountBackupEnabled</code> was
     * last updated. This update is in Unix format and Coordinated Universal Time
     * (UTC). The value of <code>LastUpdateTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTime = value; }

    /**
     * <p>The date and time that the flag <code>isCrossAccountBackupEnabled</code> was
     * last updated. This update is in Unix format and Coordinated Universal Time
     * (UTC). The value of <code>LastUpdateTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTime = std::move(value); }

    /**
     * <p>The date and time that the flag <code>isCrossAccountBackupEnabled</code> was
     * last updated. This update is in Unix format and Coordinated Universal Time
     * (UTC). The value of <code>LastUpdateTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline DescribeGlobalSettingsResult& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The date and time that the flag <code>isCrossAccountBackupEnabled</code> was
     * last updated. This update is in Unix format and Coordinated Universal Time
     * (UTC). The value of <code>LastUpdateTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline DescribeGlobalSettingsResult& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_globalSettings;

    Aws::Utils::DateTime m_lastUpdateTime;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
