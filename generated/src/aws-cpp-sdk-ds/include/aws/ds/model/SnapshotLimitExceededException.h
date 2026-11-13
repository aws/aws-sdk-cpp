/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/DirectoryService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace DirectoryService {
namespace Model {

/**
 * <p>The maximum number of manual snapshots for the directory has been reached.
 * You can use the <a>GetSnapshotLimits</a> operation to determine the snapshot
 * limits for a directory.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/SnapshotLimitExceededException">AWS
 * API Reference</a></p>
 */
class SnapshotLimitExceededException {
 public:
  AWS_DIRECTORYSERVICE_API SnapshotLimitExceededException() = default;
  AWS_DIRECTORYSERVICE_API SnapshotLimitExceededException(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DIRECTORYSERVICE_API SnapshotLimitExceededException& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DIRECTORYSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  SnapshotLimitExceededException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  SnapshotLimitExceededException& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::String m_requestId;
  bool m_messageHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws
