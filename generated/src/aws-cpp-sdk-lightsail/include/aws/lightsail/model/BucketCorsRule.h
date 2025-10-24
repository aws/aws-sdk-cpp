/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Describes a cross-origin resource sharing (CORS) rule for a Lightsail bucket.
 * CORS rules specify which origins are allowed to access the bucket, which HTTP
 * methods are allowed, and other access control information. For more information,
 * see <a
 * href="https://docs.aws.amazon.com/lightsail/latest/userguide/configure-cors.html">Configuring
 * cross-origin resource sharing (CORS)</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/BucketCorsRule">AWS
 * API Reference</a></p>
 */
class BucketCorsRule {
 public:
  AWS_LIGHTSAIL_API BucketCorsRule() = default;
  AWS_LIGHTSAIL_API BucketCorsRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API BucketCorsRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique identifier for the CORS rule. The ID value can be up to 255
   * characters long. The IDs help you find a rule in the configuration.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  BucketCorsRule& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP methods that are allowed when accessing the bucket from the
   * specified origin. Each CORS rule must identify at least one origin and one
   * method.</p> <p>You can use the following HTTP methods:</p> <ul> <li> <p>
   * <code>GET</code> - Retrieves data from the server, such as downloading files or
   * viewing content.</p> </li> <li> <p> <code>PUT</code> - Uploads or replaces data
   * on the server, such as uploading new files.</p> </li> <li> <p> <code>POST</code>
   * - Sends data to the server for processing, such as submitting forms or creating
   * new resources.</p> </li> <li> <p> <code>DELETE</code> - Removes data from the
   * server, such as deleting files or resources.</p> </li> <li> <p>
   * <code>HEAD</code> - Retrieves only the headers from the server without the
   * actual content, useful for checking if a resource exists.</p> </li> </ul>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedMethods() const { return m_allowedMethods; }
  inline bool AllowedMethodsHasBeenSet() const { return m_allowedMethodsHasBeenSet; }
  template <typename AllowedMethodsT = Aws::Vector<Aws::String>>
  void SetAllowedMethods(AllowedMethodsT&& value) {
    m_allowedMethodsHasBeenSet = true;
    m_allowedMethods = std::forward<AllowedMethodsT>(value);
  }
  template <typename AllowedMethodsT = Aws::Vector<Aws::String>>
  BucketCorsRule& WithAllowedMethods(AllowedMethodsT&& value) {
    SetAllowedMethods(std::forward<AllowedMethodsT>(value));
    return *this;
  }
  template <typename AllowedMethodsT = Aws::String>
  BucketCorsRule& AddAllowedMethods(AllowedMethodsT&& value) {
    m_allowedMethodsHasBeenSet = true;
    m_allowedMethods.emplace_back(std::forward<AllowedMethodsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more origins you want customers to be able to access the bucket from.
   * Each CORS rule must identify at least one origin and one method.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedOrigins() const { return m_allowedOrigins; }
  inline bool AllowedOriginsHasBeenSet() const { return m_allowedOriginsHasBeenSet; }
  template <typename AllowedOriginsT = Aws::Vector<Aws::String>>
  void SetAllowedOrigins(AllowedOriginsT&& value) {
    m_allowedOriginsHasBeenSet = true;
    m_allowedOrigins = std::forward<AllowedOriginsT>(value);
  }
  template <typename AllowedOriginsT = Aws::Vector<Aws::String>>
  BucketCorsRule& WithAllowedOrigins(AllowedOriginsT&& value) {
    SetAllowedOrigins(std::forward<AllowedOriginsT>(value));
    return *this;
  }
  template <typename AllowedOriginsT = Aws::String>
  BucketCorsRule& AddAllowedOrigins(AllowedOriginsT&& value) {
    m_allowedOriginsHasBeenSet = true;
    m_allowedOrigins.emplace_back(std::forward<AllowedOriginsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Headers that are specified in the <code>Access-Control-Request-Headers</code>
   * header. These headers are allowed in a preflight <code>OPTIONS</code> request.
   * In response to any preflight <code>OPTIONS</code> request, Amazon S3 returns any
   * requested headers that are allowed.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedHeaders() const { return m_allowedHeaders; }
  inline bool AllowedHeadersHasBeenSet() const { return m_allowedHeadersHasBeenSet; }
  template <typename AllowedHeadersT = Aws::Vector<Aws::String>>
  void SetAllowedHeaders(AllowedHeadersT&& value) {
    m_allowedHeadersHasBeenSet = true;
    m_allowedHeaders = std::forward<AllowedHeadersT>(value);
  }
  template <typename AllowedHeadersT = Aws::Vector<Aws::String>>
  BucketCorsRule& WithAllowedHeaders(AllowedHeadersT&& value) {
    SetAllowedHeaders(std::forward<AllowedHeadersT>(value));
    return *this;
  }
  template <typename AllowedHeadersT = Aws::String>
  BucketCorsRule& AddAllowedHeaders(AllowedHeadersT&& value) {
    m_allowedHeadersHasBeenSet = true;
    m_allowedHeaders.emplace_back(std::forward<AllowedHeadersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more headers in the response that you want customers to be able to
   * access from their applications (for example, from a JavaScript
   * <code>XMLHttpRequest</code> object).</p>
   */
  inline const Aws::Vector<Aws::String>& GetExposeHeaders() const { return m_exposeHeaders; }
  inline bool ExposeHeadersHasBeenSet() const { return m_exposeHeadersHasBeenSet; }
  template <typename ExposeHeadersT = Aws::Vector<Aws::String>>
  void SetExposeHeaders(ExposeHeadersT&& value) {
    m_exposeHeadersHasBeenSet = true;
    m_exposeHeaders = std::forward<ExposeHeadersT>(value);
  }
  template <typename ExposeHeadersT = Aws::Vector<Aws::String>>
  BucketCorsRule& WithExposeHeaders(ExposeHeadersT&& value) {
    SetExposeHeaders(std::forward<ExposeHeadersT>(value));
    return *this;
  }
  template <typename ExposeHeadersT = Aws::String>
  BucketCorsRule& AddExposeHeaders(ExposeHeadersT&& value) {
    m_exposeHeadersHasBeenSet = true;
    m_exposeHeaders.emplace_back(std::forward<ExposeHeadersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time in seconds that your browser is to cache the preflight response for
   * the specified resource. A CORS rule can have only one <code>maxAgeSeconds</code>
   * element.</p>
   */
  inline int GetMaxAgeSeconds() const { return m_maxAgeSeconds; }
  inline bool MaxAgeSecondsHasBeenSet() const { return m_maxAgeSecondsHasBeenSet; }
  inline void SetMaxAgeSeconds(int value) {
    m_maxAgeSecondsHasBeenSet = true;
    m_maxAgeSeconds = value;
  }
  inline BucketCorsRule& WithMaxAgeSeconds(int value) {
    SetMaxAgeSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::Vector<Aws::String> m_allowedMethods;
  bool m_allowedMethodsHasBeenSet = false;

  Aws::Vector<Aws::String> m_allowedOrigins;
  bool m_allowedOriginsHasBeenSet = false;

  Aws::Vector<Aws::String> m_allowedHeaders;
  bool m_allowedHeadersHasBeenSet = false;

  Aws::Vector<Aws::String> m_exposeHeaders;
  bool m_exposeHeadersHasBeenSet = false;

  int m_maxAgeSeconds{0};
  bool m_maxAgeSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
