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
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>The metadata about the Amazon Inspector application data metrics collected by
   * the agent. This data type is used as the response element in the
   * <a>GetTelemetryMetadata</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/TelemetryMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR_API TelemetryMetadata
  {
  public:
    TelemetryMetadata();
    TelemetryMetadata(Aws::Utils::Json::JsonView jsonValue);
    TelemetryMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A specific type of behavioral data that is collected by the agent.</p>
     */
    inline const Aws::String& GetMessageType() const{ return m_messageType; }

    /**
     * <p>A specific type of behavioral data that is collected by the agent.</p>
     */
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }

    /**
     * <p>A specific type of behavioral data that is collected by the agent.</p>
     */
    inline void SetMessageType(const Aws::String& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * <p>A specific type of behavioral data that is collected by the agent.</p>
     */
    inline void SetMessageType(Aws::String&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }

    /**
     * <p>A specific type of behavioral data that is collected by the agent.</p>
     */
    inline void SetMessageType(const char* value) { m_messageTypeHasBeenSet = true; m_messageType.assign(value); }

    /**
     * <p>A specific type of behavioral data that is collected by the agent.</p>
     */
    inline TelemetryMetadata& WithMessageType(const Aws::String& value) { SetMessageType(value); return *this;}

    /**
     * <p>A specific type of behavioral data that is collected by the agent.</p>
     */
    inline TelemetryMetadata& WithMessageType(Aws::String&& value) { SetMessageType(std::move(value)); return *this;}

    /**
     * <p>A specific type of behavioral data that is collected by the agent.</p>
     */
    inline TelemetryMetadata& WithMessageType(const char* value) { SetMessageType(value); return *this;}


    /**
     * <p>The count of messages that the agent sends to the Amazon Inspector
     * service.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>The count of messages that the agent sends to the Amazon Inspector
     * service.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The count of messages that the agent sends to the Amazon Inspector
     * service.</p>
     */
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The count of messages that the agent sends to the Amazon Inspector
     * service.</p>
     */
    inline TelemetryMetadata& WithCount(long long value) { SetCount(value); return *this;}


    /**
     * <p>The data size of messages that the agent sends to the Amazon Inspector
     * service.</p>
     */
    inline long long GetDataSize() const{ return m_dataSize; }

    /**
     * <p>The data size of messages that the agent sends to the Amazon Inspector
     * service.</p>
     */
    inline bool DataSizeHasBeenSet() const { return m_dataSizeHasBeenSet; }

    /**
     * <p>The data size of messages that the agent sends to the Amazon Inspector
     * service.</p>
     */
    inline void SetDataSize(long long value) { m_dataSizeHasBeenSet = true; m_dataSize = value; }

    /**
     * <p>The data size of messages that the agent sends to the Amazon Inspector
     * service.</p>
     */
    inline TelemetryMetadata& WithDataSize(long long value) { SetDataSize(value); return *this;}

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
