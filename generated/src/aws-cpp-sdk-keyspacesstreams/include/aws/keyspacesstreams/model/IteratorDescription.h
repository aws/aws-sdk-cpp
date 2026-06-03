/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/keyspacesstreams/model/IteratorPosition.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace KeyspacesStreams {
namespace Model {

/**
 * <p>Provides information about the current iterator.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/keyspacesstreams-2024-09-09/IteratorDescription">AWS
 * API Reference</a></p>
 */
class IteratorDescription {
 public:
  AWS_KEYSPACESSTREAMS_API IteratorDescription() = default;
  AWS_KEYSPACESSTREAMS_API IteratorDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_KEYSPACESSTREAMS_API IteratorDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KEYSPACESSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Indicates the current iterator's position within the shard. The possible
   * values are: </p> <ul> <li> <p> <code>AT_TIP</code> - No more records are
   * currently available.</p> </li> <li> <p> <code>BEHIND_TIP</code> - Additional
   * records may be available.</p> </li> </ul> <p>Stream progresses in absence of
   * customer records. <code>BEHIND_TIP</code> with an empty
   * <code>changeRecords</code> list indicates the stream is progressing but no
   * customer records are available at this position. Continue polling normally.</p>
   */
  inline IteratorPosition GetIteratorPosition() const { return m_iteratorPosition; }
  inline bool IteratorPositionHasBeenSet() const { return m_iteratorPositionHasBeenSet; }
  inline void SetIteratorPosition(IteratorPosition value) {
    m_iteratorPositionHasBeenSet = true;
    m_iteratorPosition = value;
  }
  inline IteratorDescription& WithIteratorPosition(IteratorPosition value) {
    SetIteratorPosition(value);
    return *this;
  }
  ///@}
 private:
  IteratorPosition m_iteratorPosition{IteratorPosition::NOT_SET};
  bool m_iteratorPositionHasBeenSet = false;
};

}  // namespace Model
}  // namespace KeyspacesStreams
}  // namespace Aws
