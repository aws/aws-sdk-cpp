/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/lambda/Lambda_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Lambda {
namespace Model {

/**
 */
class GetDurableExecutionRequest : public LambdaRequest {
 public:
  AWS_LAMBDA_API GetDurableExecutionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDurableExecution"; }

  AWS_LAMBDA_API Aws::String SerializePayload() const override;

  AWS_LAMBDA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the durable execution.</p>
   */
  inline const Aws::String& GetDurableExecutionArn() const { return m_durableExecutionArn; }
  inline bool DurableExecutionArnHasBeenSet() const { return m_durableExecutionArnHasBeenSet; }
  template <typename DurableExecutionArnT = Aws::String>
  void SetDurableExecutionArn(DurableExecutionArnT&& value) {
    m_durableExecutionArnHasBeenSet = true;
    m_durableExecutionArn = std::forward<DurableExecutionArnT>(value);
  }
  template <typename DurableExecutionArnT = Aws::String>
  GetDurableExecutionRequest& WithDurableExecutionArn(DurableExecutionArnT&& value) {
    SetDurableExecutionArn(std::forward<DurableExecutionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to include execution data such as input payload, result,
   * and error information in the response. Set to <code>false</code> for a more
   * compact response that includes only execution metadata. The default value is set
   * to <code>true</code>.</p>
   */
  inline bool GetIncludeExecutionData() const { return m_includeExecutionData; }
  inline bool IncludeExecutionDataHasBeenSet() const { return m_includeExecutionDataHasBeenSet; }
  inline void SetIncludeExecutionData(bool value) {
    m_includeExecutionDataHasBeenSet = true;
    m_includeExecutionData = value;
  }
  inline GetDurableExecutionRequest& WithIncludeExecutionData(bool value) {
    SetIncludeExecutionData(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_durableExecutionArn;

  bool m_includeExecutionData{false};
  bool m_durableExecutionArnHasBeenSet = false;
  bool m_includeExecutionDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
