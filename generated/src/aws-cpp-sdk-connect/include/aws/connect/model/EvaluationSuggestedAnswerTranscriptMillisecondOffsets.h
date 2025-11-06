/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>The milliseconds offset for transcript reference in suggested
 * answer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationSuggestedAnswerTranscriptMillisecondOffsets">AWS
 * API Reference</a></p>
 */
class EvaluationSuggestedAnswerTranscriptMillisecondOffsets {
 public:
  AWS_CONNECT_API EvaluationSuggestedAnswerTranscriptMillisecondOffsets() = default;
  AWS_CONNECT_API EvaluationSuggestedAnswerTranscriptMillisecondOffsets(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationSuggestedAnswerTranscriptMillisecondOffsets& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Offset in milliseconds from the beginning of the transcript.</p>
   */
  inline int GetBeginOffsetMillis() const { return m_beginOffsetMillis; }
  inline bool BeginOffsetMillisHasBeenSet() const { return m_beginOffsetMillisHasBeenSet; }
  inline void SetBeginOffsetMillis(int value) {
    m_beginOffsetMillisHasBeenSet = true;
    m_beginOffsetMillis = value;
  }
  inline EvaluationSuggestedAnswerTranscriptMillisecondOffsets& WithBeginOffsetMillis(int value) {
    SetBeginOffsetMillis(value);
    return *this;
  }
  ///@}
 private:
  int m_beginOffsetMillis{0};
  bool m_beginOffsetMillisHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
