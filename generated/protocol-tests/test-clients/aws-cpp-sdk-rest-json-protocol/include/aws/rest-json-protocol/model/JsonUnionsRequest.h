/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/MyUnion.h>

#include <utility>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

/**
 * A shared structure that contains a single union member.<p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/UnionInputOutput">AWS
 * API Reference</a></p>
 */
class JsonUnionsRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API JsonUnionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "JsonUnions"; }

  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;
  AWS_RESTJSONPROTOCOL_API smithy::schema::OperationRequestContext GetSchemaSerdeContext() const override;
  AWS_RESTJSONPROTOCOL_API Aws::UniquePtr<smithy::schema::SerializableStruct> GetSchemaSerdeInput() const override;

  ///@{

  inline const MyUnion& GetContents() const { return m_contents; }
  inline bool ContentsHasBeenSet() const { return m_contentsHasBeenSet; }
  template <typename ContentsT = MyUnion>
  void SetContents(ContentsT&& value) {
    m_contentsHasBeenSet = true;
    m_contents = std::forward<ContentsT>(value);
  }
  template <typename ContentsT = MyUnion>
  JsonUnionsRequest& WithContents(ContentsT&& value) {
    SetContents(std::forward<ContentsT>(value));
    return *this;
  }
  ///@}
 private:
  MyUnion m_contents;
  bool m_contentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
