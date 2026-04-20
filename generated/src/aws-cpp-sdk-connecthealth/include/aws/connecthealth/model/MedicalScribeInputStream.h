/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/MedicalScribeAudioEvent.h>
#include <aws/connecthealth/model/MedicalScribeConfigurationEvent.h>
#include <aws/connecthealth/model/MedicalScribeSessionControlEvent.h>
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/utils/stream/HttpWriteDataStreamBuf.h>

#include <utility>

namespace Aws {
namespace ConnectHealth {
namespace Model {

/**
 * <p>Input stream for Medical Scribe containing audio and configuration
 * events</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalScribeInputStream">AWS
 * API Reference</a></p>
 */
class AWS_CONNECTHEALTH_API MedicalScribeInputStream : public Aws::Utils::Event::EventEncoderStream {
 public:
  MedicalScribeInputStream() = default;
  explicit MedicalScribeInputStream(std::shared_ptr<Aws::Utils::Stream::HttpWriteDataStreamBuf> streambuf)
      : Aws::Utils::Event::EventEncoderStream(std::move(streambuf)) {}
  MedicalScribeInputStream& WriteMedicalScribeAudioEvent(const MedicalScribeAudioEvent& value) {
    Aws::Utils::Event::Message msg;
    msg.InsertEventHeader(":message-type", Aws::String("event"));
    msg.InsertEventHeader(":event-type", Aws::String("audioEvent"));
    msg.InsertEventHeader(":content-type", Aws::String("application/json"));
    msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
    WriteEvent(msg);
    return *this;
  }
  MedicalScribeInputStream& WriteMedicalScribeSessionControlEvent(const MedicalScribeSessionControlEvent& value) {
    Aws::Utils::Event::Message msg;
    msg.InsertEventHeader(":message-type", Aws::String("event"));
    msg.InsertEventHeader(":event-type", Aws::String("sessionControlEvent"));
    msg.InsertEventHeader(":content-type", Aws::String("application/json"));
    msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
    WriteEvent(msg);
    return *this;
  }
  MedicalScribeInputStream& WriteMedicalScribeConfigurationEvent(const MedicalScribeConfigurationEvent& value) {
    Aws::Utils::Event::Message msg;
    msg.InsertEventHeader(":message-type", Aws::String("event"));
    msg.InsertEventHeader(":event-type", Aws::String("configurationEvent"));
    msg.InsertEventHeader(":content-type", Aws::String("application/json"));
    msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
    WriteEvent(msg);
    return *this;
  }
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
