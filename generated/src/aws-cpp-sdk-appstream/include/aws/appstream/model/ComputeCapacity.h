/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/crt/cbor/Cbor.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AppStream {
namespace Model {

/**
 * <p>Describes the capacity for a fleet.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ComputeCapacity">AWS
 * API Reference</a></p>
 */
class ComputeCapacity {
 public:
  AWS_APPSTREAM_API ComputeCapacity() = default;
  AWS_APPSTREAM_API ComputeCapacity(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_APPSTREAM_API ComputeCapacity& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_APPSTREAM_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The desired number of streaming instances.</p>
   */
  inline int64_t GetDesiredInstances() const { return m_desiredInstances; }
  inline bool DesiredInstancesHasBeenSet() const { return m_desiredInstancesHasBeenSet; }
  inline void SetDesiredInstances(int64_t value) {
    m_desiredInstancesHasBeenSet = true;
    m_desiredInstances = value;
  }
  inline ComputeCapacity& WithDesiredInstances(int64_t value) {
    SetDesiredInstances(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired number of user sessions for a multi-session fleet. This is not
   * allowed for single-session fleets.</p> <p>When you create a fleet, you must set
   * either the DesiredSessions or DesiredInstances attribute, based on the type of
   * fleet you create. You can’t define both attributes or leave both attributes
   * blank.</p>
   */
  inline int64_t GetDesiredSessions() const { return m_desiredSessions; }
  inline bool DesiredSessionsHasBeenSet() const { return m_desiredSessionsHasBeenSet; }
  inline void SetDesiredSessions(int64_t value) {
    m_desiredSessionsHasBeenSet = true;
    m_desiredSessions = value;
  }
  inline ComputeCapacity& WithDesiredSessions(int64_t value) {
    SetDesiredSessions(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_desiredInstances{0};

  int64_t m_desiredSessions{0};
  bool m_desiredInstancesHasBeenSet = false;
  bool m_desiredSessionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
