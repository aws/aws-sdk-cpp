/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FunctionStage.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudFront {
namespace Model {

/**
 */
class TestConnectionFunction2020_05_31Request : public CloudFrontRequest {
 public:
  AWS_CLOUDFRONT_API TestConnectionFunction2020_05_31Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "TestConnectionFunction"; }

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
  TestConnectionFunction2020_05_31Request& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current version (<code>ETag</code> value) of the connection function.</p>
   */
  inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
  inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
  template <typename IfMatchT = Aws::String>
  void SetIfMatch(IfMatchT&& value) {
    m_ifMatchHasBeenSet = true;
    m_ifMatch = std::forward<IfMatchT>(value);
  }
  template <typename IfMatchT = Aws::String>
  TestConnectionFunction2020_05_31Request& WithIfMatch(IfMatchT&& value) {
    SetIfMatch(std::forward<IfMatchT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection function stage.</p>
   */
  inline FunctionStage GetStage() const { return m_stage; }
  inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
  inline void SetStage(FunctionStage value) {
    m_stageHasBeenSet = true;
    m_stage = value;
  }
  inline TestConnectionFunction2020_05_31Request& WithStage(FunctionStage value) {
    SetStage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection object.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetConnectionObject() const { return m_connectionObject; }
  inline bool ConnectionObjectHasBeenSet() const { return m_connectionObjectHasBeenSet; }
  template <typename ConnectionObjectT = Aws::Utils::CryptoBuffer>
  void SetConnectionObject(ConnectionObjectT&& value) {
    m_connectionObjectHasBeenSet = true;
    m_connectionObject = std::forward<ConnectionObjectT>(value);
  }
  template <typename ConnectionObjectT = Aws::Utils::CryptoBuffer>
  TestConnectionFunction2020_05_31Request& WithConnectionObject(ConnectionObjectT&& value) {
    SetConnectionObject(std::forward<ConnectionObjectT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_ifMatch;
  bool m_ifMatchHasBeenSet = false;

  FunctionStage m_stage{FunctionStage::NOT_SET};
  bool m_stageHasBeenSet = false;

  Aws::Utils::CryptoBuffer m_connectionObject{};
  bool m_connectionObjectHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
