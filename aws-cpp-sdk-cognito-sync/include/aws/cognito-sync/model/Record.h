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
  class AWS_COGNITOSYNC_API Record
  {
  public:
    Record();
    Record(Aws::Utils::Json::JsonView jsonValue);
    Record& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The key for the record.
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * The key for the record.
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * The key for the record.
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * The key for the record.
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * The key for the record.
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * The key for the record.
     */
    inline Record& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * The key for the record.
     */
    inline Record& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * The key for the record.
     */
    inline Record& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * The value for the record.
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * The value for the record.
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * The value for the record.
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * The value for the record.
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * The value for the record.
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * The value for the record.
     */
    inline Record& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * The value for the record.
     */
    inline Record& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * The value for the record.
     */
    inline Record& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * The server sync count for this record.
     */
    inline long long GetSyncCount() const{ return m_syncCount; }

    /**
     * The server sync count for this record.
     */
    inline bool SyncCountHasBeenSet() const { return m_syncCountHasBeenSet; }

    /**
     * The server sync count for this record.
     */
    inline void SetSyncCount(long long value) { m_syncCountHasBeenSet = true; m_syncCount = value; }

    /**
     * The server sync count for this record.
     */
    inline Record& WithSyncCount(long long value) { SetSyncCount(value); return *this;}


    /**
     * The date on which the record was last modified.
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * The date on which the record was last modified.
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * The date on which the record was last modified.
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * The date on which the record was last modified.
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * The date on which the record was last modified.
     */
    inline Record& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * The date on which the record was last modified.
     */
    inline Record& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * The user/device that made the last change to this record.
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    /**
     * The user/device that made the last change to this record.
     */
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    /**
     * The user/device that made the last change to this record.
     */
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    /**
     * The user/device that made the last change to this record.
     */
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    /**
     * The user/device that made the last change to this record.
     */
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }

    /**
     * The user/device that made the last change to this record.
     */
    inline Record& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}

    /**
     * The user/device that made the last change to this record.
     */
    inline Record& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}

    /**
     * The user/device that made the last change to this record.
     */
    inline Record& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}


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
    inline Record& WithDeviceLastModifiedDate(const Aws::Utils::DateTime& value) { SetDeviceLastModifiedDate(value); return *this;}

    /**
     * The last modified date of the client device.
     */
    inline Record& WithDeviceLastModifiedDate(Aws::Utils::DateTime&& value) { SetDeviceLastModifiedDate(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    long long m_syncCount;
    bool m_syncCountHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet;

    Aws::Utils::DateTime m_deviceLastModifiedDate;
    bool m_deviceLastModifiedDateHasBeenSet;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
