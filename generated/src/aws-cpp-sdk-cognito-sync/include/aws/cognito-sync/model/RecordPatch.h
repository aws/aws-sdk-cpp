/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/model/Operation.h>
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
   * An update operation for a record.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/RecordPatch">AWS
   * API Reference</a></p>
   */
  class RecordPatch
  {
  public:
    AWS_COGNITOSYNC_API RecordPatch() = default;
    AWS_COGNITOSYNC_API RecordPatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOSYNC_API RecordPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * An operation, either replace or remove.
     */
    inline Operation GetOp() const { return m_op; }
    inline bool OpHasBeenSet() const { return m_opHasBeenSet; }
    inline void SetOp(Operation value) { m_opHasBeenSet = true; m_op = value; }
    inline RecordPatch& WithOp(Operation value) { SetOp(value); return *this;}
    ///@}

    ///@{
    /**
     * The key associated with the record patch.
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    RecordPatch& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The value associated with the record patch.
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    RecordPatch& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Last known server sync count for this record. Set to 0 if unknown.
     */
    inline long long GetSyncCount() const { return m_syncCount; }
    inline bool SyncCountHasBeenSet() const { return m_syncCountHasBeenSet; }
    inline void SetSyncCount(long long value) { m_syncCountHasBeenSet = true; m_syncCount = value; }
    inline RecordPatch& WithSyncCount(long long value) { SetSyncCount(value); return *this;}
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
    RecordPatch& WithDeviceLastModifiedDate(DeviceLastModifiedDateT&& value) { SetDeviceLastModifiedDate(std::forward<DeviceLastModifiedDateT>(value)); return *this;}
    ///@}
  private:

    Operation m_op{Operation::NOT_SET};
    bool m_opHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    long long m_syncCount{0};
    bool m_syncCountHasBeenSet = false;

    Aws::Utils::DateTime m_deviceLastModifiedDate{};
    bool m_deviceLastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
