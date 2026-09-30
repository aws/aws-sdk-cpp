/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/IncludePayload.h>
#include <aws/eventbridgev2/model/LogLevel.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>Log configuration for a subscriber.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/LogConfiguration">AWS
 * API Reference</a></p>
 */
class LogConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API LogConfiguration() = default;
  AWS_EVENTBRIDGEV2_API LogConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API LogConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Minimum log level. Records below this level are not emitted. Defaults to
   * OFF.</p>
   */
  inline LogLevel GetLevel() const { return m_level; }
  inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
  inline void SetLevel(LogLevel value) {
    m_levelHasBeenSet = true;
    m_level = value;
  }
  inline LogConfiguration& WithLevel(LogLevel value) {
    SetLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the customer event payload is embedded in log records. Defaults to
   * ON_ERROR_ONLY.</p>
   */
  inline IncludePayload GetIncludePayload() const { return m_includePayload; }
  inline bool IncludePayloadHasBeenSet() const { return m_includePayloadHasBeenSet; }
  inline void SetIncludePayload(IncludePayload value) {
    m_includePayloadHasBeenSet = true;
    m_includePayload = value;
  }
  inline LogConfiguration& WithIncludePayload(IncludePayload value) {
    SetIncludePayload(value);
    return *this;
  }
  ///@}
 private:
  LogLevel m_level{LogLevel::NOT_SET};

  IncludePayload m_includePayload{IncludePayload::NOT_SET};
  bool m_levelHasBeenSet = false;
  bool m_includePayloadHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
