/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class TelemetryMetadata
  {
  public:
    AWS_INSPECTOR_API TelemetryMetadata() = default;
    AWS_INSPECTOR_API TelemetryMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API TelemetryMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A specific type of behavioral data that is collected by the agent.</p>
     */
    inline const Aws::String& GetMessageType() const { return m_messageType; }
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }
    template<typename MessageTypeT = Aws::String>
    void SetMessageType(MessageTypeT&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::forward<MessageTypeT>(value); }
    template<typename MessageTypeT = Aws::String>
    TelemetryMetadata& WithMessageType(MessageTypeT&& value) { SetMessageType(std::forward<MessageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of messages that the agent sends to the Amazon Inspector
     * service.</p>
     */
    inline long long GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline TelemetryMetadata& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data size of messages that the agent sends to the Amazon Inspector
     * service.</p>
     */
    inline long long GetDataSize() const { return m_dataSize; }
    inline bool DataSizeHasBeenSet() const { return m_dataSizeHasBeenSet; }
    inline void SetDataSize(long long value) { m_dataSizeHasBeenSet = true; m_dataSize = value; }
    inline TelemetryMetadata& WithDataSize(long long value) { SetDataSize(value); return *this;}
    ///@}
  private:

    Aws::String m_messageType;
    bool m_messageTypeHasBeenSet = false;

    long long m_count{0};
    bool m_countHasBeenSet = false;

    long long m_dataSize{0};
    bool m_dataSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
