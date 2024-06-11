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
    AWS_COGNITOSYNC_API RecordPatch();
    AWS_COGNITOSYNC_API RecordPatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOSYNC_API RecordPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * An operation, either replace or remove.
     */
    inline const Operation& GetOp() const{ return m_op; }
    inline bool OpHasBeenSet() const { return m_opHasBeenSet; }
    inline void SetOp(const Operation& value) { m_opHasBeenSet = true; m_op = value; }
    inline void SetOp(Operation&& value) { m_opHasBeenSet = true; m_op = std::move(value); }
    inline RecordPatch& WithOp(const Operation& value) { SetOp(value); return *this;}
    inline RecordPatch& WithOp(Operation&& value) { SetOp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The key associated with the record patch.
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline RecordPatch& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline RecordPatch& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline RecordPatch& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * The value associated with the record patch.
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline RecordPatch& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline RecordPatch& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline RecordPatch& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * Last known server sync count for this record. Set to 0 if unknown.
     */
    inline long long GetSyncCount() const{ return m_syncCount; }
    inline bool SyncCountHasBeenSet() const { return m_syncCountHasBeenSet; }
    inline void SetSyncCount(long long value) { m_syncCountHasBeenSet = true; m_syncCount = value; }
    inline RecordPatch& WithSyncCount(long long value) { SetSyncCount(value); return *this;}
    ///@}

    ///@{
    /**
     * The last modified date of the client device.
     */
    inline const Aws::Utils::DateTime& GetDeviceLastModifiedDate() const{ return m_deviceLastModifiedDate; }
    inline bool DeviceLastModifiedDateHasBeenSet() const { return m_deviceLastModifiedDateHasBeenSet; }
    inline void SetDeviceLastModifiedDate(const Aws::Utils::DateTime& value) { m_deviceLastModifiedDateHasBeenSet = true; m_deviceLastModifiedDate = value; }
    inline void SetDeviceLastModifiedDate(Aws::Utils::DateTime&& value) { m_deviceLastModifiedDateHasBeenSet = true; m_deviceLastModifiedDate = std::move(value); }
    inline RecordPatch& WithDeviceLastModifiedDate(const Aws::Utils::DateTime& value) { SetDeviceLastModifiedDate(value); return *this;}
    inline RecordPatch& WithDeviceLastModifiedDate(Aws::Utils::DateTime&& value) { SetDeviceLastModifiedDate(std::move(value)); return *this;}
    ///@}
  private:

    Operation m_op;
    bool m_opHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    long long m_syncCount;
    bool m_syncCountHasBeenSet = false;

    Aws::Utils::DateTime m_deviceLastModifiedDate;
    bool m_deviceLastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
