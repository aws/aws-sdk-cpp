/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocolRequest.h>
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>

namespace Aws {
namespace QueryProtocol {
namespace Model {

/**
 */
class XmlEmptyMapsRequest : public QueryProtocolRequest {
 public:
  AWS_QUERYPROTOCOL_API XmlEmptyMapsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "XmlEmptyMaps"; }

  AWS_QUERYPROTOCOL_API Aws::String SerializePayload() const override;

 protected:
  AWS_QUERYPROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
};

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
