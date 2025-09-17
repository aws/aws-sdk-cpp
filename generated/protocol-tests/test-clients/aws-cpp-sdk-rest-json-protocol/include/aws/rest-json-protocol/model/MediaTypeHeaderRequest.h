/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

/**
 */
class MediaTypeHeaderRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API MediaTypeHeaderRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "MediaTypeHeader"; }

  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::String& GetJson() const { return m_json; }
  inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }
  template <typename JsonT = Aws::String>
  void SetJson(JsonT&& value) {
    m_jsonHasBeenSet = true;
    m_json = std::forward<JsonT>(value);
  }
  template <typename JsonT = Aws::String>
  MediaTypeHeaderRequest& WithJson(JsonT&& value) {
    SetJson(std::forward<JsonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_json;
  bool m_jsonHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
