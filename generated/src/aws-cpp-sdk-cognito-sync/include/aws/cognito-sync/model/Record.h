/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace CognitoSync
{
namespace Model
{

  /**
   * The basic data structure of a dataset.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/Record">AWS
   * API Reference</a></p>
   */
  class Record
  {
  public:
    AWS_COGNITOSYNC_API Record() = default;
    AWS_COGNITOSYNC_API Record(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOSYNC_API Record& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The key for the record.
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    Record& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The value for the record.
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Record& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The server sync count for this record.
     */
    inline long long GetSyncCount() const { return m_syncCount; }
    inline bool SyncCountHasBeenSet() const { return m_syncCountHasBeenSet; }
    inline void SetSyncCount(long long value) { m_syncCountHasBeenSet = true; m_syncCount = value; }
    inline Record& WithSyncCount(long long value) { SetSyncCount(value); return *this;}
    ///@}

    ///@{
    /**
     * The date on which the record was last modified.
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    Record& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The user/device that made the last change to this record.
     */
    inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    template<typename LastModifiedByT = Aws::String>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = Aws::String>
    Record& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The last modified date of the client device.
     */
    inline const Aws::Utils::DateTime& GetDeviceLastModifiedDate() const { return m_deviceLastModifiedDate; }
    inline bool DeviceLastModifiedDateHasBeenSet() const { return m_deviceLastModifiedDateHasBeenSet; }
    template<typename DeviceLastModifiedDateT = Aws::Utils::DateTime>
    void SetDeviceLastModifiedDate(DeviceLastModifiedDateT&& value) { m_deviceLastModifiedDateHasBeenSet = true; m_deviceLastModifiedDate = std::forward<DeviceLastModifiedDateT>(value); }
    template<typename DeviceLastModifiedDateT = Aws::Utils::DateTime>
    Record& WithDeviceLastModifiedDate(DeviceLastModifiedDateT&& value) { SetDeviceLastModifiedDate(std::forward<DeviceLastModifiedDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    long long m_syncCount{0};
    bool m_syncCountHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_deviceLastModifiedDate{};
    bool m_deviceLastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
