/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FunctionStage.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace CloudFront {
namespace Model {

/**
 */
class GetConnectionFunction2020_05_31Request : public CloudFrontRequest {
 public:
  AWS_CLOUDFRONT_API GetConnectionFunction2020_05_31Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetConnectionFunction"; }

  AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

  AWS_CLOUDFRONT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The connection function's identifier.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  GetConnectionFunction2020_05_31Request& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection function's stage.</p>
   */
  inline FunctionStage GetStage() const { return m_stage; }
  inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
  inline void SetStage(FunctionStage value) {
    m_stageHasBeenSet = true;
    m_stage = value;
  }
  inline GetConnectionFunction2020_05_31Request& WithStage(FunctionStage value) {
    SetStage(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;
  bool m_identifierHasBeenSet = false;

  FunctionStage m_stage{FunctionStage::NOT_SET};
  bool m_stageHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
