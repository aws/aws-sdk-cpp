/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/SessionConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Contains the configuration for a dataset.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DatasetConfig">AWS
 * API Reference</a></p>
 */
class DatasetConfig {
 public:
  AWS_IOTSITEWISE_API DatasetConfig() = default;
  AWS_IOTSITEWISE_API DatasetConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API DatasetConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The session configuration for a session-type dataset.</p>
   */
  inline const SessionConfig& GetSession() const { return m_session; }
  inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }
  template <typename SessionT = SessionConfig>
  void SetSession(SessionT&& value) {
    m_sessionHasBeenSet = true;
    m_session = std::forward<SessionT>(value);
  }
  template <typename SessionT = SessionConfig>
  DatasetConfig& WithSession(SessionT&& value) {
    SetSession(std::forward<SessionT>(value));
    return *this;
  }
  ///@}
 private:
  SessionConfig m_session;
  bool m_sessionHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
