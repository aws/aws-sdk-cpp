/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FunctionConfig.h>
#include <aws/cloudfront/model/Tags.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudFront {
namespace Model {

/**
 */
class CreateConnectionFunction2020_05_31Request : public CloudFrontRequest {
 public:
  AWS_CLOUDFRONT_API CreateConnectionFunction2020_05_31Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateConnectionFunction"; }

  AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A name for the connection function.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateConnectionFunction2020_05_31Request& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
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
  CreateConnectionFunction2020_05_31Request& WithConnectionFunctionConfig(ConnectionFunctionConfigT&& value) {
    SetConnectionFunctionConfig(std::forward<ConnectionFunctionConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The code for the connection function.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetConnectionFunctionCode() const { return m_connectionFunctionCode; }
  inline bool ConnectionFunctionCodeHasBeenSet() const { return m_connectionFunctionCodeHasBeenSet; }
  template <typename ConnectionFunctionCodeT = Aws::Utils::CryptoBuffer>
  void SetConnectionFunctionCode(ConnectionFunctionCodeT&& value) {
    m_connectionFunctionCodeHasBeenSet = true;
    m_connectionFunctionCode = std::forward<ConnectionFunctionCodeT>(value);
  }
  template <typename ConnectionFunctionCodeT = Aws::Utils::CryptoBuffer>
  CreateConnectionFunction2020_05_31Request& WithConnectionFunctionCode(ConnectionFunctionCodeT&& value) {
    SetConnectionFunctionCode(std::forward<ConnectionFunctionCodeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Tags& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Tags>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Tags>
  CreateConnectionFunction2020_05_31Request& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  FunctionConfig m_connectionFunctionConfig;

  Aws::Utils::CryptoBuffer m_connectionFunctionCode{};

  Tags m_tags;
  bool m_nameHasBeenSet = false;
  bool m_connectionFunctionConfigHasBeenSet = false;
  bool m_connectionFunctionCodeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
