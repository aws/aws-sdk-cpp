/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/StopReason.h>
#include <aws/core/utils/Document.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>The stop event for a message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/MessageStopEvent">AWS
   * API Reference</a></p>
   */
  class MessageStopEvent
  {
  public:
    AWS_BEDROCKRUNTIME_API MessageStopEvent() = default;
    AWS_BEDROCKRUNTIME_API MessageStopEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API MessageStopEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reason why the model stopped generating output.</p>
     */
    inline StopReason GetStopReason() const { return m_stopReason; }
    inline bool StopReasonHasBeenSet() const { return m_stopReasonHasBeenSet; }
    inline void SetStopReason(StopReason value) { m_stopReasonHasBeenSet = true; m_stopReason = value; }
    inline MessageStopEvent& WithStopReason(StopReason value) { SetStopReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional model response fields.</p>
     */
    inline Aws::Utils::DocumentView GetAdditionalModelResponseFields() const { return m_additionalModelResponseFields; }
    inline bool AdditionalModelResponseFieldsHasBeenSet() const { return m_additionalModelResponseFieldsHasBeenSet; }
    template<typename AdditionalModelResponseFieldsT = Aws::Utils::Document>
    void SetAdditionalModelResponseFields(AdditionalModelResponseFieldsT&& value) { m_additionalModelResponseFieldsHasBeenSet = true; m_additionalModelResponseFields = std::forward<AdditionalModelResponseFieldsT>(value); }
    template<typename AdditionalModelResponseFieldsT = Aws::Utils::Document>
    MessageStopEvent& WithAdditionalModelResponseFields(AdditionalModelResponseFieldsT&& value) { SetAdditionalModelResponseFields(std::forward<AdditionalModelResponseFieldsT>(value)); return *this;}
    ///@}
  private:

    StopReason m_stopReason{StopReason::NOT_SET};
    bool m_stopReasonHasBeenSet = false;

    Aws::Utils::Document m_additionalModelResponseFields;
    bool m_additionalModelResponseFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
