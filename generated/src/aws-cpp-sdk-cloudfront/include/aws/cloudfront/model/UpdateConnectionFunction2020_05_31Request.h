/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FunctionConfig.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudFront {
namespace Model {

/**
 */
class UpdateConnectionFunction2020_05_31Request : public CloudFrontRequest {
 public:
  AWS_CLOUDFRONT_API UpdateConnectionFunction2020_05_31Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateConnectionFunction"; }

  AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

  AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The connection function ID.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  UpdateConnectionFunction2020_05_31Request& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current version (<code>ETag</code> value) of the connection function you
   * are updating.</p>
   */
  inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
  inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
  template <typename IfMatchT = Aws::String>
  void SetIfMatch(IfMatchT&& value) {
    m_ifMatchHasBeenSet = true;
    m_ifMatch = std::forward<IfMatchT>(value);
  }
  template <typename IfMatchT = Aws::String>
  UpdateConnectionFunction2020_05_31Request& WithIfMatch(IfMatchT&& value) {
    SetIfMatch(std::forward<IfMatchT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const FunctionConfig& GetConnectionFunctionConfig() const { return m_connectionFunctionConfig; }
  inline bool ConnectionFunctionConfigHasBeenSet() const { return m_connectionFunctionConfigHasBeenSet; }
  template <typename ConnectionFunctionConfigT = FunctionConfig>
  void SetConnectionFunctionConfig(ConnectionFunctionConfigT&& value) {
    m_connectionFunctionConfigHasBeenSet = true;
    m_connectionFunctionConfig = std::forward<ConnectionFunctionConfigT>(value);
  }
  template <typename ConnectionFunctionConfigT = FunctionConfig>
  UpdateConnectionFunction2020_05_31Request& WithConnectionFunctionConfig(ConnectionFunctionConfigT&& value) {
    SetConnectionFunctionConfig(std::forward<ConnectionFunctionConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection function code.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetConnectionFunctionCode() const { return m_connectionFunctionCode; }
  inline bool ConnectionFunctionCodeHasBeenSet() const { return m_connectionFunctionCodeHasBeenSet; }
  template <typename ConnectionFunctionCodeT = Aws::Utils::CryptoBuffer>
  void SetConnectionFunctionCode(ConnectionFunctionCodeT&& value) {
    m_connectionFunctionCodeHasBeenSet = true;
    m_connectionFunctionCode = std::forward<ConnectionFunctionCodeT>(value);
  }
  template <typename ConnectionFunctionCodeT = Aws::Utils::CryptoBuffer>
  UpdateConnectionFunction2020_05_31Request& WithConnectionFunctionCode(ConnectionFunctionCodeT&& value) {
    SetConnectionFunctionCode(std::forward<ConnectionFunctionCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_ifMatch;
  bool m_ifMatchHasBeenSet = false;

  FunctionConfig m_connectionFunctionConfig;
  bool m_connectionFunctionConfigHasBeenSet = false;

  Aws::Utils::CryptoBuffer m_connectionFunctionCode{};
  bool m_connectionFunctionCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
