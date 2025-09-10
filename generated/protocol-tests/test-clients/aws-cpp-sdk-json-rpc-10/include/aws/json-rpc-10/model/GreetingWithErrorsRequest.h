/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/json-rpc-10/JSONRPC10Request.h>
#include <aws/json-rpc-10/JSONRPC10_EXPORTS.h>

#include <utility>

namespace Aws {
namespace JSONRPC10 {
namespace Model {

/**
 */
class GreetingWithErrorsRequest : public JSONRPC10Request {
 public:
  AWS_JSONRPC10_API GreetingWithErrorsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GreetingWithErrors"; }

  AWS_JSONRPC10_API Aws::String SerializePayload() const override;

  AWS_JSONRPC10_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::String& GetGreeting() const { return m_greeting; }
  inline bool GreetingHasBeenSet() const { return m_greetingHasBeenSet; }
  template <typename GreetingT = Aws::String>
  void SetGreeting(GreetingT&& value) {
    m_greetingHasBeenSet = true;
    m_greeting = std::forward<GreetingT>(value);
  }
  template <typename GreetingT = Aws::String>
  GreetingWithErrorsRequest& WithGreeting(GreetingT&& value) {
    SetGreeting(std::forward<GreetingT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_greeting;
  bool m_greetingHasBeenSet = false;
};

}  // namespace Model
}  // namespace JSONRPC10
}  // namespace Aws
