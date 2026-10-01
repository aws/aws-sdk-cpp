/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-web/LambdaWebRequest.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

namespace Aws {
namespace LambdaWeb {
namespace Model {

/**
 */
class GetWebAccountSettingsRequest : public LambdaWebRequest {
 public:
  AWS_LAMBDAWEB_API GetWebAccountSettingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetWebAccountSettings"; }

  AWS_LAMBDAWEB_API Aws::String SerializePayload() const override;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
