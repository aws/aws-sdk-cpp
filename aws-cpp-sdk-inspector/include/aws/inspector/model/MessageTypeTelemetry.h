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
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>This data type is used in the <a>Telemetry</a> data type.</p> <p>This is
   * metadata about the behavioral data collected by the Inspector agent on your EC2
   * instances during an assessment and passed to the Inspector service for analysis.
   * </p>
   */
  class AWS_INSPECTOR_API MessageTypeTelemetry
  {
  public:
    MessageTypeTelemetry();
    MessageTypeTelemetry(const Aws::Utils::Json::JsonValue& jsonValue);
    MessageTypeTelemetry& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A specific type of behavioral data that is collected by the agent.</p>
     */
    inline const Aws::String& GetMessageType() const{ return m_messageType; }

    /**
     * <p>A specific type of behavioral data that is collected by the agent.</p>
     */
    inline void SetMessageType(const Aws::String& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * <p>A specific type of behavioral data that is collected by the agent.</p>
     */
    inline void SetMessageType(Aws::String&& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * <p>A specific type of behavioral data that is collected by the agent.</p>
     */
    inline void SetMessageType(const char* value) { m_messageTypeHasBeenSet = true; m_messageType.assign(value); }

    /**
     * <p>A specific type of behavioral data that is collected by the agent.</p>
     */
    inline MessageTypeTelemetry& WithMessageType(const Aws::String& value) { SetMessageType(value); return *this;}

    /**
     * <p>A specific type of behavioral data that is collected by the agent.</p>
     */
    inline MessageTypeTelemetry& WithMessageType(Aws::String&& value) { SetMessageType(value); return *this;}

    /**
     * <p>A specific type of behavioral data that is collected by the agent.</p>
     */
    inline MessageTypeTelemetry& WithMessageType(const char* value) { SetMessageType(value); return *this;}

    /**
     * <p>The number of times that the behavioral data is collected by the agent during
     * an assessment.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>The number of times that the behavioral data is collected by the agent during
     * an assessment.</p>
     */
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of times that the behavioral data is collected by the agent during
     * an assessment.</p>
     */
    inline MessageTypeTelemetry& WithCount(long long value) { SetCount(value); return *this;}

    /**
     * <p>The total size of the behavioral data that is collected by the agent during
     * an assessment.</p>
     */
    inline long long GetDataSize() const{ return m_dataSize; }

    /**
     * <p>The total size of the behavioral data that is collected by the agent during
     * an assessment.</p>
     */
    inline void SetDataSize(long long value) { m_dataSizeHasBeenSet = true; m_dataSize = value; }

    /**
     * <p>The total size of the behavioral data that is collected by the agent during
     * an assessment.</p>
     */
    inline MessageTypeTelemetry& WithDataSize(long long value) { SetDataSize(value); return *this;}

  private:
    Aws::String m_messageType;
    bool m_messageTypeHasBeenSet;
    long long m_count;
    bool m_countHasBeenSet;
    long long m_dataSize;
    bool m_dataSizeHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
