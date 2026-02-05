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
 * <p>Offset-based pagination configuration that defines how to handle pagination
 * using numeric offsets and limits.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/OffsetConfiguration">AWS
 * API Reference</a></p>
 */
class OffsetConfiguration {
 public:
  AWS_GLUE_API OffsetConfiguration() = default;
  AWS_GLUE_API OffsetConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API OffsetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The parameter name used to specify the starting position or offset for
   * retrieving results.</p>
   */
  inline const ExtractedParameter& GetOffsetParameter() const { return m_offsetParameter; }
  inline bool OffsetParameterHasBeenSet() const { return m_offsetParameterHasBeenSet; }
  template <typename OffsetParameterT = ExtractedParameter>
  void SetOffsetParameter(OffsetParameterT&& value) {
    m_offsetParameterHasBeenSet = true;
    m_offsetParameter = std::forward<OffsetParameterT>(value);
  }
  template <typename OffsetParameterT = ExtractedParameter>
  OffsetConfiguration& WithOffsetParameter(OffsetParameterT&& value) {
    SetOffsetParameter(std::forward<OffsetParameterT>(value));
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
  OffsetConfiguration& WithLimitParameter(LimitParameterT&& value) {
    SetLimitParameter(std::forward<LimitParameterT>(value));
    return *this;
  }
  ///@}
 private:
  ExtractedParameter m_offsetParameter;

  ExtractedParameter m_limitParameter;
  bool m_offsetParameterHasBeenSet = false;
  bool m_limitParameterHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
