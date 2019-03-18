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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>For an SQL-based Amazon Kinesis Data Analytics application, provides
   * additional mapping information when JSON is the record format on the streaming
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/JSONMappingParameters">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API JSONMappingParameters
  {
  public:
    JSONMappingParameters();
    JSONMappingParameters(Aws::Utils::Json::JsonView jsonValue);
    JSONMappingParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path to the top-level parent that contains the records.</p>
     */
    inline const Aws::String& GetRecordRowPath() const{ return m_recordRowPath; }

    /**
     * <p>The path to the top-level parent that contains the records.</p>
     */
    inline bool RecordRowPathHasBeenSet() const { return m_recordRowPathHasBeenSet; }

    /**
     * <p>The path to the top-level parent that contains the records.</p>
     */
    inline void SetRecordRowPath(const Aws::String& value) { m_recordRowPathHasBeenSet = true; m_recordRowPath = value; }

    /**
     * <p>The path to the top-level parent that contains the records.</p>
     */
    inline void SetRecordRowPath(Aws::String&& value) { m_recordRowPathHasBeenSet = true; m_recordRowPath = std::move(value); }

    /**
     * <p>The path to the top-level parent that contains the records.</p>
     */
    inline void SetRecordRowPath(const char* value) { m_recordRowPathHasBeenSet = true; m_recordRowPath.assign(value); }

    /**
     * <p>The path to the top-level parent that contains the records.</p>
     */
    inline JSONMappingParameters& WithRecordRowPath(const Aws::String& value) { SetRecordRowPath(value); return *this;}

    /**
     * <p>The path to the top-level parent that contains the records.</p>
     */
    inline JSONMappingParameters& WithRecordRowPath(Aws::String&& value) { SetRecordRowPath(std::move(value)); return *this;}

    /**
     * <p>The path to the top-level parent that contains the records.</p>
     */
    inline JSONMappingParameters& WithRecordRowPath(const char* value) { SetRecordRowPath(value); return *this;}

  private:

    Aws::String m_recordRowPath;
    bool m_recordRowPathHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
