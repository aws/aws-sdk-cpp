/*
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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Provides additional mapping information when JSON is the record format on the
   * streaming source.</p>
   */
  class AWS_KINESISANALYTICS_API JSONMappingParameters
  {
  public:
    JSONMappingParameters();
    JSONMappingParameters(const Aws::Utils::Json::JsonValue& jsonValue);
    JSONMappingParameters& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Path to the top-level parent that contains the records.</p> <p>For example,
     * consider the following JSON record:</p> <p>In the <code>RecordRowPath</code>,
     * <code>"$"</code> refers to the root and path <code>"$.vehicle.Model"</code>
     * refers to the specific <code>"Model"</code> key in the JSON.</p>
     */
    inline const Aws::String& GetRecordRowPath() const{ return m_recordRowPath; }

    /**
     * <p>Path to the top-level parent that contains the records.</p> <p>For example,
     * consider the following JSON record:</p> <p>In the <code>RecordRowPath</code>,
     * <code>"$"</code> refers to the root and path <code>"$.vehicle.Model"</code>
     * refers to the specific <code>"Model"</code> key in the JSON.</p>
     */
    inline void SetRecordRowPath(const Aws::String& value) { m_recordRowPathHasBeenSet = true; m_recordRowPath = value; }

    /**
     * <p>Path to the top-level parent that contains the records.</p> <p>For example,
     * consider the following JSON record:</p> <p>In the <code>RecordRowPath</code>,
     * <code>"$"</code> refers to the root and path <code>"$.vehicle.Model"</code>
     * refers to the specific <code>"Model"</code> key in the JSON.</p>
     */
    inline void SetRecordRowPath(Aws::String&& value) { m_recordRowPathHasBeenSet = true; m_recordRowPath = value; }

    /**
     * <p>Path to the top-level parent that contains the records.</p> <p>For example,
     * consider the following JSON record:</p> <p>In the <code>RecordRowPath</code>,
     * <code>"$"</code> refers to the root and path <code>"$.vehicle.Model"</code>
     * refers to the specific <code>"Model"</code> key in the JSON.</p>
     */
    inline void SetRecordRowPath(const char* value) { m_recordRowPathHasBeenSet = true; m_recordRowPath.assign(value); }

    /**
     * <p>Path to the top-level parent that contains the records.</p> <p>For example,
     * consider the following JSON record:</p> <p>In the <code>RecordRowPath</code>,
     * <code>"$"</code> refers to the root and path <code>"$.vehicle.Model"</code>
     * refers to the specific <code>"Model"</code> key in the JSON.</p>
     */
    inline JSONMappingParameters& WithRecordRowPath(const Aws::String& value) { SetRecordRowPath(value); return *this;}

    /**
     * <p>Path to the top-level parent that contains the records.</p> <p>For example,
     * consider the following JSON record:</p> <p>In the <code>RecordRowPath</code>,
     * <code>"$"</code> refers to the root and path <code>"$.vehicle.Model"</code>
     * refers to the specific <code>"Model"</code> key in the JSON.</p>
     */
    inline JSONMappingParameters& WithRecordRowPath(Aws::String&& value) { SetRecordRowPath(value); return *this;}

    /**
     * <p>Path to the top-level parent that contains the records.</p> <p>For example,
     * consider the following JSON record:</p> <p>In the <code>RecordRowPath</code>,
     * <code>"$"</code> refers to the root and path <code>"$.vehicle.Model"</code>
     * refers to the specific <code>"Model"</code> key in the JSON.</p>
     */
    inline JSONMappingParameters& WithRecordRowPath(const char* value) { SetRecordRowPath(value); return *this;}

  private:
    Aws::String m_recordRowPath;
    bool m_recordRowPathHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
