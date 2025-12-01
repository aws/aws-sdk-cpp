/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Contains information about a resource that was successfully associated with a
 * workspace in a batch operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SuccessfulBatchAssociationSummary">AWS
 * API Reference</a></p>
 */
class SuccessfulBatchAssociationSummary {
 public:
  AWS_CONNECT_API SuccessfulBatchAssociationSummary() = default;
  AWS_CONNECT_API SuccessfulBatchAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API SuccessfulBatchAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource that was successfully
   * associated.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  SuccessfulBatchAssociationSummary& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;
  bool m_resourceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
