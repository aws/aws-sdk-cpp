/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>Content that replaces the defaults generated for an API page.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/DisplayContentOverrides">AWS
 * API Reference</a></p>
 */
class DisplayContentOverrides {
 public:
  AWS_APIPORTAL_API DisplayContentOverrides() = default;
  AWS_APIPORTAL_API DisplayContentOverrides(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API DisplayContentOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The operation name shown as the page title, from 1 to 255 characters.</p>
   */
  inline const Aws::String& GetOperationName() const { return m_operationName; }
  inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
  template <typename OperationNameT = Aws::String>
  void SetOperationName(OperationNameT&& value) {
    m_operationNameHasBeenSet = true;
    m_operationName = std::forward<OperationNameT>(value);
  }
  template <typename OperationNameT = Aws::String>
  DisplayContentOverrides& WithOperationName(OperationNameT&& value) {
    SetOperationName(std::forward<OperationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The invoke URL shown on the page and used for Try-It and the portal's
   * allowed-domain list: http(s)://host[:port][/path], with no whitespace, quotes or
   * angle brackets. On this request member only, as ApiEndpoint is also returned in
   * responses.</p>
   */
  inline const Aws::String& GetApiUrl() const { return m_apiUrl; }
  inline bool ApiUrlHasBeenSet() const { return m_apiUrlHasBeenSet; }
  template <typename ApiUrlT = Aws::String>
  void SetApiUrl(ApiUrlT&& value) {
    m_apiUrlHasBeenSet = true;
    m_apiUrl = std::forward<ApiUrlT>(value);
  }
  template <typename ApiUrlT = Aws::String>
  DisplayContentOverrides& WithApiUrl(ApiUrlT&& value) {
    SetApiUrl(std::forward<ApiUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Markdown body of the page, from 1 to 32,768 characters.</p>
   */
  inline const Aws::String& GetBody() const { return m_body; }
  inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
  template <typename BodyT = Aws::String>
  void SetBody(BodyT&& value) {
    m_bodyHasBeenSet = true;
    m_body = std::forward<BodyT>(value);
  }
  template <typename BodyT = Aws::String>
  DisplayContentOverrides& WithBody(BodyT&& value) {
    SetBody(std::forward<BodyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_operationName;

  Aws::String m_apiUrl;

  Aws::String m_body;
  bool m_operationNameHasBeenSet = false;
  bool m_apiUrlHasBeenSet = false;
  bool m_bodyHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
