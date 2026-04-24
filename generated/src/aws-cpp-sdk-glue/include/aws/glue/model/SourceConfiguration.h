/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ConnectorProperty.h>
#include <aws/glue/model/HTTPMethod.h>
#include <aws/glue/model/PaginationConfiguration.h>
#include <aws/glue/model/ResponseConfiguration.h>

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
 * <p>Configuration that defines how to make requests to endpoints, including
 * request methods, paths, parameters, and response handling.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SourceConfiguration">AWS
 * API Reference</a></p>
 */
class SourceConfiguration {
 public:
  AWS_GLUE_API SourceConfiguration() = default;
  AWS_GLUE_API SourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API SourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTP method to use for requests to this endpoint, such as GET, POST.</p>
   */
  inline HTTPMethod GetRequestMethod() const { return m_requestMethod; }
  inline bool RequestMethodHasBeenSet() const { return m_requestMethodHasBeenSet; }
  inline void SetRequestMethod(HTTPMethod value) {
    m_requestMethodHasBeenSet = true;
    m_requestMethod = value;
  }
  inline SourceConfiguration& WithRequestMethod(HTTPMethod value) {
    SetRequestMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL path for the REST endpoint, which may include parameter placeholders
   * that will be replaced with actual values during requests.</p>
   */
  inline const Aws::String& GetRequestPath() const { return m_requestPath; }
  inline bool RequestPathHasBeenSet() const { return m_requestPathHasBeenSet; }
  template <typename RequestPathT = Aws::String>
  void SetRequestPath(RequestPathT&& value) {
    m_requestPathHasBeenSet = true;
    m_requestPath = std::forward<RequestPathT>(value);
  }
  template <typename RequestPathT = Aws::String>
  SourceConfiguration& WithRequestPath(RequestPathT&& value) {
    SetRequestPath(std::forward<RequestPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for request parameters that should be included in API calls,
   * such as query parameters, headers, or body content.</p>
   */
  inline const Aws::Vector<ConnectorProperty>& GetRequestParameters() const { return m_requestParameters; }
  inline bool RequestParametersHasBeenSet() const { return m_requestParametersHasBeenSet; }
  template <typename RequestParametersT = Aws::Vector<ConnectorProperty>>
  void SetRequestParameters(RequestParametersT&& value) {
    m_requestParametersHasBeenSet = true;
    m_requestParameters = std::forward<RequestParametersT>(value);
  }
  template <typename RequestParametersT = Aws::Vector<ConnectorProperty>>
  SourceConfiguration& WithRequestParameters(RequestParametersT&& value) {
    SetRequestParameters(std::forward<RequestParametersT>(value));
    return *this;
  }
  template <typename RequestParametersT = ConnectorProperty>
  SourceConfiguration& AddRequestParameters(RequestParametersT&& value) {
    m_requestParametersHasBeenSet = true;
    m_requestParameters.emplace_back(std::forward<RequestParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration that defines how to parse and extract data from API responses,
   * including success and error handling.</p>
   */
  inline const ResponseConfiguration& GetResponseConfiguration() const { return m_responseConfiguration; }
  inline bool ResponseConfigurationHasBeenSet() const { return m_responseConfigurationHasBeenSet; }
  template <typename ResponseConfigurationT = ResponseConfiguration>
  void SetResponseConfiguration(ResponseConfigurationT&& value) {
    m_responseConfigurationHasBeenSet = true;
    m_responseConfiguration = std::forward<ResponseConfigurationT>(value);
  }
  template <typename ResponseConfigurationT = ResponseConfiguration>
  SourceConfiguration& WithResponseConfiguration(ResponseConfigurationT&& value) {
    SetResponseConfiguration(std::forward<ResponseConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for handling paginated responses from the REST API, supporting
   * both cursor-based and offset-based pagination strategies.</p>
   */
  inline const PaginationConfiguration& GetPaginationConfiguration() const { return m_paginationConfiguration; }
  inline bool PaginationConfigurationHasBeenSet() const { return m_paginationConfigurationHasBeenSet; }
  template <typename PaginationConfigurationT = PaginationConfiguration>
  void SetPaginationConfiguration(PaginationConfigurationT&& value) {
    m_paginationConfigurationHasBeenSet = true;
    m_paginationConfiguration = std::forward<PaginationConfigurationT>(value);
  }
  template <typename PaginationConfigurationT = PaginationConfiguration>
  SourceConfiguration& WithPaginationConfiguration(PaginationConfigurationT&& value) {
    SetPaginationConfiguration(std::forward<PaginationConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  HTTPMethod m_requestMethod{HTTPMethod::NOT_SET};

  Aws::String m_requestPath;

  Aws::Vector<ConnectorProperty> m_requestParameters;

  ResponseConfiguration m_responseConfiguration;

  PaginationConfiguration m_paginationConfiguration;
  bool m_requestMethodHasBeenSet = false;
  bool m_requestPathHasBeenSet = false;
  bool m_requestParametersHasBeenSet = false;
  bool m_responseConfigurationHasBeenSet = false;
  bool m_paginationConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
