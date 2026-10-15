/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

/**
 */
class HttpStringPayloadRequest : public StreamingRestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API HttpStringPayloadRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "HttpStringPayload"; }
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
