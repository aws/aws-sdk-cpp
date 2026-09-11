/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lightsail {
namespace Model {

/**
 * <p>Describes a custom error response for a Lightsail distribution. A custom
 * error response specifies the page that the distribution returns to the viewer.
 * It also specifies the HTTP status code that the distribution sends when the
 * origin responds with a given HTTP error code.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DistributionCustomErrorResponse">AWS
 * API Reference</a></p>
 */
class DistributionCustomErrorResponse {
 public:
  AWS_LIGHTSAIL_API DistributionCustomErrorResponse() = default;
  AWS_LIGHTSAIL_API DistributionCustomErrorResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API DistributionCustomErrorResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTP error code from the origin that triggers the custom error response
   * (for example, <code>403</code> or <code>404</code>).</p>
   */
  inline int GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(int value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline DistributionCustomErrorResponse& WithErrorCode(int value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP status code that the distribution returns to the viewer for the
   * custom error response.</p>
   */
  inline const Aws::String& GetResponseCode() const { return m_responseCode; }
  inline bool ResponseCodeHasBeenSet() const { return m_responseCodeHasBeenSet; }
  template <typename ResponseCodeT = Aws::String>
  void SetResponseCode(ResponseCodeT&& value) {
    m_responseCodeHasBeenSet = true;
    m_responseCode = std::forward<ResponseCodeT>(value);
  }
  template <typename ResponseCodeT = Aws::String>
  DistributionCustomErrorResponse& WithResponseCode(ResponseCodeT&& value) {
    SetResponseCode(std::forward<ResponseCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path to the custom error page that the distribution returns to the viewer
   * (for example, <code>/404.html</code>). The path must begin with a forward slash
   * (<code>/</code>) and reference an object that is available from the origin.</p>
   */
  inline const Aws::String& GetResponsePagePath() const { return m_responsePagePath; }
  inline bool ResponsePagePathHasBeenSet() const { return m_responsePagePathHasBeenSet; }
  template <typename ResponsePagePathT = Aws::String>
  void SetResponsePagePath(ResponsePagePathT&& value) {
    m_responsePagePathHasBeenSet = true;
    m_responsePagePath = std::forward<ResponsePagePathT>(value);
  }
  template <typename ResponsePagePathT = Aws::String>
  DistributionCustomErrorResponse& WithResponsePagePath(ResponsePagePathT&& value) {
    SetResponsePagePath(std::forward<ResponsePagePathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum time, in seconds, that the distribution caches the custom error
   * response before requesting the object again from the origin. If you don't
   * specify a value, the default is <code>10</code> seconds.</p>
   */
  inline long long GetErrorCachingMinTTL() const { return m_errorCachingMinTTL; }
  inline bool ErrorCachingMinTTLHasBeenSet() const { return m_errorCachingMinTTLHasBeenSet; }
  inline void SetErrorCachingMinTTL(long long value) {
    m_errorCachingMinTTLHasBeenSet = true;
    m_errorCachingMinTTL = value;
  }
  inline DistributionCustomErrorResponse& WithErrorCachingMinTTL(long long value) {
    SetErrorCachingMinTTL(value);
    return *this;
  }
  ///@}
 private:
  int m_errorCode{0};

  Aws::String m_responseCode;

  Aws::String m_responsePagePath;

  long long m_errorCachingMinTTL{0};
  bool m_errorCodeHasBeenSet = false;
  bool m_responseCodeHasBeenSet = false;
  bool m_responsePagePathHasBeenSet = false;
  bool m_errorCachingMinTTLHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
