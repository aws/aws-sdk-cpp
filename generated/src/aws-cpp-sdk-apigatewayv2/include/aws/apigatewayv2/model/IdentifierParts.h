/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApiGatewayV2 {
namespace Model {

/**
 * <p>The identifier parts of a product REST endpoint.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/IdentifierParts">AWS
 * API Reference</a></p>
 */
class IdentifierParts {
 public:
  AWS_APIGATEWAYV2_API IdentifierParts() = default;
  AWS_APIGATEWAYV2_API IdentifierParts(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API IdentifierParts& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The method of the product REST endpoint.</p>
   */
  inline const Aws::String& GetMethod() const { return m_method; }
  inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
  template <typename MethodT = Aws::String>
  void SetMethod(MethodT&& value) {
    m_methodHasBeenSet = true;
    m_method = std::forward<MethodT>(value);
  }
  template <typename MethodT = Aws::String>
  IdentifierParts& WithMethod(MethodT&& value) {
    SetMethod(std::forward<MethodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path of the product REST endpoint.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  IdentifierParts& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The REST API ID of the product REST endpoint.</p>
   */
  inline const Aws::String& GetRestApiId() const { return m_restApiId; }
  inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
  template <typename RestApiIdT = Aws::String>
  void SetRestApiId(RestApiIdT&& value) {
    m_restApiIdHasBeenSet = true;
    m_restApiId = std::forward<RestApiIdT>(value);
  }
  template <typename RestApiIdT = Aws::String>
  IdentifierParts& WithRestApiId(RestApiIdT&& value) {
    SetRestApiId(std::forward<RestApiIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The stage of the product REST endpoint.</p>
   */
  inline const Aws::String& GetStage() const { return m_stage; }
  inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
  template <typename StageT = Aws::String>
  void SetStage(StageT&& value) {
    m_stageHasBeenSet = true;
    m_stage = std::forward<StageT>(value);
  }
  template <typename StageT = Aws::String>
  IdentifierParts& WithStage(StageT&& value) {
    SetStage(std::forward<StageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_method;
  bool m_methodHasBeenSet = false;

  Aws::String m_path;
  bool m_pathHasBeenSet = false;

  Aws::String m_restApiId;
  bool m_restApiIdHasBeenSet = false;

  Aws::String m_stage;
  bool m_stageHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
