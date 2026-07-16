/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Artifact {
namespace Model {

/**
 * <p>A versioned snapshot of a response edit.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/ResponseVersion">AWS
 * API Reference</a></p>
 */
class ResponseVersion {
 public:
  AWS_ARTIFACT_API ResponseVersion() = default;
  AWS_ARTIFACT_API ResponseVersion(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARTIFACT_API ResponseVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The response text for this version.</p>
   */
  inline const Aws::String& GetResponseText() const { return m_responseText; }
  inline bool ResponseTextHasBeenSet() const { return m_responseTextHasBeenSet; }
  template <typename ResponseTextT = Aws::String>
  void SetResponseText(ResponseTextT&& value) {
    m_responseTextHasBeenSet = true;
    m_responseText = std::forward<ResponseTextT>(value);
  }
  template <typename ResponseTextT = Aws::String>
  ResponseVersion& WithResponseText(ResponseTextT&& value) {
    SetResponseText(std::forward<ResponseTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ISO 8601 timestamp of when this edit was made.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  ResponseVersion& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_responseText;

  Aws::Utils::DateTime m_timestamp{};
  bool m_responseTextHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
