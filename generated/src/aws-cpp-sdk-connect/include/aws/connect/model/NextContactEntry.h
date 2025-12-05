/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/NextContactMetadata.h>
#include <aws/connect/model/NextContactType.h>

#include <utility>

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
 * <p> Entry representing the next contact in a sequence. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/NextContactEntry">AWS
 * API Reference</a></p>
 */
class NextContactEntry {
 public:
  AWS_CONNECT_API NextContactEntry() = default;
  AWS_CONNECT_API NextContactEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API NextContactEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The type of the next contact entry. </p>
   */
  inline NextContactType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(NextContactType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline NextContactEntry& WithType(NextContactType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Metadata for the next contact entry. </p>
   */
  inline const NextContactMetadata& GetNextContactMetadata() const { return m_nextContactMetadata; }
  inline bool NextContactMetadataHasBeenSet() const { return m_nextContactMetadataHasBeenSet; }
  template <typename NextContactMetadataT = NextContactMetadata>
  void SetNextContactMetadata(NextContactMetadataT&& value) {
    m_nextContactMetadataHasBeenSet = true;
    m_nextContactMetadata = std::forward<NextContactMetadataT>(value);
  }
  template <typename NextContactMetadataT = NextContactMetadata>
  NextContactEntry& WithNextContactMetadata(NextContactMetadataT&& value) {
    SetNextContactMetadata(std::forward<NextContactMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  NextContactType m_type{NextContactType::NOT_SET};

  NextContactMetadata m_nextContactMetadata;
  bool m_typeHasBeenSet = false;
  bool m_nextContactMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
