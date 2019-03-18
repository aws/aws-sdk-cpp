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
  class AWS_COGNITOSYNC_API RecordPatch
  {
  public:
    RecordPatch();
    RecordPatch(Aws::Utils::Json::JsonView jsonValue);
    RecordPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * An operation, either replace or remove.
     */
    inline const Operation& GetOp() const{ return m_op; }

    /**
     * An operation, either replace or remove.
     */
    inline bool OpHasBeenSet() const { return m_opHasBeenSet; }

    /**
     * An operation, either replace or remove.
     */
    inline void SetOp(const Operation& value) { m_opHasBeenSet = true; m_op = value; }

    /**
     * An operation, either replace or remove.
     */
    inline void SetOp(Operation&& value) { m_opHasBeenSet = true; m_op = std::move(value); }

    /**
     * An operation, either replace or remove.
     */
    inline RecordPatch& WithOp(const Operation& value) { SetOp(value); return *this;}

    /**
     * An operation, either replace or remove.
     */
    inline RecordPatch& WithOp(Operation&& value) { SetOp(std::move(value)); return *this;}


    /**
     * The key associated with the record patch.
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * The key associated with the record patch.
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * The key associated with the record patch.
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * The key associated with the record patch.
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * The key associated with the record patch.
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * The key associated with the record patch.
     */
    inline RecordPatch& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * The key associated with the record patch.
     */
    inline RecordPatch& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * The key associated with the record patch.
     */
    inline RecordPatch& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * The value associated with the record patch.
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * The value associated with the record patch.
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * The value associated with the record patch.
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * The value associated with the record patch.
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * The value associated with the record patch.
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * The value associated with the record patch.
     */
    inline RecordPatch& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * The value associated with the record patch.
     */
    inline RecordPatch& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * The value associated with the record patch.
     */
    inline RecordPatch& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * Last known server sync count for this record. Set to 0 if unknown.
     */
    inline long long GetSyncCount() const{ return m_syncCount; }

    /**
     * Last known server sync count for this record. Set to 0 if unknown.
     */
    inline bool SyncCountHasBeenSet() const { return m_syncCountHasBeenSet; }

    /**
     * Last known server sync count for this record. Set to 0 if unknown.
     */
    inline void SetSyncCount(long long value) { m_syncCountHasBeenSet = true; m_syncCount = value; }

    /**
     * Last known server sync count for this record. Set to 0 if unknown.
     */
    inline RecordPatch& WithSyncCount(long long value) { SetSyncCount(value); return *this;}


    /**
     * The last modified date of the client device.
     */
    inline const Aws::Utils::DateTime& GetDeviceLastModifiedDate() const{ return m_deviceLastModifiedDate; }

    /**
     * The last modified date of the client device.
     */
    inline bool DeviceLastModifiedDateHasBeenSet() const { return m_deviceLastModifiedDateHasBeenSet; }

    /**
     * The last modified date of the client device.
     */
    inline void SetDeviceLastModifiedDate(const Aws::Utils::DateTime& value) { m_deviceLastModifiedDateHasBeenSet = true; m_deviceLastModifiedDate = value; }

    /**
     * The last modified date of the client device.
     */
    inline void SetDeviceLastModifiedDate(Aws::Utils::DateTime&& value) { m_deviceLastModifiedDateHasBeenSet = true; m_deviceLastModifiedDate = std::move(value); }

    /**
     * The last modified date of the client device.
     */
    inline RecordPatch& WithDeviceLastModifiedDate(const Aws::Utils::DateTime& value) { SetDeviceLastModifiedDate(value); return *this;}

    /**
     * The last modified date of the client device.
     */
    inline RecordPatch& WithDeviceLastModifiedDate(Aws::Utils::DateTime&& value) { SetDeviceLastModifiedDate(std::move(value)); return *this;}

  private:

    Operation m_op;
    bool m_opHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    long long m_syncCount;
    bool m_syncCountHasBeenSet;

    Aws::Utils::DateTime m_deviceLastModifiedDate;
    bool m_deviceLastModifiedDateHasBeenSet;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
