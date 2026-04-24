/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/CursorConfiguration.h>
#include <aws/glue/model/OffsetConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Configuration that defines how to handle paginated responses from REST APIs,
 * supporting different pagination strategies used by various
 * services.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PaginationConfiguration">AWS
 * API Reference</a></p>
 */
class PaginationConfiguration {
 public:
  AWS_GLUE_API PaginationConfiguration() = default;
  AWS_GLUE_API PaginationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API PaginationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for cursor-based pagination, where the API provides a cursor or
   * token to retrieve the next page of results.</p>
   */
  inline const CursorConfiguration& GetCursorConfiguration() const { return m_cursorConfiguration; }
  inline bool CursorConfigurationHasBeenSet() const { return m_cursorConfigurationHasBeenSet; }
  template <typename CursorConfigurationT = CursorConfiguration>
  void SetCursorConfiguration(CursorConfigurationT&& value) {
    m_cursorConfigurationHasBeenSet = true;
    m_cursorConfiguration = std::forward<CursorConfigurationT>(value);
  }
  template <typename CursorConfigurationT = CursorConfiguration>
  PaginationConfiguration& WithCursorConfiguration(CursorConfigurationT&& value) {
    SetCursorConfiguration(std::forward<CursorConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for offset-based pagination, where the API uses numeric offsets
   * and limits to control which results are returned.</p>
   */
  inline const OffsetConfiguration& GetOffsetConfiguration() const { return m_offsetConfiguration; }
  inline bool OffsetConfigurationHasBeenSet() const { return m_offsetConfigurationHasBeenSet; }
  template <typename OffsetConfigurationT = OffsetConfiguration>
  void SetOffsetConfiguration(OffsetConfigurationT&& value) {
    m_offsetConfigurationHasBeenSet = true;
    m_offsetConfiguration = std::forward<OffsetConfigurationT>(value);
  }
  template <typename OffsetConfigurationT = OffsetConfiguration>
  PaginationConfiguration& WithOffsetConfiguration(OffsetConfigurationT&& value) {
    SetOffsetConfiguration(std::forward<OffsetConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  CursorConfiguration m_cursorConfiguration;

  OffsetConfiguration m_offsetConfiguration;
  bool m_cursorConfigurationHasBeenSet = false;
  bool m_offsetConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
