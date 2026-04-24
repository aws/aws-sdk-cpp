/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ExtractedParameter.h>

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
 * <p>Cursor-based pagination configuration that defines how to handle pagination
 * using cursor tokens or next page identifiers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CursorConfiguration">AWS
 * API Reference</a></p>
 */
class CursorConfiguration {
 public:
  AWS_GLUE_API CursorConfiguration() = default;
  AWS_GLUE_API CursorConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API CursorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The parameter name or JSON path that contains the cursor or token for
   * retrieving the next page of results.</p>
   */
  inline const ExtractedParameter& GetNextPage() const { return m_nextPage; }
  inline bool NextPageHasBeenSet() const { return m_nextPageHasBeenSet; }
  template <typename NextPageT = ExtractedParameter>
  void SetNextPage(NextPageT&& value) {
    m_nextPageHasBeenSet = true;
    m_nextPage = std::forward<NextPageT>(value);
  }
  template <typename NextPageT = ExtractedParameter>
  CursorConfiguration& WithNextPage(NextPageT&& value) {
    SetNextPage(std::forward<NextPageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameter name used to specify the maximum number of results to return
   * per page.</p>
   */
  inline const ExtractedParameter& GetLimitParameter() const { return m_limitParameter; }
  inline bool LimitParameterHasBeenSet() const { return m_limitParameterHasBeenSet; }
  template <typename LimitParameterT = ExtractedParameter>
  void SetLimitParameter(LimitParameterT&& value) {
    m_limitParameterHasBeenSet = true;
    m_limitParameter = std::forward<LimitParameterT>(value);
  }
  template <typename LimitParameterT = ExtractedParameter>
  CursorConfiguration& WithLimitParameter(LimitParameterT&& value) {
    SetLimitParameter(std::forward<LimitParameterT>(value));
    return *this;
  }
  ///@}
 private:
  ExtractedParameter m_nextPage;

  ExtractedParameter m_limitParameter;
  bool m_nextPageHasBeenSet = false;
  bool m_limitParameterHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
