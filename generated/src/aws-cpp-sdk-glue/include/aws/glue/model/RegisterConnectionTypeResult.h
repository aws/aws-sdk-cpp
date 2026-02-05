/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {
/**
 * <p>Contains the Amazon Resource Name (ARN) of the newly registered connection
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RegisterConnectionTypeResponse">AWS
 * API Reference</a></p>
 */
class RegisterConnectionTypeResult {
 public:
  AWS_GLUE_API RegisterConnectionTypeResult() = default;
  AWS_GLUE_API RegisterConnectionTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API RegisterConnectionTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the registered connection type. This unique
   * identifier can be used to reference the connection type in other Glue
   * operations.</p>
   */
  inline const Aws::String& GetConnectionTypeArn() const { return m_connectionTypeArn; }
  template <typename ConnectionTypeArnT = Aws::String>
  void SetConnectionTypeArn(ConnectionTypeArnT&& value) {
    m_connectionTypeArnHasBeenSet = true;
    m_connectionTypeArn = std::forward<ConnectionTypeArnT>(value);
  }
  template <typename ConnectionTypeArnT = Aws::String>
  RegisterConnectionTypeResult& WithConnectionTypeArn(ConnectionTypeArnT&& value) {
    SetConnectionTypeArn(std::forward<ConnectionTypeArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  RegisterConnectionTypeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectionTypeArn;

  Aws::String m_requestId;
  bool m_connectionTypeArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
