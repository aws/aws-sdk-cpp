﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EFS
{
namespace Model
{

  /**
   * <p>Latest known metered size (in bytes) of data stored in the file system, in
   * its <code>Value</code> field, and the time at which that size was determined in
   * its <code>Timestamp</code> field. Note that the value does not represent the
   * size of a consistent snapshot of the file system, but it is eventually
   * consistent when there are no writes to the file system. That is, the value will
   * represent the actual size only if the file system is not modified for a period
   * longer than a couple of hours. Otherwise, the value is not necessarily the exact
   * size the file system was at any instant in time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/FileSystemSize">AWS
   * API Reference</a></p>
   */
  class AWS_EFS_API FileSystemSize
  {
  public:
    FileSystemSize();
    FileSystemSize(const Aws::Utils::Json::JsonValue& jsonValue);
    FileSystemSize& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Latest known metered size (in bytes) of data stored in the file system.</p>
     */
    inline long long GetValue() const{ return m_value; }

    /**
     * <p>Latest known metered size (in bytes) of data stored in the file system.</p>
     */
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Latest known metered size (in bytes) of data stored in the file system.</p>
     */
    inline FileSystemSize& WithValue(long long value) { SetValue(value); return *this;}

    /**
     * <p>Time at which the size of data, returned in the <code>Value</code> field, was
     * determined. The value is the integer number of seconds since
     * 1970-01-01T00:00:00Z.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Time at which the size of data, returned in the <code>Value</code> field, was
     * determined. The value is the integer number of seconds since
     * 1970-01-01T00:00:00Z.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Time at which the size of data, returned in the <code>Value</code> field, was
     * determined. The value is the integer number of seconds since
     * 1970-01-01T00:00:00Z.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Time at which the size of data, returned in the <code>Value</code> field, was
     * determined. The value is the integer number of seconds since
     * 1970-01-01T00:00:00Z.</p>
     */
    inline FileSystemSize& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>Time at which the size of data, returned in the <code>Value</code> field, was
     * determined. The value is the integer number of seconds since
     * 1970-01-01T00:00:00Z.</p>
     */
    inline FileSystemSize& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(value); return *this;}

  private:
    long long m_value;
    bool m_valueHasBeenSet;
    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
