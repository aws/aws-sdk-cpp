/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ivsrealtime {
namespace Model {

/**
 * <p>An object representing a redundant ingest credential.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/RedundantIngestCredential">AWS
 * API Reference</a></p>
 */
class RedundantIngestCredential {
 public:
  AWS_IVSREALTIME_API RedundantIngestCredential() = default;
  AWS_IVSREALTIME_API RedundantIngestCredential(Aws::Utils::Json::JsonView jsonValue);
  AWS_IVSREALTIME_API RedundantIngestCredential& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ID of the participant within the stage.</p>
   */
  inline const Aws::String& GetParticipantId() const { return m_participantId; }
  inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
  template <typename ParticipantIdT = Aws::String>
  void SetParticipantId(ParticipantIdT&& value) {
    m_participantIdHasBeenSet = true;
    m_participantId = std::forward<ParticipantIdT>(value);
  }
  template <typename ParticipantIdT = Aws::String>
  RedundantIngestCredential& WithParticipantId(ParticipantIdT&& value) {
    SetParticipantId(std::forward<ParticipantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Ingest-key value.</p>
   */
  inline const Aws::String& GetStreamKey() const { return m_streamKey; }
  inline bool StreamKeyHasBeenSet() const { return m_streamKeyHasBeenSet; }
  template <typename StreamKeyT = Aws::String>
  void SetStreamKey(StreamKeyT&& value) {
    m_streamKeyHasBeenSet = true;
    m_streamKey = std::forward<StreamKeyT>(value);
  }
  template <typename StreamKeyT = Aws::String>
  RedundantIngestCredential& WithStreamKey(StreamKeyT&& value) {
    SetStreamKey(std::forward<StreamKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_participantId;

  Aws::String m_streamKey;
  bool m_participantIdHasBeenSet = false;
  bool m_streamKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace ivsrealtime
}  // namespace Aws
