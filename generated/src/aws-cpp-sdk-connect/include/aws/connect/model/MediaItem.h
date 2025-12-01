/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/MediaType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Contains information about a media asset used in a workspace.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MediaItem">AWS
 * API Reference</a></p>
 */
class MediaItem {
 public:
  AWS_CONNECT_API MediaItem() = default;
  AWS_CONNECT_API MediaItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API MediaItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of media. Valid values are: <code>IMAGE_LOGO_FAVICON</code> and
   * <code>IMAGE_LOGO_HORIZONTAL</code>.</p>
   */
  inline MediaType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(MediaType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline MediaItem& WithType(MediaType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source URL or data for the media asset.</p>
   */
  inline const Aws::String& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = Aws::String>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = Aws::String>
  MediaItem& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}
 private:
  MediaType m_type{MediaType::NOT_SET};
  bool m_typeHasBeenSet = false;

  Aws::String m_source;
  bool m_sourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
