/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVSRequest.h>
#include <aws/evs/EVS_EXPORTS.h>

namespace Aws {
namespace EVS {
namespace Model {

/**
 * <p>The request for the GetAccountSettings operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/GetAccountSettingsRequest">AWS
 * API Reference</a></p>
 */
class GetAccountSettingsRequest : public EVSRequest {
 public:
  AWS_EVS_API GetAccountSettingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAccountSettings"; }

  AWS_EVS_API Aws::String SerializePayload() const override;

  AWS_EVS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;
};

}  // namespace Model
}  // namespace EVS
}  // namespace Aws
